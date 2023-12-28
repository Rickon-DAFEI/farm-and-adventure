// Fill out your copyright notice in the Description page of Project Settings.


#include "MyItemObject.h"


FORCEINLINE static UDataTable* LoadDataTable(const FName& Path)
{
    return Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, *Path.ToString()));
}

const FMyItemTableStruct* UMyItemObject::FindItemTableRow(int32 HashIndex)
{
    const FName RowName = FName(*FString::FromInt(HashIndex - 2000));
    const FName ItemInfoPath = TEXT("/Script/Engine.DataTable'/Game/item.item'");

    UDataTable* Table = LoadDataTable(ItemInfoPath); // ����LoadDataTable�Ǿ�̬��

    if (!Table)
    {
        return nullptr; // �������ʧ�ܵ����
    }

    return Table->FindRow<FMyItemTableStruct>(RowName, TEXT("GrowthSteps Lookup"));
}
