#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_SubStory_Window

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_SubStory_Window.WBP_Title_SubStory_Window_C
// 0x0028 (0x0380 - 0x0358)
class UWBP_Title_SubStory_Window_C final : public URCTitleSubStoryWindow
{
public:
	class UWBP_Title_SubStory_Window_Item_C*      Window_Item_00;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SubStory_Window_Item_C*      Window_Item_01;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SubStory_Window_Item_C*      Window_Item_02;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SubStory_Window_Item_C*      Window_Item_back;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Pl;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_SubStory_Window_C">();
	}
	static class UWBP_Title_SubStory_Window_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_SubStory_Window_C>();
	}
};
static_assert(alignof(UWBP_Title_SubStory_Window_C) == 0x000008, "Wrong alignment on UWBP_Title_SubStory_Window_C");
static_assert(sizeof(UWBP_Title_SubStory_Window_C) == 0x000380, "Wrong size on UWBP_Title_SubStory_Window_C");
static_assert(offsetof(UWBP_Title_SubStory_Window_C, Window_Item_00) == 0x000358, "Member 'UWBP_Title_SubStory_Window_C::Window_Item_00' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_Window_C, Window_Item_01) == 0x000360, "Member 'UWBP_Title_SubStory_Window_C::Window_Item_01' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_Window_C, Window_Item_02) == 0x000368, "Member 'UWBP_Title_SubStory_Window_C::Window_Item_02' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_Window_C, Window_Item_back) == 0x000370, "Member 'UWBP_Title_SubStory_Window_C::Window_Item_back' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SubStory_Window_C, Window_Pl) == 0x000378, "Member 'UWBP_Title_SubStory_Window_C::Window_Pl' has a wrong offset!");

}

