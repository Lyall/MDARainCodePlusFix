#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_NzSkill_SystemWindow

#include "Basic.hpp"

#include "WBP_Menu_NzSkill_SystemWindow_classes.hpp"
#include "WBP_Menu_NzSkill_SystemWindow_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_NzSkill_SystemWindow.WBP_Menu_NzSkill_SystemWindow_C.Set Text ID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     TextID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UTextBlock*>               TextBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_Menu_NzSkill_SystemWindow_C::Set_Text_ID(TArray<class FName>& TextID, TArray<class UTextBlock*>& TextBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_NzSkill_SystemWindow_C", "Set Text ID");

	Params::WBP_Menu_NzSkill_SystemWindow_C_Set_Text_ID Parms{};

	Parms.TextID = std::move(TextID);
	Parms.TextBlock = std::move(TextBlock);

	UObject::ProcessEvent(Func, &Parms);

	TextID = std::move(Parms.TextID);
	TextBlock = std::move(Parms.TextBlock);
}


// Function WBP_Menu_NzSkill_SystemWindow.WBP_Menu_NzSkill_SystemWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_NzSkill_SystemWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_NzSkill_SystemWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_NzSkill_SystemWindow.WBP_Menu_NzSkill_SystemWindow_C.ExecuteUbergraph_WBP_Menu_NzSkill_SystemWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_NzSkill_SystemWindow_C::ExecuteUbergraph_WBP_Menu_NzSkill_SystemWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_NzSkill_SystemWindow_C", "ExecuteUbergraph_WBP_Menu_NzSkill_SystemWindow");

	Params::WBP_Menu_NzSkill_SystemWindow_C_ExecuteUbergraph_WBP_Menu_NzSkill_SystemWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
