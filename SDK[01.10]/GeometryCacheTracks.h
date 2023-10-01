/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCacheTracks.

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection
/// Size: 0x0040 (0x0000E8 - 0x000128)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGeometryCacheParams                     Params;                                                     // 0x00E8   (0x0040)  
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack
/// Size: 0x0018 (0x000090 - 0x0000A8)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        AnimationSections;                                          // 0x0098   (0x0010)  
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMovieSceneGeometryCacheParams
{ 
	UGeometryCache*                                    GeometryCacheAsset;                                         // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse;                                                   // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              StartOffset;                                                // 0x001C   (0x0004)  
	float                                              EndOffset;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FSoftObjectPath                                    GeometryCache;                                              // 0x0028   (0x0018)  
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
/// Size: 0x0048 (0x000020 - 0x000068)
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGeometryCacheSectionTemplateParameters  Params;                                                     // 0x0020   (0x0048)  
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
/// Size: 0x0008 (0x000040 - 0x000048)
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0044   (0x0004)  
};

