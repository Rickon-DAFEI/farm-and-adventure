// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "MyCharacter.h"
#include "Components/TimelineComponent.h"
#include "MyTimeLineActor.generated.h"

UCLASS()
class SUBFARM_API AMyTimeLineActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTimeLineActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,CateGory = "MyCurve")
	UCurveFloat* MyCurveFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, CateGory = "MySceneComponent")
	UTimelineComponent* MyTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, CateGory = "MySceneComponent")
	USceneComponent* MyScene;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, CateGory = "MySceneComponent")
	UStaticMeshComponent* MyStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, CateGory = "MySceneComponent")
	UBoxComponent* MyBox;

	FOnTimelineFloat TimelineDelegate;
	FOnTimelineEvent TimelineFinishedDelegate;

	UFUNCTION()
	void BeginOverlapFunciton(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void EndOverlapFunciton(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void TimelineStart(float value);

	UFUNCTION()
	void TimelineFinished();
};
