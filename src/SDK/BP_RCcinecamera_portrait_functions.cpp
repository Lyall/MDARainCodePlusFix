#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RCcinecamera_portrait

#include "Basic.hpp"

#include "BP_RCcinecamera_portrait_classes.hpp"
#include "BP_RCcinecamera_portrait_parameters.hpp"


namespace SDK
{

// Function BP_RCcinecamera_portrait.BP_RCcinecamera_portrait_C.ExecuteUbergraph_BP_RCcinecamera_portrait
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RCcinecamera_portrait_C::ExecuteUbergraph_BP_RCcinecamera_portrait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RCcinecamera_portrait_C", "ExecuteUbergraph_BP_RCcinecamera_portrait");

	Params::BP_RCcinecamera_portrait_C_ExecuteUbergraph_BP_RCcinecamera_portrait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RCcinecamera_portrait.BP_RCcinecamera_portrait_C.名前の表示切り替え
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RCcinecamera_portrait_C::m__________________________(bool visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RCcinecamera_portrait_C", "名前の表示切り替え");

	Params::BP_RCcinecamera_portrait_C_m__________________________ Parms{};

	Parms.visible = visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RCcinecamera_portrait.BP_RCcinecamera_portrait_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RCcinecamera_portrait_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RCcinecamera_portrait_C", "ReceiveActorBeginOverlap");

	Params::BP_RCcinecamera_portrait_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RCcinecamera_portrait.BP_RCcinecamera_portrait_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RCcinecamera_portrait_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RCcinecamera_portrait_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RCcinecamera_portrait.BP_RCcinecamera_portrait_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RCcinecamera_portrait_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RCcinecamera_portrait_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
