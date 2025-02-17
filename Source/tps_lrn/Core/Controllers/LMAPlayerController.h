// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LMAPlayerController.generated.h"

UCLASS()
class TPS_LRN_API ALMAPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetDeadWidget();

protected:

	UFUNCTION(BlueprintImplementableEvent)
	void DeadWidgetEvent();

	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float DeadWidgetTimeRate{ 7.0f };

	FTimerHandle AreDeadTimerHandle;
	
	virtual void BeginSpectatingState() override;
};
