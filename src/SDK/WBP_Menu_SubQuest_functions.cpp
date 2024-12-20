#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_SubQuest

#include "Basic.hpp"

#include "WBP_Menu_SubQuest_classes.hpp"
#include "WBP_Menu_SubQuest_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_SubQuest.WBP_Menu_SubQuest_C.ExecuteUbergraph_WBP_Menu_SubQuest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_SubQuest_C::ExecuteUbergraph_WBP_Menu_SubQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_SubQuest_C", "ExecuteUbergraph_WBP_Menu_SubQuest");

	Params::WBP_Menu_SubQuest_C_ExecuteUbergraph_WBP_Menu_SubQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_SubQuest.WBP_Menu_SubQuest_C.RegistTutorial
// (Event, Public, BlueprintEvent)

void UWBP_Menu_SubQuest_C::RegistTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_SubQuest_C", "RegistTutorial");

	UObject::ProcessEvent(Func, nullptr);
}

}

