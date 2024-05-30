// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TestLevelHUD.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO_API ATestLevelHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	ATestLevelHUD();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
