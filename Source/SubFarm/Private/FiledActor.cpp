// Fill out your copyright notice in the Description page of Project Settings.


#include "FiledActor.h"

// Sets default values
AFiledActor::AFiledActor()
{

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyScene = CreateDefaultSubobject<USceneComponent>(TEXT("MyCustomScene"));
	FiledMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FiledMesh"));
	PlantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	RootComponent = MyScene;
	FiledMesh->SetupAttachment(MyScene);
	PlantMesh->SetupAttachment(FiledMesh);
	//PlantMesh->SetRelativeLocation(FVector(0, 0, 100.0f));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>TempFiledMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/mesh_1__Box357.mesh_1__Box357'"));
	FiledMesh->SetStaticMesh(TempFiledMesh.Object);
	PlantTomato();
	CurrentState.State = 0;
	CurrentState.CurrentLevel = 0;
	CurrentState.WeedsTime = 0;
	CurrentState.LastWeedingTime = 0;
	CurrentState.Worth = 100;
	CurrentState.HavePlant = 0;
}

// Called when the game starts or when spawned
void AFiledActor::BeginPlay()
{
	FTimerHandle TimerHandle;
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFiledActor::Growth, 5.0f, true);
}

// Called every frame
void AFiledActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FHitResult HitResult;
}

void AFiledActor::PlantTomato() {

	PlantingLevel NewLevel;
	//NewLevel.Name = TEXT("Seed");
	//NewLevel.MeshReference = TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/t5.t5'");
	//NewLevel.NeedGrowTime = 2.0f;
	//PlantGrowthLevel.Add(NewLevel);
	NewLevel.Name = TEXT("Germination");
	NewLevel.MeshReference = TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/t4.t4'");
	NewLevel.NeedGrowTime = 2.0f;
	PlantGrowthLevel.Add(NewLevel);
	NewLevel.Name = TEXT("Leaf");
	NewLevel.MeshReference = TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/t3.t3'");
	NewLevel.NeedGrowTime = 2.0f;
	PlantGrowthLevel.Add(NewLevel);
	NewLevel.Name = TEXT("Flower");
	NewLevel.MeshReference = TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/t2.t2'");
	NewLevel.NeedGrowTime = 2.0f;
	PlantGrowthLevel.Add(NewLevel);
	NewLevel.Name = TEXT("Mature");
	NewLevel.MeshReference = TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/t1.t1'");
	NewLevel.NeedGrowTime = 2.0f;
	PlantGrowthLevel.Add(NewLevel);
	FString GrowthMeshPath = PlantGrowthLevel[0].MeshReference;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>TempPlantMesh(*GrowthMeshPath);
	PlantMesh->SetStaticMesh(TempPlantMesh.Object);
}

void AFiledActor::Growth()
{
	int maxLevel = PlantGrowthLevel.Num();
	UStaticMesh* LoadedMesh = nullptr;
	if (CurrentState.CurrentLevel + 1 < PlantGrowthLevel.Num())
	{
		FString GrowthMeshPath = PlantGrowthLevel[CurrentState.CurrentLevel + 1].MeshReference;
		LoadedMesh = LoadObject<UStaticMesh>(nullptr, *GrowthMeshPath);
	}

	if (LoadedMesh)
	{
		PlantMesh->SetStaticMesh(LoadedMesh);
	}
	CurrentState.CurrentLevel++;
}

void AFiledActor::ClickFunction(const FString CurrentTool)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Click filed"));
	if (CurrentState.State) {
		BuyFiled();
	}
	// consume plant tomato
	//if (true) {
	//	// plant tomato
	//}
	Growth();
}

void AFiledActor::BuyFiled()
{
	
}

