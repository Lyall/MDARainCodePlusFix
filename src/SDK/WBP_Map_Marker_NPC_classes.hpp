#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Map_Marker_NPC

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Map_Marker_NPC.WBP_Map_Marker_NPC_C
// 0x0008 (0x02E8 - 0x02E0)
class UWBP_Map_Marker_NPC_C final : public URCReUiMiniMapIcon
{
public:
	class UImage*                                 Marker;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_Marker_NPC_C">();
	}
	static class UWBP_Map_Marker_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_Marker_NPC_C>();
	}
};
static_assert(alignof(UWBP_Map_Marker_NPC_C) == 0x000008, "Wrong alignment on UWBP_Map_Marker_NPC_C");
static_assert(sizeof(UWBP_Map_Marker_NPC_C) == 0x0002E8, "Wrong size on UWBP_Map_Marker_NPC_C");
static_assert(offsetof(UWBP_Map_Marker_NPC_C, Marker) == 0x0002E0, "Member 'UWBP_Map_Marker_NPC_C::Marker' has a wrong offset!");

}
