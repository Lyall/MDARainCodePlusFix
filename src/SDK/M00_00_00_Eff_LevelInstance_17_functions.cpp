#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M00_00_00_Eff_LevelInstance_17

#include "Basic.hpp"

#include "M00_00_00_Eff_LevelInstance_17_classes.hpp"
#include "M00_00_00_Eff_LevelInstance_17_parameters.hpp"


namespace SDK
{

// Function M00_00_00_Eff_LevelInstance_17.M00_00_00_Eff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AM00_00_00_Eff_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M00_00_00_Eff_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function M00_00_00_Eff_LevelInstance_17.M00_00_00_Eff_C.OnEventLoadEnd_イベント_0
// (BlueprintCallable, BlueprintEvent)

void AM00_00_00_Eff_C::OnEventLoadEnd______________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M00_00_00_Eff_C", "OnEventLoadEnd_イベント_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function M00_00_00_Eff_LevelInstance_17.M00_00_00_Eff_C.ExecuteUbergraph_M00_00_00_Eff
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AM00_00_00_Eff_C::ExecuteUbergraph_M00_00_00_Eff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M00_00_00_Eff_C", "ExecuteUbergraph_M00_00_00_Eff");

	Params::M00_00_00_Eff_C_ExecuteUbergraph_M00_00_00_Eff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

