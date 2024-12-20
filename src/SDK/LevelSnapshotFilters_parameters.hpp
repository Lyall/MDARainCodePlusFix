#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSnapshotFilters

#include "Basic.hpp"

#include "LevelSnapshotFilters_structs.hpp"


namespace SDK::Params
{

// Function LevelSnapshotFilters.LevelSnapshotBlueprintFilter.IsActorValid
// 0x0018 (0x0018 - 0x0000)
struct LevelSnapshotBlueprintFilter_IsActorValid final
{
public:
	struct FIsActorValidParams                    Params_0;                                          // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	EFilterResult                                 ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSnapshotBlueprintFilter_IsActorValid) == 0x000008, "Wrong alignment on LevelSnapshotBlueprintFilter_IsActorValid");
static_assert(sizeof(LevelSnapshotBlueprintFilter_IsActorValid) == 0x000018, "Wrong size on LevelSnapshotBlueprintFilter_IsActorValid");
static_assert(offsetof(LevelSnapshotBlueprintFilter_IsActorValid, Params_0) == 0x000000, "Member 'LevelSnapshotBlueprintFilter_IsActorValid::Params_0' has a wrong offset!");
static_assert(offsetof(LevelSnapshotBlueprintFilter_IsActorValid, ReturnValue) == 0x000010, "Member 'LevelSnapshotBlueprintFilter_IsActorValid::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.LevelSnapshotBlueprintFilter.IsAddedActorValid
// 0x0010 (0x0010 - 0x0000)
struct LevelSnapshotBlueprintFilter_IsAddedActorValid final
{
public:
	struct FIsAddedActorValidParams               Params_0;                                          // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	EFilterResult                                 ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSnapshotBlueprintFilter_IsAddedActorValid) == 0x000008, "Wrong alignment on LevelSnapshotBlueprintFilter_IsAddedActorValid");
static_assert(sizeof(LevelSnapshotBlueprintFilter_IsAddedActorValid) == 0x000010, "Wrong size on LevelSnapshotBlueprintFilter_IsAddedActorValid");
static_assert(offsetof(LevelSnapshotBlueprintFilter_IsAddedActorValid, Params_0) == 0x000000, "Member 'LevelSnapshotBlueprintFilter_IsAddedActorValid::Params_0' has a wrong offset!");
static_assert(offsetof(LevelSnapshotBlueprintFilter_IsAddedActorValid, ReturnValue) == 0x000008, "Member 'LevelSnapshotBlueprintFilter_IsAddedActorValid::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.LevelSnapshotBlueprintFilter.IsDeletedActorValid
// 0x0070 (0x0070 - 0x0000)
struct LevelSnapshotBlueprintFilter_IsDeletedActorValid final
{
public:
	struct FIsDeletedActorValidParams             Params_0;                                          // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	EFilterResult                                 ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0xF];                                       // 0x0061(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSnapshotBlueprintFilter_IsDeletedActorValid) == 0x000010, "Wrong alignment on LevelSnapshotBlueprintFilter_IsDeletedActorValid");
static_assert(sizeof(LevelSnapshotBlueprintFilter_IsDeletedActorValid) == 0x000070, "Wrong size on LevelSnapshotBlueprintFilter_IsDeletedActorValid");
static_assert(offsetof(LevelSnapshotBlueprintFilter_IsDeletedActorValid, Params_0) == 0x000000, "Member 'LevelSnapshotBlueprintFilter_IsDeletedActorValid::Params_0' has a wrong offset!");
static_assert(offsetof(LevelSnapshotBlueprintFilter_IsDeletedActorValid, ReturnValue) == 0x000060, "Member 'LevelSnapshotBlueprintFilter_IsDeletedActorValid::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.LevelSnapshotBlueprintFilter.IsPropertyValid
// 0x0058 (0x0058 - 0x0000)
struct LevelSnapshotBlueprintFilter_IsPropertyValid final
{
public:
	struct FIsPropertyValidParams                 Params_0;                                          // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	EFilterResult                                 ReturnValue;                                       // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSnapshotBlueprintFilter_IsPropertyValid) == 0x000008, "Wrong alignment on LevelSnapshotBlueprintFilter_IsPropertyValid");
static_assert(sizeof(LevelSnapshotBlueprintFilter_IsPropertyValid) == 0x000058, "Wrong size on LevelSnapshotBlueprintFilter_IsPropertyValid");
static_assert(offsetof(LevelSnapshotBlueprintFilter_IsPropertyValid, Params_0) == 0x000000, "Member 'LevelSnapshotBlueprintFilter_IsPropertyValid::Params_0' has a wrong offset!");
static_assert(offsetof(LevelSnapshotBlueprintFilter_IsPropertyValid, ReturnValue) == 0x000050, "Member 'LevelSnapshotBlueprintFilter_IsPropertyValid::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.ParentFilter.AddChild
// 0x0008 (0x0008 - 0x0000)
struct ParentFilter_AddChild final
{
public:
	class ULevelSnapshotFilter*                   Filter;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ParentFilter_AddChild) == 0x000008, "Wrong alignment on ParentFilter_AddChild");
static_assert(sizeof(ParentFilter_AddChild) == 0x000008, "Wrong size on ParentFilter_AddChild");
static_assert(offsetof(ParentFilter_AddChild, Filter) == 0x000000, "Member 'ParentFilter_AddChild::Filter' has a wrong offset!");

// Function LevelSnapshotFilters.ParentFilter.CreateChild
// 0x0010 (0x0010 - 0x0000)
struct ParentFilter_CreateChild final
{
public:
	TSubclassOf<class ULevelSnapshotFilter>       Class_0;                                           // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSnapshotFilter*                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ParentFilter_CreateChild) == 0x000008, "Wrong alignment on ParentFilter_CreateChild");
static_assert(sizeof(ParentFilter_CreateChild) == 0x000010, "Wrong size on ParentFilter_CreateChild");
static_assert(offsetof(ParentFilter_CreateChild, Class_0) == 0x000000, "Member 'ParentFilter_CreateChild::Class_0' has a wrong offset!");
static_assert(offsetof(ParentFilter_CreateChild, ReturnValue) == 0x000008, "Member 'ParentFilter_CreateChild::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.ParentFilter.RemovedChild
// 0x0010 (0x0010 - 0x0000)
struct ParentFilter_RemovedChild final
{
public:
	class ULevelSnapshotFilter*                   Filter;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ParentFilter_RemovedChild) == 0x000008, "Wrong alignment on ParentFilter_RemovedChild");
static_assert(sizeof(ParentFilter_RemovedChild) == 0x000010, "Wrong size on ParentFilter_RemovedChild");
static_assert(offsetof(ParentFilter_RemovedChild, Filter) == 0x000000, "Member 'ParentFilter_RemovedChild::Filter' has a wrong offset!");
static_assert(offsetof(ParentFilter_RemovedChild, ReturnValue) == 0x000008, "Member 'ParentFilter_RemovedChild::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.ParentFilter.GetChildren
// 0x0010 (0x0010 - 0x0000)
struct ParentFilter_GetChildren final
{
public:
	TArray<class ULevelSnapshotFilter*>           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ParentFilter_GetChildren) == 0x000008, "Wrong alignment on ParentFilter_GetChildren");
static_assert(sizeof(ParentFilter_GetChildren) == 0x000010, "Wrong size on ParentFilter_GetChildren");
static_assert(offsetof(ParentFilter_GetChildren, ReturnValue) == 0x000000, "Member 'ParentFilter_GetChildren::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.FilterBlueprintFunctionLibrary.CreateFilterByClass
// 0x0020 (0x0020 - 0x0000)
struct FilterBlueprintFunctionLibrary_CreateFilterByClass final
{
public:
	TSubclassOf<class ULevelSnapshotFilter>       Class_0;                                           // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Name_0;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                Outer_0;                                           // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSnapshotFilter*                   ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FilterBlueprintFunctionLibrary_CreateFilterByClass) == 0x000008, "Wrong alignment on FilterBlueprintFunctionLibrary_CreateFilterByClass");
static_assert(sizeof(FilterBlueprintFunctionLibrary_CreateFilterByClass) == 0x000020, "Wrong size on FilterBlueprintFunctionLibrary_CreateFilterByClass");
static_assert(offsetof(FilterBlueprintFunctionLibrary_CreateFilterByClass, Class_0) == 0x000000, "Member 'FilterBlueprintFunctionLibrary_CreateFilterByClass::Class_0' has a wrong offset!");
static_assert(offsetof(FilterBlueprintFunctionLibrary_CreateFilterByClass, Name_0) == 0x000008, "Member 'FilterBlueprintFunctionLibrary_CreateFilterByClass::Name_0' has a wrong offset!");
static_assert(offsetof(FilterBlueprintFunctionLibrary_CreateFilterByClass, Outer_0) == 0x000010, "Member 'FilterBlueprintFunctionLibrary_CreateFilterByClass::Outer_0' has a wrong offset!");
static_assert(offsetof(FilterBlueprintFunctionLibrary_CreateFilterByClass, ReturnValue) == 0x000018, "Member 'FilterBlueprintFunctionLibrary_CreateFilterByClass::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.NegationFilter.CreateChild
// 0x0010 (0x0010 - 0x0000)
struct NegationFilter_CreateChild final
{
public:
	TSubclassOf<class ULevelSnapshotFilter>       ChildClass;                                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSnapshotFilter*                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NegationFilter_CreateChild) == 0x000008, "Wrong alignment on NegationFilter_CreateChild");
static_assert(sizeof(NegationFilter_CreateChild) == 0x000010, "Wrong size on NegationFilter_CreateChild");
static_assert(offsetof(NegationFilter_CreateChild, ChildClass) == 0x000000, "Member 'NegationFilter_CreateChild::ChildClass' has a wrong offset!");
static_assert(offsetof(NegationFilter_CreateChild, ReturnValue) == 0x000008, "Member 'NegationFilter_CreateChild::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.NegationFilter.SetExternalChild
// 0x0008 (0x0008 - 0x0000)
struct NegationFilter_SetExternalChild final
{
public:
	class ULevelSnapshotFilter*                   NewChild;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NegationFilter_SetExternalChild) == 0x000008, "Wrong alignment on NegationFilter_SetExternalChild");
static_assert(sizeof(NegationFilter_SetExternalChild) == 0x000008, "Wrong size on NegationFilter_SetExternalChild");
static_assert(offsetof(NegationFilter_SetExternalChild, NewChild) == 0x000000, "Member 'NegationFilter_SetExternalChild::NewChild' has a wrong offset!");

// Function LevelSnapshotFilters.NegationFilter.GetChild
// 0x0008 (0x0008 - 0x0000)
struct NegationFilter_GetChild final
{
public:
	class ULevelSnapshotFilter*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NegationFilter_GetChild) == 0x000008, "Wrong alignment on NegationFilter_GetChild");
static_assert(sizeof(NegationFilter_GetChild) == 0x000008, "Wrong size on NegationFilter_GetChild");
static_assert(offsetof(NegationFilter_GetChild, ReturnValue) == 0x000000, "Member 'NegationFilter_GetChild::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.PropertyBlueprintFunctionLibrary.GetPropertyName
// 0x0030 (0x0030 - 0x0000)
struct PropertyBlueprintFunctionLibrary_GetPropertyName final
{
public:
	TFieldPath<struct FProperty>                  Property;                                          // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PropertyBlueprintFunctionLibrary_GetPropertyName) == 0x000008, "Wrong alignment on PropertyBlueprintFunctionLibrary_GetPropertyName");
static_assert(sizeof(PropertyBlueprintFunctionLibrary_GetPropertyName) == 0x000030, "Wrong size on PropertyBlueprintFunctionLibrary_GetPropertyName");
static_assert(offsetof(PropertyBlueprintFunctionLibrary_GetPropertyName, Property) == 0x000000, "Member 'PropertyBlueprintFunctionLibrary_GetPropertyName::Property' has a wrong offset!");
static_assert(offsetof(PropertyBlueprintFunctionLibrary_GetPropertyName, ReturnValue) == 0x000020, "Member 'PropertyBlueprintFunctionLibrary_GetPropertyName::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.PropertyBlueprintFunctionLibrary.GetPropertyOriginPath
// 0x0030 (0x0030 - 0x0000)
struct PropertyBlueprintFunctionLibrary_GetPropertyOriginPath final
{
public:
	TFieldPath<struct FProperty>                  Property;                                          // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PropertyBlueprintFunctionLibrary_GetPropertyOriginPath) == 0x000008, "Wrong alignment on PropertyBlueprintFunctionLibrary_GetPropertyOriginPath");
static_assert(sizeof(PropertyBlueprintFunctionLibrary_GetPropertyOriginPath) == 0x000030, "Wrong size on PropertyBlueprintFunctionLibrary_GetPropertyOriginPath");
static_assert(offsetof(PropertyBlueprintFunctionLibrary_GetPropertyOriginPath, Property) == 0x000000, "Member 'PropertyBlueprintFunctionLibrary_GetPropertyOriginPath::Property' has a wrong offset!");
static_assert(offsetof(PropertyBlueprintFunctionLibrary_GetPropertyOriginPath, ReturnValue) == 0x000020, "Member 'PropertyBlueprintFunctionLibrary_GetPropertyOriginPath::ReturnValue' has a wrong offset!");

// Function LevelSnapshotFilters.PropertyBlueprintFunctionLibrary.LoadSnapshotActor
// 0x0070 (0x0070 - 0x0000)
struct PropertyBlueprintFunctionLibrary_LoadSnapshotActor final
{
public:
	struct FIsDeletedActorValidParams             Params_0;                                          // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                 ReturnValue;                                       // 0x0060(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PropertyBlueprintFunctionLibrary_LoadSnapshotActor) == 0x000010, "Wrong alignment on PropertyBlueprintFunctionLibrary_LoadSnapshotActor");
static_assert(sizeof(PropertyBlueprintFunctionLibrary_LoadSnapshotActor) == 0x000070, "Wrong size on PropertyBlueprintFunctionLibrary_LoadSnapshotActor");
static_assert(offsetof(PropertyBlueprintFunctionLibrary_LoadSnapshotActor, Params_0) == 0x000000, "Member 'PropertyBlueprintFunctionLibrary_LoadSnapshotActor::Params_0' has a wrong offset!");
static_assert(offsetof(PropertyBlueprintFunctionLibrary_LoadSnapshotActor, ReturnValue) == 0x000060, "Member 'PropertyBlueprintFunctionLibrary_LoadSnapshotActor::ReturnValue' has a wrong offset!");

}

