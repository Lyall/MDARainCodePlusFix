#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tutorial_ListBar

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Tutorial_ListBar.WBP_Menu_Tutorial_ListBar_C
// 0x0030 (0x03A0 - 0x0370)
class UWBP_Menu_Tutorial_ListBar_C final : public URCUiMenuTutorialListBar
{
public:
	class UWBP_Menu_Com_Icon_ListNew_C*           Icon_ListNew;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Com_Icon_ListUpdate_C*        Icon_ListUpdate;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_ListBar_Push;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Tutorial_ListBar_Cursor;                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Tutorial_ListBar_C">();
	}
	static class UWBP_Menu_Tutorial_ListBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Tutorial_ListBar_C>();
	}
};
static_assert(alignof(UWBP_Menu_Tutorial_ListBar_C) == 0x000008, "Wrong alignment on UWBP_Menu_Tutorial_ListBar_C");
static_assert(sizeof(UWBP_Menu_Tutorial_ListBar_C) == 0x0003A0, "Wrong size on UWBP_Menu_Tutorial_ListBar_C");
static_assert(offsetof(UWBP_Menu_Tutorial_ListBar_C, Icon_ListNew) == 0x000370, "Member 'UWBP_Menu_Tutorial_ListBar_C::Icon_ListNew' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_ListBar_C, Icon_ListUpdate) == 0x000378, "Member 'UWBP_Menu_Tutorial_ListBar_C::Icon_ListUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_ListBar_C, Image_0) == 0x000380, "Member 'UWBP_Menu_Tutorial_ListBar_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_ListBar_C, Image_1) == 0x000388, "Member 'UWBP_Menu_Tutorial_ListBar_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_ListBar_C, Img_ListBar_Push) == 0x000390, "Member 'UWBP_Menu_Tutorial_ListBar_C::Img_ListBar_Push' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_ListBar_C, Tutorial_ListBar_Cursor) == 0x000398, "Member 'UWBP_Menu_Tutorial_ListBar_C::Tutorial_ListBar_Cursor' has a wrong offset!");

}
