#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Zero1_common_Camera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass 01_common_Camera.01_common_Camera_C
// 0x0008 (0x0288 - 0x0280)
class AZero1_common_Camera_C final : public ARCLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_01_common_Camera(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"01_common_Camera_C">();
	}
	static class AZero1_common_Camera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AZero1_common_Camera_C>();
	}
};
static_assert(alignof(AZero1_common_Camera_C) == 0x000008, "Wrong alignment on AZero1_common_Camera_C");
static_assert(sizeof(AZero1_common_Camera_C) == 0x000288, "Wrong size on AZero1_common_Camera_C");
static_assert(offsetof(AZero1_common_Camera_C, UberGraphFrame) == 0x000280, "Member 'AZero1_common_Camera_C::UberGraphFrame' has a wrong offset!");

}
