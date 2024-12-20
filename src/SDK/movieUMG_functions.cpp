#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: movieUMG

#include "Basic.hpp"

#include "movieUMG_classes.hpp"
#include "movieUMG_parameters.hpp"


namespace SDK
{

// Function movieUMG.movieUMG_C.Get_movieImage_Brush_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UmovieUMG_C::Get_movieImage_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("movieUMG_C", "Get_movieImage_Brush_0");

	Params::movieUMG_C_Get_movieImage_Brush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

