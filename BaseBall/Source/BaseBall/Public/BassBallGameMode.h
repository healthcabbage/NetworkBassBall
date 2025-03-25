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

public:
	UFUNCTION(BlueprintCallable, Category = "Game Logic")
	void GenerateNewNumbers();

	UFUNCTION(BlueprintCallable, Category = "Game Logic Event")
	void GetMessageFromClient(const FString& Msg);

};
