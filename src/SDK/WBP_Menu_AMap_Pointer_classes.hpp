#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_AMap_Pointer

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_AMap_Pointer.WBP_Menu_AMap_Pointer_C
// 0x0008 (0x0320 - 0x0318)
class UWBP_Menu_AMap_Pointer_C final : public URCUiMenuAreaMapPointer
{
public:
	class UImage*                                 Img_PlaceName_BG;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_AMap_Pointer_C">();
	}
	static class UWBP_Menu_AMap_Pointer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_AMap_Pointer_C>();
	}
};
static_assert(alignof(UWBP_Menu_AMap_Pointer_C) == 0x000008, "Wrong alignment on UWBP_Menu_AMap_Pointer_C");
static_assert(sizeof(UWBP_Menu_AMap_Pointer_C) == 0x000320, "Wrong size on UWBP_Menu_AMap_Pointer_C");
static_assert(offsetof(UWBP_Menu_AMap_Pointer_C, Img_PlaceName_BG) == 0x000318, "Member 'UWBP_Menu_AMap_Pointer_C::Img_PlaceName_BG' has a wrong offset!");

}
