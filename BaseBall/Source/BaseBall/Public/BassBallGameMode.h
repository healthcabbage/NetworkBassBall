#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BassBallGameMode.generated.h"

UCLASS()
class BASEBALL_API ABassBallGameMode : public AGameMode
{
	GENERATED_BODY()
	

public:
	ABassBallGameMode();

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Game Set")
	TArray<int32> SecretNumbers;

	UPROPERTY(BlueprintReadOnly, Category = "victory check")
	bool Isvictory = false;

public:
	UFUNCTION(BlueprintCallable, Category = "Game Logic")
	void GenerateNewNumbers();

	UFUNCTION(BlueprintCallable, Category = "BaseBallGame")
	void CheckBaseBallGame(const FString& PlayerInput, const FString& userid);
};
