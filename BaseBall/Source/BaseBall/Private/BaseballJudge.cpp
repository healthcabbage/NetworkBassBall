#include "BaseballJudge.h"

BaseballJudge::BaseballJudge()
{
}

BaseballJudge::~BaseballJudge()
{
}

void BaseballJudge::JudgeNumber(const TArray<int32>& SecretNumbers, const FString& Input, int32& OutS, int32& OutB, int32& OutOUT)
{
	OutS = 0, OutB = 0, OutOUT = 0;

	if (!Input.StartsWith(TEXT("/")))
	{
		OutOUT = 3;
		return;
	}

	TArray<int32> InputNumvers = ConvertInputToArray(Input);

	if (InputNumvers.Num() != SecretNumbers.Num())
	{
		OutOUT++;
		return;
	}

	TSet<int32> UsedNumbers;

	for (int i = 0; i < InputNumvers.Num(); i++)
	{
		if (UsedNumbers.Contains(InputNumvers[i]))
		{
			OutOUT++;
			return;
		}
		UsedNumbers.Add(InputNumvers[i]);

		if (i < SecretNumbers.Num())
		{
			if (InputNumvers[i] == SecretNumbers[i])
			{
				OutS++;
			}
			else if (SecretNumbers.Contains(InputNumvers[i]))
			{
				OutB++;
			}
			else
			{
				OutOUT++;
			}
		}
	}
}

bool BaseballJudge::IsValidInput(const FString& Input)
{
	if (!Input.StartsWith(TEXT("/")))
	{
		return false;
	}

	FString NumberPart = Input.RightChop(1);

	if (NumberPart.Len() != 3)
	{
		return false;
	}

	for (TCHAR C : NumberPart)
	{
		if (!FChar::IsDigit(C))
		{
			return false;
		}
	}

	return true;
}

TArray<int32> BaseballJudge::ConvertInputToArray(const FString& Input)
{
	TArray<int32> Result;
	FString NumberPart = Input.RightChop(1);

	for (TCHAR C : NumberPart)
	{
		Result.Add(C - '0');
	}

	return Result;
}




