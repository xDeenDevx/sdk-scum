/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCache.

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0048 (0x000028 - 0x000070)
class UGeometryCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<UMaterialInterface*>                        Materials;                                                  // 0x0030   (0x0010)  
	TArray<UGeometryCacheTrack*>                       Tracks;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0060   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0064   (0x0004)  
	uint64_t                                           Hash;                                                       // 0x0068   (0x0008)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000220 - 0x000228)
class AGeometryCacheActor : public AActor
{ 
public:
	UGeometryCacheComponent*                           GeometryCacheComponent;                                     // 0x0220   (0x0008)  


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	UGeometryCacheComponent* GetGeometryCacheComponent();                                                                    // [0x1164fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryCacheCodecBase : public UObject
{ 
public:
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0060 (0x000480 - 0x0004E0)
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
	UGeometryCache*                                    GeometryCache;                                              // 0x0478   (0x0008)  
	bool                                               bRunning;                                                   // 0x0480   (0x0001)  
	bool                                               bLooping;                                                   // 0x0481   (0x0001)  
	bool                                               bExtrapolateFrames;                                         // 0x0482   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0483   (0x0001)  MISSED
	float                                              StartTimeOffset;                                            // 0x0484   (0x0004)  
	float                                              PlaybackSpeed;                                              // 0x0488   (0x0004)  
	float                                              MotionVectorScale;                                          // 0x048C   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x0490   (0x0004)  
	float                                              ElapsedTime;                                                // 0x0494   (0x0004)  
	unsigned char                                      UnknownData01_5[0x34];                                      // 0x0498   (0x0034)  MISSED
	float                                              Duration;                                                   // 0x04CC   (0x0004)  
	bool                                               bManualTick;                                                // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x04D1   (0x000F)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x1165790] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	void Stop();                                                                                                             // [0x1165770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x11656f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x1165670] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	void SetMotionVectorScale(float NewMotionVectorScale);                                                                   // [0x11655f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	void SetLooping(bool bNewLooping);                                                                                       // [0x1165360] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	bool SetGeometryCache(UGeometryCache* NewGeomCache);                                                                     // [0x11652c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	void SetExtrapolateFrames(bool bNewExtrapolating);                                                                       // [0x1165230] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	void PlayReversedFromEnd();                                                                                              // [0x1165210] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	void PlayReversed();                                                                                                     // [0x11651f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	void PlayFromStart();                                                                                                    // [0x11651d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	void Play();                                                                                                             // [0x11651b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	void Pause();                                                                                                            // [0x1165190] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	bool IsPlayingReversed();                                                                                                // [0x1165160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0x1165130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	bool IsLooping();                                                                                                        // [0x1165100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	bool IsExtrapolatingFrames();                                                                                            // [0x11650d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	float GetStartTimeOffset();                                                                                              // [0x11650a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	float GetPlaybackSpeed();                                                                                                // [0x1165070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	float GetPlaybackDirection();                                                                                            // [0x1165040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	int32_t GetNumberOfFrames();                                                                                             // [0x1165010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	float GetMotionVectorScale();                                                                                            // [0x1164fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	float GetDuration();                                                                                                     // [0x1164f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	float GetAnimationTime();                                                                                                // [0x1164f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (0x000028 - 0x000058)
class UGeometryCacheTrack : public UObject
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000058 - 0x000080)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x005C   (0x0024)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x1164d00] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
	UGeometryCacheCodecBase*                           Codec;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_5[0x68];                                      // 0x0060   (0x0068)  MISSED
	float                                              StartSampleTime;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00CC   (0x000C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00B0 (0x000058 - 0x000108)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0058   (0x00B0)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00B0 (0x000058 - 0x000108)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0058   (0x00B0)  MISSED
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

