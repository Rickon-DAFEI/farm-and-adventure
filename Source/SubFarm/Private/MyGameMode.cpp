// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

AMyGameMode::AMyGameMode() {
	DefaultPawnClass = AMyCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
	GameStateClass = AMyGameState::StaticClass();
	HUDClass = AMyHUD::StaticClass();
	PlayerStateClass = AMyPlayerState::StaticClass();
	SpectatorClass = AMySpectatorPawn::StaticClass();
}

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();
	//LogTemp temple log type name, Warning Log level(Error,Display,Warning), TEXT content
	UE_LOG(LogTemp, Error, TEXT("Error Log"));
	UE_LOG(LogTemp, Warning, TEXT("Warning Log"));
	UE_LOG(LogTemp, Display, TEXT("Display Log"));
	// Print on Screen
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Screen Text"));


	FString MyString = TEXT("I am string");

	FName MyName = FName(*MyString);

	FText MyText = FText::FromString(MyString);

	MyString = MyName.ToString();

	FText newText = FText::FromName(MyName);

	FString strFromText = MyText.ToString();

	MyArray.Add(10);
	MyArray.Add(10);
	MyArray.AddUnique(10);
	MyArray.AddUnique(20);
	MyArray.AddUnique(3);
	MyArray.AddUnique(40);
	//PrintMyArray();
	MyArray.Remove(20);
	MyArray.RemoveAt(0);
	MyArray.RemoveSingle(10);
	//PrintMyArray();
	MyArray.Empty();
	MyArray.Reset(); //reset into 0

	MyArray.Insert(60, 0); //insert 60 

	int32& temp = MyArray[0];
	temp = 20;

	MyArray.Contains(10); //include 10?
	MyArray.Find(10);
	MyArray.FindLast(19);


	MyMap.Emplace(0, "HERE");
	MyMap.Emplace(1, "VALUE 2");
	PrintMyMap();

	//MyMap.Remove(0);
	//MyMap.Empty();

	MyMap.Contains(1); // key search find twice return true or flase
	FString* isFind = MyMap.Find(6); // return pointer find once
	const int32* index = MyMap.FindKey("HERE"); // find key by value return Pointer

	TArray<int32> TestKeys;
	TArray<FString> TestValues;

	MyMap.GenerateKeyArray(TestKeys);
	MyMap.GenerateValueArray(TestValues);


	MySet.Add(TEXT("banana"));
	MySet.Add(TEXT("apple"));

	MySet.Emplace(TEXT("Pineapple")); //Emplace void temple file when insert

	TSet<FString>MyNameSet;
	MyNameSet.Add(TEXT("Orange"));

	MySet.Append(MyNameSet); // merge set

	MySet.Remove(TEXT("apple")); // if not include return 0
	MySet.Empty();
	MySet.Reset(); // empty remain memory

	int32 Count = MySet.Num();
	MySet.Contains(TEXT("banana"));
	MySet.Contains("banana"); // return true or false

	FString* FindResult =  MySet.Find(TEXT("banana"));

	TArray<FString> FruitArray = MySet.Array(); // return Tarray

	TSet<FString>TestSet = { TEXT("a"),TEXT("aa"),TEXT("aaa")};

	TestSet.Sort([](FString A, FString B) {return A.Len() > B.Len(); });

	TSet<FString>NewSet;

	NewSet = MySet;

	FSetElementId Index = NewSet.Add(TEXT("Twoto"));

	TestSet[Index] = TEXT("one");

	TSet<FString>NewSet1;

	NewSet1.Reserve(10); //alloc memory, if input number more than element number, then have slack(ÏÐÖÃÄÚ´æ)

	for (int32 i = 0; i < 10; i++) {
		NewSet1.Add(FString::Printf(TEXT("NewSet%d"), i)); //add elements
	}
	for (int32 i = 0; i < 10; i+=2) {
		NewSet1.Remove(FSetElementId::FromInteger(i)); // delete element create slack
	}

	NewSet1.Shrink(); // delete tail empty elements

	// Compact move all empty elements to tail

	NewSet1.Compact();
	NewSet.Shrink();

	int32 Myint = 10;
	float MyFloat = 5.0f;
	bool MyBool = true;
	char MyChar = 'a';
	FString MyString1 = TEXT("MyString");
	FVector MyVector = FVector(0, 0, 0);
	UE_LOG(LogTemp, Warning, TEXT("%d%f%d%c%s%s"), Myint, MyFloat, MyBool, MyChar, *MyString1, *MyVector.ToString());
}

void AMyGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}


void AMyGameMode::PrintMyArray() {
	for (auto It = MyArray.CreateConstIterator(); It; It++) {
		UE_LOG(LogTemp, Warning, TEXT("%d"), *It);
	}
}

void AMyGameMode::PrintMyMap() {
	for (auto& TestMap : MyMap) {
		UE_LOG(LogTemp, Warning, TEXT("%d %s"), TestMap.Key, *TestMap.Value);
	}
}


void AMyGameMode::PrintMySet() {
	for (auto& TestSet : MySet) {
		UE_LOG(LogTemp, Warning, TEXT("%s"), *TestSet);
	}
}