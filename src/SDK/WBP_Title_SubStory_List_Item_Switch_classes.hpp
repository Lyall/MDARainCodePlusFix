#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_SubStory_List_Item_Switch

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_SubStory_List_Item_Switch.WBP_Title_SubStory_List_Item_Switch_C
// 0x0038 (0x0380 - 0x0348)
class UWBP_Title_SubStory_List_Item_Switch_C final : public URCTitleSubStoryListItemSwitch
{
public:
	class UWBP_Title_SubStory_List_Item_Finish_C* List_Item_Finish;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SubStory_List_Item_UnFinish_C* List_Item_UnFinish;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SubStory_StatusIcon_Clear_C* StatusIcon_Clear;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SubStory_StatusIcon_Close_C* StatusIcon_Close;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SubStory_StatusIcon_Going_C* StatusIcon_Going;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_List;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_StatusIcon;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_SubStory_List_Item_Switch_C">();
	}
	static class UWBP_Title_SubStory_List_Item_Switch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_SubStory_List_Item_Switch_C>();
	}
};
static_assert(alignof(UWBP_Title_SubStory_List_Item_Switch_C) == 0x000008, "Wrong alignment on UWBP_Title_SubStory_List_Item_Switch_C");
static_assert(sizeof(UWBP_Title_SubStory_List_Item_Switch_C) == 0x000380, "Wrong size on UWBP_Title_SubStory_List_Item_Switch_C");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Switch_C, List_Item_Finish) == 0x000348, "Member 'UWBP_Title_SubStory_List_Item_Switch_C::List_Item_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Switch_C, List_Item_UnFinish) == 0x000350, "Member 'UWBP_Title_SubStory_List_Item_Switch_C::List_Item_UnFinish' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Switch_C, StatusIcon_Clear) == 0x000358, "Member 'UWBP_Title_SubStory_List_Item_Switch_C::StatusIcon_Clear' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Switch_C, StatusIcon_Close) == 0x000360, "Member 'UWBP_Title_SubStory_List_Item_Switch_C::StatusIcon_Close' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Switch_C, StatusIcon_Going) == 0x000368, "Member 'UWBP_Title_SubStory_List_Item_Switch_C::StatusIcon_Going' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Switch_C, Switcher_List) == 0x000370, "Member 'UWBP_Title_SubStory_List_Item_Switch_C::Switcher_List' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Switch_C, Switcher_StatusIcon) == 0x000378, "Member 'UWBP_Title_SubStory_List_Item_Switch_C::Switcher_StatusIcon' has a wrong offset!");

}
