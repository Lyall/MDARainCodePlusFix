#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chos_TargetIcon_Check

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Chos_TargetIcon_Check.WBP_Chos_TargetIcon_Check_C
// 0x0008 (0x02E0 - 0x02D8)
class UWBP_Chos_TargetIcon_Check_C final : public URCUiWidgetBase
{
public:
	class UImage*                                 TargetIcon_Check;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Chos_TargetIcon_Check_C">();
	}
	static class UWBP_Chos_TargetIcon_Check_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Chos_TargetIcon_Check_C>();
	}
};
static_assert(alignof(UWBP_Chos_TargetIcon_Check_C) == 0x000008, "Wrong alignment on UWBP_Chos_TargetIcon_Check_C");
static_assert(sizeof(UWBP_Chos_TargetIcon_Check_C) == 0x0002E0, "Wrong size on UWBP_Chos_TargetIcon_Check_C");
static_assert(offsetof(UWBP_Chos_TargetIcon_Check_C, TargetIcon_Check) == 0x0002D8, "Member 'UWBP_Chos_TargetIcon_Check_C::TargetIcon_Check' has a wrong offset!");

}

