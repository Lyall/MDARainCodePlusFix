#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Skill_Select

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Skill_Select.WBP_Menu_Skill_Select_C
// 0x0020 (0x0350 - 0x0330)
class UWBP_Menu_Skill_Select_C final : public URCUiMenuSkillSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AN_Idle;                                           // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Skill_Sel_Btn_Skill_C*        Button_Skill;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Skill_Sel_Btn_Status_C*       Button_Status;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnShowFinished();
	void RegistTutorial();
	void ExecuteUbergraph_WBP_Menu_Skill_Select(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Skill_Select_C">();
	}
	static class UWBP_Menu_Skill_Select_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Skill_Select_C>();
	}
};
static_assert(alignof(UWBP_Menu_Skill_Select_C) == 0x000008, "Wrong alignment on UWBP_Menu_Skill_Select_C");
static_assert(sizeof(UWBP_Menu_Skill_Select_C) == 0x000350, "Wrong size on UWBP_Menu_Skill_Select_C");
static_assert(offsetof(UWBP_Menu_Skill_Select_C, UberGraphFrame) == 0x000330, "Member 'UWBP_Menu_Skill_Select_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Skill_Select_C, AN_Idle) == 0x000338, "Member 'UWBP_Menu_Skill_Select_C::AN_Idle' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Skill_Select_C, Button_Skill) == 0x000340, "Member 'UWBP_Menu_Skill_Select_C::Button_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Skill_Select_C, Button_Status) == 0x000348, "Member 'UWBP_Menu_Skill_Select_C::Button_Status' has a wrong offset!");

}
