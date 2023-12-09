// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"


USTRUCT(BlueprintType)
struct FMyDataTableStruct : public FTableRowBase {
	GENERATED_USTRUCT_BODY()

	FMyDataTableStruct();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	float Health;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString Name;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	int32 Level;
};

/**
 * 
 */
UCLASS()
class SUBFARM_API UMyObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FMyDataTableStruct MyDataTableStruct;
};
