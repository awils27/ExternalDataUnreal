// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExternalDataBPLibrary.h"
#include "ExternalData.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"



TArray<float> UExternalDataBPLibrary::LoadFloatData(FString FileNameA, FString& SaveTextA)
{
	FString Data;
	FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectSavedDir() + "/BlueprintData/" + FileNameA + ".udata"));
	Data = SaveTextA;
	
	TArray<FString> Parsed;
	Data.ParseIntoArray(Parsed, TEXT(","), false);

	auto TArrayConvertFloat = [](TArray<FString> StringArray)
	{
		TArray<float> EndArray;
		for (FString i :StringArray) {
			EndArray.Push(FCString::Atof(*i));
		};
		return EndArray;
	};

	return TArrayConvertFloat(Parsed);
}

bool UExternalDataBPLibrary::SaveFloatData(TArray<float> SaveFloatB, FString FileNameB)
{
	FString Result;

	auto TArrayConvertFString = [](TArray<float> FloatArray)
	{
		TArray<FString> StrArray;
		for (float i : FloatArray) {
			StrArray.Push(FString::SanitizeFloat(i));
		};
		return StrArray;
	};

	Result =

		FString::Join(TArrayConvertFString(SaveFloatB), TEXT(","));

	return FFileHelper::SaveStringToFile(Result, *(FPaths::ProjectSavedDir() + "/BlueprintData/" + FileNameB + ".udata"));
}