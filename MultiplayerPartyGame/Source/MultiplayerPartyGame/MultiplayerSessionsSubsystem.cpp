// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionsSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"


void PrintString(const FString& Str) 
{
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, Str);
	}
}

UMultiplayerSessionsSubsystem::UMultiplayerSessionsSubsystem() 
{
	//PrintString("Constructor");
	CreateServerAfterDestroy = false;
	DestroyServerName = "";
}

void UMultiplayerSessionsSubsystem::Initialize(FSubsystemCollectionBase& Collection) 
{
	//PrintString("Initalize");

	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	if (OnlineSubsystem) 
	{
		FString SubsystemName = OnlineSubsystem->GetSubsystemName().ToString();
		PrintString(SubsystemName);

		SessionInterface = OnlineSubsystem->GetSessionInterface();
		if (SessionInterface.IsValid()) 
		{
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, 
				&UMultiplayerSessionsSubsystem::OnCreateSessionComplete);
			SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this,
				&UMultiplayerSessionsSubsystem::OnDestroySessionComplete);
		}
	}
}
void UMultiplayerSessionsSubsystem::Deinitialize() 
{
	UE_LOG(LogTemp, Warning, TEXT("Deinitialize"));
}

void UMultiplayerSessionsSubsystem::CreateServer(FString ServerName)
{
	PrintString("Create Server");

	if (ServerName.IsEmpty()) 
	{
		PrintString("Server Name cannot be empty!");
		return;
	}

	FName MySessionName = FName("Party Session Name");

	FNamedOnlineSession *ExistingSession = SessionInterface->GetNamedSession(MySessionName);

	if (ExistingSession)
	{
		FString Msg = FString::Printf(TEXT("Session wth name %s exists, destroying"),
			*MySessionName.ToString());
		PrintString(Msg);
		CreateServerAfterDestroy = true;
		DestroyServerName = ServerName;
		SessionInterface->DestroySession(MySessionName);
		return;
	}

	FOnlineSessionSettings SessionSettings;

	SessionSettings.bAllowJoinInProgress = true;
	SessionSettings.bIsDedicated = false;
	SessionSettings.bShouldAdvertise = true;
	SessionSettings.NumPublicConnections = 2;
	SessionSettings.bUseLobbiesIfAvailable = true;
	SessionSettings.bUsesPresence = true;
	SessionSettings.bAllowJoinViaPresence = true;

	bool isLan = false;
	if (IOnlineSubsystem::Get()->GetSubsystemName() == "NULL")
	{
		isLan = true;
	}
	SessionSettings.bIsLANMatch = isLan;

	SessionInterface->CreateSession(0, MySessionName, SessionSettings);
}

void UMultiplayerSessionsSubsystem::FindServer(FString ServerName)
{
	PrintString("Find Server");
}

void UMultiplayerSessionsSubsystem::OnCreateSessionComplete(FName SessionName, bool WasSuccessful) 
{
	PrintString(FString::Printf(TEXT("OnCreateSessionComplete: %d"), WasSuccessful));

	if (WasSuccessful)
	{
		GetWorld()->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
	}
}

void UMultiplayerSessionsSubsystem::OnDestroySessionComplete(FName SessionName, bool WasSuccessful)
{
	FString Msg = FString::Printf(TEXT("OnDestroySessionComplete, SessionName: %s, Success: %d"),
		*SessionName.ToString(), WasSuccessful);
	PrintString(Msg);

	if (CreateServerAfterDestroy)
	{
		CreateServerAfterDestroy = false;
		CreateServer(DestroyServerName);
	}
}

