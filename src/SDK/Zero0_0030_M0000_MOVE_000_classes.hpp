#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Zero0_0030_M0000_MOVE_000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass 00_0030_M0000_MOVE_000.00_0030_M0000_MOVE_000_C
// 0x0008 (0x0230 - 0x0228)
class AZero0_0030_M0000_MOVE_000_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_00_0030_M0000_MOVE_000(int32 EntryPoint);
	void ReturnToMovefromCheck();
	void ReturnToMove();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"00_0030_M0000_MOVE_000_C">();
	}
	static class AZero0_0030_M0000_MOVE_000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AZero0_0030_M0000_MOVE_000_C>();
	}
};
static_assert(alignof(AZero0_0030_M0000_MOVE_000_C) == 0x000008, "Wrong alignment on AZero0_0030_M0000_MOVE_000_C");
static_assert(sizeof(AZero0_0030_M0000_MOVE_000_C) == 0x000230, "Wrong size on AZero0_0030_M0000_MOVE_000_C");
static_assert(offsetof(AZero0_0030_M0000_MOVE_000_C, UberGraphFrame) == 0x000228, "Member 'AZero0_0030_M0000_MOVE_000_C::UberGraphFrame' has a wrong offset!");

}
