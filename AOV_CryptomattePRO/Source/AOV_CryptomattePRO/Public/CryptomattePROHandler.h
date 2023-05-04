#pragma once

#include "CoreMinimal.h"
//#include "CryptomattePROHandler.generated.h"

class FCryptomattePROHandler
{
public:
    void Setup();
    void Execute(TArray<TWeakObjectPtr<AActor>> Actors, FString OutputDirectory);
    //void SaveEXR(const FString& FilePath, const TArray<FColor>& ImageData, int32 Width, int32 Height);

private:
   FString LayerName;
   // TMap<FString, FLinearColor> ColorMap;
   UClass* SceneActorManagerClass = nullptr;
   // TArray<FName> UniqueTags;
};