#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_NzSkill_SetIcon_Class_Attack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_NzSkill_SetIcon_Class_Attack.WBP_Menu_NzSkill_SetIcon_Class_Attack_C
// 0x0018 (0x0300 - 0x02E8)
class UWBP_Menu_NzSkill_SetIcon_Class_Attack_C final : public URCUiMenuCommonIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Text_SetIcon_Class_Attack;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Sts_Icon_Attack_C*            WBP_Menu_Sts_Icon_Attack;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Menu_NzSkill_SetIcon_Class_Attack(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_NzSkill_SetIcon_Class_Attack_C">();
	}
	static class UWBP_Menu_NzSkill_SetIcon_Class_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_NzSkill_SetIcon_Class_Attack_C>();
	}
};
static_assert(alignof(UWBP_Menu_NzSkill_SetIcon_Class_Attack_C) == 0x000008, "Wrong alignment on UWBP_Menu_NzSkill_SetIcon_Class_Attack_C");
static_assert(sizeof(UWBP_Menu_NzSkill_SetIcon_Class_Attack_C) == 0x000300, "Wrong size on UWBP_Menu_NzSkill_SetIcon_Class_Attack_C");
static_assert(offsetof(UWBP_Menu_NzSkill_SetIcon_Class_Attack_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_Menu_NzSkill_SetIcon_Class_Attack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_SetIcon_Class_Attack_C, Text_SetIcon_Class_Attack) == 0x0002F0, "Member 'UWBP_Menu_NzSkill_SetIcon_Class_Attack_C::Text_SetIcon_Class_Attack' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_NzSkill_SetIcon_Class_Attack_C, WBP_Menu_Sts_Icon_Attack) == 0x0002F8, "Member 'UWBP_Menu_NzSkill_SetIcon_Class_Attack_C::WBP_Menu_Sts_Icon_Attack' has a wrong offset!");

}

