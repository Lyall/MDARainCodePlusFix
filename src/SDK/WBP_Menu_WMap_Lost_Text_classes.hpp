#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WMap_Lost_Text

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WMap_Lost_Text.WBP_Menu_WMap_Lost_Text_C
// 0x0000 (0x0308 - 0x0308)
class UWBP_Menu_WMap_Lost_Text_C final : public URCUiMenuWorldMapLostArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WMap_Lost_Text_C">();
	}
	static class UWBP_Menu_WMap_Lost_Text_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WMap_Lost_Text_C>();
	}
};
static_assert(alignof(UWBP_Menu_WMap_Lost_Text_C) == 0x000008, "Wrong alignment on UWBP_Menu_WMap_Lost_Text_C");
static_assert(sizeof(UWBP_Menu_WMap_Lost_Text_C) == 0x000308, "Wrong size on UWBP_Menu_WMap_Lost_Text_C");

}
