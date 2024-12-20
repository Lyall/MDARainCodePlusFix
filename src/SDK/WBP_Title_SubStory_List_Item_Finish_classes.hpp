#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_SubStory_List_Item_Finish

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_SubStory_List_Item_Finish.WBP_Title_SubStory_List_Item_Finish_C
// 0x0018 (0x0328 - 0x0310)
class UWBP_Title_SubStory_List_Item_Finish_C final : public URCTitleSubStoryListItemFinish
{
public:
	class UImage*                                 DLIcon_Finish;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 List_Base;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 List_Flame;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_SubStory_List_Item_Finish_C">();
	}
	static class UWBP_Title_SubStory_List_Item_Finish_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_SubStory_List_Item_Finish_C>();
	}
};
static_assert(alignof(UWBP_Title_SubStory_List_Item_Finish_C) == 0x000008, "Wrong alignment on UWBP_Title_SubStory_List_Item_Finish_C");
static_assert(sizeof(UWBP_Title_SubStory_List_Item_Finish_C) == 0x000328, "Wrong size on UWBP_Title_SubStory_List_Item_Finish_C");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Finish_C, DLIcon_Finish) == 0x000310, "Member 'UWBP_Title_SubStory_List_Item_Finish_C::DLIcon_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Finish_C, List_Base) == 0x000318, "Member 'UWBP_Title_SubStory_List_Item_Finish_C::List_Base' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_List_Item_Finish_C, List_Flame) == 0x000320, "Member 'UWBP_Title_SubStory_List_Item_Finish_C::List_Flame' has a wrong offset!");

}

