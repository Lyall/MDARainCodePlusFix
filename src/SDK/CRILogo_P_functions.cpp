#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CRILogo_P

#include "Basic.hpp"

#include "CRILogo_P_classes.hpp"
#include "CRILogo_P_parameters.hpp"


namespace SDK
{

// Function CRILogo_P.CRILogo_P_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACRILogo_P_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CRILogo_P_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CRILogo_P.CRILogo_P_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACRILogo_P_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CRILogo_P_C", "ReceiveTick");

	Params::CRILogo_P_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CRILogo_P.CRILogo_P_C.ExecuteUbergraph_CRILogo_P
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACRILogo_P_C::ExecuteUbergraph_CRILogo_P(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CRILogo_P_C", "ExecuteUbergraph_CRILogo_P");

	Params::CRILogo_P_C_ExecuteUbergraph_CRILogo_P Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

