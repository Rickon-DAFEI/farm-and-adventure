// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDelegateActor.h"

// Sets default values
AMyDelegateActor::AMyDelegateActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NoParamDelegate.BindUObject(this, &AMyDelegateActor::NoParamFunction);
	OneParamDelegate.BindUObject(this, &AMyDelegateActor::OneParamFunciton);
	TwoParamDelegate.BindUObject(this, &AMyDelegateActor::TwoParamFunction);
	ThreeParamDelegate.BindUObject(this, &AMyDelegateActor::ThreeParamFunciton);
	RevalDelegate.BindUObject(this, &AMyDelegateActor::RevalParamFunction);

	OneParamMultiDelegate.AddUObject(this, &AMyDelegateActor::MultiFunctionFirst);
	OneParamMultiDelegate.AddUObject(this, &AMyDelegateActor::MultiFunctionSecond);
	OneParamMultiDelegate.AddUObject(this, &AMyDelegateActor::MultiFunctionThird);

}

// Called when the game starts or when spawned
void AMyDelegateActor::BeginPlay()
{
	Super::BeginPlay();
	NoParamDelegate.ExecuteIfBound();
	OneParamDelegate.ExecuteIfBound("OneParamString");
	OneParamDelegate.ExecuteIfBound("OneParamString");
	TwoParamDelegate.ExecuteIfBound("TwoParamString",32);
	ThreeParamDelegate.ExecuteIfBound("ThreeParamString",32,5.0f);
	FString revalString = RevalDelegate.Execute();
	
	OneParamMultiDelegate.Broadcast("OneParamMultiDelegate");

	DynamicMultiDelegate.Broadcast("DynamicMultiDelegate");
}

// Called every frame
void AMyDelegateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyDelegateActor::NoParamFunction()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("NoParamFunction"));
}

void AMyDelegateActor::OneParamFunciton(FString str)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("OneParamFunciton %s"), *str));
}

void AMyDelegateActor::TwoParamFunction(FString str, int32 val)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("TwoParamFunction %s %d"), *str, val));
}

void AMyDelegateActor::ThreeParamFunciton(FString str, int32 val, float val1)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("ThreeParamFunciton %s %d %f"), *str, val,val1));
}

FString AMyDelegateActor::RevalParamFunction()
{
	FString str = FString::Printf(TEXT("RevalParamFunction"));
	return str;
}

void AMyDelegateActor::MultiFunctionFirst(FString str)
{
	FString TmpStr = str.Append("1");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TmpStr);
}

void AMyDelegateActor::MultiFunctionSecond(FString str)
{
	FString TmpStr = str.Append("2");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TmpStr);
}

void AMyDelegateActor::MultiFunctionThird(FString str)
{
	FString TmpStr = str.Append("3");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TmpStr);
}

