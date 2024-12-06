#include "stdafx.h"
#include "helper.hpp"

#include "SDK/Engine_classes.hpp"
#include "SDK/UMG_classes.hpp"
#include "SDK/movieUMG_classes.hpp"
#include "SDK/Caution_P_classes.hpp"
#include "SDK/UELogo_P_classes.hpp"
#include "SDK/CRILogo_P_classes.hpp"
#include "SDK/AutoSaveCaution_P_classes.hpp"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <inipp/inipp.h>
#include <safetyhook.hpp>

#define spdlog_confparse(var) spdlog::info("Config Parse: {}: {}", #var, var)

HMODULE exeModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Fix details
std::string sFixName = "MDARainCodePlusFix";
std::string sFixVersion = "0.0.1";
std::filesystem::path sFixPath;

// Ini
inipp::Ini<char> ini;
std::string sConfigFile = sFixName + ".ini";

// Logger
std::shared_ptr<spdlog::logger> logger;
std::string sLogFile = sFixName + ".log";
std::filesystem::path sExePath;
std::string sExeName;

// Aspect ratio / FOV / HUD
std::pair DesktopDimensions = { 0,0 };
const float fPi = 3.1415926535f;
const float fNativeAspect = 1.777777791f;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDWidthOffset;
float fHUDHeight;
float fHUDHeightOffset;

// Ini variables
bool bFixAspect;
bool bFixHUD;
bool bCenterHUD;
bool bEnableConsole;
bool bSkipLogos;

// Variables
int iCurrentResX;
int iCurrentResY;
int iOldResX;
int iOldResY;
SDK::UEngine* Engine = nullptr;
SDK::UInputSettings* InputSettings = nullptr;
bool bSkippedLogosMovie = false;

void Logging()
{
    // Get path to DLL
    WCHAR dllPath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, dllPath, MAX_PATH);
    sFixPath = dllPath;
    sFixPath = sFixPath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(exeModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // Spdlog initialisation
    try {
        logger = spdlog::basic_logger_st(sFixName.c_str(), sExePath.string() + sLogFile, true);
        spdlog::set_default_logger(logger);
        spdlog::flush_on(spdlog::level::debug);

        spdlog::info("----------");
        spdlog::info("{:s} v{:s} loaded.", sFixName.c_str(), sFixVersion.c_str());
        spdlog::info("----------");
        spdlog::info("Log file: {}", sFixPath.string() + sLogFile);
        spdlog::info("----------");
        spdlog::info("Module Name: {0:s}", sExeName.c_str());
        spdlog::info("Module Path: {0:s}", sExePath.string());
        spdlog::info("Module Address: 0x{0:x}", (uintptr_t)exeModule);
        spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(exeModule));
        spdlog::info("----------");
    }
    catch (const spdlog::spdlog_ex& ex) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        FreeLibraryAndExitThread(thisModule, 1);
    }  
}

void Configuration()
{
    // Inipp initialisation
    std::ifstream iniFile(sFixPath.string() + sConfigFile);
    if (!iniFile) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVersion.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sFixPath.string().c_str() << std::endl;
        spdlog::shutdown();
        FreeLibraryAndExitThread(thisModule, 1);
    }
    else {
        spdlog::info("Config file: {}", sFixPath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Parse config
    ini.strip_trailing_comments();
    spdlog::info("----------");

    // Load settings from ini
    inipp::get_value(ini.sections["Skip Logos"], "Enabled", bSkipLogos);
    inipp::get_value(ini.sections["Developer Console"], "Enabled", bEnableConsole);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bFixHUD);
    inipp::get_value(ini.sections["Fix HUD"], "Centered", bCenterHUD);

    // Log ini parse
    spdlog_confparse(bSkipLogos);
    spdlog_confparse(bEnableConsole);
    spdlog_confparse(bFixAspect);
    spdlog_confparse(bFixHUD);
    spdlog_confparse(bCenterHUD);
    spdlog::info("----------");
}

void CalculateAspectRatio(bool bLog)
{
    if (iCurrentResX <= 0 || iCurrentResY <= 0)
        return;

    if (iCurrentResX == 0 || iCurrentResY == 0) {
        spdlog::error("Current Resolution: Resolution invalid, using desktop resolution instead.");
        iCurrentResX = DesktopDimensions.first;
        iCurrentResY = DesktopDimensions.second;
    }

    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // HUD 
    fHUDWidth = (float)iCurrentResY * fNativeAspect;
    fHUDHeight = (float)iCurrentResY;
    fHUDWidthOffset = (float)(iCurrentResX - fHUDWidth) / 2.00f;
    fHUDHeightOffset = 0.00f;
    if (fAspectRatio < fNativeAspect) {
        fHUDWidth = (float)iCurrentResX;
        fHUDHeight = (float)iCurrentResX / fNativeAspect;
        fHUDWidthOffset = 0.00f;
        fHUDHeightOffset = (float)(iCurrentResY - fHUDHeight) / 2.00f;
    }

    // Log details about current resolution
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("Current Resolution: Resolution: {:d}x{:d}", iCurrentResX, iCurrentResY);
        spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
        spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
        spdlog::info("Current Resolution: fHUDWidth: {}", fHUDWidth);
        spdlog::info("Current Resolution: fHUDHeight: {}", fHUDHeight);
        spdlog::info("Current Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
        spdlog::info("Current Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
        spdlog::info("----------");
    }
}

void UpdateOffsets()
{
    // GObjects
    std::uint8_t* GObjectsScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? ?? ?? ?? 48 8B ?? ?? 48 8D ?? ?? EB ?? 33 ?? 8B ?? ?? C1 ??");
    if (GObjectsScanResult) {
        spdlog::info("Offsets: GObjects: Address is {:s}+{:x}", sExeName.c_str(), GObjectsScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* GObjectsAddr = Memory::GetAbsolute(GObjectsScanResult + 0x3);
        SDK::Offsets::GObjects = GObjectsAddr - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: GObjects: Offset: {:x}", SDK::Offsets::GObjects);
    }
    else {
        spdlog::error("Offsets: GObjects: Pattern scan failed.");
    }

    // AppendString
    std::uint8_t* AppendStringScanResult = Memory::PatternScan(exeModule, "E8 ?? ?? ?? ?? 49 ?? ?? 48 ?? ?? 48 ?? ?? ?? ?? ?? ?? ?? 49 ?? ?? ?? 48 ?? ?? ??");
    if (AppendStringScanResult) {
        spdlog::info("Offsets: AppendString: Address is {:s}+{:x}", sExeName.c_str(), AppendStringScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* AppendStringAddr = Memory::GetAbsolute(AppendStringScanResult + 0x1);
        SDK::Offsets::AppendString = AppendStringAddr - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: AppendString: Offset: {:x}", (uintptr_t)SDK::Offsets::AppendString);
    }
    else {
        spdlog::error("Offsets: AppendString: Pattern scan failed.");
    }

    // ProcessEvent
    std::uint8_t* ProcessEventScanResult = Memory::PatternScan(exeModule, "40 ?? 56 57 41 ?? 41 ?? 41 ?? 41 ?? 48 81 ?? ?? ?? ?? ?? 48 8D ?? ?? ?? 48 89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 33 ?? 48 89 ?? ?? ?? ?? ?? 8B ?? ?? 45 33 ??");
    if (ProcessEventScanResult) {
        spdlog::info("Offsets: ProcessEvent: Address is {:s}+{:x}", sExeName.c_str(), ProcessEventScanResult - (std::uint8_t*)exeModule);
        SDK::Offsets::ProcessEvent = ProcessEventScanResult - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: ProcessEvent: Offset: {:x}", (uintptr_t)SDK::Offsets::ProcessEvent);
    }
    else {
        spdlog::error("Offsets: ProcessEvent: Pattern scan failed.");
    }
}

void IntroSkip() 
{
    if (bSkipLogos) {
        // Intro skip
        std::uint8_t* IntroSkipScanResult = Memory::PatternScan(exeModule, "E8 ?? ?? ?? ?? 84 ?? 75 ?? 33 ?? 48 8B ?? E8 ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 85 ?? 74 ??");
        if (IntroSkipScanResult) {
            spdlog::info("Intro Skip: Address is {:s}+{:x}", sExeName.c_str(), IntroSkipScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid IntroSkipMidHook{};
            IntroSkipMidHook = safetyhook::create_mid(IntroSkipScanResult,
                [](SafetyHookContext& ctx) {
                    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
                        SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

                        if (!Obj || Obj->IsDefaultObject() || !Obj->HasTypeFlag(SDK::EClassCastFlags::Actor))
                            continue;

                        const std::string ObjName = Obj->GetName();

                        if (ObjName.contains("Caution_P_C")) {
                            auto caution = (SDK::ACaution_P_C*)Obj;
                            caution->isFinish = true;
                        }
                        
                        if (ObjName.contains("UELogo_P_C")) {
                            auto ue = (SDK::AUELogo_P_C*)Obj;
                            ue->isFinish = true;
                        }
                        
                        if (ObjName.contains("CRILogo_P_C")) {
                            auto cri = (SDK::ACRILogo_P_C*)Obj;
                            cri->isFinish = true;
                        }
                        
                        if (ObjName.contains("AutoSaveCaution_P_C")) {
                            auto autosave = (SDK::AAutoSaveCaution_P_C*)Obj;
                            autosave->isFinish = true;
                        }
                        
                    }
                });
        }
        else {
            spdlog::error("Intro Skip: Pattern scan failed.");
        }
    } 
}

void CurrentResolution()
{
    // Grab desktop resolution/aspect just in case
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();
    iCurrentResX = DesktopDimensions.first;
    iCurrentResY = DesktopDimensions.second;
    CalculateAspectRatio(true);

    // Current Resolution
    std::uint8_t* CurrentResolutionScanResult = Memory::PatternScan(exeModule, "8D ?? ?? 44 89 ?? ?? ?? ?? ?? 44 89 ?? ?? ?? ?? ?? 44 89 ?? ?? ?? ?? ?? 88 ?? ?? ?? ?? ??");
    if (CurrentResolutionScanResult) {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), CurrentResolutionScanResult - (std::uint8_t*)exeModule);
        static SafetyHookMid CurrentResolutionMidHook{};
        CurrentResolutionMidHook = safetyhook::create_mid(CurrentResolutionScanResult,
            [](SafetyHookContext& ctx) {
                int iResX = (int)ctx.r13;
                int iResY = (int)ctx.r12;

                if (iResX != iCurrentResX || iResY != iCurrentResY) {
                    iCurrentResX = iResX;
                    iCurrentResY = iResY;
                    CalculateAspectRatio(true);
                }
            });
    }
    else {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }
}

void AspectRatioFOV()
{
    if (bFixAspect) {
        // Aspect Ratio / FOV
        std::uint8_t* AspectRatioFOVScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ?? 0F ?? ?? ?? ?? ?? ?? 33 ?? ??");
        if (AspectRatioFOVScanResult) {
            spdlog::info("Aspect Ratio/FOV: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(AspectRatioFOVScanResult,
                [](SafetyHookContext& ctx) {
                    // Fix vert- FOV
                    if (fAspectRatio > fNativeAspect)
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                });

            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioFOVScanResult + 0xB,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect)
                        ctx.rax = *(uint32_t*)(&fAspectRatio);
                });
        }
        else {
            spdlog::error("Aspect Ratio/FOV: Pattern scan failed.");
        }
    }   
}

void HUD()
{
    if (bFixHUD) {
        if (bCenterHUD) {
            // HUD size
            std::uint8_t* HUDSizeScanResult = Memory::PatternScan(exeModule, "48 8D ?? ?? ?? ?? ?? 44 89 ?? ?? 48 89 ?? ?? ?? 33 ?? 48 8D ?? ?? ?? ?? ?? 44 89 ?? ?? ?? 41 ?? ?? ?? 48 89 ?? ?? ?? E8 ?? ?? ?? ??");
            if (HUDSizeScanResult) {
                spdlog::info("HUD: Size: Address is {:s}+{:x}", sExeName.c_str(), HUDSizeScanResult - (std::uint8_t*)exeModule);
                std::uint8_t* HUDSizeFunction = Memory::GetAbsolute(HUDSizeScanResult + 0x3);
                spdlog::info("HUD: Size: Function address is {:s}+{:x}", sExeName.c_str(), HUDSizeFunction - (std::uint8_t*)exeModule);
                if (HUDSizeFunction) {
                    static SafetyHookMid HUDSizeMidHook{};
                    HUDSizeMidHook = safetyhook::create_mid(HUDSizeFunction + 0x7,
                        [](SafetyHookContext& ctx) {
                            if (ctx.xmm0.f32[0] == 0.00f && ctx.xmm0.f32[1] == 0.00f && ctx.xmm0.f32[2] == 1.00f && ctx.xmm0.f32[3] == 1.00f) {
                                SDK::UObject* obj = (SDK::UObject*)ctx.rcx;

                                // Don't center these HUD elements
                                if (obj->GetName().contains("movieUMG_C"))
                                    return;

                                if (fAspectRatio > fNativeAspect) {
                                    ctx.xmm0.f32[0] = fHUDWidthOffset / (float)iCurrentResX;
                                    ctx.xmm0.f32[2] = 1.00f - ctx.xmm0.f32[0];
                                }
                                else if (fAspectRatio < fNativeAspect) {
                                    ctx.xmm0.f32[1] = fHUDHeightOffset / (float)iCurrentResY;
                                    ctx.xmm0.f32[3] = 1.00f - ctx.xmm0.f32[1];
                                }
                            }
                        });
                }
            }
            else {
                spdlog::error("HUD: Size: Pattern scan failed.");
            }
        }

        // Interaction markers
        std::uint8_t* HUDMarkersScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 80 ?? ?? ?? ?? ?? 00 75 ??");
        if (HUDMarkersScanResult) {
            spdlog::info("HUD: Interaction Markers: Address is {:s}+{:x}", sExeName.c_str(), HUDMarkersScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDMarkersMidHook{};
            HUDMarkersMidHook = safetyhook::create_mid(HUDMarkersScanResult,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        // Get width and height
                        int iResX = (int)ctx.rdx & 0xFFFFFFFF;
                        int iResY = (int)static_cast<uint32_t>(ctx.rdx >> 32);

                        // Remove hor/vert offsets
                        ctx.xmm2.f32[0] = ctx.xmm5.f32[0] = 0.00f;

                        // Set width and height
                        ctx.xmm0.f32[0] = (float)iResX;
                        ctx.xmm4.f32[0] = (float)iResY;
                    }
                });
        }
        else {
            spdlog::error("HUD: Interaction Markers: Pattern scan failed.");
        } 
    }

    if (bFixHUD || bSkipLogos) {
        // Movies - ManaComponent::IsPreparing()
        std::uint8_t* MoviePrepareScanResult = Memory::PatternScan(exeModule, "48 83 ?? ?? ?? ?? ?? 00 75 ?? 32 ?? C3 0F B6 ?? ?? ?? ?? ??");
        if (MoviePrepareScanResult) {
            spdlog::info("Movies: Prepare: Address is {:s}+{:x}", sExeName.c_str(), MoviePrepareScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid MoviePrepareMidHook{};
            MoviePrepareMidHook = safetyhook::create_mid(MoviePrepareScanResult,
                [](SafetyHookContext& ctx) {
                    // Skip logo movie once
                    if (bSkipLogos && !bSkippedLogosMovie) {
                        SDK::URCManaComponent* RCMovie = (SDK::URCManaComponent*)ctx.rcx;
                        if (RCMovie->GetSource()->GetUrl().ToString().contains("OP_Logo.usm")) {
                            RCMovie->Stop();
                            spdlog::info("Intro Skip: Skipped logos movie.");
                            bSkippedLogosMovie = true;
                            return;
                        }
                    }

                    if (bFixHUD) {
                        // This is an expensive operation but it only runs once as a movie begins playback
                        for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
                            SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

                            if (!Obj || Obj->IsDefaultObject())
                                continue;

                            if (Obj->IsA(SDK::UmovieUMG_C::StaticClass())) {
                                // Assign UMGMovie
                                SDK::UmovieUMG_C* UMGMovie = (SDK::UmovieUMG_C*)Obj;
                                spdlog::info("HUD: Movies: Prepare: Movie playback started.");

                                // Get RootWidget
                                SDK::UPanelWidget* rootWidget = (SDK::UPanelWidget*)UMGMovie->WidgetTree->RootWidget;

                                // Create background image
                                SDK::UObject* imgObj = SDK::UGameplayStatics::SpawnObject(SDK::UImage::StaticClass(), SDK::UImage::StaticClass()->Outer);
                                SDK::UImage* bgImg = static_cast<SDK::UImage*>(imgObj);

                                // Set brush to black
                                bgImg->Brush.TintColor = SDK::FSlateColor(SDK::FLinearColor(0.00f, 0.00f, 0.00f, 1.00f));

                                // Add background image widget as child of root widget
                                rootWidget->AddChild(bgImg);

                                // Fill screen with background image and set z-order so it's behind the movie texture
                                SDK::UCanvasPanelSlot* Slot = static_cast<SDK::UCanvasPanelSlot*>(bgImg->Slot);
                                Slot->SetAnchors(SDK::FAnchors(SDK::FVector2D(0.00f, 0), SDK::FVector2D(1.00f, 1.00f)));
                                Slot->SetOffsets(SDK::FMargin(0.00f, 0.00f, 0.00f, 0.00f));
                                Slot->SetZOrder(-10000);

                                // Scale movie image to correct aspect ratio
                                if (fAspectRatio > fNativeAspect) {
                                    UMGMovie->movieImage->SetRenderScale(SDK::FVector2D(1.00f / fAspectMultiplier, 1.00f));
                                }
                                else if (fAspectRatio < fNativeAspect) {
                                    UMGMovie->movieImage->SetRenderScale(SDK::FVector2D(1.00f, 1.00f * fAspectMultiplier));
                                }
                            }
                        }
                    }
                });
        }
        else {
            spdlog::error("HUD: Movies: Prepare: Pattern scan failed.");
        }

        // Scene change
        std::uint8_t* SceneChangeScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? 48 8B ?? E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B ?? ?? 4C 8D ?? ?? 48 ?? ?? ?? 3B ?? ?? 7F ??");
        if (SceneChangeScanResult) {
            spdlog::info("HUD: Scene Change: Address is {:s}+{:x}", sExeName.c_str(), SceneChangeScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid SceneChangeMidHook{};
            SceneChangeMidHook = safetyhook::create_mid(SceneChangeScanResult + 0x4,
                [](SafetyHookContext& ctx) {
                    ctx.rdx = 0x3f8000003f800000; // 1.00f, 1.00f
                });
        }
        else {
            spdlog::error("HUD: Scene Change: Pattern scan failed.");
        }
    }
}

void EnableConsole()
{
    if (bEnableConsole) {
        // Allow setting read-only cvars
        // FConsoleManager::ProcessUserConsoleInput
        std::uint8_t* ReadOnlyCVarsScanResult = Memory::PatternScan(exeModule, "0F 84 ?? ?? ?? ?? 48 8B ?? 48 8B ?? FF ?? ?? A8 01");
        if (ReadOnlyCVarsScanResult) {
            spdlog::info("Read-only CVars: Address is {:s}+{:x}", sExeName.c_str(), ReadOnlyCVarsScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid ReadOnlyCVarsMidHook{};
            ReadOnlyCVarsMidHook = safetyhook::create_mid(ReadOnlyCVarsScanResult + 0x6,
                [](SafetyHookContext& ctx) {
                    if (ctx.rax + 0x18)
                        *reinterpret_cast<BYTE*>(ctx.rax + 0x18) = 0;
                });
        }
        else {
            spdlog::error("Read-only CVars: Pattern scan failed.");
        }

        // Get GEngine
        for (int i = 0; i < 200; ++i) { // 20s
            Engine = SDK::UEngine::GetEngine();

            if (Engine && Engine->ConsoleClass && Engine->GameViewport)
                break;

            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }

        if (!Engine || !Engine->ConsoleClass || !Engine->GameViewport) {
            spdlog::error("Enable Console: Failed to find GEngine address after 20 seconds.");
            return;
        }

        spdlog::info("Enable Console: GEngine address = {:x}", (uintptr_t)Engine);

        // Construct console
        SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
        if (NewObject) {
            Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
            spdlog::info("Construct Console: Console object constructed.");
        }
        else {
            spdlog::error("Enable Console: Failed to construct console object.");
            return;
        }

        // Check console key bind
        SDK::UInputSettings* InputSettings = SDK::UInputSettings::GetDefaultObj();
        if (InputSettings) {
            if (InputSettings->ConsoleKeys && InputSettings->ConsoleKeys.Num() > 0) {
                spdlog::info("Enable Console: Console enabled - access it using key: {}.", InputSettings->ConsoleKeys[0].KeyName.ToString().c_str());
            }
            else {
                spdlog::error("Enable Console: Console enabled but no console key is bound.\nAdd this to %USERPROFILE%\\Documents\\My Games\\DRAGON QUEST III HD-2D Remake\\Steam\\Config\\WindowsNoEditor\\Input.ini -\n[/Script/Engine.InputSettings]\nConsoleKeys = Tilde");
            }
        }
        else {
            spdlog::error("Enable Console: Failed to retreive input settings.");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    Configuration();
    UpdateOffsets();
    IntroSkip();
    CurrentResolution();
    AspectRatioFOV();
    HUD();
    EnableConsole();
    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH: {
        thisModule = hModule;
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle) {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST);
            CloseHandle(mainHandle);
        }
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}