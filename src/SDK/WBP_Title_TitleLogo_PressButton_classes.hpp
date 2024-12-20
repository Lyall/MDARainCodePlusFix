#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_TitleLogo_PressButton

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_TitleLogo_PressButton.WBP_Title_TitleLogo_PressButton_C
// 0x0008 (0x0338 - 0x0330)
class UWBP_Title_TitleLogo_PressButton_C final : public URCTitleLogoPressButton
{
public:
	class UImage*                                 Effect_Glitch;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_TitleLogo_PressButton_C">();
	}
	static class UWBP_Title_TitleLogo_PressButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_TitleLogo_PressButton_C>();
	}
};
static_assert(alignof(UWBP_Title_TitleLogo_PressButton_C) == 0x000008, "Wrong alignment on UWBP_Title_TitleLogo_PressButton_C");
static_assert(sizeof(UWBP_Title_TitleLogo_PressButton_C) == 0x000338, "Wrong size on UWBP_Title_TitleLogo_PressButton_C");
static_assert(offsetof(UWBP_Title_TitleLogo_PressButton_C, Effect_Glitch) == 0x000330, "Member 'UWBP_Title_TitleLogo_PressButton_C::Effect_Glitch' has a wrong offset!");

}

