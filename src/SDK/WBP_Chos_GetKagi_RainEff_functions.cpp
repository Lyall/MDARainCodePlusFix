#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chos_GetKagi_RainEff

#include "Basic.hpp"

#include "WBP_Chos_GetKagi_RainEff_classes.hpp"
#include "WBP_Chos_GetKagi_RainEff_parameters.hpp"


namespace SDK
{

// Function WBP_Chos_GetKagi_RainEff.WBP_Chos_GetKagi_RainEff_C.Area Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBox2D                           New_Area                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UWBP_Chos_GetKagi_RainEff_C::Area_Set(const struct FBox2D& New_Area)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Chos_GetKagi_RainEff_C", "Area Set");

	Params::WBP_Chos_GetKagi_RainEff_C_Area_Set Parms{};

	Parms.New_Area = std::move(New_Area);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Chos_GetKagi_RainEff.WBP_Chos_GetKagi_RainEff_C.Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Chos_GetKagi_RainEff_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Chos_GetKagi_RainEff_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Chos_GetKagi_RainEff.WBP_Chos_GetKagi_RainEff_C.PositionSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Chos_GetKagi_RainEff_C::PositionSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Chos_GetKagi_RainEff_C", "PositionSet");

	UObject::ProcessEvent(Func, nullptr);
}

}
