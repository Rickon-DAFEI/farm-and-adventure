// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"

void AMyHUD::DrawHUD()
{
    Super::DrawHUD();

    // ȷ����Ļ�ߴ�

    // ���ƽ��ͼ��
    if (CoinIconTexture)
    {
        FVector2D IconPos(10, 10); // ���Ͻ�λ��
        FVector2D IconSize(64, 64); // ͼ��ߴ�
        DrawTextureSimple(CoinIconTexture, IconPos.X, IconPos.Y, 1.0f, false);
        DrawText(FString::Printf(TEXT("%d"), Coins), FColor::White, IconPos.X + IconSize.X + 10, IconPos.Y, nullptr, 1.0f, false);
    }

    // ���Ʊ���ͼ��
    if (BackpackIconTexture)
    {
        FVector2D IconSize(64, 64); // ͼ��ߴ�
    }
}
