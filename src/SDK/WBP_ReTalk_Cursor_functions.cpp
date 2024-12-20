#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReTalk_Cursor

#include "Basic.hpp"

#include "WBP_ReTalk_Cursor_classes.hpp"
#include "WBP_ReTalk_Cursor_parameters.hpp"


namespace SDK
{

// Function WBP_ReTalk_Cursor.WBP_ReTalk_Cursor_C.ExecuteUbergraph_WBP_ReTalk_Cursor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ReTalk_Cursor_C::ExecuteUbergraph_WBP_ReTalk_Cursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReTalk_Cursor_C", "ExecuteUbergraph_WBP_ReTalk_Cursor");

	Params::WBP_ReTalk_Cursor_C_ExecuteUbergraph_WBP_ReTalk_Cursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ReTalk_Cursor.WBP_ReTalk_Cursor_C.OnShowFinished
// (Event, Public, BlueprintEvent)

void UWBP_ReTalk_Cursor_C::OnShowFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReTalk_Cursor_C", "OnShowFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ReTalk_Cursor.WBP_ReTalk_Cursor_C.OnShowStarted
// (Event, Public, BlueprintEvent)

void UWBP_ReTalk_Cursor_C::OnShowStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReTalk_Cursor_C", "OnShowStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ReTalk_Cursor.WBP_ReTalk_Cursor_C.OnHideStarted
// (Event, Public, BlueprintEvent)

void UWBP_ReTalk_Cursor_C::OnHideStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReTalk_Cursor_C", "OnHideStarted");

	UObject::ProcessEvent(Func, nullptr);
}

}

