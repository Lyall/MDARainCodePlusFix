#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_DPoint

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_DPoint.WBP_Menu_DPoint_C
// 0x0030 (0x0368 - 0x0338)
class UWBP_Menu_DPoint_C final : public URCUiMenuDetectivePoint
{
public:
	class UImage*                                 DPoint_DP;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DPoint_Num_Dummy00;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DPoint_Num_Dummy01;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DPoint_Num_Dummy02;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DPoint_Num_Dummy03;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DPoint_Num_Dummy04;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_DPoint_C">();
	}
	static class UWBP_Menu_DPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_DPoint_C>();
	}
};
static_assert(alignof(UWBP_Menu_DPoint_C) == 0x000008, "Wrong alignment on UWBP_Menu_DPoint_C");
static_assert(sizeof(UWBP_Menu_DPoint_C) == 0x000368, "Wrong size on UWBP_Menu_DPoint_C");
static_assert(offsetof(UWBP_Menu_DPoint_C, DPoint_DP) == 0x000338, "Member 'UWBP_Menu_DPoint_C::DPoint_DP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_DPoint_C, DPoint_Num_Dummy00) == 0x000340, "Member 'UWBP_Menu_DPoint_C::DPoint_Num_Dummy00' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_DPoint_C, DPoint_Num_Dummy01) == 0x000348, "Member 'UWBP_Menu_DPoint_C::DPoint_Num_Dummy01' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_DPoint_C, DPoint_Num_Dummy02) == 0x000350, "Member 'UWBP_Menu_DPoint_C::DPoint_Num_Dummy02' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_DPoint_C, DPoint_Num_Dummy03) == 0x000358, "Member 'UWBP_Menu_DPoint_C::DPoint_Num_Dummy03' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_DPoint_C, DPoint_Num_Dummy04) == 0x000360, "Member 'UWBP_Menu_DPoint_C::DPoint_Num_Dummy04' has a wrong offset!");

}
