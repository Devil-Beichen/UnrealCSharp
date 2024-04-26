#pragma once

#include "Binding/TypeInfo/FBindingTypeInfo.h"

class UNREALCSHARPCORE_API FBindingEnum
{
public:
	FBindingEnum(const FString& InEnum,
	             const FString& InUnderlyingType,
	             bool InIsEngineEnum,
	             const FBindingTypeInfo& InTypeInfo,
	             const TMap<FString, int64>& InEnumerators);

public:
	const FString& GetEnum() const;

	const FString& GetUnderlyingType() const;

	bool IsEngineEnum() const;

	const FBindingTypeInfo& GetTypeInfo() const;

	const TMap<FString, int64>& GetEnumerators() const;

private:
	FString Enum;

	FString UnderlyingType;

	bool bIsEngineEnum;

	FBindingTypeInfo TypeInfo;

	TMap<FString, int64> Enumerators;
};
