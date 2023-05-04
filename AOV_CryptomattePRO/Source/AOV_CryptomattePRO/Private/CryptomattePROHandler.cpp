// Copyright Epic Games, Inc. All Rights Reserved.

#include "CryptomattePROHandler.h"
#include "ABaseActorManager.h"
#include "CryptomattePRO.h"
#include "CryptomattePROSetting.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Misc/FileHelper.h"
#include "LevelEditor.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "EditorViewportClient.h"
#include "Editor.h"


// Function to get an actor by name
AActor* GetActorByName(UWorld* World, const FString& ActorName)
{
    for (TActorIterator<AActor> It(World); It; ++It)
    {
        AActor* CurrentActor = *It;
        if (CurrentActor && CurrentActor->GetName() == ActorName)
        {
            return CurrentActor;
        }
    }
    return nullptr;
}

// In your source file
void FCryptomattePROHandler::Setup()
{
    LayerName = TEXT("CryptomattePass");
    // ... (Initialize the color map if needed)
}


void FCryptomattePROHandler::Execute(TArray<TWeakObjectPtr<AActor>> Actors, FString OutputDirectory)
{
    UWorld* World = GEditor->GetEditorWorldContext().World();

    // Replace "ABaseActorManager" with the appropriate class name
    AABaseActorManager* ActorManager = nullptr;
    //TArray<FLinearColor> ColorForTag;

    for (TActorIterator<AABaseActorManager> It(World); It; ++It)
    {
        ActorManager = *It;
        break; // We found an actor of the desired class, so we break out of the loop
    }

    if (!ActorManager)
    {
        // Actor manager not found, handle the error
        UE_LOG(LogTemp, Warning, TEXT("Actor Manager not found."));
        // Get a reference to the actor manager
        SceneActorManagerClass = AABaseActorManager::StaticClass();
        ActorManager = Cast<AABaseActorManager>(World->SpawnActor(SceneActorManagerClass));
    }
    
    // Iterate through the ColorForTag array
    for (int32 i = 0; i < ActorManager->TaggedColor.Num(); ++i)
    {
        // Convert the linear color to an sRGB color
        FColor SrgbColor = ActorManager->TaggedColor[i].Color.ToFColor(true);

        // Create an FName for the color
        FString ColorHex = SrgbColor.ToHex();
        FString FileName = FString::Printf(TEXT("Color_"), *ColorHex , TEXT(".exr"));

        // Create the output file path
        FString OutputFilePath = FPaths::Combine(OutputDirectory, FileName);

        // Create an image with only one pixel of the desired color
        TArray<FColor> ImageData = { SrgbColor };

        // Save the image as an OpenEXR file
        FCryptomattePRO::SaveEXR(OutputFilePath, ImageData, 1, 1);
    }
}