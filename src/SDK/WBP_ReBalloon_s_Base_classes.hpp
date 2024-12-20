#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReBalloon_s_Base

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ReBalloon_s_Base.WBP_ReBalloon_s_Base_C
// 0x0010 (0x0300 - 0x02F0)
class UWBP_ReBalloon_s_Base_C final : public URCReUiBalloonSmallCloud
{
public:
	class UImage*                                 T_Cloud_arrow;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 T_Cloud_s;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ReBalloon_s_Base_C">();
	}
	static class UWBP_ReBalloon_s_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ReBalloon_s_Base_C>();
	}
};
static_assert(alignof(UWBP_ReBalloon_s_Base_C) == 0x000008, "Wrong alignment on UWBP_ReBalloon_s_Base_C");
static_assert(sizeof(UWBP_ReBalloon_s_Base_C) == 0x000300, "Wrong size on UWBP_ReBalloon_s_Base_C");
static_assert(offsetof(UWBP_ReBalloon_s_Base_C, T_Cloud_arrow) == 0x0002F0, "Member 'UWBP_ReBalloon_s_Base_C::T_Cloud_arrow' has a wrong offset!");
static_assert(offsetof(UWBP_ReBalloon_s_Base_C, T_Cloud_s) == 0x0002F8, "Member 'UWBP_ReBalloon_s_Base_C::T_Cloud_s' has a wrong offset!");

}

