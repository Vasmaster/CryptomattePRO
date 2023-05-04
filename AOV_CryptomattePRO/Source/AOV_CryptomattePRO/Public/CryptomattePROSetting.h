#pragma once

//#include "Engine\Engine.h"
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineOutputSetting.h"
#include "MoviePipelineImagePassBase.h"
#include "MovieRenderPipelineDataTypes.h"
#include "MoviePipelineQueue.h"
#include "MoviePipelineQueueSubsystem.h"
#include "CryptomattePROSetting.generated.h"

UENUM(BlueprintType)
enum class ECryptomatteIdType : uint8
{
	//pick the tag of the actors in scene and assing an ID map to those groups
	Tag,
	// Grouped by material name. This means different objects that use the same material will be merged. */
	Material,
};

UCLASS(BlueprintType)
class UCryptomattePROSetting : public UMoviePipelineRenderPass
{
	GENERATED_BODY()
			
	virtual bool IsValidOnMaster() const override;

public:
		
	UCryptomattePROSetting()
	{
		SetIsEnabled(true);
	}

	UMoviePipelineOutputSetting* GetOutputSetting() const;

	// Override the GetCategoryName function to display the category in Movie Render Queue
	virtual FText GetCategoryName() const  { return NSLOCTEXT("MovieRenderPipeline", "CryptomatteCategory", "Cryptomatte PRO"); }
	
	// Override BeginDestroy
	virtual void PostInitProperties() override;
	
	// Override BeginDestroy
	virtual void BeginDestroy() override;

	// Override PostEditChangeProperty
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CryptomattePRO")
		ECryptomatteIdType IdType;

	// Additional properties for utilizing MoviePipelineOutputSetting properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "File Output")
		FString FileNameFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "File Output")
		FIntPoint OutputResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "File Output")
		bool bUseCustomFrameRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = bUseCustomFrameRate), Category = "File Output")
		FFrameRate OutputFrameRate;
		
	UFUNCTION(BlueprintCallable, Category = "CryptomattePRO")
		void ProcessRenderPasses();
	
	UPROPERTY(EditAnywhere, Category = "File Directory")
		FDirectoryPath OutputDirectory;
	
	UFUNCTION(BlueprintCallable, Category = "File Directory")
		void UpdateOutputDirectoryFromOutputSetting();

	UFUNCTION(BlueprintCallable, Category = "File Directory")
		FText GetOutputDirectoryDisplayText() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cryptomatte PRO")
		bool bEnableCryptomatte;
	

private:

	UFUNCTION()
		void OnRenderMovieStopped(UMoviePipeline* MoviePipeline, FMoviePipelineOutputData OutputData);

protected:

};

