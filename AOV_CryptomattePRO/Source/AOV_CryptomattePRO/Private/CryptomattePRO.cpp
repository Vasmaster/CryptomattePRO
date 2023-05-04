// Copyright Epic Games, Inc. All Rights Reserved.

#include "CryptomattePRO.h"
#include "CryptomattePROBPLibrary.h"
#include "CryptomattePROSetting.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Misc/FileHelper.h"

#define LOCTEXT_NAMESPACE "FCryptomattePRO"

IMPLEMENT_MODULE(FCryptomattePRO, CryptomattePRO)

void FCryptomattePRO::StartupModule()
{
    // This code will execute after your module is loaded into memory;
    // // Register a callback to be called when the viewport is rendered
 //  FEditorDelegates::EndPIE.AddRaw(this, &FCryptomattePRO::OnEndPIE);

    // the exact timing is specified in the .uplugin file per-module
}

void FCryptomattePRO::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module;
    // // Unregister the callback when the module is shut down
   // FEditorDelegates::EndPIE.RemoveAll(this);
    // the exact timing is specified in the .uplugin file per-module
}
// This function saves an image to a EXR file
void FCryptomattePRO::SaveEXR(const FString& FilePath, const TArray<FColor>& ImageData, int32 Width, int32 Height)
{
    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>("ImageWrapper");
    TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::EXR);

    int32 ImageDataSizeInBytes = ImageData.Num() * sizeof(FColor);

    if (ImageWrapper.IsValid() && ImageWrapper->SetRaw(ImageData.GetData(), ImageDataSizeInBytes, Width, Height, ERGBFormat::BGRA, 16))
    {
        TArray<uint8>CompressedData;
        ImageWrapper->GetCompressed(100); // Set the compression quality to 100
        FFileHelper::SaveArrayToFile(CompressedData, *FilePath);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to save image."));
    }
}


void FCryptomattePRO::OnEndPIE(bool bIsSimulating)
{
    // Get the editor viewport client
   // FViewportClient* ViewportClient = GEditor->GetActiveViewport()->GetClient();
   
   

   // // Create a cryptomatte metadata structure
   // FString MaterialId = TEXT("Material");
   // FString ObjectId = TEXT("Object");
   // FString CryptomatteMetadata;
   // FString CryptomatteMetadataName = TEXT("cryptomatte");
   // FString CryptomatteMetadataPrefix = TEXT("crypto_");
   // TCryptomatteMetadata<MaterialId, ObjectId>::AddCryptomatteMetadataToOpenEXR(CryptomatteMetadata, CryptomatteMetadataName, CryptomatteMetadataPrefix);

   // // Create a cryptomatte image with the material and object IDs
   // //TCryptomatte<MaterialId, ObjectId> Cryptomatte;
   // //for (int32 Y = 0; Y < Height; Y++)
   // //{
   // //    for (int32 X = 0; X < Width; X++)
   // //    {
   // //        // Get the color of the pixel
   // //        FColor PixelColor = TextureBuffer[X + Y * Width];

   // //        // Get the material and object IDs from the pixel color
   // //        FString MaterialIdValue = FString::Printf(TEXT("%d"), PixelColor.R);
   // //        FString ObjectIdValue = FString::Printf(TEXT("%d"), PixelColor.G);

   // //        // Add the material and object IDs to the cryptomatte
   // //        Cryptomatte.AddPixel(X, Y, MaterialIdValue, ObjectIdValue);
   // //    }
   // //};
           
}
#undef LOCTEXT_NAMESPACE