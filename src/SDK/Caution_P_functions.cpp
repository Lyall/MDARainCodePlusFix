#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Caution_P

#include "Basic.hpp"

#include "Caution_P_classes.hpp"
#include "Caution_P_parameters.hpp"


namespace SDK
{

// Function Caution_P.Caution_P_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACaution_P_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Caution_P_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Caution_P.Caution_P_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACaution_P_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Caution_P_C", "ReceiveTick");

	Params::Caution_P_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Caution_P.Caution_P_C.ゲーム終了を知らせる汎用ウインドウが閉じたときのイベント
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACaution_P_C::m___________________________________________________________________________________(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Caution_P_C", "ゲーム終了を知らせる汎用ウインドウが閉じたときのイベント");

	Params::Caution_P_C_m___________________________________________________________________________________ Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Caution_P.Caution_P_C.ExecuteUbergraph_Caution_P
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACaution_P_C::ExecuteUbergraph_Caution_P(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Caution_P_C", "ExecuteUbergraph_Caution_P");

	Params::Caution_P_C_ExecuteUbergraph_Caution_P Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
