#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_License

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_License.WBP_Title_License_C
// 0x0018 (0x0338 - 0x0320)
class UWBP_Title_License_C final : public URCTitleLicense
{
public:
	class UImage*                                 Bg_Black;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpUIScrollBox*                         SpUIScrollBox_License;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BTNGuide_Layout_R_Line1_C*         WBP_BTNGuide_Layout_R_Line1;                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_License_C">();
	}
	static class UWBP_Title_License_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_License_C>();
	}
};
static_assert(alignof(UWBP_Title_License_C) == 0x000008, "Wrong alignment on UWBP_Title_License_C");
static_assert(sizeof(UWBP_Title_License_C) == 0x000338, "Wrong size on UWBP_Title_License_C");
static_assert(offsetof(UWBP_Title_License_C, Bg_Black) == 0x000320, "Member 'UWBP_Title_License_C::Bg_Black' has a wrong offset!");
static_assert(offsetof(UWBP_Title_License_C, SpUIScrollBox_License) == 0x000328, "Member 'UWBP_Title_License_C::SpUIScrollBox_License' has a wrong offset!");
static_assert(offsetof(UWBP_Title_License_C, WBP_BTNGuide_Layout_R_Line1) == 0x000330, "Member 'UWBP_Title_License_C::WBP_BTNGuide_Layout_R_Line1' has a wrong offset!");

}

