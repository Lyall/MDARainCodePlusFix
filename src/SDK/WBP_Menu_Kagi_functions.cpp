#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Kagi

#include "Basic.hpp"

#include "WBP_Menu_Kagi_classes.hpp"
#include "WBP_Menu_Kagi_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Kagi.WBP_Menu_Kagi_C.RegistTutorial
// (Event, Public, BlueprintEvent)

void UWBP_Menu_Kagi_C::RegistTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Kagi_C", "RegistTutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Kagi.WBP_Menu_Kagi_C.ExecuteUbergraph_WBP_Menu_Kagi
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Kagi_C::ExecuteUbergraph_WBP_Menu_Kagi(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Kagi_C", "ExecuteUbergraph_WBP_Menu_Kagi");

	Params::WBP_Menu_Kagi_C_ExecuteUbergraph_WBP_Menu_Kagi Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

