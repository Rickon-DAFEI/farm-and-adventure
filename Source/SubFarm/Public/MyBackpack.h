// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

struct BackPackItem {
	int Number;
	int HashIndex;
	FString Name;
	//FString ImageReference;
	//FString MeshImageReference;
	int Type; // 0:Pet 1:Only for sale 2:Tool that can interactive with map 3:property can interactive with pet
};

/**
 *
 */
class SUBFARM_API MyBackpack
{
private:
	TMap<int32, BackPackItem> BackpackItemList;

public:
	MyBackpack();
	~MyBackpack();

	void AlterItemNumber(int ItemHashIndex, int Number);



};
