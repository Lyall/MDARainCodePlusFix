#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WMap_Icon_BusStop

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WMap_Icon_BusStop.WBP_Menu_WMap_Icon_BusStop_C
// 0x0010 (0x0330 - 0x0320)
class UWBP_Menu_WMap_Icon_BusStop_C final : public URCUiMenuWorldMapBusIcon
{
public:
	class UImage*                                 Icon_BusStop;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_BusStop_Close;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WMap_Icon_BusStop_C">();
	}
	static class UWBP_Menu_WMap_Icon_BusStop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WMap_Icon_BusStop_C>();
	}
};
static_assert(alignof(UWBP_Menu_WMap_Icon_BusStop_C) == 0x000008, "Wrong alignment on UWBP_Menu_WMap_Icon_BusStop_C");
static_assert(sizeof(UWBP_Menu_WMap_Icon_BusStop_C) == 0x000330, "Wrong size on UWBP_Menu_WMap_Icon_BusStop_C");
static_assert(offsetof(UWBP_Menu_WMap_Icon_BusStop_C, Icon_BusStop) == 0x000320, "Member 'UWBP_Menu_WMap_Icon_BusStop_C::Icon_BusStop' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WMap_Icon_BusStop_C, Icon_BusStop_Close) == 0x000328, "Member 'UWBP_Menu_WMap_Icon_BusStop_C::Icon_BusStop_Close' has a wrong offset!");

}

