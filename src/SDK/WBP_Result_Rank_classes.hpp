#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Result_Rank

#include "Basic.hpp"

#include "RC_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Result_Rank.WBP_Result_Rank_C
// 0x0028 (0x0310 - 0x02E8)
class UWBP_Result_Rank_C final : public URCNzResultRank
{
public:
	class UImage*                                 Img_Rank;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_0;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_1;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_2;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_3;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Result_Rank_C">();
	}
	static class UWBP_Result_Rank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Result_Rank_C>();
	}
};
static_assert(alignof(UWBP_Result_Rank_C) == 0x000008, "Wrong alignment on UWBP_Result_Rank_C");
static_assert(sizeof(UWBP_Result_Rank_C) == 0x000310, "Wrong size on UWBP_Result_Rank_C");
static_assert(offsetof(UWBP_Result_Rank_C, Img_Rank) == 0x0002E8, "Member 'UWBP_Result_Rank_C::Img_Rank' has a wrong offset!");
static_assert(offsetof(UWBP_Result_Rank_C, Img_Rank_0) == 0x0002F0, "Member 'UWBP_Result_Rank_C::Img_Rank_0' has a wrong offset!");
static_assert(offsetof(UWBP_Result_Rank_C, Img_Rank_1) == 0x0002F8, "Member 'UWBP_Result_Rank_C::Img_Rank_1' has a wrong offset!");
static_assert(offsetof(UWBP_Result_Rank_C, Img_Rank_2) == 0x000300, "Member 'UWBP_Result_Rank_C::Img_Rank_2' has a wrong offset!");
static_assert(offsetof(UWBP_Result_Rank_C, Img_Rank_3) == 0x000308, "Member 'UWBP_Result_Rank_C::Img_Rank_3' has a wrong offset!");

}
