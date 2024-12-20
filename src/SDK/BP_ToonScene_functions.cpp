#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ToonScene

#include "Basic.hpp"

#include "BP_ToonScene_classes.hpp"
#include "BP_ToonScene_parameters.hpp"


namespace SDK
{

// Function BP_ToonScene.BP_ToonScene_C.ExecuteUbergraph_BP_ToonScene
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ToonScene_C::ExecuteUbergraph_BP_ToonScene(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonScene_C", "ExecuteUbergraph_BP_ToonScene");

	Params::BP_ToonScene_C_ExecuteUbergraph_BP_ToonScene Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ToonScene.BP_ToonScene_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ToonScene_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonScene_C", "ReceiveTick");

	Params::BP_ToonScene_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ToonScene.BP_ToonScene_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ToonScene_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonScene_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ToonScene.BP_ToonScene_C.UpdateAllMeshesLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Constrution                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ToonScene_C::UpdateAllMeshesLighting(bool Constrution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonScene_C", "UpdateAllMeshesLighting");

	Params::BP_ToonScene_C_UpdateAllMeshesLighting Parms{};

	Parms.Constrution = Constrution;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ToonScene.BP_ToonScene_C.ApplyMeshLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MeshLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ToonScene_C::ApplyMeshLighting(class UMeshComponent* Mesh, const struct FVector& MeshLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ToonScene_C", "ApplyMeshLighting");

	Params::BP_ToonScene_C_ApplyMeshLighting Parms{};

	Parms.Mesh = Mesh;
	Parms.MeshLocation = std::move(MeshLocation);

	UObject::ProcessEvent(Func, &Parms);
}

}

