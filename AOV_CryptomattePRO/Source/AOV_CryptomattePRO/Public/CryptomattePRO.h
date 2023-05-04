#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCryptomattePRO : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    void OnEndPIE(bool bIsSimulating);
    static void SaveEXR(const FString& FilePath, const TArray<FColor>& ImageData, int32 Width, int32 Height);

private:
  
};