#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_NzSkill_SetIcon_Class_Speed

#include "Basic.hpp"

#include "WBP_Menu_NzSkill_SetIcon_Class_Speed_classes.hpp"
#include "WBP_Menu_NzSkill_SetIcon_Class_Speed_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_NzSkill_SetIcon_Class_Speed.WBP_Menu_NzSkill_SetIcon_Class_Speed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_NzSkill_SetIcon_Class_Speed_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_NzSkill_SetIcon_Class_Speed_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_NzSkill_SetIcon_Class_Speed.WBP_Menu_NzSkill_SetIcon_Class_Speed_C.ExecuteUbergraph_WBP_Menu_NzSkill_SetIcon_Class_Speed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_NzSkill_SetIcon_Class_Speed_C::ExecuteUbergraph_WBP_Menu_NzSkill_SetIcon_Class_Speed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_NzSkill_SetIcon_Class_Speed_C", "ExecuteUbergraph_WBP_Menu_NzSkill_SetIcon_Class_Speed");

	Params::WBP_Menu_NzSkill_SetIcon_Class_Speed_C_ExecuteUbergraph_WBP_Menu_NzSkill_SetIcon_Class_Speed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
