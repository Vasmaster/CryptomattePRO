// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "ABaseActorManager.generated.h"

USTRUCT(BlueprintType)
struct FTagData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName Tag;
};

USTRUCT(BlueprintType)
struct FTagColorData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FLinearColor Color;
};

UCLASS()
class CRYPTOMATTEPRO_API AABaseActorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABaseActorManager();

	// The TagsList array
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Scene Manager")
		TArray<FTagData> TagsList;

	// The TaggedColor array
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Scene Manager")
		TArray<FTagColorData> TaggedColor;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
