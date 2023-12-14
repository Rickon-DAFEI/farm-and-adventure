// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class SUBFARM_API AMyHUD : public AHUD
{
	GENERATED_BODY()

public:
    virtual void DrawHUD() override;

    // ������Դ�����ڱ༭��������
    UPROPERTY(EditAnywhere)
    UTexture2D* CoinIconTexture;

    UPROPERTY(EditAnywhere)
    UTexture2D* BackpackIconTexture;

    // ���������Ը�����Ϸ�߼���̬�仯
    int32 Coins = 0;
	
};
