#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BassBallGameMode.generated.h"

class APlayerController;

UCLASS()
class BASEBALL_API ABassBallGameMode : public AGameMode
{
	GENERATED_BODY()
	

public:
	ABassBallGameMode();

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Game Set")
	TArray<int32> SecretNumbers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controller")
	TSubclassOf<APlayerController> PlayerControllerClass;

public:
	UFUNCTION(BlueprintCallable, Category = "Game Logic")
	void GenerateNewNumbers();

	UFUNCTION(BlueprintCallable, Category = "BaseBallGame")
	void CheckBaseBallGame(const FString& PlayerInput);
};
