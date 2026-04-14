#pragma once

#include "CoreMinimal.h"
#include "StudentData.generated.h"

USTRUCT(/*BluprintType, Atomic*/)
struct FStudentData
{
	GENERATED_BODY()

	FStudentData()
	{
		Name = TEXT("기본이름");
		Order = -1;
	}

	FStudentData(const FString& InName, int32 InOrder)
		: Name(InName), Order(InOrder)
	{

	}

	UPROPERTY()
	FString Name;

	UPROPERTY()
	int32 Order;
};