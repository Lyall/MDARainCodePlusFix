#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_StartUp_Caution

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_StartUp_Caution.WBP_Title_StartUp_Caution_C
// 0x0000 (0x02D8 - 0x02D8)
class UWBP_Title_StartUp_Caution_C final : public URCStartupCaution
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_StartUp_Caution_C">();
	}
	static class UWBP_Title_StartUp_Caution_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_StartUp_Caution_C>();
	}
};
static_assert(alignof(UWBP_Title_StartUp_Caution_C) == 0x000008, "Wrong alignment on UWBP_Title_StartUp_Caution_C");
static_assert(sizeof(UWBP_Title_StartUp_Caution_C) == 0x0002D8, "Wrong size on UWBP_Title_StartUp_Caution_C");

}
