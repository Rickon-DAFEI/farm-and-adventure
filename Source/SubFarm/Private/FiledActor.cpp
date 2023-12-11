// Fill out your copyright notice in the Description page of Project Settings.


#include "FiledActor.h"

// Sets default values
AFiledActor::AFiledActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bCanEverTick = true;
	MyScene = CreateDefaultSubobject<USceneComponent>(TEXT("MyCustomScene"));
	FiledMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FiledMesh"));
	PlantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	RootComponent = MyScene;
	FiledMesh->SetupAttachment(MyScene);
	PlantMesh->SetupAttachment(FiledMesh);
	static ConstructorHelpers::FObjectFinder<UStaticMesh>TempFiledMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/mesh.mesh'"));
	FiledMesh->SetStaticMesh(TempFiledMesh.Object);
}

// Called when the game starts or when spawned
void AFiledActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFiledActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

