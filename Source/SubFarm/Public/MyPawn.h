// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyObject.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyGameInstance.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UENUM(BlueprintType)
namespace MyEnumType {
	enum MyCustomEnum {
		Type1,
		Type2,
		Type3,
	};
}

UENUM(BlueprintType)
enum class EMyEnumType :uint8{
	OneType UMETA(DisplayName="OneType"),
	TwoType UMETA(DisplayName = "TwoType"),
	ThreeType UMETA(DisplayName = "ThreeType"),
};

USTRUCT(BlueprintType)
struct FMyTestStruct {
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestStruct")
	int32 Health;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyTestStruct")
	FString MyName;
};

UCLASS()
class SUBFARM_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// only visible in default setting
	UPROPERTY(VisibleDefaultsOnly)
	int32 VisibleDefaultsOnlyInt;

	// only visible in instance detail 
	UPROPERTY(VisibleInstanceOnly)
	FString VisibleInstranceString;

	// only visible in instance detail 
	UPROPERTY(VisibleAnywhere)
	FVector VisibleAnywhereVector;

	//edit default setting
	UPROPERTY(EditDefaultsOnly)
	int32 EditDefaultsOnlyInt;

	//edit default setting
	UPROPERTY(EditInstanceOnly)
	FString EditInstanceOnlyString;

	UPROPERTY(EditAnywhere)
	FVector EditAnywhereVector;

	UPROPERTY(EditAnyWhere,BlueprintReadOnly)
	int32 BlueprintReadOnlyInt;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 BlueprintReadWriteInt;

	//Category
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category ="MyIntValue")
	int32 Value1;

	//Category
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyIntValue|MySubIntValue")
	int32 Value2;

	// meta
	// DisplayName
	UPROPERTY(EditAnyWhere,BluePrintReadWrite,meta = (DisplayName = "MyValue3DisplayName"))
	int32 MyValue3;

	//EditCondition
	UPROPERTY(EditAnyWhere, BluePrintReadWrite, meta = (DisplayName = "MyController", ToolTip = "The Controller of value3"))
	bool isController;

	UPROPERTY(EditAnyWhere, BluePrintReadWrite, meta = (EditCondition = "isController"))
	float value3;

	//Tooltip
	UPROPERTY(EditAnyWhere, BluePrintReadWrite, meta = (ToolTip = "isControllerTrue"))
	bool isTrue;

	UFUNCTION(BluePrintCallable,Category = "MyFunction")
	void PrintF1();
	
	// virtual function BluePrintPure
	UFUNCTION(BluePrintCallable, BluePrintPure, Category = "MyFunction")
	bool PrintF2();

	//BlueprintimplementableEvent
	UFUNCTION(BlueprintImplementableEvent)
	void Test1();

	UFUNCTION(BlueprintImplementableEvent)
	int Test2();

	UFUNCTION(BlueprintImplementableEvent)
	void Test11(const FString& MyString);

	UFUNCTION(BlueprintImplementableEvent)
	int Test22(const FString& MyString);

	//BlueprintNativeEvent blueprint can overwrite or not
	UFUNCTION(BlueprintNativeEvent)
	void TestA();

	//BlueprintNativeEvent blueprint can overwrite or not
	UFUNCTION(BlueprintNativeEvent)
	int TestB();

	UFUNCTION(BlueprintNativeEvent)
	void TestC(const FString& MyString);

	UFUNCTION(BlueprintNativeEvent)
	int TestD(const FString& MyString);

	//meta 
	UFUNCTION(BlueprintCallable, Category = "MyFunction", meta = (DisplayName = "MyPrintTest"))
	void PrintTest();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite,Category="MyEnum")
	TEnumAsByte<MyEnumType::MyCustomEnum> MyCustomEnum;

	UPROPERTY(EditAnyWhere,BlueprintReadWrite,Category="MyCustomStruct")
	FMyTestStruct MyCustomeStruct;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MyEnum")
	EMyEnumType MyCustom1;

	UPROPERTY(EditAnyWhere,BlueprintReadWrite,Category="MyExposeOnSpawn",meta = (ExposeOnSpawn="ExposeOnSpawnValue"))
	float MyHealth;

	UPROPERTY()
	UMyObject* MyTestObject;

	UPROPERTY()
	UMyGameInstance* MyInstance;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category ="MySceneComponent");
	USceneComponent* MyRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent");
	USpringArmComponent* MySpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent");
	UCameraComponent* MyCamera;

	void Zoom(bool Dirction, float ZoomSpeed);
};