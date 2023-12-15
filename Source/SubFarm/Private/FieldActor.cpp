// Fill out your copyright notice in the Description page of Project Settings.


#include "FieldActor.h"

// Sets default values
AFieldActor::AFieldActor()
{

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyScene = CreateDefaultSubobject<USceneComponent>(TEXT("MyCustomScene"));
	FieldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FieldMesh"));
	PlantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	RootComponent = MyScene;
	FieldMesh->SetupAttachment(MyScene);
	PlantMesh->SetupAttachment(FieldMesh);
	//PlantMesh->SetRelativeLocation(FVector(0, 0, 100.0f));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>TempFieldMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/mesh_1__Box357.mesh_1__Box357'"));
	FieldMesh->SetStaticMesh(TempFieldMesh.Object);
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>TempPlantMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/t5.t5'"));
	//PlantMesh->SetStaticMesh(TempPlantMesh.Object);
	//PlantTomato();
	CurrentState.State = 0;
	CurrentState.CurrentLevel = 0;
	CurrentState.WeedsTime = 0;
	CurrentState.LastWeedingTime = 0;
	CurrentState.Worth = 100;
	CurrentState.HavePlant = 0;
}

// Called when the game starts or when spawned
void AFieldActor::BeginPlay()
{
	FTimerHandle TimerHandle;
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFieldActor::Growth, 5.0f, true);
}

// Called every frame
void AFieldActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FHitResult HitResult;
}


void AFieldActor::PlantTomato() {

	PlantingLevel NewLevel;
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
	UStaticMesh* Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, *GrowthMeshPath));
	if (Mesh)
	{
		PlantMesh->SetStaticMesh(Mesh);

	}
}

void AFieldActor::Growth()
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

void AFieldActor::Harvest()
{
	int maxLevel = PlantGrowthLevel.Num();
	if (CurrentState.CurrentLevel == maxLevel) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Empty Field"));
		PlantMesh->SetStaticMesh(nullptr);
	}
}

void AFieldActor::ClickFunction(const FString CurrentTool)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Click Field"));
	if (CurrentState.State) {
		BuyField();
	}
	// consume plant tomato
	//if (true) {
	//	// plant tomato
	//}
	//Growth();
	PlantTomato();

}

void AFieldActor::BuyField()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("BuyField"));

}

