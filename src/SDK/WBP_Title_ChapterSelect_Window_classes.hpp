#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_ChapterSelect_Window

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_ChapterSelect_Window.WBP_Title_ChapterSelect_Window_C
// 0x0030 (0x0358 - 0x0328)
class UWBP_Title_ChapterSelect_Window_C final : public URCTitleChapterSelectWindow
{
public:
	class UWidgetAnimation*                       AN_Off;                                            // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_ChapterSelect_Window_Item_C* Window_Item_00;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_ChapterSelect_Window_Item_C* Window_Item_01;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_ChapterSelect_Window_Item_C* Window_Item_02;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_ChapterSelect_Window_Item_C* Window_Item_back;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Pl;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_ChapterSelect_Window_C">();
	}
	static class UWBP_Title_ChapterSelect_Window_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_ChapterSelect_Window_C>();
	}
};
static_assert(alignof(UWBP_Title_ChapterSelect_Window_C) == 0x000008, "Wrong alignment on UWBP_Title_ChapterSelect_Window_C");
static_assert(sizeof(UWBP_Title_ChapterSelect_Window_C) == 0x000358, "Wrong size on UWBP_Title_ChapterSelect_Window_C");
static_assert(offsetof(UWBP_Title_ChapterSelect_Window_C, AN_Off) == 0x000328, "Member 'UWBP_Title_ChapterSelect_Window_C::AN_Off' has a wrong offset!");
static_assert(offsetof(UWBP_Title_ChapterSelect_Window_C, Window_Item_00) == 0x000330, "Member 'UWBP_Title_ChapterSelect_Window_C::Window_Item_00' has a wrong offset!");
static_assert(offsetof(UWBP_Title_ChapterSelect_Window_C, Window_Item_01) == 0x000338, "Member 'UWBP_Title_ChapterSelect_Window_C::Window_Item_01' has a wrong offset!");
static_assert(offsetof(UWBP_Title_ChapterSelect_Window_C, Window_Item_02) == 0x000340, "Member 'UWBP_Title_ChapterSelect_Window_C::Window_Item_02' has a wrong offset!");
static_assert(offsetof(UWBP_Title_ChapterSelect_Window_C, Window_Item_back) == 0x000348, "Member 'UWBP_Title_ChapterSelect_Window_C::Window_Item_back' has a wrong offset!");
static_assert(offsetof(UWBP_Title_ChapterSelect_Window_C, Window_Pl) == 0x000350, "Member 'UWBP_Title_ChapterSelect_Window_C::Window_Pl' has a wrong offset!");

}

