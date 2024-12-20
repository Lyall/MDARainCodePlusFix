#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ToonDirectionalLight

#include "Basic.hpp"

#include "BP_ToonDirectionalLight_classes.hpp"
#include "BP_ToonDirectionalLight_parameters.hpp"


namespace SDK
{

// Function BP_ToonDirectionalLight.BP_ToonDirectionalLight_C.ApplySettings
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ToonDirectionalLight_C::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonDirectionalLight_C", "ApplySettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ToonDirectionalLight.BP_ToonDirectionalLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ToonDirectionalLight_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonDirectionalLight_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ToonDirectionalLight.BP_ToonDirectionalLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ToonDirectionalLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonDirectionalLight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ToonDirectionalLight.BP_ToonDirectionalLight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ToonDirectionalLight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonDirectionalLight_C", "ReceiveTick");

	Params::BP_ToonDirectionalLight_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ToonDirectionalLight.BP_ToonDirectionalLight_C.ExecuteUbergraph_BP_ToonDirectionalLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ToonDirectionalLight_C::ExecuteUbergraph_BP_ToonDirectionalLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonDirectionalLight_C", "ExecuteUbergraph_BP_ToonDirectionalLight");

	Params::BP_ToonDirectionalLight_C_ExecuteUbergraph_BP_ToonDirectionalLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

