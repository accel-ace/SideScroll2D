// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CountUpItemsInstance.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLL2D_API UCountUpItemsInstance : public UGameInstance
{
	GENERATED_BODY()
	
private:

	int32 ScoreCount;
	int32 CoinCount;
	int32 LifeCount;

	UPROPERTY(EditAnywhere, Category = "Player")
	int32 MaxLife = 3;

public:
	UCountUpItemsInstance();

	UFUNCTION(BlueprintCallable, Category = "ItemCount|Initialize")
	void Reset();

	UFUNCTION(BlueprintCallable, Category = "ItemCount")
	int32 ScoreCountUp(int32 AddScore = 1);

	UFUNCTION(BlueprintCallable, Category = "ItemCount")
	int32 CoinCountUp(int32 AddCoin = 1);

	UFUNCTION(BlueprintCallable, Category = "ItemCount")
	int32 LifeCountDown(int32 DownLife = 1);

public:

	UFUNCTION(BlueprintCallable, Category = "ItemCount")
	int32 GetScoreCount() {
		return ScoreCount;
	}

	UFUNCTION(BlueprintCallable, Category = "ItemCount")
	int32 GetCoinCount() {
		return CoinCount;
	}

	UFUNCTION(BlueprintCallable, Category = "ItemCount")
	int32 GetLifeCount() {
		return LifeCount;
	}
};
