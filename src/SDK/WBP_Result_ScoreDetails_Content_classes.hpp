#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Result_ScoreDetails_Content

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Result_ScoreDetails_Content.WBP_Result_ScoreDetails_Content_C
// 0x0018 (0x0338 - 0x0320)
class UWBP_Result_ScoreDetails_Content_C final : public URCNzResultScoreDetailsContent
{
public:
	class UWBP_Result_Rank_C*                     WBP_Result_Rank;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Detail;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Icon;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Result_ScoreDetails_Content_C">();
	}
	static class UWBP_Result_ScoreDetails_Content_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Result_ScoreDetails_Content_C>();
	}
};
static_assert(alignof(UWBP_Result_ScoreDetails_Content_C) == 0x000008, "Wrong alignment on UWBP_Result_ScoreDetails_Content_C");
static_assert(sizeof(UWBP_Result_ScoreDetails_Content_C) == 0x000338, "Wrong size on UWBP_Result_ScoreDetails_Content_C");
static_assert(offsetof(UWBP_Result_ScoreDetails_Content_C, WBP_Result_Rank) == 0x000320, "Member 'UWBP_Result_ScoreDetails_Content_C::WBP_Result_Rank' has a wrong offset!");
static_assert(offsetof(UWBP_Result_ScoreDetails_Content_C, WidgetSwitcher_Detail) == 0x000328, "Member 'UWBP_Result_ScoreDetails_Content_C::WidgetSwitcher_Detail' has a wrong offset!");
static_assert(offsetof(UWBP_Result_ScoreDetails_Content_C, WidgetSwitcher_Icon) == 0x000330, "Member 'UWBP_Result_ScoreDetails_Content_C::WidgetSwitcher_Icon' has a wrong offset!");

}

