#include "BassBallGameMode.h"
#include "BassBallGenerator.h"
#include "BaseballJudge.h"
#include "Kismet/KismetSystemLibrary.h"

ABassBallGameMode::ABassBallGameMode()
{
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBP(TEXT("Content/BP/BP_Controller.uasset"));
	if (PlayerControllerBP.Succeeded())
	{
		PlayerControllerClass = PlayerControllerBP.Class;
	}
}

void ABassBallGameMode::GenerateNewNumbers()
{
	SecretNumbers = BassBallGenerator::GenerateSecretNumbers();

	UE_LOG(LogTemp, Warning, TEXT("Generated Numbers: %d, %d, %d"), SecretNumbers[0], SecretNumbers[1], SecretNumbers[2]);
}

void ABassBallGameMode::CheckBaseBallGame(const FString& PlayerInput)
{
	int S = 0, B = 0, Out = 0;

	BaseballJudge::JudgeNumber(SecretNumbers, PlayerInput, S, B, Out);

	FString Result = FString::Printf(TEXT("%dS, %dB, %dOUT"), S, B, Out);
	UKismetSystemLibrary::PrintString(this, Result, true, true, FColor::Blue, 2.0f);
}


