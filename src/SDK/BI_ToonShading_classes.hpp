#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_ToonShading

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BI_ToonShading.BI_ToonShading_C
// 0x0000 (0x0028 - 0x0028)
class IBI_ToonShading_C final : public IInterface
{
public:
	void IToonShading(bool Construction, class ABP_ToonScene_C* Scane);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_ToonShading_C">();
	}
	static class IBI_ToonShading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_ToonShading_C>();
	}
};
static_assert(alignof(IBI_ToonShading_C) == 0x000008, "Wrong alignment on IBI_ToonShading_C");
static_assert(sizeof(IBI_ToonShading_C) == 0x000028, "Wrong size on IBI_ToonShading_C");

}

