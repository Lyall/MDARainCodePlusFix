#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M00_00_00_Lighting_LevelInstance_12

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass M00_00_00_Lighting_LevelInstance_12.M00_00_00_Lighting_C
// 0x0050 (0x0278 - 0x0228)
class AM00_00_00_Lighting_C final : public ALevelScriptActor
{
public:
	struct FLinearColor                           InscatteringColor_Base;                            // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InscatteringColor_A;                               // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location_Base;                                     // 0x0248(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location_A;                                        // 0x0254(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Density_Base;                                      // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Density_A;                                         // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightFallOff_Base;                                // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightFallOff_A;                                   // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartDistance_Base;                                // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartDistance_A;                                   // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M00_00_00_Lighting_C">();
	}
	static class AM00_00_00_Lighting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AM00_00_00_Lighting_C>();
	}
};
static_assert(alignof(AM00_00_00_Lighting_C) == 0x000008, "Wrong alignment on AM00_00_00_Lighting_C");
static_assert(sizeof(AM00_00_00_Lighting_C) == 0x000278, "Wrong size on AM00_00_00_Lighting_C");
static_assert(offsetof(AM00_00_00_Lighting_C, InscatteringColor_Base) == 0x000228, "Member 'AM00_00_00_Lighting_C::InscatteringColor_Base' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, InscatteringColor_A) == 0x000238, "Member 'AM00_00_00_Lighting_C::InscatteringColor_A' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, Location_Base) == 0x000248, "Member 'AM00_00_00_Lighting_C::Location_Base' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, Location_A) == 0x000254, "Member 'AM00_00_00_Lighting_C::Location_A' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, Density_Base) == 0x000260, "Member 'AM00_00_00_Lighting_C::Density_Base' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, Density_A) == 0x000264, "Member 'AM00_00_00_Lighting_C::Density_A' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, HeightFallOff_Base) == 0x000268, "Member 'AM00_00_00_Lighting_C::HeightFallOff_Base' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, HeightFallOff_A) == 0x00026C, "Member 'AM00_00_00_Lighting_C::HeightFallOff_A' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, StartDistance_Base) == 0x000270, "Member 'AM00_00_00_Lighting_C::StartDistance_Base' has a wrong offset!");
static_assert(offsetof(AM00_00_00_Lighting_C, StartDistance_A) == 0x000274, "Member 'AM00_00_00_Lighting_C::StartDistance_A' has a wrong offset!");

}
