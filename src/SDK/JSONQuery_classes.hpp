#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JSONQuery

#include "Basic.hpp"

#include "JSONQuery_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class JSONQuery.JsonFieldData
// 0x0020 (0x0048 - 0x0028)
class UJsonFieldData final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool bSuccess, class UJsonFieldData* Json, EJSONResult Status)> OnGetResult;                                       // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UJsonFieldData* Create();
	static class UJsonFieldData* GetRequest(const class FString& URL);

	bool FromFile(const class FString& FilePath);
	bool FromString(const class FString& dataString);
	TArray<bool> GetBoolArray(const class FString& Key, bool* Success);
	TArray<float> GetFloatArray(const class FString& Key, bool* Success);
	TArray<int32> GetIntArray(const class FString& Key, bool* Success);
	class UJsonFieldData* GetObject(const class FString& Key, bool* Success);
	TArray<class UJsonFieldData*> GetObjectArray(const class FString& Key, bool* Success);
	TArray<class FString> GetObjectKeys();
	TArray<class FString> GetStringArray(const class FString& Key, bool* Success);
	bool HasField(const class FString& Key);
	void PostRequest(const class FString& URL);
	void PostRequestWithFile(const class FString& FilePath, const class FString& URL);
	class UJsonFieldData* SetBoolArray(const class FString& Key, const TArray<bool>& Data);
	class UJsonFieldData* SetBoolean(const class FString& Key, const bool Value);
	class UJsonFieldData* SetFloat(const class FString& Key, const float Value);
	class UJsonFieldData* SetFloatArray(const class FString& Key, const TArray<float>& Data);
	class UJsonFieldData* SetInt(const class FString& Key, const int32 Value);
	class UJsonFieldData* SetIntArray(const class FString& Key, const TArray<int32>& Data);
	class UJsonFieldData* SetNull(const class FString& Key);
	class UJsonFieldData* SetNullArray(const class FString& Key, const int32& Length);
	class UJsonFieldData* SetObject(const class FString& Key, const class UJsonFieldData* objectData);
	class UJsonFieldData* SetObjectArray(const class FString& Key, const TArray<class UJsonFieldData*>& ArrayData);
	class UJsonFieldData* SetString(const class FString& Key, const class FString& Value);
	class UJsonFieldData* SetStringArray(const class FString& Key, const TArray<class FString>& Data);
	class FString ToString();

	bool GetBool(const class FString& Key, bool* Success) const;
	float GetFloat(const class FString& Key, bool* Success) const;
	int32 GetInt(const class FString& Key, bool* Success) const;
	bool GetIsNull(const class FString& Key, bool* fieldExists) const;
	class FString GetString(const class FString& Key, bool* Success) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JsonFieldData">();
	}
	static class UJsonFieldData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJsonFieldData>();
	}
};
static_assert(alignof(UJsonFieldData) == 0x000008, "Wrong alignment on UJsonFieldData");
static_assert(sizeof(UJsonFieldData) == 0x000048, "Wrong size on UJsonFieldData");
static_assert(offsetof(UJsonFieldData, OnGetResult) == 0x000038, "Member 'UJsonFieldData::OnGetResult' has a wrong offset!");

}
