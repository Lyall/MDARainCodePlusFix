#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BG_AnimRotation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BG_AnimRotation.BP_BG_AnimRotation_C
// 0x00B0 (0x0358 - 0x02A8)
class ABP_BG_AnimRotation_C final : public ARCCustomEventActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         m______0___Track_0_EF8519764FBA57FF128752B08147DC67; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            m______0__Direction_EF8519764FBA57FF128752B08147DC67; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BD[0x3];                                      // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     m__________________0;                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimB___Track_0_45C05EC04578CB5D1B673CACE89EFED1;  // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AnimB__Direction_45C05EC04578CB5D1B673CACE89EFED1; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CD[0x3];                                      // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AnimB;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimA___Track_0_9FFC4ED744DA3FB733770EA99C7BCEE4;  // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AnimA__Direction_9FFC4ED744DA3FB733770EA99C7BCEE4; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AnimA;                                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DefaultRotation;                                   // 0x02EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetRotation_A;                                  // 0x02F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetRotation_B;                                  // 0x0304(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetRotation_C;                                  // 0x0310(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TargetA;                                           // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TargetB;                                           // 0x031D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoDefaultPosSet;                                 // 0x031E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31F[0x1];                                      // 0x031F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               TargetRotation_A_0;                                // 0x0320(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetRotation_B_0;                                // 0x032C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetRotation_C_0;                                // 0x0338(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TargetC;                                           // 0x0344(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_345[0x3];                                      // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 m______________;                                   // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          OpenA;                                             // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OpenB;                                             // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OpenC;                                             // 0x0352(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PlayingTimeline;                                   // 0x0353(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BG_AnimRotation(int32 EntryPoint);
	void AnimA__UpdateFunc();
	void m___________________________________();
	void AnimA__FinishedFunc();
	void AnimB__UpdateFunc();
	void AnimB__FinishedFunc();
	void m__________________0__UpdateFunc();
	void m__________________0__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BG_AnimRotation_C">();
	}
	static class ABP_BG_AnimRotation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BG_AnimRotation_C>();
	}
};
static_assert(alignof(ABP_BG_AnimRotation_C) == 0x000008, "Wrong alignment on ABP_BG_AnimRotation_C");
static_assert(sizeof(ABP_BG_AnimRotation_C) == 0x000358, "Wrong size on ABP_BG_AnimRotation_C");
static_assert(offsetof(ABP_BG_AnimRotation_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_BG_AnimRotation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_BG_AnimRotation_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, m______0___Track_0_EF8519764FBA57FF128752B08147DC67) == 0x0002B8, "Member 'ABP_BG_AnimRotation_C::m______0___Track_0_EF8519764FBA57FF128752B08147DC67' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, m______0__Direction_EF8519764FBA57FF128752B08147DC67) == 0x0002BC, "Member 'ABP_BG_AnimRotation_C::m______0__Direction_EF8519764FBA57FF128752B08147DC67' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, m__________________0) == 0x0002C0, "Member 'ABP_BG_AnimRotation_C::m__________________0' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, AnimB___Track_0_45C05EC04578CB5D1B673CACE89EFED1) == 0x0002C8, "Member 'ABP_BG_AnimRotation_C::AnimB___Track_0_45C05EC04578CB5D1B673CACE89EFED1' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, AnimB__Direction_45C05EC04578CB5D1B673CACE89EFED1) == 0x0002CC, "Member 'ABP_BG_AnimRotation_C::AnimB__Direction_45C05EC04578CB5D1B673CACE89EFED1' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, AnimB) == 0x0002D0, "Member 'ABP_BG_AnimRotation_C::AnimB' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, AnimA___Track_0_9FFC4ED744DA3FB733770EA99C7BCEE4) == 0x0002D8, "Member 'ABP_BG_AnimRotation_C::AnimA___Track_0_9FFC4ED744DA3FB733770EA99C7BCEE4' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, AnimA__Direction_9FFC4ED744DA3FB733770EA99C7BCEE4) == 0x0002DC, "Member 'ABP_BG_AnimRotation_C::AnimA__Direction_9FFC4ED744DA3FB733770EA99C7BCEE4' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, AnimA) == 0x0002E0, "Member 'ABP_BG_AnimRotation_C::AnimA' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, PlayRate) == 0x0002E8, "Member 'ABP_BG_AnimRotation_C::PlayRate' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, DefaultRotation) == 0x0002EC, "Member 'ABP_BG_AnimRotation_C::DefaultRotation' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetRotation_A) == 0x0002F8, "Member 'ABP_BG_AnimRotation_C::TargetRotation_A' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetRotation_B) == 0x000304, "Member 'ABP_BG_AnimRotation_C::TargetRotation_B' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetRotation_C) == 0x000310, "Member 'ABP_BG_AnimRotation_C::TargetRotation_C' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetA) == 0x00031C, "Member 'ABP_BG_AnimRotation_C::TargetA' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetB) == 0x00031D, "Member 'ABP_BG_AnimRotation_C::TargetB' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, AutoDefaultPosSet) == 0x00031E, "Member 'ABP_BG_AnimRotation_C::AutoDefaultPosSet' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetRotation_A_0) == 0x000320, "Member 'ABP_BG_AnimRotation_C::TargetRotation_A_0' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetRotation_B_0) == 0x00032C, "Member 'ABP_BG_AnimRotation_C::TargetRotation_B_0' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetRotation_C_0) == 0x000338, "Member 'ABP_BG_AnimRotation_C::TargetRotation_C_0' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, TargetC) == 0x000344, "Member 'ABP_BG_AnimRotation_C::TargetC' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, m______________) == 0x000348, "Member 'ABP_BG_AnimRotation_C::m______________' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, OpenA) == 0x000350, "Member 'ABP_BG_AnimRotation_C::OpenA' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, OpenB) == 0x000351, "Member 'ABP_BG_AnimRotation_C::OpenB' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, OpenC) == 0x000352, "Member 'ABP_BG_AnimRotation_C::OpenC' has a wrong offset!");
static_assert(offsetof(ABP_BG_AnimRotation_C, PlayingTimeline) == 0x000353, "Member 'ABP_BG_AnimRotation_C::PlayingTimeline' has a wrong offset!");

}

