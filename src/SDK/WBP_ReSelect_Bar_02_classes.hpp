#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReSelect_Bar_02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ReSelect_Bar_02.WBP_ReSelect_Bar_02_C
// 0x0038 (0x0398 - 0x0360)
class UWBP_ReSelect_Bar_02_C final : public URCReUiSelectBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Glow;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ReSelect_Check_C*                  ReSelect_Check;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PushButton_C*                      Select_Button;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpUIParticle*                          SpParticle_Rain_1;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpUIParticle*                          SpParticle_Rain_2;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Base;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ReSelect_Bar_02(int32 EntryPoint);
	void OnChangeNormal();
	void OnChangeDisable();
	void OnChangeDecide();
	void OnChangeSelect();
	void OnShowStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ReSelect_Bar_02_C">();
	}
	static class UWBP_ReSelect_Bar_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ReSelect_Bar_02_C>();
	}
};
static_assert(alignof(UWBP_ReSelect_Bar_02_C) == 0x000008, "Wrong alignment on UWBP_ReSelect_Bar_02_C");
static_assert(sizeof(UWBP_ReSelect_Bar_02_C) == 0x000398, "Wrong size on UWBP_ReSelect_Bar_02_C");
static_assert(offsetof(UWBP_ReSelect_Bar_02_C, UberGraphFrame) == 0x000360, "Member 'UWBP_ReSelect_Bar_02_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_Bar_02_C, Img_Glow) == 0x000368, "Member 'UWBP_ReSelect_Bar_02_C::Img_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_Bar_02_C, ReSelect_Check) == 0x000370, "Member 'UWBP_ReSelect_Bar_02_C::ReSelect_Check' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_Bar_02_C, Select_Button) == 0x000378, "Member 'UWBP_ReSelect_Bar_02_C::Select_Button' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_Bar_02_C, SpParticle_Rain_1) == 0x000380, "Member 'UWBP_ReSelect_Bar_02_C::SpParticle_Rain_1' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_Bar_02_C, SpParticle_Rain_2) == 0x000388, "Member 'UWBP_ReSelect_Bar_02_C::SpParticle_Rain_2' has a wrong offset!");
static_assert(offsetof(UWBP_ReSelect_Bar_02_C, Window_Base) == 0x000390, "Member 'UWBP_ReSelect_Bar_02_C::Window_Base' has a wrong offset!");

}
