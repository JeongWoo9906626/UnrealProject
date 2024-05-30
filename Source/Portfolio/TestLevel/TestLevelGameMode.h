// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TestLevelGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO_API ATestLevelGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ATestLevelGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
