#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Attach063

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Attach063.BP_Attach063_C
// 0x0010 (0x02A8 - 0x0298)
class ABP_Attach063_C final : public ARCAttachmentActor
{
public:
	class USkeletalMeshComponent*                 SK_Attach063_0000;                                 // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Attach063_C">();
	}
	static class ABP_Attach063_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Attach063_C>();
	}
};
static_assert(alignof(ABP_Attach063_C) == 0x000008, "Wrong alignment on ABP_Attach063_C");
static_assert(sizeof(ABP_Attach063_C) == 0x0002A8, "Wrong size on ABP_Attach063_C");
static_assert(offsetof(ABP_Attach063_C, SK_Attach063_0000) == 0x000298, "Member 'ABP_Attach063_C::SK_Attach063_0000' has a wrong offset!");
static_assert(offsetof(ABP_Attach063_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_Attach063_C::DefaultSceneRoot' has a wrong offset!");

}
