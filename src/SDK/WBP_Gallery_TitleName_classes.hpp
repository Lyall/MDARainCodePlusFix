#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Gallery_TitleName

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Gallery_TitleName.WBP_Gallery_TitleName_C
// 0x0008 (0x02F8 - 0x02F0)
class UWBP_Gallery_TitleName_C final : public URCTitleGalleryName
{
public:
	class UImage*                                 Img_Text;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Gallery_TitleName_C">();
	}
	static class UWBP_Gallery_TitleName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Gallery_TitleName_C>();
	}
};
static_assert(alignof(UWBP_Gallery_TitleName_C) == 0x000008, "Wrong alignment on UWBP_Gallery_TitleName_C");
static_assert(sizeof(UWBP_Gallery_TitleName_C) == 0x0002F8, "Wrong size on UWBP_Gallery_TitleName_C");
static_assert(offsetof(UWBP_Gallery_TitleName_C, Img_Text) == 0x0002F0, "Member 'UWBP_Gallery_TitleName_C::Img_Text' has a wrong offset!");

}

