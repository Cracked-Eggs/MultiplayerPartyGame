// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionsSubsystem.h"
#include "OnlineSubsystem.h"


void PrintString(const FString& Str) 
{
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, Str);
	}
}

UMultiplayerSessionsSubsystem::UMultiplayerSessionsSubsystem() 
{
	PrintString("Constructor");
}

void UMultiplayerSessionsSubsystem::Initialize(FSubsystemCollectionBase& Collection) 
{
	PrintString("Initalize");

	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	if (OnlineSubsystem) 
	{
		FString SubsystemName = OnlineSubsystem->GetSubsystemName().ToString();
		PrintString(SubsystemName);

		SessionInterface = OnlineSubsystem->GetSessionInterface();
		if (SessionInterface.IsValid()) 
		{
			PrintString("Session Interface is Valid");
		}
	}
}
void UMultiplayerSessionsSubsystem::Deinitialize() {
	UE_LOG(LogTemp, Warning, TEXT("Deinitialize"));
}

