#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RCRealGameModeBase

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RCRealGameModeBase.BP_RCRealGameModeBase_C
// 0x0008 (0x02D8 - 0x02D0)
class ABP_RCRealGameModeBase_C final : public ARCGameModeBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RCRealGameModeBase_C">();
	}
	static class ABP_RCRealGameModeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RCRealGameModeBase_C>();
	}
};
static_assert(alignof(ABP_RCRealGameModeBase_C) == 0x000008, "Wrong alignment on ABP_RCRealGameModeBase_C");
static_assert(sizeof(ABP_RCRealGameModeBase_C) == 0x0002D8, "Wrong size on ABP_RCRealGameModeBase_C");
static_assert(offsetof(ABP_RCRealGameModeBase_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_RCRealGameModeBase_C::DefaultSceneRoot' has a wrong offset!");

}
