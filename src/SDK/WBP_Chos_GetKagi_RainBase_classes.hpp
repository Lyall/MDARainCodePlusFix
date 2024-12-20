#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chos_GetKagi_RainBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Chos_GetKagi_RainBase.WBP_Chos_GetKagi_RainBase_C
// 0x0018 (0x0288 - 0x0270)
class UWBP_Chos_GetKagi_RainBase_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Rain_area;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Rain_Max;                                          // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Chos_GetKagi_RainBase(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Chos_GetKagi_RainBase_C">();
	}
	static class UWBP_Chos_GetKagi_RainBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Chos_GetKagi_RainBase_C>();
	}
};
static_assert(alignof(UWBP_Chos_GetKagi_RainBase_C) == 0x000008, "Wrong alignment on UWBP_Chos_GetKagi_RainBase_C");
static_assert(sizeof(UWBP_Chos_GetKagi_RainBase_C) == 0x000288, "Wrong size on UWBP_Chos_GetKagi_RainBase_C");
static_assert(offsetof(UWBP_Chos_GetKagi_RainBase_C, UberGraphFrame) == 0x000270, "Member 'UWBP_Chos_GetKagi_RainBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Chos_GetKagi_RainBase_C, Rain_area) == 0x000278, "Member 'UWBP_Chos_GetKagi_RainBase_C::Rain_area' has a wrong offset!");
static_assert(offsetof(UWBP_Chos_GetKagi_RainBase_C, Rain_Max) == 0x000280, "Member 'UWBP_Chos_GetKagi_RainBase_C::Rain_Max' has a wrong offset!");

}

