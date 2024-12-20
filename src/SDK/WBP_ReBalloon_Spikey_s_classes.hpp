#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReBalloon_Spikey_s

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ReBalloon_Spikey_s.WBP_ReBalloon_Spikey_s_C
// 0x0008 (0x0300 - 0x02F8)
class UWBP_ReBalloon_Spikey_s_C final : public URCReUiBalloonIcon
{
public:
	class UImage*                                 T_moya_00;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ReBalloon_Spikey_s_C">();
	}
	static class UWBP_ReBalloon_Spikey_s_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ReBalloon_Spikey_s_C>();
	}
};
static_assert(alignof(UWBP_ReBalloon_Spikey_s_C) == 0x000008, "Wrong alignment on UWBP_ReBalloon_Spikey_s_C");
static_assert(sizeof(UWBP_ReBalloon_Spikey_s_C) == 0x000300, "Wrong size on UWBP_ReBalloon_Spikey_s_C");
static_assert(offsetof(UWBP_ReBalloon_Spikey_s_C, T_moya_00) == 0x0002F8, "Member 'UWBP_ReBalloon_Spikey_s_C::T_moya_00' has a wrong offset!");

}

