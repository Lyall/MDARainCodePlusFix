#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterBPLib

#include "Basic.hpp"

#include "CharacterBPLib_classes.hpp"
#include "CharacterBPLib_parameters.hpp"


namespace SDK
{

// Function CharacterBPLib.CharacterBPLib_C.ToonShading
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ToonComponent_C*              BPToonComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Construction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ToonScene_C*                  Scene                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterBPLib_C::ToonShading(class UBP_ToonComponent_C* BPToonComponent, bool Construction, class USkeletalMeshComponent* Mesh, class ABP_ToonScene_C* Scene, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterBPLib_C", "ToonShading");

	Params::CharacterBPLib_C_ToonShading Parms{};

	Parms.BPToonComponent = BPToonComponent;
	Parms.Construction = Construction;
	Parms.Mesh = Mesh;
	Parms.Scene = Scene;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CharacterBPLib.CharacterBPLib_C.EyeProcessing
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           MasterMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           EyeMaterialMesh                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeJointNameLeft                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeJointNameRight                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballUVParameterLeft                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballUVParameterRight                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballScaleLeft                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballScaleRight                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballRotatingLeft                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballRotatingRight                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterBPLib_C::EyeProcessing(class USkeletalMeshComponent* MasterMesh, class USkeletalMeshComponent* EyeMaterialMesh, class FName EyeJointNameLeft, class FName EyeJointNameRight, class FName EyeballUVParameterLeft, class FName EyeballUVParameterRight, class FName EyeballScaleLeft, class FName EyeballScaleRight, class FName EyeballRotatingLeft, class FName EyeballRotatingRight, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterBPLib_C", "EyeProcessing");

	Params::CharacterBPLib_C_EyeProcessing Parms{};

	Parms.MasterMesh = MasterMesh;
	Parms.EyeMaterialMesh = EyeMaterialMesh;
	Parms.EyeJointNameLeft = EyeJointNameLeft;
	Parms.EyeJointNameRight = EyeJointNameRight;
	Parms.EyeballUVParameterLeft = EyeballUVParameterLeft;
	Parms.EyeballUVParameterRight = EyeballUVParameterRight;
	Parms.EyeballScaleLeft = EyeballScaleLeft;
	Parms.EyeballScaleRight = EyeballScaleRight;
	Parms.EyeballRotatingLeft = EyeballRotatingLeft;
	Parms.EyeballRotatingRight = EyeballRotatingRight;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CharacterBPLib.CharacterBPLib_C.SetNPCCollision
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Collision                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCapsuleComponent*                Capsule                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterBPLib_C::SetNPCCollision(bool Collision, class UCapsuleComponent* Capsule, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterBPLib_C", "SetNPCCollision");

	Params::CharacterBPLib_C_SetNPCCollision Parms{};

	Parms.Collision = Collision;
	Parms.Capsule = Capsule;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CharacterBPLib.CharacterBPLib_C.EyeLightProcessing
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           MasterMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           EyeMaterialMesh                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeJointNameLeft                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeJointNameRight                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballUVParameterLeft                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballUVParameterRight                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballScaleLeft                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballScaleRight                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballRotatingLeft                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballRotatingRight                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParentEyeJointNameLeft                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParentEyeJointNameRight                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterBPLib_C::EyeLightProcessing(class USkeletalMeshComponent* MasterMesh, class USkeletalMeshComponent* EyeMaterialMesh, class FName EyeJointNameLeft, class FName EyeJointNameRight, class FName EyeballUVParameterLeft, class FName EyeballUVParameterRight, class FName EyeballScaleLeft, class FName EyeballScaleRight, class FName EyeballRotatingLeft, class FName EyeballRotatingRight, class FName ParentEyeJointNameLeft, class FName ParentEyeJointNameRight, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterBPLib_C", "EyeLightProcessing");

	Params::CharacterBPLib_C_EyeLightProcessing Parms{};

	Parms.MasterMesh = MasterMesh;
	Parms.EyeMaterialMesh = EyeMaterialMesh;
	Parms.EyeJointNameLeft = EyeJointNameLeft;
	Parms.EyeJointNameRight = EyeJointNameRight;
	Parms.EyeballUVParameterLeft = EyeballUVParameterLeft;
	Parms.EyeballUVParameterRight = EyeballUVParameterRight;
	Parms.EyeballScaleLeft = EyeballScaleLeft;
	Parms.EyeballScaleRight = EyeballScaleRight;
	Parms.EyeballRotatingLeft = EyeballRotatingLeft;
	Parms.EyeballRotatingRight = EyeballRotatingRight;
	Parms.ParentEyeJointNameLeft = ParentEyeJointNameLeft;
	Parms.ParentEyeJointNameRight = ParentEyeJointNameRight;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CharacterBPLib.CharacterBPLib_C.EyeLightProcessing_EventCharacter
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           MasterMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           EyeMaterialMesh                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeJointNameLeft                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeJointNameRight                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballUVParameterLeft                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballUVParameterRight                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballScaleLeft                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballScaleRight                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballRotatingLeft                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeballRotatingRight                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParentEyeJointNameLeft                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParentEyeJointNameRight                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterBPLib_C::EyeLightProcessing_EventCharacter(class USkeletalMeshComponent* MasterMesh, class USkeletalMeshComponent* EyeMaterialMesh, class FName EyeJointNameLeft, class FName EyeJointNameRight, class FName EyeballUVParameterLeft, class FName EyeballUVParameterRight, class FName EyeballScaleLeft, class FName EyeballScaleRight, class FName EyeballRotatingLeft, class FName EyeballRotatingRight, class FName ParentEyeJointNameLeft, class FName ParentEyeJointNameRight, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterBPLib_C", "EyeLightProcessing_EventCharacter");

	Params::CharacterBPLib_C_EyeLightProcessing_EventCharacter Parms{};

	Parms.MasterMesh = MasterMesh;
	Parms.EyeMaterialMesh = EyeMaterialMesh;
	Parms.EyeJointNameLeft = EyeJointNameLeft;
	Parms.EyeJointNameRight = EyeJointNameRight;
	Parms.EyeballUVParameterLeft = EyeballUVParameterLeft;
	Parms.EyeballUVParameterRight = EyeballUVParameterRight;
	Parms.EyeballScaleLeft = EyeballScaleLeft;
	Parms.EyeballScaleRight = EyeballScaleRight;
	Parms.EyeballRotatingLeft = EyeballRotatingLeft;
	Parms.EyeballRotatingRight = EyeballRotatingRight;
	Parms.ParentEyeJointNameLeft = ParentEyeJointNameLeft;
	Parms.ParentEyeJointNameRight = ParentEyeJointNameRight;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
