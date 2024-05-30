// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TestLevelPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO_API ATestLevelPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	ATestLevelPlayerState();

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;

};
