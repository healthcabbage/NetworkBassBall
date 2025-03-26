#pragma once

#include "CoreMinimal.h"

class BASEBALL_API BaseballJudge
{
public:
	BaseballJudge();
	~BaseballJudge();

	static void JudgeNumber(const TArray<int32>& SecretNumbers, const FString& Input, int32& OutS, int32& OutB, int32& OutOUT);

private:
	static bool IsValidInput(const FString& Input);
	static TArray<int32> ConvertInputToArray(const FString& Input);
};
