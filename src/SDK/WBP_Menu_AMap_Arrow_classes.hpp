#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_AMap_Arrow

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_AMap_Arrow.WBP_Menu_AMap_Arrow_C
// 0x0028 (0x0328 - 0x0300)
class UWBP_Menu_AMap_Arrow_C final : public URCUiMenuAreaMapIconArrow
{
public:
	class UImage*                                 Img_Icon_Arrow;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon_Arrow_Disable;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon_Nomark;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PlaceName_BG;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Arrow;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_AMap_Arrow_C">();
	}
	static class UWBP_Menu_AMap_Arrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_AMap_Arrow_C>();
	}
};
static_assert(alignof(UWBP_Menu_AMap_Arrow_C) == 0x000008, "Wrong alignment on UWBP_Menu_AMap_Arrow_C");
static_assert(sizeof(UWBP_Menu_AMap_Arrow_C) == 0x000328, "Wrong size on UWBP_Menu_AMap_Arrow_C");
static_assert(offsetof(UWBP_Menu_AMap_Arrow_C, Img_Icon_Arrow) == 0x000300, "Member 'UWBP_Menu_AMap_Arrow_C::Img_Icon_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_AMap_Arrow_C, Img_Icon_Arrow_Disable) == 0x000308, "Member 'UWBP_Menu_AMap_Arrow_C::Img_Icon_Arrow_Disable' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_AMap_Arrow_C, Img_Icon_Nomark) == 0x000310, "Member 'UWBP_Menu_AMap_Arrow_C::Img_Icon_Nomark' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_AMap_Arrow_C, Img_PlaceName_BG) == 0x000318, "Member 'UWBP_Menu_AMap_Arrow_C::Img_PlaceName_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_AMap_Arrow_C, WidgetSwitcher_Arrow) == 0x000320, "Member 'UWBP_Menu_AMap_Arrow_C::WidgetSwitcher_Arrow' has a wrong offset!");

}
