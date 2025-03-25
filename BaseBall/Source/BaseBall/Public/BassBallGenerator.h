#pragma once

#include "CoreMinimal.h"

class BASEBALL_API BassBallGenerator
{
public:
	BassBallGenerator();
	~BassBallGenerator();

	static TArray<int32> GenerateSecretNumbers();
};
