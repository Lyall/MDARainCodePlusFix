#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Int_Talk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Int_Talk.WBP_Int_Talk_C
// 0x0038 (0x03A8 - 0x0370)
class UWBP_Int_Talk_C final : public URCUiInteractTalk
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Int_Talk_Base_On_C*                Talk_Base_On;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Int_Talk_Dot_C*                    Talk_Dot;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Int_Talk_GoalIcon_C*               WBP_Int_Talk_GoalIcon;                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Int_Talk_GoalIcon_C*               WBP_Int_Talk_SubGoalIcon;                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Int_Talk_SubIcon_C*                WBP_Int_Talk_SubIcon;                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_TargetType;                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Int_Talk(int32 EntryPoint);
	void WaitLoop();
	void SequenceEvent__ENTRYPOINTWBP_Int_Talk_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Int_Talk_C">();
	}
	static class UWBP_Int_Talk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Int_Talk_C>();
	}
};
static_assert(alignof(UWBP_Int_Talk_C) == 0x000008, "Wrong alignment on UWBP_Int_Talk_C");
static_assert(sizeof(UWBP_Int_Talk_C) == 0x0003A8, "Wrong size on UWBP_Int_Talk_C");
static_assert(offsetof(UWBP_Int_Talk_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Int_Talk_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Int_Talk_C, Talk_Base_On) == 0x000378, "Member 'UWBP_Int_Talk_C::Talk_Base_On' has a wrong offset!");
static_assert(offsetof(UWBP_Int_Talk_C, Talk_Dot) == 0x000380, "Member 'UWBP_Int_Talk_C::Talk_Dot' has a wrong offset!");
static_assert(offsetof(UWBP_Int_Talk_C, WBP_Int_Talk_GoalIcon) == 0x000388, "Member 'UWBP_Int_Talk_C::WBP_Int_Talk_GoalIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Int_Talk_C, WBP_Int_Talk_SubGoalIcon) == 0x000390, "Member 'UWBP_Int_Talk_C::WBP_Int_Talk_SubGoalIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Int_Talk_C, WBP_Int_Talk_SubIcon) == 0x000398, "Member 'UWBP_Int_Talk_C::WBP_Int_Talk_SubIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Int_Talk_C, WidgetSwitcher_TargetType) == 0x0003A0, "Member 'UWBP_Int_Talk_C::WidgetSwitcher_TargetType' has a wrong offset!");

}

