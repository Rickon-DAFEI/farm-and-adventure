// Fill out your copyright notice in the Description page of Project Settings.


#include "BackpackItemWidget.h"
#include "MyItemObject.h"

bool UBackpackItemWidget::Initialize()
{
    if (!Super::Initialize()) {


        //BackpackItems.Add(newItem);

        return false;
    }
    InteractiveButton->OnClicked.AddDynamic(this, &UBackpackItemWidget::ShowPanel);
    return true;
}


void UBackpackItemWidget::SetItemContentImage(const FString& AssetPath)
{
    UTexture2D* ImageTexture = LoadObject<UTexture2D>(nullptr, *AssetPath);
    if (ImageTexture)
    {
        ItemContentUrl->SetBrushFromTexture(ImageTexture);
    }
}

void UBackpackItemWidget::SetItemNumber(int32 Number)
{
    NumberText->SetText(FText::AsNumber(Number));
}

void UBackpackItemWidget::initItemMessage(FMyItemTableStruct Detail, const FString& AssetPath, int32 Number)
{
    ItemDetail = Detail;
    UTexture2D* ImageTexture = LoadObject<UTexture2D>(nullptr, *AssetPath);
    if (ImageTexture)
    {
        ItemContentUrl->SetBrushFromTexture(ImageTexture);
    }
    NumberText->SetText(FText::AsNumber(Number));
}

void UBackpackItemWidget::ShowPanel()
{
    int32 CurrentHashIndex = ItemDetail.HashIndex;
    TSubclassOf<UPutHandWidget> PutHandWidgetClass = LoadClass<UPutHandWidget>(nullptr, TEXT("/Game/UI/BP_PutHandWidget.BP_PutHandWidget_C"));
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    

    
    if (PlayerController)
    {
        // 获取鼠标位置
        float MouseX, MouseY;
        if (PlayerController->GetMousePosition(MouseX, MouseY))
        {
            if (PutHandWidgetClass != nullptr)
            {
                PutHandWidget = CreateWidget<UPutHandWidget>(this, PutHandWidgetClass);
                if (PutHandWidget)
                {
                    PutHandWidget->SetHashIndex(ItemDetail.HashIndex);
                    //NewWidget->SetItemContentImage(ImageReference);
                    //NewWidget->SetItemNumber(Value);
                    PutHandWidget->AddToViewport();
                    PutHandWidget->SetPositionInViewport(FVector2D(MouseX, MouseY));
                }
            }

        }
    }
}

