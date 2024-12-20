#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RCInstanceTransform

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "RC_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RCInstanceTransform.BP_RCInstanceTransform_C
// 0x0068 (0x02F0 - 0x0288)
class ABP_RCInstanceTransform_C final : public ARCInstanceTransformer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BG_InteractiveGrassManager_C*       manager;                                           // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                transformerLocation;                               // 0x02A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         currentUpdateInterval;                             // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         transformDuration;                                 // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         updatesPerSecond;                                  // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         alphaAdd;                                          // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceToViewTarget;                              // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ERCGrassStatus>                        addStatusesAfterDone;                              // 0x02C0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<ERCGrassStatus>                        removeStatusesAfterDone;                           // 0x02D0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          backToOriginalAfterDone;                           // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2E1[0x3];                                      // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         previousDistance;                                  // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         instanceToStopUpdating;                            // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RCInstanceTransform(int32 EntryPoint);
	void StopUpdateManagement();
	void Stop_Interval();
	void UpdateInstanceTransform();
	void Re_setTimer();
	void StartUpdateManagement();
	void ComponentUnloadedViaStreaming();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RCInstanceTransform_C">();
	}
	static class ABP_RCInstanceTransform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RCInstanceTransform_C>();
	}
};
static_assert(alignof(ABP_RCInstanceTransform_C) == 0x000008, "Wrong alignment on ABP_RCInstanceTransform_C");
static_assert(sizeof(ABP_RCInstanceTransform_C) == 0x0002F0, "Wrong size on ABP_RCInstanceTransform_C");
static_assert(offsetof(ABP_RCInstanceTransform_C, UberGraphFrame) == 0x000288, "Member 'ABP_RCInstanceTransform_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_RCInstanceTransform_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, manager) == 0x000298, "Member 'ABP_RCInstanceTransform_C::manager' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, transformerLocation) == 0x0002A0, "Member 'ABP_RCInstanceTransform_C::transformerLocation' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, currentUpdateInterval) == 0x0002AC, "Member 'ABP_RCInstanceTransform_C::currentUpdateInterval' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, transformDuration) == 0x0002B0, "Member 'ABP_RCInstanceTransform_C::transformDuration' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, updatesPerSecond) == 0x0002B4, "Member 'ABP_RCInstanceTransform_C::updatesPerSecond' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, alphaAdd) == 0x0002B8, "Member 'ABP_RCInstanceTransform_C::alphaAdd' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, DistanceToViewTarget) == 0x0002BC, "Member 'ABP_RCInstanceTransform_C::DistanceToViewTarget' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, addStatusesAfterDone) == 0x0002C0, "Member 'ABP_RCInstanceTransform_C::addStatusesAfterDone' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, removeStatusesAfterDone) == 0x0002D0, "Member 'ABP_RCInstanceTransform_C::removeStatusesAfterDone' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, backToOriginalAfterDone) == 0x0002E0, "Member 'ABP_RCInstanceTransform_C::backToOriginalAfterDone' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, previousDistance) == 0x0002E4, "Member 'ABP_RCInstanceTransform_C::previousDistance' has a wrong offset!");
static_assert(offsetof(ABP_RCInstanceTransform_C, instanceToStopUpdating) == 0x0002E8, "Member 'ABP_RCInstanceTransform_C::instanceToStopUpdating' has a wrong offset!");

}

