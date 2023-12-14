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

    // 纹理资源，可在编辑器中设置
    UPROPERTY(EditAnywhere)
    UTexture2D* CoinIconTexture;

    UPROPERTY(EditAnywhere)
    UTexture2D* BackpackIconTexture;

    // 金币数额，可以根据游戏逻辑动态变化
    int32 Coins = 0;
	
};
