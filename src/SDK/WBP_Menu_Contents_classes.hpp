#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Contents

#include "Basic.hpp"

#include "RC_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Contents.WBP_Menu_Contents_C
// 0x0050 (0x03B0 - 0x0360)
class UWBP_Menu_Contents_C final : public URCUiMenuContents
{
public:
	class UWBP_Menu_Cont_Character_C*             Menu_Cont_Character;                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_Collect_C*               Menu_Cont_Collect;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_Glossary_C*              Menu_Cont_Glossary;                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_Kagi_C*                  Menu_Cont_Kagi;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_Option_C*                Menu_Cont_Option;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_Quest_C*                 Menu_Cont_Quest;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_SaveLoad_C*              Menu_Cont_SaveLoad;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_Skill_C*                 Menu_Cont_Skill;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_SubQuest_C*              Menu_Cont_SubQuest;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Cont_WorldMap_C*              Menu_Cont_WorldMap;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidget* ButtonNavigation(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Contents_C">();
	}
	static class UWBP_Menu_Contents_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Contents_C>();
	}
};
static_assert(alignof(UWBP_Menu_Contents_C) == 0x000008, "Wrong alignment on UWBP_Menu_Contents_C");
static_assert(sizeof(UWBP_Menu_Contents_C) == 0x0003B0, "Wrong size on UWBP_Menu_Contents_C");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_Character) == 0x000360, "Member 'UWBP_Menu_Contents_C::Menu_Cont_Character' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_Collect) == 0x000368, "Member 'UWBP_Menu_Contents_C::Menu_Cont_Collect' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_Glossary) == 0x000370, "Member 'UWBP_Menu_Contents_C::Menu_Cont_Glossary' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_Kagi) == 0x000378, "Member 'UWBP_Menu_Contents_C::Menu_Cont_Kagi' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_Option) == 0x000380, "Member 'UWBP_Menu_Contents_C::Menu_Cont_Option' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_Quest) == 0x000388, "Member 'UWBP_Menu_Contents_C::Menu_Cont_Quest' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_SaveLoad) == 0x000390, "Member 'UWBP_Menu_Contents_C::Menu_Cont_SaveLoad' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_Skill) == 0x000398, "Member 'UWBP_Menu_Contents_C::Menu_Cont_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_SubQuest) == 0x0003A0, "Member 'UWBP_Menu_Contents_C::Menu_Cont_SubQuest' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Contents_C, Menu_Cont_WorldMap) == 0x0003A8, "Member 'UWBP_Menu_Contents_C::Menu_Cont_WorldMap' has a wrong offset!");

}

