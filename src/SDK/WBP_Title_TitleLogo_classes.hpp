#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_TitleLogo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_TitleLogo.WBP_Title_TitleLogo_C
// 0x0018 (0x0358 - 0x0340)
class UWBP_Title_TitleLogo_C final : public URCTitleLogo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_EffectArea;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_TitleLogo_PressButton_C*     PressButton;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Title_TitleLogo(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_TitleLogo_C">();
	}
	static class UWBP_Title_TitleLogo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_TitleLogo_C>();
	}
};
static_assert(alignof(UWBP_Title_TitleLogo_C) == 0x000008, "Wrong alignment on UWBP_Title_TitleLogo_C");
static_assert(sizeof(UWBP_Title_TitleLogo_C) == 0x000358, "Wrong size on UWBP_Title_TitleLogo_C");
static_assert(offsetof(UWBP_Title_TitleLogo_C, UberGraphFrame) == 0x000340, "Member 'UWBP_Title_TitleLogo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Title_TitleLogo_C, Canvas_EffectArea) == 0x000348, "Member 'UWBP_Title_TitleLogo_C::Canvas_EffectArea' has a wrong offset!");
static_assert(offsetof(UWBP_Title_TitleLogo_C, PressButton) == 0x000350, "Member 'UWBP_Title_TitleLogo_C::PressButton' has a wrong offset!");

}
