#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Cont_SaveLoad

#include "Basic.hpp"

#include "WBP_Menu_Cont_SaveLoad_classes.hpp"
#include "WBP_Menu_Cont_SaveLoad_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Cont_SaveLoad.WBP_Menu_Cont_SaveLoad_C.Get_Img_Name_Brush_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_Menu_Cont_SaveLoad_C::Get_Img_Name_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Cont_SaveLoad_C", "Get_Img_Name_Brush_0");

	Params::WBP_Menu_Cont_SaveLoad_C_Get_Img_Name_Brush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

