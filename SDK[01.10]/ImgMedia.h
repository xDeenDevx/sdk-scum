/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ImgMedia.

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x0040 (0x000088 - 0x0000C8)
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               IsPathRelativeToProjectRoot;                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FFrameRate                                         FrameRateOverride;                                          // 0x008C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            ProxyOverride;                                              // 0x0098   (0x0010)  
	FDirectoryPath                                     SequencePath;                                               // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	void SetSequencePath(FString Path);                                                                                      // [0x179fc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetMipLevelDistance
	void SetMipLevelDistance(float Distance);                                                                                // [0x179fbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveTargetObject
	void RemoveTargetObject(AActor* InActor);                                                                                // [0x179fb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveGlobalCamera
	void RemoveGlobalCamera(AActor* InActor);                                                                                // [0x179fa90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	FString GetSequencePath();                                                                                               // [0x179f9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	void GetProxies(TArray<FString>& OutProxies);                                                                            // [0x179f900] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.AddTargetObject
	void AddTargetObject(AActor* InActor, float Width);                                                                      // [0x179f830] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.AddGlobalCamera
	void AddGlobalCamera(AActor* InActor);                                                                                   // [0x179f7a0] Final|Native|Public|BlueprintCallable 
};

