#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Int_TextPl

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Int_TextPl.WBP_Int_TextPl_C
// 0x0008 (0x0320 - 0x0318)
class UWBP_Int_TextPl_C final : public URCUiInteractText
{
public:
	class UImage*                                 TextPl;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Int_TextPl_C">();
	}
	static class UWBP_Int_TextPl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Int_TextPl_C>();
	}
};
static_assert(alignof(UWBP_Int_TextPl_C) == 0x000008, "Wrong alignment on UWBP_Int_TextPl_C");
static_assert(sizeof(UWBP_Int_TextPl_C) == 0x000320, "Wrong size on UWBP_Int_TextPl_C");
static_assert(offsetof(UWBP_Int_TextPl_C, TextPl) == 0x000318, "Member 'UWBP_Int_TextPl_C::TextPl' has a wrong offset!");

}

