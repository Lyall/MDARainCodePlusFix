#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AdjustWindow_Button_000

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AdjustWindow_Button_000.WBP_AdjustWindow_Button_000_C
// 0x0018 (0x0340 - 0x0328)
class UWBP_AdjustWindow_Button_000_C final : public URCUiGenericButton
{
public:
	class UWBP_AdjustWindow_BTN_Parts_C*          Button_000;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdjustWindow_BTN_Parts_C*          Button_001;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdjustWindow_BTN_Parts_C*          Button_002;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AdjustWindow_Button_000_C">();
	}
	static class UWBP_AdjustWindow_Button_000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AdjustWindow_Button_000_C>();
	}
};
static_assert(alignof(UWBP_AdjustWindow_Button_000_C) == 0x000008, "Wrong alignment on UWBP_AdjustWindow_Button_000_C");
static_assert(sizeof(UWBP_AdjustWindow_Button_000_C) == 0x000340, "Wrong size on UWBP_AdjustWindow_Button_000_C");
static_assert(offsetof(UWBP_AdjustWindow_Button_000_C, Button_000) == 0x000328, "Member 'UWBP_AdjustWindow_Button_000_C::Button_000' has a wrong offset!");
static_assert(offsetof(UWBP_AdjustWindow_Button_000_C, Button_001) == 0x000330, "Member 'UWBP_AdjustWindow_Button_000_C::Button_001' has a wrong offset!");
static_assert(offsetof(UWBP_AdjustWindow_Button_000_C, Button_002) == 0x000338, "Member 'UWBP_AdjustWindow_Button_000_C::Button_002' has a wrong offset!");

}
