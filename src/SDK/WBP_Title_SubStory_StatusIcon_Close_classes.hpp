#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_SubStory_StatusIcon_Close

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_SubStory_StatusIcon_Close.WBP_Title_SubStory_StatusIcon_Close_C
// 0x0010 (0x0280 - 0x0270)
class UWBP_Title_SubStory_StatusIcon_Close_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       AN_Off;                                            // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AN_On;                                             // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_SubStory_StatusIcon_Close_C">();
	}
	static class UWBP_Title_SubStory_StatusIcon_Close_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_SubStory_StatusIcon_Close_C>();
	}
};
static_assert(alignof(UWBP_Title_SubStory_StatusIcon_Close_C) == 0x000008, "Wrong alignment on UWBP_Title_SubStory_StatusIcon_Close_C");
static_assert(sizeof(UWBP_Title_SubStory_StatusIcon_Close_C) == 0x000280, "Wrong size on UWBP_Title_SubStory_StatusIcon_Close_C");
static_assert(offsetof(UWBP_Title_SubStory_StatusIcon_Close_C, AN_Off) == 0x000270, "Member 'UWBP_Title_SubStory_StatusIcon_Close_C::AN_Off' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_StatusIcon_Close_C, AN_On) == 0x000278, "Member 'UWBP_Title_SubStory_StatusIcon_Close_C::AN_On' has a wrong offset!");

}
