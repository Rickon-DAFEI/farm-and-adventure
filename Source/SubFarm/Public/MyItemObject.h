// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyItemObject.generated.h"

USTRUCT(BlueprintType)
struct FOutcomeStruct
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int32 HashIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int32 Number;
};

USTRUCT(BlueprintType)
struct FGrowthStepsStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString MeshPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int32 NeedTime;
};

USTRUCT(BlueprintType)
struct FMyItemTableStruct : public FTableRowBase {

	GENERATED_BODY()


	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	int32 HashIndex;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString Name;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString ImageReference;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	int32 Type; // 0:Pet 1:Only for sale 2:Tool that can interactive with map 3:property can interactive with pet
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	TArray<FOutcomeStruct> Outcome;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	TArray<FGrowthStepsStruct> GrowthSteps;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString MeshReference;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString Worth;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString Attitude;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	int32 Effect;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString ChineseName;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString MalayName;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString EnglishName;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	USoundBase* EnglishSound;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	USoundBase* MalaySound;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	USoundBase* ChineseSound;

};

/**
 * 
 */
UCLASS()
class SUBFARM_API UMyItemObject : public UObject
{
	GENERATED_BODY()

	UPROPERTY()
	FMyItemTableStruct MyItemTableStruct;

public:
	static const FMyItemTableStruct* FindItemTableRow(int32 HashIndex);
};
