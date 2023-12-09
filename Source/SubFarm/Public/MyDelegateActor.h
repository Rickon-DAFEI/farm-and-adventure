// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyDelegateActor.generated.h"

DECLARE_DELEGATE(NoParamDelegate);
DECLARE_DELEGATE_OneParam(OneParamDelegate, FString);
DECLARE_DELEGATE_TwoParams(TwoParamDelegate, FString,int32);
DECLARE_DELEGATE_ThreeParams(ThreeParamDelegate, FString, int32,float);
DECLARE_DELEGATE_RetVal(FString,RevalDelegate);


DECLARE_MULTICAST_DELEGATE_OneParam(OneParamMultiDelegate, FString);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicMultiDelegate, FString, param);

UCLASS()
class SUBFARM_API AMyDelegateActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDelegateActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	NoParamDelegate NoParamDelegate;
	OneParamDelegate OneParamDelegate;
	TwoParamDelegate TwoParamDelegate;
	ThreeParamDelegate ThreeParamDelegate;
	RevalDelegate RevalDelegate;



	OneParamMultiDelegate OneParamMultiDelegate;
	
	UPROPERTY(BlueprintAssignable)
	FDynamicMultiDelegate DynamicMultiDelegate;

	void NoParamFunction();

	void OneParamFunciton(FString str);

	void TwoParamFunction(FString str, int32 val);
	
	void ThreeParamFunciton(FString str, int32 val, float val1);

	FString RevalParamFunction();

	UFUNCTION()
	void MultiFunctionFirst(FString str);

	UFUNCTION()
	void MultiFunctionSecond(FString str);

	UFUNCTION()
	void MultiFunctionThird(FString str);
};
