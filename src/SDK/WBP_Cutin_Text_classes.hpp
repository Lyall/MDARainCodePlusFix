#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cutin_Text

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cutin_Text.WBP_Cutin_Text_C
// 0x0008 (0x0320 - 0x0318)
class UWBP_Cutin_Text_C final : public URCUiCutInText
{
public:
	class UImage*                                 Img_Black;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cutin_Text_C">();
	}
	static class UWBP_Cutin_Text_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cutin_Text_C>();
	}
};
static_assert(alignof(UWBP_Cutin_Text_C) == 0x000008, "Wrong alignment on UWBP_Cutin_Text_C");
static_assert(sizeof(UWBP_Cutin_Text_C) == 0x000320, "Wrong size on UWBP_Cutin_Text_C");
static_assert(offsetof(UWBP_Cutin_Text_C, Img_Black) == 0x000318, "Member 'UWBP_Cutin_Text_C::Img_Black' has a wrong offset!");

}

