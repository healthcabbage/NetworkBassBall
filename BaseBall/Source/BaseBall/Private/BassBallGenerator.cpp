// Fill out your copyright notice in the Description page of Project Settings.


#include "BassBallGenerator.h"

BassBallGenerator::BassBallGenerator()
{
}

BassBallGenerator::~BassBallGenerator()
{
}

TArray<int32> BassBallGenerator::GenerateSecretNumbers()
{
    TArray<int32> SecretNumbers;

    while (SecretNumbers.Num() < 3)
    {
        int32 NewNumber = FMath::RandRange(1, 9);
        if (!SecretNumbers.Contains(NewNumber))
        {
            SecretNumbers.Add(NewNumber);
        }
    }

    return SecretNumbers;
}
