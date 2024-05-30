// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TestLevelPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO_API ATestLevelPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATestLevelPlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
