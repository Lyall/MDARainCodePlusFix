#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Pager_Item

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Pager_Item.WBP_Pager_Item_C
// 0x0020 (0x0320 - 0x0300)
class UWBP_Pager_Item_C final : public URCUiMenuAreaMapPagerItem
{
public:
	class UImage*                                 Img_Pager_Item;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Pager_Item_1;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Pager_Item_2;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_PagerItem;                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Pager_Item_C">();
	}
	static class UWBP_Pager_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Pager_Item_C>();
	}
};
static_assert(alignof(UWBP_Pager_Item_C) == 0x000008, "Wrong alignment on UWBP_Pager_Item_C");
static_assert(sizeof(UWBP_Pager_Item_C) == 0x000320, "Wrong size on UWBP_Pager_Item_C");
static_assert(offsetof(UWBP_Pager_Item_C, Img_Pager_Item) == 0x000300, "Member 'UWBP_Pager_Item_C::Img_Pager_Item' has a wrong offset!");
static_assert(offsetof(UWBP_Pager_Item_C, Img_Pager_Item_1) == 0x000308, "Member 'UWBP_Pager_Item_C::Img_Pager_Item_1' has a wrong offset!");
static_assert(offsetof(UWBP_Pager_Item_C, Img_Pager_Item_2) == 0x000310, "Member 'UWBP_Pager_Item_C::Img_Pager_Item_2' has a wrong offset!");
static_assert(offsetof(UWBP_Pager_Item_C, WidgetSwitcher_PagerItem) == 0x000318, "Member 'UWBP_Pager_Item_C::WidgetSwitcher_PagerItem' has a wrong offset!");

}

