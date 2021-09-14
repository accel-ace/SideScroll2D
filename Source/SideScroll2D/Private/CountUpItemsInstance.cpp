// Fill out your copyright notice in the Description page of Project Settings.


#include "CountUpItemsInstance.h"

UCountUpItemsInstance::UCountUpItemsInstance()
{
	Reset();
}

void UCountUpItemsInstance::Reset()
{
	ScoreCount = 0;
	CoinCount = 0;
	LifeCount = MaxLife;
}

int32 UCountUpItemsInstance::ScoreCountUp(int32 AddScore)
{
	if (AddScore <= 0) {
		return ScoreCount;
	}
	ScoreCount += AddScore;
	return ScoreCount;
}

int32 UCountUpItemsInstance::CoinCountUp(int32 AddCoin)
{
	if (AddCoin <= 0) {
		return CoinCount;
	}
	CoinCount += AddCoin;
	return CoinCount;
}

int32 UCountUpItemsInstance::LifeCountDown(int32 DownLife)
{
	if (DownLife <= 0) {
		return LifeCount;
	}
	LifeCount -= DownLife;
	if (LifeCount < 0) {
		LifeCount = 0;
	}
	return LifeCount;
}
