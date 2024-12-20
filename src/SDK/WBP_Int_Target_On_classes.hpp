#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Int_Target_On

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Int_Target_On.WBP_Int_Target_On_C
// 0x0018 (0x0328 - 0x0310)
class UWBP_Int_Target_On_C final : public URCUiInteractTargetOn
{
public:
	class UWidgetAnimation*                       AN_Loop;                                           // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 TargetIcon_On;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TargetIcon_On_1;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Int_Target_On_C">();
	}
	static class UWBP_Int_Target_On_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Int_Target_On_C>();
	}
};
static_assert(alignof(UWBP_Int_Target_On_C) == 0x000008, "Wrong alignment on UWBP_Int_Target_On_C");
static_assert(sizeof(UWBP_Int_Target_On_C) == 0x000328, "Wrong size on UWBP_Int_Target_On_C");
static_assert(offsetof(UWBP_Int_Target_On_C, AN_Loop) == 0x000310, "Member 'UWBP_Int_Target_On_C::AN_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_Int_Target_On_C, TargetIcon_On) == 0x000318, "Member 'UWBP_Int_Target_On_C::TargetIcon_On' has a wrong offset!");
static_assert(offsetof(UWBP_Int_Target_On_C, TargetIcon_On_1) == 0x000320, "Member 'UWBP_Int_Target_On_C::TargetIcon_On_1' has a wrong offset!");

}

