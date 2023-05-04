#include "CryptomattePROSetting.h"
#include "CryptomattePRO.h"
#include "CryptomattePROHandler.h"
#include "MoviePipeline.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineOutputSetting.h"
#include "MoviePipelineImagePassBase.h"
#include "MovieRenderPipelineDataTypes.h"
#include "Engine/Engine.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"
#include "MoviePipelineQueueSubsystem.h"
#include "MoviePipelineBlueprintLibrary.h"
#include "MoviePipelineMasterConfig.h"


UMoviePipelineOutputSetting* UCryptomattePROSetting::GetOutputSetting() const
{
    UMoviePipeline* OuterPipeline = Cast<UMoviePipeline>(GetOuter());
    if (!OuterPipeline)
    {
        return nullptr;
    }

    UMoviePipelineOutputSetting* OutputSetting = OuterPipeline->GetPipelineMasterConfig()->FindSetting<UMoviePipelineOutputSetting>();
    return OutputSetting;
}

  bool UCryptomattePROSetting::IsValidOnMaster() const
  {
     //Add your validation logic here, return true if the setting is valid, false otherwise
     return true;
  }

  void UCryptomattePROSetting::ProcessRenderPasses()
{

    UMoviePipelineOutputSetting* OutputSetting = GetOutputSetting();
    if (!OutputSetting)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to retrieve output setting."));
        return;
    }

    // Utilize the properties from MoviePipelineOutputSetting
    FileNameFormat = OutputSetting->FileNameFormat;
    OutputResolution = OutputSetting->OutputResolution;
    bUseCustomFrameRate = OutputSetting->bUseCustomFrameRate;
    OutputFrameRate = OutputSetting->OutputFrameRate;

    // Get the base output directory from the Movie Render Queue
    FString BaseOutputDirectory = OutputDirectory.Path;

    // Create a sub-folder within the base output directory
    FString SubFolderPath = FPaths::Combine(BaseOutputDirectory, "CmPRO_tag");

    // Create the directory if it does not exist
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (!PlatformFile.DirectoryExists(*SubFolderPath))
    {
        PlatformFile.CreateDirectory(*SubFolderPath);
    }         
  }

  void UCryptomattePROSetting::UpdateOutputDirectoryFromOutputSetting()
  {
      UMoviePipelineOutputSetting* OutputSetting = GetOutputSetting();
      if (OutputSetting)
      {
          OutputDirectory = OutputSetting->OutputDirectory;
      }
  }

  FText UCryptomattePROSetting::GetOutputDirectoryDisplayText() const
  {
      return FText::FromString(OutputDirectory.Path);
  }

  void UCryptomattePROSetting::PostInitProperties()
  {
      Super::PostInitProperties();

      // ...
  }

  void UCryptomattePROSetting::BeginDestroy()
  {  
      Super::BeginDestroy();
  }


  void UCryptomattePROSetting::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
  {
      Super::PostEditChangeProperty(PropertyChangedEvent);

      if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCryptomattePROSetting, bEnableCryptomatte))
      {
          UMoviePipeline* OuterPipeline = Cast<UMoviePipeline>(GetOuter());
          if (OuterPipeline)
          {
             // OuterPipeline->OnMoviePipelineWorkFinishedDelegate.RemoveDynamic(this, &UCryptomattePROSetting::OnRenderMovieStopped);
              //OuterPipeline->OnMoviePipelineWorkFinishedDelegate.RemoveDynamic(this, &UCryptomattePROSetting::OnRenderMovieStopped);

              if (bEnableCryptomatte)
              {
                //  FMoviePipeline->OnMoviePipelineWorkFinishedDelegate.AddDynamic(this, &UCryptomattePROSetting::OnRenderMovieStopped);
                  //OuterPipeline->OnMoviePipelineWorkFinishedDelegate.AddDynamic(this, &UCryptomattePROSetting::OnRenderMovieStopped);
              }
          }
      }
  }

  void UCryptomattePROSetting::OnRenderMovieStopped(UMoviePipeline* MoviePipeline, FMoviePipelineOutputData OutputData)
  {
      if (MoviePipeline)
      {
          //FString OutputDirectory = OutputData.Pipeline->GetCurrentJob()->GetOutputDirectory().ToString();
          // Execute your function to save the encrypted EXR files
      }
  }

