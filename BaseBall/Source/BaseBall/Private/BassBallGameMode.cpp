#include "BassBallGameMode.h"
#include "BassBallGenerator.h"
#include "PlayerController.generated.h"

ABassBallGameMode::ABassBallGameMode()
{
}

void ABassBallGameMode::GenerateNewNumbers()
{
	SecretNumbers = BassBallGenerator::GenerateSecretNumbers();
}

void ABassBallGameMode::GetMessageFromClient(const FString& Msg)
{

}
