/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MeshModelingTools.

/// Class /Script/MeshModelingTools.AddPatchToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.AddPatchToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Width;                                                      // 0x0060   (0x0004)  
	float                                              Rotation;                                                   // 0x0064   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x0068   (0x0004)  
	float                                              Shift;                                                      // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.AddPatchTool
/// Size: 0x0078 (0x000088 - 0x000100)
class UAddPatchTool : public USingleClickTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0088   (0x0008)  MISSED
	UAddPatchToolProperties*                           ShapeSettings;                                              // 0x0090   (0x0008)  
	UNewMeshMaterialProperties*                        MaterialProperties;                                         // 0x0098   (0x0008)  
	UPreviewMesh*                                      PreviewMesh;                                                // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x00A8   (0x0058)  MISSED
};

/// Class /Script/MeshModelingTools.AddPrimitiveToolBuilder
/// Size: 0x0010 (0x000028 - 0x000038)
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralShapeToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bInstanceIfPossible;                                        // 0x0060   (0x0001)  
	EMakeMeshPolygroupMode                             PolygroupMode;                                              // 0x0061   (0x0001)  
	EMakeMeshPlacementType                             PlaceMode;                                                  // 0x0062   (0x0001)  
	bool                                               bSnapToGrid;                                                // 0x0063   (0x0001)  
	EMakeMeshPivotLocation                             PivotLocation;                                              // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              Rotation;                                                   // 0x0068   (0x0004)  
	bool                                               bAlignShapeToPlacementSurface;                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralRectangleToolProperties
/// Size: 0x0010 (0x000070 - 0x000080)
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Width;                                                      // 0x0070   (0x0004)  
	float                                              Depth;                                                      // 0x0074   (0x0004)  
	int32_t                                            WidthSubdivisions;                                          // 0x0078   (0x0004)  
	int32_t                                            DepthSubdivisions;                                          // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralBoxToolProperties
/// Size: 0x0008 (0x000080 - 0x000088)
class UProceduralBoxToolProperties : public UProceduralRectangleToolProperties
{ 
public:
	float                                              Height;                                                     // 0x0080   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x0084   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralRoundedRectangleToolProperties
/// Size: 0x0008 (0x000080 - 0x000088)
class UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties
{ 
public:
	float                                              CornerRadius;                                               // 0x0080   (0x0004)  
	int32_t                                            CornerSlices;                                               // 0x0084   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralDiscToolProperties
/// Size: 0x0010 (0x000070 - 0x000080)
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x0074   (0x0004)  
	int32_t                                            RadialSubdivisions;                                         // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralPuncturedDiscToolProperties
/// Size: 0x0008 (0x000080 - 0x000088)
class UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties
{ 
public:
	float                                              HoleRadius;                                                 // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralTorusToolProperties
/// Size: 0x0010 (0x000070 - 0x000080)
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              MajorRadius;                                                // 0x0070   (0x0004)  
	float                                              MinorRadius;                                                // 0x0074   (0x0004)  
	int32_t                                            TubeSlices;                                                 // 0x0078   (0x0004)  
	int32_t                                            CrossSectionSlices;                                         // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralCylinderToolProperties
/// Size: 0x0010 (0x000070 - 0x000080)
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	float                                              Height;                                                     // 0x0074   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x0078   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralConeToolProperties
/// Size: 0x0010 (0x000070 - 0x000080)
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	float                                              Height;                                                     // 0x0074   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x0078   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralArrowToolProperties
/// Size: 0x0018 (0x000070 - 0x000088)
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              ShaftRadius;                                                // 0x0070   (0x0004)  
	float                                              ShaftHeight;                                                // 0x0074   (0x0004)  
	float                                              HeadRadius;                                                 // 0x0078   (0x0004)  
	float                                              HeadHeight;                                                 // 0x007C   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x0080   (0x0004)  
	int32_t                                            TotalSubdivisions;                                          // 0x0084   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralSphereToolProperties
/// Size: 0x0010 (0x000070 - 0x000080)
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	int32_t                                            LatitudeSlices;                                             // 0x0074   (0x0004)  
	int32_t                                            LongitudeSlices;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralSphericalBoxToolProperties
/// Size: 0x0008 (0x000070 - 0x000078)
class UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.LastActorInfo
/// Size: 0x0030 (0x000028 - 0x000058)
class ULastActorInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	AActor*                                            Actor;                                                      // 0x0038   (0x0008)  
	UStaticMesh*                                       StaticMesh;                                                 // 0x0040   (0x0008)  
	UProceduralShapeToolProperties*                    ShapeSettings;                                              // 0x0048   (0x0008)  
	UNewMeshMaterialProperties*                        MaterialProperties;                                         // 0x0050   (0x0008)  
};

/// Class /Script/MeshModelingTools.AddPrimitiveTool
/// Size: 0x0068 (0x000088 - 0x0000F0)
class UAddPrimitiveTool : public USingleClickTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0088   (0x0008)  MISSED
	UProceduralShapeToolProperties*                    ShapeSettings;                                              // 0x0090   (0x0008)  
	UNewMeshMaterialProperties*                        MaterialProperties;                                         // 0x0098   (0x0008)  
	UPreviewMesh*                                      PreviewMesh;                                                // 0x00A0   (0x0008)  
	ULastActorInfo*                                    LastGenerated;                                              // 0x00A8   (0x0008)  
	FString                                            AssetName;                                                  // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x00C0   (0x0030)  MISSED
};

/// Class /Script/MeshModelingTools.AddBoxPrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddCylinderPrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddConePrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddConePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddRectanglePrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddRoundedRectanglePrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddRoundedRectanglePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddDiscPrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddPuncturedDiscPrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddPuncturedDiscPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddTorusPrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddArrowPrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddSpherePrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddSphericalBoxPrimitiveTool
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAddSphericalBoxPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AlignObjectsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.AlignObjectsToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EAlignObjectsAlignTypes                            AlignType;                                                  // 0x0060   (0x0004)  
	EAlignObjectsAlignToOptions                        AlignTo;                                                    // 0x0064   (0x0004)  
	EAlignObjectsBoxPoint                              BoxPosition;                                                // 0x0068   (0x0004)  
	bool                                               bAlignX;                                                    // 0x006C   (0x0001)  
	bool                                               bAlignY;                                                    // 0x006D   (0x0001)  
	bool                                               bAlignZ;                                                    // 0x006E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x006F   (0x0001)  MISSED
};

/// Class /Script/MeshModelingTools.AlignObjectsTool
/// Size: 0x00B0 (0x000090 - 0x000140)
class UAlignObjectsTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	UAlignObjectsToolProperties*                       AlignProps;                                                 // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0xA0];                                      // 0x00A0   (0x00A0)  MISSED
};

/// Class /Script/MeshModelingTools.BakeMeshAttributeMapsToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UBakeMeshAttributeMapsToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.BakeMeshAttributeMapsToolProperties
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EBakeMapType                                       MapType;                                                    // 0x0060   (0x0004)  
	EBakeTextureResolution                             Resolution;                                                 // 0x0064   (0x0004)  
	bool                                               bUseWorldSpace;                                             // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x006C   (0x0004)  
	FString                                            UVLayer;                                                    // 0x0070   (0x0010)  
	TArray<FString>                                    UVLayerNamesList;                                           // 0x0080   (0x0010)  
	TArray<UTexture2D*>                                Result;                                                     // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
	TArray<FString> GetUVLayerNamesFunc();                                                                                   // [0xd17db0] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.BakedNormalMapToolProperties
/// Size: 0x0000 (0x000060 - 0x000060)
class UBakedNormalMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.BakedOcclusionMapToolProperties
/// Size: 0x0028 (0x000060 - 0x000088)
class UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EOcclusionMapPreview                               Preview;                                                    // 0x0060   (0x0004)  
	int32_t                                            OcclusionRays;                                              // 0x0064   (0x0004)  
	float                                              MaxDistance;                                                // 0x0068   (0x0004)  
	float                                              SpreadAngle;                                                // 0x006C   (0x0004)  
	EOcclusionMapDistribution                          Distribution;                                               // 0x0070   (0x0004)  
	bool                                               bGaussianBlur;                                              // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              BlurRadius;                                                 // 0x0078   (0x0004)  
	float                                              BiasAngle;                                                  // 0x007C   (0x0004)  
	ENormalMapSpace                                    NormalSpace;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.BakedOcclusionMapVisualizationProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              BaseGrayLevel;                                              // 0x0060   (0x0004)  
	float                                              OcclusionMultiplier;                                        // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.BakedCurvatureMapToolProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EBakedCurvatureTypeMode                            CurvatureType;                                              // 0x0060   (0x0004)  
	EBakedCurvatureColorMode                           ColorMode;                                                  // 0x0064   (0x0004)  
	float                                              RangeMultiplier;                                            // 0x0068   (0x0004)  
	float                                              MinRangeMultiplier;                                         // 0x006C   (0x0004)  
	EBakedCurvatureClampMode                           Clamping;                                                   // 0x0070   (0x0004)  
	bool                                               bGaussianBlur;                                              // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              BlurRadius;                                                 // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.BakedTexture2DImageProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UBakedTexture2DImageProperties : public UInteractiveToolPropertySet
{ 
public:
	UTexture2D*                                        SourceTexture;                                              // 0x0060   (0x0008)  
	int32_t                                            UVLayer;                                                    // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.BakeMeshAttributeMapsTool
/// Size: 0x0468 (0x000090 - 0x0004F8)
class UBakeMeshAttributeMapsTool : public UMultiSelectionTool
{ 
public:
	UBakeMeshAttributeMapsToolProperties*              Settings;                                                   // 0x0090   (0x0008)  
	UBakedNormalMapToolProperties*                     NormalMapProps;                                             // 0x0098   (0x0008)  
	UBakedOcclusionMapToolProperties*                  OcclusionMapProps;                                          // 0x00A0   (0x0008)  
	UBakedCurvatureMapToolProperties*                  CurvatureMapProps;                                          // 0x00A8   (0x0008)  
	UBakedTexture2DImageProperties*                    Texture2DProps;                                             // 0x00B0   (0x0008)  
	UBakedOcclusionMapVisualizationProperties*         VisualizationProps;                                         // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00C0   (0x0010)  MISSED
	UMaterialInstanceDynamic*                          PreviewMaterial;                                            // 0x00D0   (0x0008)  
	UMaterialInstanceDynamic*                          BentNormalPreviewMaterial;                                  // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x360];                                     // 0x00E0   (0x0360)  MISSED
	UTexture2D*                                        CachedNormalMap;                                            // 0x0440   (0x0008)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x0448   (0x0028)  MISSED
	UTexture2D*                                        CachedOcclusionMap;                                         // 0x0470   (0x0008)  
	UTexture2D*                                        CachedBentNormalMap;                                        // 0x0478   (0x0008)  
	unsigned char                                      UnknownData03_5[0x28];                                      // 0x0480   (0x0028)  MISSED
	UTexture2D*                                        CachedCurvatureMap;                                         // 0x04A8   (0x0008)  
	unsigned char                                      UnknownData04_5[0x10];                                      // 0x04B0   (0x0010)  MISSED
	UTexture2D*                                        CachedMeshPropertyMap;                                      // 0x04C0   (0x0008)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x04C8   (0x0010)  MISSED
	UTexture2D*                                        CachedTexture2DImageMap;                                    // 0x04D8   (0x0008)  
	UTexture2D*                                        EmptyNormalMap;                                             // 0x04E0   (0x0008)  
	UTexture2D*                                        EmptyColorMapBlack;                                         // 0x04E8   (0x0008)  
	UTexture2D*                                        EmptyColorMapWhite;                                         // 0x04F0   (0x0008)  
};

/// Class /Script/MeshModelingTools.BakeTransformToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.BakeTransformToolProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bBakeRotation;                                              // 0x0060   (0x0001)  
	EBakeScaleMethod                                   BakeScale;                                                  // 0x0061   (0x0001)  
	bool                                               bRecenterPivot;                                             // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0063   (0x0005)  MISSED
};

/// Class /Script/MeshModelingTools.BakeTransformTool
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UBakeTransformTool : public UMultiSelectionTool
{ 
public:
	UBakeTransformToolProperties*                      BasicProperties;                                            // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0098   (0x0020)  MISSED
};

/// Class /Script/MeshModelingTools.PhysicsObjectToolPropertySet
/// Size: 0x0058 (0x000060 - 0x0000B8)
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{ 
public:
	FString                                            ObjectName;                                                 // 0x0060   (0x0010)  
	ECollisionGeometryMode                             CollisionType;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FPhysicsSphereData>                         Spheres;                                                    // 0x0078   (0x0010)  
	TArray<FPhysicsBoxData>                            Boxes;                                                      // 0x0088   (0x0010)  
	TArray<FPhysicsCapsuleData>                        capsules;                                                   // 0x0098   (0x0010)  
	TArray<FPhysicsConvexData>                         Convexes;                                                   // 0x00A8   (0x0010)  
};

/// Class /Script/MeshModelingTools.CollisionGeometryVisualizationProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              LineThickness;                                              // 0x0060   (0x0004)  
	bool                                               bShowHidden;                                                // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	FColor                                             Color;                                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.CombineMeshesToolBuilder
/// Size: 0x0010 (0x000028 - 0x000038)
class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.CombineMeshesToolProperties
/// Size: 0x0028 (0x000060 - 0x000088)
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIsDuplicateMode;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	ECombineTargetType                                 WriteOutputTo;                                              // 0x0064   (0x0004)  
	FString                                            OutputName;                                                 // 0x0068   (0x0010)  
	FString                                            OutputAsset;                                                // 0x0078   (0x0010)  
};

/// Class /Script/MeshModelingTools.CombineMeshesTool
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UCombineMeshesTool : public UMultiSelectionTool
{ 
public:
	UCombineMeshesToolProperties*                      BasicProperties;                                            // 0x0090   (0x0008)  
	UOnAcceptHandleSourcesProperties*                  HandleSourceProperties;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A0   (0x0018)  MISSED
};

/// Class /Script/MeshModelingTools.ConvertToPolygonsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.ConvertToPolygonsToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EConvertToPolygonsMode                             ConversionMode;                                             // 0x0060   (0x0004)  
	float                                              AngleTolerance;                                             // 0x0064   (0x0004)  
	bool                                               bCalculateNormals;                                          // 0x0068   (0x0001)  
	bool                                               bShowGroupColors;                                           // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.ConvertToPolygonsTool
/// Size: 0x0358 (0x000088 - 0x0003E0)
class UConvertToPolygonsTool : public USingleSelectionTool
{ 
public:
	UConvertToPolygonsToolProperties*                  Settings;                                                   // 0x0088   (0x0008)  
	UPreviewMesh*                                      PreviewMesh;                                                // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x348];                                     // 0x0098   (0x0348)  MISSED
};

/// Class /Script/MeshModelingTools.CSGMeshesToolProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ECSGOperation                                      Operation;                                                  // 0x0060   (0x0001)  
	bool                                               bShowNewBoundaryEdges;                                      // 0x0061   (0x0001)  
	bool                                               bAttemptFixHoles;                                           // 0x0062   (0x0001)  
	bool                                               bOnlyUseFirstMeshMaterials;                                 // 0x0063   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.CSGMeshesTool
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{ 
public:
	UCSGMeshesToolProperties*                          CSGProperties;                                              // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00F8   (0x0010)  MISSED
	ULineSetComponent*                                 DrawnLineSet;                                               // 0x0108   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.CSGMeshesToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.DeformMeshPolygonsToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.DeformMeshPolygonsTransformProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{ 
public:
	EGroupTopologyDeformationStrategy                  DeformationStrategy;                                        // 0x0060   (0x0001)  
	EQuickTransformerMode                              TransformMode;                                              // 0x0061   (0x0001)  
	bool                                               bSelectFaces;                                               // 0x0062   (0x0001)  
	bool                                               bSelectEdges;                                               // 0x0063   (0x0001)  
	bool                                               bSelectVertices;                                            // 0x0064   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0065   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x0066   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0067   (0x0001)  MISSED
	EWeightScheme                                      SelectedWeightScheme;                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	double                                             HandleWeight;                                               // 0x0070   (0x0008)  
	bool                                               bPostFixHandles;                                            // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.DeformMeshPolygonsTool
/// Size: 0x1300 (0x0000C0 - 0x0013C0)
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00C0   (0x0008)  MISSED
	USimpleDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x00C8   (0x0008)  
	UDeformMeshPolygonsTransformProperties*            TransformProps;                                             // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x12E8];                                    // 0x00D8   (0x12E8)  MISSED
};

/// Class /Script/MeshModelingTools.DisplaceMeshCommonProperties
/// Size: 0x0030 (0x000060 - 0x000090)
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{ 
public:
	EDisplaceMeshToolDisplaceType                      DisplacementType;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              DisplaceIntensity;                                          // 0x0064   (0x0004)  
	int32_t                                            randomSeed;                                                 // 0x0068   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x006C   (0x0004)  
	FName                                              WeightMap;                                                  // 0x0070   (0x0008)  
	TArray<FString>                                    WeightMapsList;                                             // 0x0078   (0x0010)  
	bool                                               bInvertWeightMap;                                           // 0x0088   (0x0001)  
	bool                                               bDisableSizeWarning;                                        // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x008A   (0x0006)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
	TArray<FString> GetWeightMapsFunc();                                                                                     // [0xd1ca30] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.DisplaceMeshTextureMapProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{ 
public:
	UTexture2D*                                        DisplacementMap;                                            // 0x0060   (0x0008)  
};

/// Class /Script/MeshModelingTools.DisplaceMeshDirectionalFilterProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableFilter;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	FVector                                            FilterDirection;                                            // 0x0064   (0x000C)  
	float                                              FilterWidth;                                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.DisplaceMeshPerlinNoiseProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{ 
public:
	TArray<FPerlinLayerProperties>                     PerlinLayerProperties;                                      // 0x0060   (0x0010)  
};

/// Class /Script/MeshModelingTools.DisplaceMeshSineWaveProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SineWaveFrequency;                                          // 0x0060   (0x0004)  
	float                                              SineWavePhaseShift;                                         // 0x0064   (0x0004)  
	FVector                                            SineWaveDirection;                                          // 0x0068   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.DisplaceMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.DisplaceMeshTool
/// Size: 0x0368 (0x000088 - 0x0003F0)
class UDisplaceMeshTool : public USingleSelectionTool
{ 
public:
	UDisplaceMeshCommonProperties*                     CommonProperties;                                           // 0x0088   (0x0008)  
	UDisplaceMeshDirectionalFilterProperties*          DirectionalFilterProperties;                                // 0x0090   (0x0008)  
	UDisplaceMeshTextureMapProperties*                 TextureMapProperties;                                       // 0x0098   (0x0008)  
	UDisplaceMeshPerlinNoiseProperties*                NoiseProperties;                                            // 0x00A0   (0x0008)  
	UDisplaceMeshSineWaveProperties*                   SineWaveProperties;                                         // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x340];                                     // 0x00B0   (0x0340)  MISSED
};

/// Class /Script/MeshModelingTools.DrawAndRevolveToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveProperties
/// Size: 0x0050 (0x000060 - 0x0000B0)
class URevolveProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             RevolutionDegrees;                                          // 0x0060   (0x0008)  
	double                                             RevolutionDegreesOffset;                                    // 0x0068   (0x0008)  
	int32_t                                            Steps;                                                      // 0x0070   (0x0004)  
	bool                                               bReverseRevolutionDirection;                                // 0x0074   (0x0001)  
	bool                                               bFlipMesh;                                                  // 0x0075   (0x0001)  
	bool                                               bProfileIsCrossSectionOfSide;                               // 0x0076   (0x0001)  
	ERevolvePropertiesPolygroupMode                    PolygroupMode;                                              // 0x0077   (0x0001)  
	ERevolvePropertiesQuadSplit                        QuadSplitMode;                                              // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	double                                             DiagonalProportionTolerance;                                // 0x0080   (0x0008)  
	ERevolvePropertiesCapFillMode                      CapFillMode;                                                // 0x0088   (0x0001)  
	bool                                               bWeldFullRevolution;                                        // 0x0089   (0x0001)  
	bool                                               bWeldVertsOnAxis;                                           // 0x008A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x008B   (0x0005)  MISSED
	double                                             AxisWeldTolerance;                                          // 0x0090   (0x0008)  
	bool                                               bSharpNormals;                                              // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	double                                             SharpNormalAngleTolerance;                                  // 0x00A0   (0x0008)  
	bool                                               bFlipVs;                                                    // 0x00A8   (0x0001)  
	bool                                               bUVsSkipFullyWeldedEdges;                                   // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveToolProperties
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class URevolveToolProperties : public URevolveProperties
{ 
public:
	bool                                               bConnectOpenProfileToAxis;                                  // 0x00B0   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	FVector                                            DrawPlaneOrigin;                                            // 0x00B4   (0x000C)  
	FRotator                                           DrawPlaneOrientation;                                       // 0x00C0   (0x000C)  
	bool                                               bEnableSnapping;                                            // 0x00CC   (0x0001)  
	bool                                               bAllowedToEditDrawPlane;                                    // 0x00CD   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00CE   (0x0002)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class URevolveOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UDrawAndRevolveTool*                               RevolveTool;                                                // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.DrawAndRevolveTool
/// Size: 0x00A0 (0x000080 - 0x000120)
class UDrawAndRevolveTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0080   (0x0078)  MISSED
	UCurveControlPointsMechanic*                       ControlPointsMechanic;                                      // 0x00F8   (0x0008)  
	UConstructionPlaneMechanic*                        PlaneMechanic;                                              // 0x0100   (0x0008)  
	URevolveToolProperties*                            Settings;                                                   // 0x0108   (0x0008)  
	UNewMeshMaterialProperties*                        MaterialProperties;                                         // 0x0110   (0x0008)  
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x0118   (0x0008)  
};

/// Class /Script/MeshModelingTools.DrawPolygonToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolygonToolStandardProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{ 
public:
	EDrawPolygonDrawMode                               PolygonType;                                                // 0x0060   (0x0001)  
	EDrawPolygonOutputMode                             OutputMode;                                                 // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              FeatureSizeRatio;                                           // 0x0064   (0x0004)  
	float                                              ExtrudeHeight;                                              // 0x0068   (0x0004)  
	int32_t                                            Steps;                                                      // 0x006C   (0x0004)  
	bool                                               bAllowSelfIntersections;                                    // 0x0070   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolygonToolSnapProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableSnapping;                                            // 0x0060   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0061   (0x0001)  
	bool                                               bSnapToVertices;                                            // 0x0062   (0x0001)  
	bool                                               bSnapToEdges;                                               // 0x0063   (0x0001)  
	bool                                               bSnapToAngles;                                              // 0x0064   (0x0001)  
	bool                                               bSnapToLengths;                                             // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0066   (0x0002)  MISSED
	float                                              SegmentLength;                                              // 0x0068   (0x0004)  
	bool                                               bHitSceneObjects;                                           // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              HitNormalOffset;                                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolygonTool
/// Size: 0x04F0 (0x000080 - 0x000570)
class UDrawPolygonTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0080   (0x0008)  MISSED
	UDrawPolygonToolStandardProperties*                PolygonProperties;                                          // 0x0088   (0x0008)  
	UDrawPolygonToolSnapProperties*                    SnapProperties;                                             // 0x0090   (0x0008)  
	UNewMeshMaterialProperties*                        MaterialProperties;                                         // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_5[0xB0];                                      // 0x00A0   (0x00B0)  MISSED
	UPreviewMesh*                                      PreviewMesh;                                                // 0x0150   (0x0008)  
	UTransformGizmo*                                   PlaneTransformGizmo;                                        // 0x0158   (0x0008)  
	UTransformProxy*                                   PlaneTransformProxy;                                        // 0x0160   (0x0008)  
	unsigned char                                      UnknownData02_5[0x3D8];                                     // 0x0168   (0x03D8)  MISSED
	UPlaneDistanceFromHitMechanic*                     HeightMechanic;                                             // 0x0540   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0548   (0x0028)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolyPathToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolyPathProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{ 
public:
	EDrawPolyPathOutputMode                            OutputType;                                                 // 0x0060   (0x0004)  
	EDrawPolyPathWidthMode                             WidthMode;                                                  // 0x0064   (0x0004)  
	float                                              Width;                                                      // 0x0068   (0x0004)  
	EDrawPolyPathHeightMode                            HeightMode;                                                 // 0x006C   (0x0004)  
	float                                              Height;                                                     // 0x0070   (0x0004)  
	float                                              RampStartRatio;                                             // 0x0074   (0x0004)  
	bool                                               bSnapToWorldGrid;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolyPathExtrudeProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{ 
public:
	EDrawPolyPathExtrudeDirection                      Direction;                                                  // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolyPathTool
/// Size: 0x0190 (0x000080 - 0x000210)
class UDrawPolyPathTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0080   (0x0020)  MISSED
	UDrawPolyPathProperties*                           TransformProps;                                             // 0x00A0   (0x0008)  
	UDrawPolyPathExtrudeProperties*                    ExtrudeProperties;                                          // 0x00A8   (0x0008)  
	UNewMeshMaterialProperties*                        MaterialProperties;                                         // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x88];                                      // 0x00B8   (0x0088)  MISSED
	UConstructionPlaneMechanic*                        PlaneMechanic;                                              // 0x0140   (0x0008)  
	unsigned char                                      UnknownData02_5[0xA0];                                      // 0x0148   (0x00A0)  MISSED
	UPolyEditPreviewMesh*                              EditPreview;                                                // 0x01E8   (0x0008)  
	UPlaneDistanceFromHitMechanic*                     ExtrudeHeightMechanic;                                      // 0x01F0   (0x0008)  
	USpatialCurveDistanceMechanic*                     CurveDistMechanic;                                          // 0x01F8   (0x0008)  
	UCollectSurfacePathMechanic*                       SurfacePathMechanic;                                        // 0x0200   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.DynamicMeshBrushTool
/// Size: 0x0040 (0x0001B8 - 0x0001F8)
class UDynamicMeshBrushTool : public UBaseBrushTool
{ 
public:
	UPreviewMesh*                                      PreviewMesh;                                                // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x01C0   (0x0038)  MISSED
};

/// Class /Script/MeshModelingTools.DynamicMeshSculptToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.BrushSculptProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UBrushSculptProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIsRemeshingEnabled;                                        // 0x0060   (0x0001)  
	EDynamicMeshSculptBrushType                        PrimaryBrushType;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              PrimaryBrushSpeed;                                          // 0x0064   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x0068   (0x0001)  
	bool                                               bFreezeTarget;                                              // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              SmoothBrushSpeed;                                           // 0x006C   (0x0004)  
	bool                                               bDetailPreservingSmooth;                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.DynamicSculptToolActions
/// Size: 0x0008 (0x000060 - 0x000068)
class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MeshConstraintProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPreserveSharpEdges;                                        // 0x0060   (0x0001)  
	EMeshBoundaryConstraint                            MeshBoundaryConstraint;                                     // 0x0061   (0x0001)  
	EGroupBoundaryConstraint                           GroupBoundaryConstraint;                                    // 0x0062   (0x0001)  
	EMaterialBoundaryConstraint                        MaterialBoundaryConstraint;                                 // 0x0063   (0x0001)  
	bool                                               bPreventNormalFlips;                                        // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.RemeshProperties
/// Size: 0x0008 (0x000068 - 0x000070)
class URemeshProperties : public UMeshConstraintProperties
{ 
public:
	float                                              SmoothingStrength;                                          // 0x0068   (0x0004)  
	bool                                               bFlips;                                                     // 0x006C   (0x0001)  
	bool                                               bSplits;                                                    // 0x006D   (0x0001)  
	bool                                               bCollapses;                                                 // 0x006E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x006F   (0x0001)  MISSED
};

/// Class /Script/MeshModelingTools.BrushRemeshProperties
/// Size: 0x0010 (0x000070 - 0x000080)
class UBrushRemeshProperties : public URemeshProperties
{ 
public:
	bool                                               bEnableRemeshing;                                           // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            TriangleSize;                                               // 0x0074   (0x0004)  
	int32_t                                            PreserveDetail;                                             // 0x0078   (0x0004)  
	int32_t                                            Iterations;                                                 // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.FixedPlaneBrushProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPropertySetEnabled;                                        // 0x0060   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x0061   (0x0001)  
	bool                                               bSnapToGrid;                                                // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0063   (0x0001)  MISSED
	FVector                                            position;                                                   // 0x0064   (0x000C)  
	FQuat                                              Rotation;                                                   // 0x0070   (0x0010)  
};

/// Class /Script/MeshModelingTools.DynamicMeshSculptTool
/// Size: 0x0C60 (0x0000C0 - 0x000D20)
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{ 
public:
	USculptBrushProperties*                            BrushProperties;                                            // 0x00C0   (0x0008)  
	UBrushSculptProperties*                            SculptProperties;                                           // 0x00C8   (0x0008)  
	USculptMaxBrushProperties*                         SculptMaxBrushProperties;                                   // 0x00D0   (0x0008)  
	UKelvinBrushProperties*                            KelvinBrushProperties;                                      // 0x00D8   (0x0008)  
	UBrushRemeshProperties*                            RemeshProperties;                                           // 0x00E0   (0x0008)  
	UFixedPlaneBrushProperties*                        GizmoProperties;                                            // 0x00E8   (0x0008)  
	UMeshEditingViewProperties*                        ViewProperties;                                             // 0x00F0   (0x0008)  
	UDynamicSculptToolActions*                         SculptToolActions;                                          // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x0100   (0x0040)  MISSED
	UBrushStampIndicator*                              BrushIndicator;                                             // 0x0140   (0x0008)  
	UMaterialInstanceDynamic*                          BrushIndicatorMaterial;                                     // 0x0148   (0x0008)  
	UPreviewMesh*                                      BrushIndicatorMesh;                                         // 0x0150   (0x0008)  
	UOctreeDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0158   (0x0008)  
	UMaterialInstanceDynamic*                          ActiveOverrideMaterial;                                     // 0x0160   (0x0008)  
	unsigned char                                      UnknownData01_5[0xBA0];                                     // 0x0168   (0x0BA0)  MISSED
	UTransformGizmo*                                   PlaneTransformGizmo;                                        // 0x0D08   (0x0008)  
	UTransformProxy*                                   PlaneTransformProxy;                                        // 0x0D10   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0D18   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UEdgeLoopInsertionToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionProperties
/// Size: 0x0030 (0x000060 - 0x000090)
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{ 
public:
	EEdgeLoopPositioningMode                           PositionMode;                                               // 0x0060   (0x0004)  
	EEdgeLoopInsertionMode                             InsertionMode;                                              // 0x0064   (0x0004)  
	int32_t                                            NumLoops;                                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	double                                             ProportionOffset;                                           // 0x0070   (0x0008)  
	double                                             DistanceOffset;                                             // 0x0078   (0x0008)  
	bool                                               bInteractive;                                               // 0x0080   (0x0001)  
	bool                                               bFlipOffsetDirection;                                       // 0x0081   (0x0001)  
	bool                                               bWireframe;                                                 // 0x0082   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0083   (0x0005)  MISSED
	double                                             VertexTolerance;                                            // 0x0088   (0x0008)  
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UEdgeLoopInsertionOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UEdgeLoopInsertionTool*                            Tool;                                                       // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionTool
/// Size: 0x0478 (0x000088 - 0x000500)
class UEdgeLoopInsertionTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0088   (0x0010)  MISSED
	UEdgeLoopInsertionProperties*                      Settings;                                                   // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_5[0x260];                                     // 0x00A0   (0x0260)  MISSED
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x0300   (0x0008)  
	unsigned char                                      UnknownData02_6[0x1F8];                                     // 0x0308   (0x01F8)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditCommonProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	ELocalFrameMode                                    LocalFrameMode;                                             // 0x0064   (0x0004)  
	bool                                               bLockRotation;                                              // 0x0068   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActionPropertySet
/// Size: 0x0008 (0x000060 - 0x000068)
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActions
/// Size: 0x0000 (0x000068 - 0x000068)
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles
/// Size: 0x0000 (0x000068 - 0x000068)
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolUVActions
/// Size: 0x0000 (0x000068 - 0x000068)
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions
/// Size: 0x0000 (0x000068 - 0x000068)
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
/// Size: 0x0000 (0x000068 - 0x000068)
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{ 
public:
	EPolyEditExtrudeDirection                          Direction;                                                  // 0x0060   (0x0004)  
	bool                                               bShellsToSolids;                                            // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditOffsetProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bUseFaceNormals;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditInsetProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UPolyEditInsetProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bReproject;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Softness;                                                   // 0x0064   (0x0004)  
	bool                                               bBoundaryOnly;                                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              AreaScale;                                                  // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.PolyEditOutsetProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UPolyEditOutsetProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Softness;                                                   // 0x0060   (0x0004)  
	bool                                               bBoundaryOnly;                                              // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              AreaScale;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditCutProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{ 
public:
	EPolyEditCutPlaneOrientation                       Orientation;                                                // 0x0060   (0x0004)  
	bool                                               bSnapToVertices;                                            // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditSetUVProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowMaterial;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsTool
/// Size: 0x0710 (0x0000C0 - 0x0007D0)
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00C0   (0x0010)  MISSED
	USimpleDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x00D0   (0x0008)  
	UPolyEditCommonProperties*                         CommonProps;                                                // 0x00D8   (0x0008)  
	UEditMeshPolygonsToolActions*                      EditActions;                                                // 0x00E0   (0x0008)  
	UEditMeshPolygonsToolActions_Triangles*            EditActions_Triangles;                                      // 0x00E8   (0x0008)  
	UEditMeshPolygonsToolEdgeActions*                  EditEdgeActions;                                            // 0x00F0   (0x0008)  
	UEditMeshPolygonsToolEdgeActions_Triangles*        EditEdgeActions_Triangles;                                  // 0x00F8   (0x0008)  
	UEditMeshPolygonsToolUVActions*                    EditUVActions;                                              // 0x0100   (0x0008)  
	UPolyEditExtrudeProperties*                        ExtrudeProperties;                                          // 0x0108   (0x0008)  
	UPolyEditOffsetProperties*                         OffsetProperties;                                           // 0x0110   (0x0008)  
	UPolyEditInsetProperties*                          InsetProperties;                                            // 0x0118   (0x0008)  
	UPolyEditOutsetProperties*                         OutsetProperties;                                           // 0x0120   (0x0008)  
	UPolyEditCutProperties*                            CutProperties;                                              // 0x0128   (0x0008)  
	UPolyEditSetUVProperties*                          SetUVProperties;                                            // 0x0130   (0x0008)  
	UPolygonSelectionMechanic*                         SelectionMechanic;                                          // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0140   (0x0008)  MISSED
	UMultiTransformer*                                 MultiTransformer;                                           // 0x0148   (0x0008)  
	unsigned char                                      UnknownData02_5[0x350];                                     // 0x0150   (0x0350)  MISSED
	UPolyEditPreviewMesh*                              EditPreview;                                                // 0x04A0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x04A8   (0x0008)  MISSED
	UPlaneDistanceFromHitMechanic*                     ExtrudeHeightMechanic;                                      // 0x04B0   (0x0008)  
	USpatialCurveDistanceMechanic*                     CurveDistMechanic;                                          // 0x04B8   (0x0008)  
	UCollectSurfacePathMechanic*                       SurfacePathMechanic;                                        // 0x04C0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x308];                                     // 0x04C8   (0x0308)  MISSED
};

/// Class /Script/MeshModelingTools.EditNormalsToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EditNormalsToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bRecomputeNormals;                                          // 0x0060   (0x0001)  
	ENormalCalculationMethod                           NormalCalculationMethod;                                    // 0x0061   (0x0001)  
	bool                                               bFixInconsistentNormals;                                    // 0x0062   (0x0001)  
	bool                                               bInvertNormals;                                             // 0x0063   (0x0001)  
	ESplitNormalMethod                                 SplitNormalMethod;                                          // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              SharpEdgeAngleThreshold;                                    // 0x0068   (0x0004)  
	bool                                               bAllowSharpVertices;                                        // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.EditNormalsAdvancedProperties
/// Size: 0x0000 (0x000060 - 0x000060)
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.EditNormalsOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UEditNormalsOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UEditNormalsTool*                                  Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EditNormalsTool
/// Size: 0x0070 (0x000090 - 0x000100)
class UEditNormalsTool : public UMultiSelectionTool
{ 
public:
	UEditNormalsToolProperties*                        BasicProperties;                                            // 0x0090   (0x0008)  
	UEditNormalsAdvancedProperties*                    AdvancedProperties;                                         // 0x0098   (0x0008)  
	TArray<UMeshOpPreviewWithBackgroundCompute*>       Previews;                                                   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00B0   (0x0050)  MISSED
};

/// Class /Script/MeshModelingTools.EditPivotToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditPivotToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.EditPivotToolProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableSnapDragging;                                        // 0x0060   (0x0001)  
	EEditPivotSnapDragRotationMode                     RotationMode;                                               // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.EditPivotToolActionPropertySet
/// Size: 0x0010 (0x000060 - 0x000070)
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0060   (0x0008)  MISSED
	bool                                               bUseWorldBox;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Top
	void Top();                                                                                                              // [0xd21920] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Right
	void Right();                                                                                                            // [0xd218a0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Left
	void Left();                                                                                                             // [0xd217a0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Front
	void Front();                                                                                                            // [0xd21760] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Center
	void Center();                                                                                                           // [0xd21600] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Bottom
	void Bottom();                                                                                                           // [0xd215e0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Back
	void Back();                                                                                                             // [0xd215c0] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditPivotTool
/// Size: 0x0170 (0x000090 - 0x000200)
class UEditPivotTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	UEditPivotToolProperties*                          TransformProps;                                             // 0x0098   (0x0008)  
	UEditPivotToolActionPropertySet*                   EditPivotActions;                                           // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_5[0xD0];                                      // 0x00A8   (0x00D0)  MISSED
	TArray<FEditPivotTarget>                           ActiveGizmos;                                               // 0x0178   (0x0010)  
	unsigned char                                      UnknownData02_6[0x78];                                      // 0x0188   (0x0078)  MISSED
};

/// Class /Script/MeshModelingTools.EditUVIslandsToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.EditUVIslandsTool
/// Size: 0x02C0 (0x0000C0 - 0x000380)
class UEditUVIslandsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00C0   (0x0008)  MISSED
	UExistingMeshMaterialProperties*                   MaterialSettings;                                           // 0x00C8   (0x0008)  
	UMaterialInstanceDynamic*                          CheckerMaterial;                                            // 0x00D0   (0x0008)  
	USimpleDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x00D8   (0x0008)  
	UPolygonSelectionMechanic*                         SelectionMechanic;                                          // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00E8   (0x0008)  MISSED
	UMultiTransformer*                                 MultiTransformer;                                           // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x288];                                     // 0x00F8   (0x0288)  MISSED
};

/// Class /Script/MeshModelingTools.ExtractCollisionGeometryToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UExtractCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.ExtractCollisionGeometryTool
/// Size: 0x02A8 (0x000088 - 0x000330)
class UExtractCollisionGeometryTool : public USingleSelectionTool
{ 
public:
	UCollisionGeometryVisualizationProperties*         VizSettings;                                                // 0x0088   (0x0008)  
	UPhysicsObjectToolPropertySet*                     ObjectProps;                                                // 0x0090   (0x0008)  
	UPreviewGeometry*                                  PreviewElements;                                            // 0x0098   (0x0008)  
	UPreviewMesh*                                      PreviewMesh;                                                // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x288];                                     // 0x00A8   (0x0288)  MISSED
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{ 
public:
	EGroupEdgeInsertionMode                            InsertionMode;                                              // 0x0060   (0x0004)  
	bool                                               bWireframe;                                                 // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	double                                             VertexTolerance;                                            // 0x0068   (0x0008)  
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UGroupEdgeInsertionOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UGroupEdgeInsertionTool*                           Tool;                                                       // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionTool
/// Size: 0x04C8 (0x000088 - 0x000550)
class UGroupEdgeInsertionTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0088   (0x0010)  MISSED
	UGroupEdgeInsertionProperties*                     Settings;                                                   // 0x0098   (0x0008)  
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4A8];                                     // 0x00A8   (0x04A8)  MISSED
};

/// Class /Script/MeshModelingTools.HoleFillToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UHoleFillToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SmoothHoleFillProperties
/// Size: 0x0028 (0x000060 - 0x000088)
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bConstrainToHoleInterior;                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            RemeshingExteriorRegionWidth;                               // 0x0064   (0x0004)  
	int32_t                                            SmoothingExteriorRegionWidth;                               // 0x0068   (0x0004)  
	int32_t                                            SmoothingInteriorRegionWidth;                               // 0x006C   (0x0004)  
	float                                              InteriorSmoothness;                                         // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	double                                             FillDensityScalar;                                          // 0x0078   (0x0008)  
	bool                                               bProjectDuringRemesh;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.HoleFillToolProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EHoleFillOpFillType                                FillType;                                                   // 0x0060   (0x0001)  
	bool                                               bRemoveIsolatedTriangles;                                   // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.HoleFillToolActions
/// Size: 0x0008 (0x000060 - 0x000068)
class UHoleFillToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.HoleFillStatisticsProperties
/// Size: 0x0050 (0x000060 - 0x0000B0)
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            InitialHoles;                                               // 0x0060   (0x0010)  
	FString                                            SelectedHoles;                                              // 0x0070   (0x0010)  
	FString                                            SuccessfulFills;                                            // 0x0080   (0x0010)  
	FString                                            FailedFills;                                                // 0x0090   (0x0010)  
	FString                                            RemainingHoles;                                             // 0x00A0   (0x0010)  
};

/// Class /Script/MeshModelingTools.HoleFillOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UHoleFillOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UHoleFillTool*                                     FillTool;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.HoleFillTool
/// Size: 0x0158 (0x000088 - 0x0001E0)
class UHoleFillTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0088   (0x0010)  MISSED
	USmoothHoleFillProperties*                         SmoothHoleFillProperties;                                   // 0x0098   (0x0008)  
	UHoleFillToolProperties*                           Properties;                                                 // 0x00A0   (0x0008)  
	UHoleFillToolActions*                              Actions;                                                    // 0x00A8   (0x0008)  
	UHoleFillStatisticsProperties*                     Statistics;                                                 // 0x00B0   (0x0008)  
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x00B8   (0x0008)  
	UPolygonSelectionMechanic*                         SelectionMechanic;                                          // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x118];                                     // 0x00C8   (0x0118)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSculptBrushOpProps
/// Size: 0x0000 (0x000060 - 0x000060)
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.BaseKelvinletBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Stiffness;                                                  // 0x0060   (0x0004)  
	float                                              Incompressiblity;                                           // 0x0064   (0x0004)  
	int32_t                                            BrushSteps;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ScaleKelvinletBrushOpProps
/// Size: 0x0008 (0x000070 - 0x000078)
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0070   (0x0004)  
	float                                              Falloff;                                                    // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.PullKelvinletBrushOpProps
/// Size: 0x0008 (0x000070 - 0x000078)
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Falloff;                                                    // 0x0070   (0x0004)  
	float                                              Depth;                                                      // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.SharpPullKelvinletBrushOpProps
/// Size: 0x0008 (0x000070 - 0x000078)
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Falloff;                                                    // 0x0070   (0x0004)  
	float                                              Depth;                                                      // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.TwistKelvinletBrushOpProps
/// Size: 0x0008 (0x000070 - 0x000078)
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0070   (0x0004)  
	float                                              Falloff;                                                    // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.MeshAnalysisProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            SurfaceArea;                                                // 0x0060   (0x0010)  
	FString                                            Volume;                                                     // 0x0070   (0x0010)  
};

/// Class /Script/MeshModelingTools.MeshAttributePaintToolBuilder
/// Size: 0x0050 (0x000030 - 0x000080)
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/MeshModelingTools.MeshAttributePaintToolProperties
/// Size: 0x0028 (0x000060 - 0x000088)
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{ 
public:
	TArray<FName>                                      Attributes;                                                 // 0x0060   (0x0010)  
	int32_t                                            SelectedAttribute;                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            AttributeName;                                              // 0x0078   (0x0010)  
};

/// Class /Script/MeshModelingTools.MeshAttributePaintEditActions
/// Size: 0x0008 (0x000060 - 0x000068)
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MeshAttributePaintTool
/// Size: 0x0418 (0x0001F8 - 0x000610)
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{ 
public:
	UMeshAttributePaintToolProperties*                 AttribProps;                                                // 0x01F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x410];                                     // 0x0200   (0x0410)  MISSED
};

/// Class /Script/MeshModelingTools.MeshBoundaryToolBase
/// Size: 0x00C8 (0x000088 - 0x000150)
class UMeshBoundaryToolBase : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0088   (0x00B0)  MISSED
	UPolygonSelectionMechanic*                         SelectionMechanic;                                          // 0x0138   (0x0008)  
	USingleClickInputBehavior*                         LoopSelectClickBehavior;                                    // 0x0140   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.InflateBrushOpProps
/// Size: 0x0008 (0x000060 - 0x000068)
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.MeshInspectorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.MeshInspectorProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bWireframe;                                                 // 0x0060   (0x0001)  
	bool                                               bBoundaryEdges;                                             // 0x0061   (0x0001)  
	bool                                               bBowtieVertices;                                            // 0x0062   (0x0001)  
	bool                                               bPolygonBorders;                                            // 0x0063   (0x0001)  
	bool                                               bUVSeams;                                                   // 0x0064   (0x0001)  
	bool                                               bUVBowties;                                                 // 0x0065   (0x0001)  
	bool                                               bNormalSeams;                                               // 0x0066   (0x0001)  
	bool                                               bNormalVectors;                                             // 0x0067   (0x0001)  
	bool                                               bTangentVectors;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              NormalLength;                                               // 0x006C   (0x0004)  
	float                                              TangentLength;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.MeshInspectorTool
/// Size: 0x00A0 (0x000088 - 0x000128)
class UMeshInspectorTool : public USingleSelectionTool
{ 
public:
	UMeshInspectorProperties*                          Settings;                                                   // 0x0088   (0x0008)  
	UExistingMeshMaterialProperties*                   MaterialSettings;                                           // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	UPreviewMesh*                                      PreviewMesh;                                                // 0x00A0   (0x0008)  
	ULineSetComponent*                                 DrawnLineSet;                                               // 0x00A8   (0x0008)  
	UMaterialInterface*                                DefaultMaterial;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x00B8   (0x0070)  MISSED
};

/// Class /Script/MeshModelingTools.NewMeshMaterialProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{ 
public:
	TWeakObjectPtr<UMaterialInterface*>                Material;                                                   // 0x0060   (0x0008)  
	float                                              UVScale;                                                    // 0x0068   (0x0004)  
	bool                                               bWorldSpaceUVScale;                                         // 0x006C   (0x0001)  
	bool                                               bWireframe;                                                 // 0x006D   (0x0001)  
	bool                                               bShowExtendedOptions;                                       // 0x006E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x006F   (0x0001)  MISSED
};

/// Class /Script/MeshModelingTools.ExistingMeshMaterialProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{ 
public:
	ESetMeshMaterialMode                               MaterialMode;                                               // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              CheckerDensity;                                             // 0x0064   (0x0004)  
	UMaterialInterface*                                OverrideMaterial;                                           // 0x0068   (0x0008)  
	UMaterialInstanceDynamic*                          CheckerMaterial;                                            // 0x0070   (0x0008)  
};

/// Class /Script/MeshModelingTools.MeshEditingViewProperties
/// Size: 0x0028 (0x000060 - 0x000088)
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	EMeshEditingMaterialModes                          MaterialMode;                                               // 0x0064   (0x0004)  
	bool                                               bFlatShading;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x006C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	UTexture2D*                                        Image;                                                      // 0x0080   (0x0008)  
};

/// Class /Script/MeshModelingTools.MoveBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.PinchBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	bool                                               bPerpDamping;                                               // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.BasePlaneBrushOpProps
/// Size: 0x0000 (0x000060 - 0x000060)
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingTools.PlaneBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.ViewAlignedPlaneBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.FixedPlaneBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.StandardSculptBrushOpProps
/// Size: 0x0008 (0x000060 - 0x000068)
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.ViewAlignedSculptBrushOpProps
/// Size: 0x0008 (0x000060 - 0x000068)
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.SculptMaxBrushOpProps
/// Size: 0x0018 (0x000060 - 0x000078)
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              MaxHeight;                                                  // 0x0068   (0x0004)  
	bool                                               bUseFixedHeight;                                            // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              FixedHeight;                                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.SculptBrushProperties
/// Size: 0x0010 (0x000078 - 0x000088)
class USculptBrushProperties : public UBrushBaseProperties
{ 
public:
	float                                              Depth;                                                      // 0x0078   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              Lazyness;                                                   // 0x0080   (0x0004)  
	bool                                               bShowPerBrushProps;                                         // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0085   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.KelvinBrushProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              FalloffDistance;                                            // 0x0060   (0x0004)  
	float                                              Stiffness;                                                  // 0x0064   (0x0004)  
	float                                              Incompressiblity;                                           // 0x0068   (0x0004)  
	int32_t                                            BrushSteps;                                                 // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.WorkPlaneProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPropertySetEnabled;                                        // 0x0060   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x0061   (0x0001)  
	bool                                               bSnapToGrid;                                                // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0063   (0x0001)  MISSED
	FVector                                            position;                                                   // 0x0064   (0x000C)  
	FQuat                                              Rotation;                                                   // 0x0070   (0x0010)  
};

/// Class /Script/MeshModelingTools.SculptMaxBrushProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              MaxHeight;                                                  // 0x0060   (0x0004)  
	bool                                               bFreezeCurrentHeight;                                       // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSculptToolBase
/// Size: 0x0920 (0x0000C0 - 0x0009E0)
class UMeshSculptToolBase : public UMeshSurfacePointTool
{ 
public:
	USculptBrushProperties*                            BrushProperties;                                            // 0x00C0   (0x0008)  
	UWorkPlaneProperties*                              GizmoProperties;                                            // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0xE0];                                      // 0x00D0   (0x00E0)  MISSED
	TMap<int32_t, UMeshSculptBrushOpProps*>            BrushOpPropSets;                                            // 0x01B0   (0x0050)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0200   (0x0050)  MISSED
	TMap<int32_t, UMeshSculptBrushOpProps*>            SecondaryBrushOpPropSets;                                   // 0x0250   (0x0050)  
	unsigned char                                      UnknownData02_5[0x5D0];                                     // 0x02A0   (0x05D0)  MISSED
	UMeshEditingViewProperties*                        ViewProperties;                                             // 0x0870   (0x0008)  
	UMaterialInstanceDynamic*                          ActiveOverrideMaterial;                                     // 0x0878   (0x0008)  
	UBrushStampIndicator*                              BrushIndicator;                                             // 0x0880   (0x0008)  
	UMaterialInstanceDynamic*                          BrushIndicatorMaterial;                                     // 0x0888   (0x0008)  
	UPreviewMesh*                                      BrushIndicatorMesh;                                         // 0x0890   (0x0008)  
	UTransformGizmo*                                   PlaneTransformGizmo;                                        // 0x0898   (0x0008)  
	UTransformProxy*                                   PlaneTransformProxy;                                        // 0x08A0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x138];                                     // 0x08A8   (0x0138)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSelectionToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSelectionToolActionPropertySet
/// Size: 0x0008 (0x000060 - 0x000068)
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSelectionEditActions
/// Size: 0x0000 (0x000068 - 0x000068)
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.MeshSelectionMeshEditActions
/// Size: 0x0000 (0x000068 - 0x000068)
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.MeshSelectionToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshSelectionToolPrimaryMode                      SelectionMode;                                              // 0x0060   (0x0004)  
	float                                              AngleTolerance;                                             // 0x0064   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x0068   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x006A   (0x0002)  MISSED
	EMeshFacesColorMode                                FaceColorMode;                                              // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.MeshSelectionTool
/// Size: 0x0298 (0x0001F8 - 0x000490)
class UMeshSelectionTool : public UDynamicMeshBrushTool
{ 
public:
	UMeshSelectionToolProperties*                      SelectionProps;                                             // 0x01F8   (0x0008)  
	UMeshSelectionEditActions*                         SelectionActions;                                           // 0x0200   (0x0008)  
	UMeshSelectionToolActionPropertySet*               EditActions;                                                // 0x0208   (0x0008)  
	UMeshSelectionSet*                                 Selection;                                                  // 0x0210   (0x0008)  
	TArray<AActor*>                                    SpawnedActors;                                              // 0x0218   (0x0010)  
	unsigned char                                      UnknownData00_6[0x268];                                     // 0x0228   (0x0268)  MISSED
};

/// Class /Script/MeshModelingTools.BaseSmoothBrushOpProps
/// Size: 0x0000 (0x000060 - 0x000060)
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingTools.SmoothBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.SecondarySmoothBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.SmoothFillBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.FlattenBrushOpProps
/// Size: 0x0010 (0x000060 - 0x000070)
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.EraseBrushOpProps
/// Size: 0x0008 (0x000060 - 0x000068)
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.MeshSpaceDeformerToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SpaceDeformerOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class USpaceDeformerOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UMeshSpaceDeformerTool*                            SpaceDeformerTool;                                          // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.MeshSpaceDeformerTool
/// Size: 0x0100 (0x0000C0 - 0x0001C0)
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{ 
public:
	ENonlinearOperationType                            SelectedOperationType;                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              UpperBoundsInterval;                                        // 0x00C4   (0x0004)  
	float                                              LowerBoundsInterval;                                        // 0x00C8   (0x0004)  
	float                                              ModifierPercent;                                            // 0x00CC   (0x0004)  
	bool                                               bSnapToWorldGrid;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	UGizmoTransformChangeStateTarget*                  StateTarget;                                                // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00E0   (0x0008)  MISSED
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x00F0   (0x0020)  MISSED
	FVector                                            GizmoCenter;                                                // 0x0110   (0x000C)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FQuat                                              GizmoOrientation;                                           // 0x0120   (0x0010)  
	UIntervalGizmo*                                    IntervalGizmo;                                              // 0x0130   (0x0008)  
	UTransformGizmo*                                   TransformGizmo;                                             // 0x0138   (0x0008)  
	UTransformProxy*                                   TransformProxy;                                             // 0x0140   (0x0008)  
	UGizmoLocalFloatParameterSource*                   UpIntervalSource;                                           // 0x0148   (0x0008)  
	UGizmoLocalFloatParameterSource*                   DownIntervalSource;                                         // 0x0150   (0x0008)  
	UGizmoLocalFloatParameterSource*                   ForwardIntervalSource;                                      // 0x0158   (0x0008)  
	unsigned char                                      UnknownData05_6[0x60];                                      // 0x0160   (0x0060)  MISSED
};

/// Class /Script/MeshModelingTools.MeshStatisticsProperties
/// Size: 0x0030 (0x000060 - 0x000090)
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            Mesh;                                                       // 0x0060   (0x0010)  
	FString                                            UV;                                                         // 0x0070   (0x0010)  
	FString                                            Attributes;                                                 // 0x0080   (0x0010)  
};

/// Class /Script/MeshModelingTools.MeshVertexSculptToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.VertexBrushSculptProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshVertexSculptBrushType                         PrimaryBrushType;                                           // 0x0060   (0x0001)  
	EMeshSculptFalloffType                             PrimaryFalloffType;                                         // 0x0061   (0x0001)  
	bool                                               bFreezeTarget;                                              // 0x0062   (0x0001)  
	bool                                               bSmoothErases;                                              // 0x0063   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.MeshVertexSculptTool
/// Size: 0x0850 (0x0009E0 - 0x001230)
class UMeshVertexSculptTool : public UMeshSculptToolBase
{ 
public:
	UVertexBrushSculptProperties*                      SculptProperties;                                           // 0x09D8   (0x0008)  
	USimpleDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x09E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x848];                                     // 0x09E8   (0x0848)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UMirrorToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UMirrorToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMirrorOperationMode                               OperationMode;                                              // 0x0060   (0x0001)  
	bool                                               bCropAlongMirrorPlaneFirst;                                 // 0x0061   (0x0001)  
	bool                                               bWeldVerticesOnMirrorPlane;                                 // 0x0062   (0x0001)  
	bool                                               bAllowBowtieVertexCreation;                                 // 0x0063   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0064   (0x0001)  
	EMirrorCtrlClickBehavior                           CtrlClickBehavior;                                          // 0x0065   (0x0001)  
	bool                                               bButtonsOnlyChangeOrientation;                              // 0x0066   (0x0001)  
	bool                                               bShowPreview;                                               // 0x0067   (0x0001)  
	EMirrorSaveMode                                    SaveMode;                                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UMirrorOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UMirrorTool*                                       MirrorTool;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorToolActionPropertySet
/// Size: 0x0008 (0x000060 - 0x000068)
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorTool
/// Size: 0x00A8 (0x000090 - 0x000138)
class UMirrorTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	UMirrorToolProperties*                             Settings;                                                   // 0x0098   (0x0008)  
	UMirrorToolActionPropertySet*                      ToolActions;                                                // 0x00A0   (0x0008)  
	TArray<UDynamicMeshReplacementChangeTarget*>       MeshesToMirror;                                             // 0x00A8   (0x0010)  
	TArray<UMeshOpPreviewWithBackgroundCompute*>       Previews;                                                   // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x00C8   (0x0048)  MISSED
	UConstructionPlaneMechanic*                        PlaneMechanic;                                              // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0118   (0x0020)  MISSED
};

/// Class /Script/MeshModelingTools.OffsetMeshToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EOffsetMeshToolOffsetType                          OffsetType;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x0064   (0x0004)  
	bool                                               bCreateShell;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.OffsetWeightMapSetProperties
/// Size: 0x0008 (0x000080 - 0x000088)
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{ 
public:
	float                                              MinDistance;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.IterativeOffsetProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            Steps;                                                      // 0x0060   (0x0004)  
	bool                                               bOffsetBoundaries;                                          // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              SmoothingPerStep;                                           // 0x0068   (0x0004)  
	bool                                               bReprojectSmooth;                                           // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.ImplicitOffsetProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Smoothness;                                                 // 0x0060   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.OffsetMeshTool
/// Size: 0x0020 (0x000400 - 0x000420)
class UOffsetMeshTool : public UBaseMeshProcessingTool
{ 
public:
	UOffsetMeshToolProperties*                         OffsetProperties;                                           // 0x0400   (0x0008)  
	UIterativeOffsetProperties*                        IterativeProperties;                                        // 0x0408   (0x0008)  
	UImplicitOffsetProperties*                         ImplicitProperties;                                         // 0x0410   (0x0008)  
	UOffsetWeightMapSetProperties*                     WeightMapProperties;                                        // 0x0418   (0x0008)  
};

/// Class /Script/MeshModelingTools.OffsetMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.PhysicsInspectorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsInspectorToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.PhysicsInspectorTool
/// Size: 0x0048 (0x000090 - 0x0000D8)
class UPhysicsInspectorTool : public UMultiSelectionTool
{ 
public:
	UCollisionGeometryVisualizationProperties*         VizSettings;                                                // 0x0090   (0x0008)  
	TArray<UPhysicsObjectToolPropertySet*>             ObjectData;                                                 // 0x0098   (0x0010)  
	UMaterialInterface*                                LineMaterial;                                               // 0x00A8   (0x0008)  
	TArray<UPreviewGeometry*>                          PreviewElements;                                            // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00C0   (0x0018)  MISSED
};

/// Class /Script/MeshModelingTools.PlaneCutToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.AcceptOutputProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bExportSeparatedPiecesAsNewMeshAssets;                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.PlaneCutToolProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bSnapToWorldGrid;                                           // 0x0060   (0x0001)  
	bool                                               bKeepBothHalves;                                            // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              SpacingBetweenHalves;                                       // 0x0064   (0x0004)  
	bool                                               bFillCutHole;                                               // 0x0068   (0x0001)  
	bool                                               bShowPreview;                                               // 0x0069   (0x0001)  
	bool                                               bFillSpans;                                                 // 0x006A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x006B   (0x0005)  MISSED
};

/// Class /Script/MeshModelingTools.PlaneCutOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UPlaneCutOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UPlaneCutTool*                                     CutTool;                                                    // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.PlaneCutTool
/// Size: 0x00D0 (0x000090 - 0x000160)
class UPlaneCutTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	UPlaneCutToolProperties*                           BasicProperties;                                            // 0x0098   (0x0008)  
	UAcceptOutputProperties*                           AcceptProperties;                                           // 0x00A0   (0x0008)  
	FVector                                            CutPlaneOrigin;                                             // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00B4   (0x000C)  MISSED
	FQuat                                              CutPlaneOrientation;                                        // 0x00C0   (0x0010)  
	TArray<UMeshOpPreviewWithBackgroundCompute*>       Previews;                                                   // 0x00D0   (0x0010)  
	TArray<UDynamicMeshReplacementChangeTarget*>       MeshesToCut;                                                // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x58];                                      // 0x00F0   (0x0058)  MISSED
	UTransformGizmo*                                   PlaneTransformGizmo;                                        // 0x0148   (0x0008)  
	UTransformProxy*                                   PlaneTransformProxy;                                        // 0x0150   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0158   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.PlaneCutTool.Cut
	void Cut();                                                                                                              // [0xd2b7a0] Final|Native|Protected 
};

/// Class /Script/MeshModelingTools.PositionPlaneGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.PositionPlaneGizmo
/// Size: 0x04E8 (0x000038 - 0x000520)
class UPositionPlaneGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0038   (0x0050)  MISSED
	UPreviewMesh*                                      CenterBallShape;                                            // 0x0088   (0x0008)  
	UMaterialInstance*                                 CenterBallMaterial;                                         // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x488];                                     // 0x0098   (0x0488)  MISSED
};

/// Class /Script/MeshModelingTools.PositionPlaneOnSceneInputBehavior
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0080   (0x0030)  MISSED
};

/// Class /Script/MeshModelingTools.ProjectToTargetToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UProjectToTargetToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemeshMeshToolProperties
/// Size: 0x0020 (0x000070 - 0x000090)
class URemeshMeshToolProperties : public URemeshProperties
{ 
public:
	int32_t                                            TargetTriangleCount;                                        // 0x0070   (0x0004)  
	ERemeshSmoothingType                               SmoothingType;                                              // 0x0074   (0x0001)  
	bool                                               bDiscardAttributes;                                         // 0x0075   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x0076   (0x0001)  
	bool                                               bShowGroupColors;                                           // 0x0077   (0x0001)  
	ERemeshType                                        RemeshType;                                                 // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	int32_t                                            RemeshIterations;                                           // 0x007C   (0x0004)  
	bool                                               bUseTargetEdgeLength;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              TargetEdgeLength;                                           // 0x0084   (0x0004)  
	bool                                               bReproject;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.ProjectToTargetToolProperties
/// Size: 0x0000 (0x000090 - 0x000090)
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{ 
public:
};

/// Class /Script/MeshModelingTools.RemeshMeshTool
/// Size: 0x0058 (0x000090 - 0x0000E8)
class URemeshMeshTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	URemeshMeshToolProperties*                         BasicProperties;                                            // 0x0098   (0x0008)  
	UMeshStatisticsProperties*                         MeshStatisticsProperties;                                   // 0x00A0   (0x0008)  
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x00B0   (0x0038)  MISSED
};

/// Class /Script/MeshModelingTools.ProjectToTargetTool
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UProjectToTargetTool : public URemeshMeshTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E8   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.RemeshMeshToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesToolProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EOcclusionCalculationUIMode                        OcclusionTestMethod;                                        // 0x0060   (0x0001)  
	EOcclusionTriangleSamplingUIMode                   TriangleSampling;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	double                                             WindingIsoValue;                                            // 0x0068   (0x0008)  
	int32_t                                            AddRandomRays;                                              // 0x0070   (0x0004)  
	int32_t                                            AddTriangleSamples;                                         // 0x0074   (0x0004)  
	bool                                               bOnlySelfOcclude;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class URemoveOccludedTrianglesOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	URemoveOccludedTrianglesTool*                      Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesTool
/// Size: 0x00C0 (0x000090 - 0x000150)
class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{ 
public:
	URemoveOccludedTrianglesToolProperties*            BasicProperties;                                            // 0x0090   (0x0008)  
	URemoveOccludedTrianglesAdvancedProperties*        AdvancedProperties;                                         // 0x0098   (0x0008)  
	TArray<UMeshOpPreviewWithBackgroundCompute*>       Previews;                                                   // 0x00A0   (0x0010)  
	TArray<UPreviewMesh*>                              PreviewCopies;                                              // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x00C0   (0x0090)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveBoundaryToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class URevolveBoundaryToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveBoundaryOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class URevolveBoundaryOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	URevolveBoundaryTool*                              RevolveBoundaryTool;                                        // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.RevolveBoundaryToolProperties
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class URevolveBoundaryToolProperties : public URevolveProperties
{ 
public:
	bool                                               bDisplayOriginalMesh;                                       // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FVector                                            AxisOrigin;                                                 // 0x00B4   (0x000C)  
	float                                              AxisYaw;                                                    // 0x00C0   (0x0004)  
	float                                              AxisPitch;                                                  // 0x00C4   (0x0004)  
	bool                                               bSnapToWorldGrid;                                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveBoundaryTool
/// Size: 0x0060 (0x000150 - 0x0001B0)
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0150   (0x0010)  MISSED
	URevolveBoundaryToolProperties*                    Settings;                                                   // 0x0160   (0x0008)  
	UNewMeshMaterialProperties*                        MaterialProperties;                                         // 0x0168   (0x0008)  
	UConstructionPlaneMechanic*                        PlaneMechanic;                                              // 0x0170   (0x0008)  
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x0178   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0180   (0x0030)  MISSED
};

/// Class /Script/MeshModelingTools.SeamSculptToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class USeamSculptToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SeamSculptToolProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x0060   (0x0001)  
	bool                                               bHitBackFaces;                                              // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.SeamSculptTool
/// Size: 0x00E0 (0x0001F8 - 0x0002D8)
class USeamSculptTool : public UDynamicMeshBrushTool
{ 
public:
	USeamSculptToolProperties*                         Settings;                                                   // 0x01F8   (0x0008)  
	UPreviewGeometry*                                  PreviewGeom;                                                // 0x0200   (0x0008)  
	unsigned char                                      UnknownData00_6[0xD0];                                      // 0x0208   (0x00D0)  MISSED
};

/// Class /Script/MeshModelingTools.SelfUnionMeshesToolProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bAttemptFixHoles;                                           // 0x0060   (0x0001)  
	bool                                               bShowNewBoundaryEdges;                                      // 0x0061   (0x0001)  
	bool                                               bTrimFlaps;                                                 // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0063   (0x0005)  MISSED
	double                                             WindingNumberThreshold;                                     // 0x0068   (0x0008)  
	bool                                               bOnlyUseFirstMeshMaterials;                                 // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.SelfUnionMeshesTool
/// Size: 0x0030 (0x0000F0 - 0x000120)
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{ 
public:
	USelfUnionMeshesToolProperties*                    Properties;                                                 // 0x00F0   (0x0008)  
	ULineSetComponent*                                 DrawnLineSet;                                               // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0100   (0x0020)  MISSED
};

/// Class /Script/MeshModelingTools.SelfUnionMeshesToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SetCollisionGeometryToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USetCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SetCollisionGeometryToolProperties
/// Size: 0x0030 (0x000060 - 0x000090)
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ECollisionGeometryType                             GeometryType;                                               // 0x0060   (0x0004)  
	ESetCollisionGeometryInputMode                     InputMode;                                                  // 0x0064   (0x0004)  
	bool                                               bUseWorldSpace;                                             // 0x0068   (0x0001)  
	bool                                               bRemoveContained;                                           // 0x0069   (0x0001)  
	bool                                               bEnableMaxCount;                                            // 0x006A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x006B   (0x0001)  MISSED
	int32_t                                            MaxCount;                                                   // 0x006C   (0x0004)  
	float                                              MinThickness;                                               // 0x0070   (0x0004)  
	bool                                               bDetectBoxes;                                               // 0x0074   (0x0001)  
	bool                                               bDetectSpheres;                                             // 0x0075   (0x0001)  
	bool                                               bDetectCapsules;                                            // 0x0076   (0x0001)  
	bool                                               bSimplifyHulls;                                             // 0x0077   (0x0001)  
	int32_t                                            HullTargetFaceCount;                                        // 0x0078   (0x0004)  
	bool                                               bSimplifyPolygons;                                          // 0x007C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              HullTolerance;                                              // 0x0080   (0x0004)  
	EProjectedHullAxis                                 SweepAxis;                                                  // 0x0084   (0x0004)  
	bool                                               bAppendToExisting;                                          // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	ECollisionGeometryMode                             SetCollisionType;                                           // 0x008C   (0x0004)  
};

/// Class /Script/MeshModelingTools.SetCollisionGeometryTool
/// Size: 0x0130 (0x000090 - 0x0001C0)
class USetCollisionGeometryTool : public UMultiSelectionTool
{ 
public:
	USetCollisionGeometryToolProperties*               Settings;                                                   // 0x0090   (0x0008)  
	UCollisionGeometryVisualizationProperties*         VizSettings;                                                // 0x0098   (0x0008)  
	UPhysicsObjectToolPropertySet*                     CollisionProps;                                             // 0x00A0   (0x0008)  
	UMaterialInterface*                                LineMaterial;                                               // 0x00A8   (0x0008)  
	UPreviewGeometry*                                  PreviewGeom;                                                // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x00B8   (0x0108)  MISSED
};

/// Class /Script/MeshModelingTools.SmoothMeshToolProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ESmoothMeshToolSmoothType                          SmoothingType;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.IterativeSmoothProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothingPerStep;                                           // 0x0060   (0x0004)  
	int32_t                                            Steps;                                                      // 0x0064   (0x0004)  
	bool                                               bSmoothBoundary;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.DiffusionSmoothProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothingPerStep;                                           // 0x0060   (0x0004)  
	int32_t                                            Steps;                                                      // 0x0064   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.ImplicitSmoothProperties
/// Size: 0x0010 (0x000060 - 0x000070)
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothSpeed;                                                // 0x0060   (0x0004)  
	float                                              Smoothness;                                                 // 0x0064   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              VolumeCorrection;                                           // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.SmoothWeightMapSetProperties
/// Size: 0x0008 (0x000080 - 0x000088)
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{ 
public:
	float                                              MinSmoothMultiplier;                                        // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.SmoothMeshTool
/// Size: 0x0030 (0x000400 - 0x000430)
class USmoothMeshTool : public UBaseMeshProcessingTool
{ 
public:
	USmoothMeshToolProperties*                         SmoothProperties;                                           // 0x0400   (0x0008)  
	UIterativeSmoothProperties*                        IterativeProperties;                                        // 0x0408   (0x0008)  
	UDiffusionSmoothProperties*                        DiffusionProperties;                                        // 0x0410   (0x0008)  
	UImplicitSmoothProperties*                         ImplicitProperties;                                         // 0x0418   (0x0008)  
	USmoothWeightMapSetProperties*                     WeightMapProperties;                                        // 0x0420   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0428   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.SmoothMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.TransformMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.TransformMeshesToolProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ETransformMeshesTransformMode                      TransformMode;                                              // 0x0060   (0x0001)  
	bool                                               bSetPivot;                                                  // 0x0061   (0x0001)  
	bool                                               bEnableSnapDragging;                                        // 0x0062   (0x0001)  
	ETransformMeshesSnapDragSource                     SnapDragSource;                                             // 0x0063   (0x0001)  
	ETransformMeshesSnapDragRotationMode               RotationMode;                                               // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.TransformMeshesTool
/// Size: 0x00B0 (0x000090 - 0x000140)
class UTransformMeshesTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	UTransformMeshesToolProperties*                    TransformProps;                                             // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00A0   (0x0010)  MISSED
	TArray<FTransformMeshesTarget>                     ActiveGizmos;                                               // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x80];                                      // 0x00C0   (0x0080)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionToolProperties
/// Size: 0x0028 (0x000060 - 0x000088)
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EUVProjectionMethod                                UVProjectionMethod;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	FVector                                            ProjectionPrimitiveScale;                                   // 0x0064   (0x000C)  
	float                                              CylinderProjectToTopOrBottomAngleThreshold;                 // 0x0070   (0x0004)  
	FVector2D                                          UVScale;                                                    // 0x0074   (0x0008)  
	FVector2D                                          UVOffset;                                                   // 0x007C   (0x0008)  
	bool                                               bWorldSpaceUVScale;                                         // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0085   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionAdvancedProperties
/// Size: 0x0000 (0x000060 - 0x000060)
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.UVProjectionOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UUVProjectionOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UUVProjectionTool*                                 Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionTool
/// Size: 0x0190 (0x000090 - 0x000220)
class UUVProjectionTool : public UMultiSelectionTool
{ 
public:
	UUVProjectionToolProperties*                       BasicProperties;                                            // 0x0090   (0x0008)  
	UUVProjectionAdvancedProperties*                   AdvancedProperties;                                         // 0x0098   (0x0008)  
	UExistingMeshMaterialProperties*                   MaterialSettings;                                           // 0x00A0   (0x0008)  
	TArray<UMeshOpPreviewWithBackgroundCompute*>       Previews;                                                   // 0x00A8   (0x0010)  
	UMaterialInstanceDynamic*                          CheckerMaterial;                                            // 0x00B8   (0x0008)  
	TArray<UTransformGizmo*>                           TransformGizmos;                                            // 0x00C0   (0x0010)  
	TArray<UTransformProxy*>                           TransformProxies;                                           // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x140];                                     // 0x00E0   (0x0140)  MISSED
};

/// Class /Script/MeshModelingTools.VoxelBlendMeshesToolProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             BlendPower;                                                 // 0x0060   (0x0008)  
	double                                             BlendFalloff;                                               // 0x0068   (0x0008)  
	bool                                               bSolidifyInput;                                             // 0x0070   (0x0001)  
	bool                                               bRemoveInternalsAfterSolidify;                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0072   (0x0006)  MISSED
	double                                             OffsetSolidifySurface;                                      // 0x0078   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelBlendMeshesTool
/// Size: 0x0008 (0x000108 - 0x000110)
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{ 
public:
	UVoxelBlendMeshesToolProperties*                   BlendProperties;                                            // 0x0108   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelBlendMeshesToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.VoxelMorphologyMeshesToolProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMorphologyOperation                               Operation;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	double                                             Distance;                                                   // 0x0068   (0x0008)  
	bool                                               bSolidifyInput;                                             // 0x0070   (0x0001)  
	bool                                               bRemoveInternalsAfterSolidify;                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0072   (0x0006)  MISSED
	double                                             OffsetSolidifySurface;                                      // 0x0078   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelMorphologyMeshesTool
/// Size: 0x0008 (0x000108 - 0x000110)
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{ 
public:
	UVoxelMorphologyMeshesToolProperties*              MorphologyProperties;                                       // 0x0108   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelMorphologyMeshesToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.VoxelSolidifyMeshesToolProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             WindingThreshold;                                           // 0x0060   (0x0008)  
	double                                             ExtendBounds;                                               // 0x0068   (0x0008)  
	int32_t                                            SurfaceSearchSteps;                                         // 0x0070   (0x0004)  
	bool                                               bSolidAtBoundaries;                                         // 0x0074   (0x0001)  
	bool                                               bMakeOffsetSurfaces;                                        // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0076   (0x0002)  MISSED
	double                                             OffsetThickness;                                            // 0x0078   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelSolidifyMeshesTool
/// Size: 0x0008 (0x000108 - 0x000110)
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{ 
public:
	UVoxelSolidifyMeshesToolProperties*                SolidifyProperties;                                         // 0x0108   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelSolidifyMeshesToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.WeldMeshEdgesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.WeldMeshEdgesTool
/// Size: 0x0278 (0x000088 - 0x000300)
class UWeldMeshEdgesTool : public USingleSelectionTool
{ 
public:
	float                                              Tolerance;                                                  // 0x0088   (0x0004)  
	bool                                               bOnlyUnique;                                                // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x273];                                     // 0x008D   (0x0273)  MISSED
};

/// Struct /Script/MeshModelingTools.PhysicsConvexData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPhysicsConvexData
{ 
	int32_t                                            NumVertices;                                                // 0x0000   (0x0004)  
	int32_t                                            NumFaces;                                                   // 0x0004   (0x0004)  
	FKShapeElem                                        Element;                                                    // 0x0008   (0x0030)  
};

/// Struct /Script/MeshModelingTools.PhysicsCapsuleData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPhysicsCapsuleData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	float                                              Length;                                                     // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FKShapeElem                                        Element;                                                    // 0x0040   (0x0030)  
};

/// Struct /Script/MeshModelingTools.PhysicsBoxData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPhysicsBoxData
{ 
	FVector                                            Dimensions;                                                 // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FKShapeElem                                        Element;                                                    // 0x0040   (0x0030)  
};

/// Struct /Script/MeshModelingTools.PhysicsSphereData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPhysicsSphereData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FKShapeElem                                        Element;                                                    // 0x0040   (0x0030)  
};

/// Struct /Script/MeshModelingTools.PerlinLayerProperties
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPerlinLayerProperties
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Intensity;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/MeshModelingTools.EditPivotTarget
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEditPivotTarget
{ 
	UTransformProxy*                                   TransformProxy;                                             // 0x0000   (0x0008)  
	UTransformGizmo*                                   TransformGizmo;                                             // 0x0008   (0x0008)  
};

/// Struct /Script/MeshModelingTools.TransformMeshesTarget
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTransformMeshesTarget
{ 
	UTransformProxy*                                   TransformProxy;                                             // 0x0000   (0x0008)  
	UTransformGizmo*                                   TransformGizmo;                                             // 0x0008   (0x0008)  
};

/// Enum /Script/MeshModelingTools.EMakeMeshPolygroupMode
/// Size: 0x04
enum EMakeMeshPolygroupMode : uint8_t
{
	EMakeMeshPolygroupMode__Single                                                   = 0,
	EMakeMeshPolygroupMode__PerFace                                                  = 1,
	EMakeMeshPolygroupMode__PerQuad                                                  = 2,
	EMakeMeshPolygroupMode__EMakeMeshPolygroupMode_MAX                               = 3
};

/// Enum /Script/MeshModelingTools.EMakeMeshPivotLocation
/// Size: 0x04
enum EMakeMeshPivotLocation : uint8_t
{
	EMakeMeshPivotLocation__Base                                                     = 0,
	EMakeMeshPivotLocation__Centered                                                 = 1,
	EMakeMeshPivotLocation__Top                                                      = 2,
	EMakeMeshPivotLocation__EMakeMeshPivotLocation_MAX                               = 3
};

/// Enum /Script/MeshModelingTools.EMakeMeshPlacementType
/// Size: 0x03
enum EMakeMeshPlacementType : uint8_t
{
	EMakeMeshPlacementType__GroundPlane                                              = 0,
	EMakeMeshPlacementType__OnScene                                                  = 1,
	EMakeMeshPlacementType__EMakeMeshPlacementType_MAX                               = 2
};

/// Enum /Script/MeshModelingTools.EAlignObjectsBoxPoint
/// Size: 0x09
enum EAlignObjectsBoxPoint : uint8_t
{
	EAlignObjectsBoxPoint__Center                                                    = 0,
	EAlignObjectsBoxPoint__Bottom                                                    = 1,
	EAlignObjectsBoxPoint__Top                                                       = 2,
	EAlignObjectsBoxPoint__Left                                                      = 3,
	EAlignObjectsBoxPoint__Right                                                     = 4,
	EAlignObjectsBoxPoint__Front                                                     = 5,
	EAlignObjectsBoxPoint__Back                                                      = 6,
	EAlignObjectsBoxPoint__Min                                                       = 7,
	EAlignObjectsBoxPoint__Max                                                       = 8
};

/// Enum /Script/MeshModelingTools.EAlignObjectsAlignToOptions
/// Size: 0x04
enum EAlignObjectsAlignToOptions : uint8_t
{
	EAlignObjectsAlignToOptions__FirstSelected                                       = 0,
	EAlignObjectsAlignToOptions__LastSelected                                        = 1,
	EAlignObjectsAlignToOptions__Combined                                            = 2,
	EAlignObjectsAlignToOptions__EAlignObjectsAlignToOptions_MAX                     = 3
};

/// Enum /Script/MeshModelingTools.EAlignObjectsAlignTypes
/// Size: 0x03
enum EAlignObjectsAlignTypes : uint8_t
{
	EAlignObjectsAlignTypes__Pivots                                                  = 0,
	EAlignObjectsAlignTypes__BoundingBoxes                                           = 1,
	EAlignObjectsAlignTypes__EAlignObjectsAlignTypes_MAX                             = 2
};

/// Enum /Script/MeshModelingTools.EBakedCurvatureClampMode
/// Size: 0x04
enum EBakedCurvatureClampMode : uint8_t
{
	EBakedCurvatureClampMode__None                                                   = 0,
	EBakedCurvatureClampMode__Positive                                               = 1,
	EBakedCurvatureClampMode__Negative                                               = 2,
	EBakedCurvatureClampMode__EBakedCurvatureClampMode_MAX                           = 3
};

/// Enum /Script/MeshModelingTools.EBakedCurvatureColorMode
/// Size: 0x04
enum EBakedCurvatureColorMode : uint8_t
{
	EBakedCurvatureColorMode__Grayscale                                              = 0,
	EBakedCurvatureColorMode__RedBlue                                                = 1,
	EBakedCurvatureColorMode__RedGreenBlue                                           = 2,
	EBakedCurvatureColorMode__EBakedCurvatureColorMode_MAX                           = 3
};

/// Enum /Script/MeshModelingTools.EBakedCurvatureTypeMode
/// Size: 0x04
enum EBakedCurvatureTypeMode : uint8_t
{
	EBakedCurvatureTypeMode__MeanAverage                                             = 0,
	EBakedCurvatureTypeMode__Max                                                     = 1,
	EBakedCurvatureTypeMode__Min                                                     = 2,
	EBakedCurvatureTypeMode__Gaussian                                                = 3
};

/// Enum /Script/MeshModelingTools.EOcclusionMapPreview
/// Size: 0x03
enum EOcclusionMapPreview : uint8_t
{
	EOcclusionMapPreview__AmbientOcclusion                                           = 0,
	EOcclusionMapPreview__BentNormal                                                 = 1,
	EOcclusionMapPreview__EOcclusionMapPreview_MAX                                   = 2
};

/// Enum /Script/MeshModelingTools.EOcclusionMapDistribution
/// Size: 0x03
enum EOcclusionMapDistribution : uint8_t
{
	EOcclusionMapDistribution__Uniform                                               = 0,
	EOcclusionMapDistribution__Cosine                                                = 1,
	EOcclusionMapDistribution__EOcclusionMapDistribution_MAX                         = 2
};

/// Enum /Script/MeshModelingTools.ENormalMapSpace
/// Size: 0x03
enum ENormalMapSpace : uint8_t
{
	ENormalMapSpace__Tangent                                                         = 0,
	ENormalMapSpace__Object                                                          = 1,
	ENormalMapSpace__ENormalMapSpace_MAX                                             = 2
};

/// Enum /Script/MeshModelingTools.EBakeTextureResolution
/// Size: 0x11
enum EBakeTextureResolution : uint32_t
{
	EBakeTextureResolution__Resolution16                                             = 16,
	EBakeTextureResolution__Resolution32                                             = 32,
	EBakeTextureResolution__Resolution64                                             = 64,
	EBakeTextureResolution__Resolution128                                            = 128,
	EBakeTextureResolution__Resolution256                                            = 256,
	EBakeTextureResolution__Resolution512                                            = 512,
	EBakeTextureResolution__Resolution1024                                           = 1024,
	EBakeTextureResolution__Resolution2048                                           = 2048,
	EBakeTextureResolution__Resolution4096                                           = 4096,
	EBakeTextureResolution__Resolution8192                                           = 8192,
	EBakeTextureResolution__EBakeTextureResolution_MAX                               = 8193
};

/// Enum /Script/MeshModelingTools.EBakeMapType
/// Size: 0x08
enum EBakeMapType : uint8_t
{
	EBakeMapType__TangentSpaceNormalMap                                              = 0,
	EBakeMapType__Occlusion                                                          = 1,
	EBakeMapType__Curvature                                                          = 2,
	EBakeMapType__Texture2DImage                                                     = 3,
	EBakeMapType__NormalImage                                                        = 4,
	EBakeMapType__FaceNormalImage                                                    = 5,
	EBakeMapType__PositionImage                                                      = 6,
	EBakeMapType__EBakeMapType_MAX                                                   = 7
};

/// Enum /Script/MeshModelingTools.EBakeScaleMethod
/// Size: 0x04
enum EBakeScaleMethod : uint8_t
{
	EBakeScaleMethod__BakeFullScale                                                  = 0,
	EBakeScaleMethod__BakeNonuniformScale                                            = 1,
	EBakeScaleMethod__DoNotBakeScale                                                 = 2,
	EBakeScaleMethod__EBakeScaleMethod_MAX                                           = 3
};

/// Enum /Script/MeshModelingTools.ECollisionGeometryMode
/// Size: 0x05
enum ECollisionGeometryMode : uint8_t
{
	ECollisionGeometryMode__Default                                                  = 0,
	ECollisionGeometryMode__SimpleAndComplex                                         = 1,
	ECollisionGeometryMode__UseSimpleAsComplex                                       = 2,
	ECollisionGeometryMode__UseComplexAsSimple                                       = 3,
	ECollisionGeometryMode__ECollisionGeometryMode_MAX                               = 4
};

/// Enum /Script/MeshModelingTools.ECombineTargetType
/// Size: 0x04
enum ECombineTargetType : uint8_t
{
	ECombineTargetType__NewAsset                                                     = 0,
	ECombineTargetType__FirstInputAsset                                              = 1,
	ECombineTargetType__LastInputAsset                                               = 2,
	ECombineTargetType__ECombineTargetType_MAX                                       = 3
};

/// Enum /Script/MeshModelingTools.EConvertToPolygonsMode
/// Size: 0x03
enum EConvertToPolygonsMode : uint8_t
{
	EConvertToPolygonsMode__FaceNormalDeviation                                      = 0,
	EConvertToPolygonsMode__FromUVISlands                                            = 1,
	EConvertToPolygonsMode__EConvertToPolygonsMode_MAX                               = 2
};

/// Enum /Script/MeshModelingTools.EQuickTransformerMode
/// Size: 0x03
enum EQuickTransformerMode : uint8_t
{
	EQuickTransformerMode__AxisTranslation                                           = 0,
	EQuickTransformerMode__AxisRotation                                              = 1,
	EQuickTransformerMode__EQuickTransformerMode_MAX                                 = 2
};

/// Enum /Script/MeshModelingTools.EWeightScheme
/// Size: 0x07
enum EWeightScheme : uint8_t
{
	EWeightScheme__Uniform                                                           = 0,
	EWeightScheme__Umbrella                                                          = 1,
	EWeightScheme__Valence                                                           = 2,
	EWeightScheme__MeanValue                                                         = 3,
	EWeightScheme__Cotangent                                                         = 4,
	EWeightScheme__ClampedCotangent                                                  = 5,
	EWeightScheme__EWeightScheme_MAX                                                 = 6
};

/// Enum /Script/MeshModelingTools.EGroupTopologyDeformationStrategy
/// Size: 0x03
enum EGroupTopologyDeformationStrategy : uint8_t
{
	EGroupTopologyDeformationStrategy__Linear                                        = 0,
	EGroupTopologyDeformationStrategy__Laplacian                                     = 1,
	EGroupTopologyDeformationStrategy__EGroupTopologyDeformationStrategy_MAX         = 2
};

/// Enum /Script/MeshModelingTools.EDisplaceMeshToolDisplaceType
/// Size: 0x06
enum EDisplaceMeshToolDisplaceType : uint8_t
{
	EDisplaceMeshToolDisplaceType__Constant                                          = 0,
	EDisplaceMeshToolDisplaceType__RandomNoise                                       = 1,
	EDisplaceMeshToolDisplaceType__PerlinNoise                                       = 2,
	EDisplaceMeshToolDisplaceType__DisplacementMap                                   = 3,
	EDisplaceMeshToolDisplaceType__SineWave                                          = 4,
	EDisplaceMeshToolDisplaceType__EDisplaceMeshToolDisplaceType_MAX                 = 5
};

/// Enum /Script/MeshModelingTools.EDrawPolygonOutputMode
/// Size: 0x04
enum EDrawPolygonOutputMode : uint8_t
{
	EDrawPolygonOutputMode__MeshedPolygon                                            = 0,
	EDrawPolygonOutputMode__ExtrudedConstant                                         = 1,
	EDrawPolygonOutputMode__ExtrudedInteractive                                      = 2,
	EDrawPolygonOutputMode__EDrawPolygonOutputMode_MAX                               = 3
};

/// Enum /Script/MeshModelingTools.EDrawPolygonDrawMode
/// Size: 0x07
enum EDrawPolygonDrawMode : uint8_t
{
	EDrawPolygonDrawMode__Freehand                                                   = 0,
	EDrawPolygonDrawMode__Circle                                                     = 1,
	EDrawPolygonDrawMode__Square                                                     = 2,
	EDrawPolygonDrawMode__Rectangle                                                  = 3,
	EDrawPolygonDrawMode__RoundedRectangle                                           = 4,
	EDrawPolygonDrawMode__HoleyCircle                                                = 5,
	EDrawPolygonDrawMode__EDrawPolygonDrawMode_MAX                                   = 6
};

/// Enum /Script/MeshModelingTools.EDrawPolyPathExtrudeDirection
/// Size: 0x08
enum EDrawPolyPathExtrudeDirection : uint8_t
{
	EDrawPolyPathExtrudeDirection__SelectionNormal                                   = 0,
	EDrawPolyPathExtrudeDirection__WorldX                                            = 1,
	EDrawPolyPathExtrudeDirection__WorldY                                            = 2,
	EDrawPolyPathExtrudeDirection__WorldZ                                            = 3,
	EDrawPolyPathExtrudeDirection__LocalX                                            = 4,
	EDrawPolyPathExtrudeDirection__LocalY                                            = 5,
	EDrawPolyPathExtrudeDirection__LocalZ                                            = 6,
	EDrawPolyPathExtrudeDirection__EDrawPolyPathExtrudeDirection_MAX                 = 7
};

/// Enum /Script/MeshModelingTools.EDrawPolyPathHeightMode
/// Size: 0x03
enum EDrawPolyPathHeightMode : uint8_t
{
	EDrawPolyPathHeightMode__Interactive                                             = 0,
	EDrawPolyPathHeightMode__Constant                                                = 1,
	EDrawPolyPathHeightMode__EDrawPolyPathHeightMode_MAX                             = 2
};

/// Enum /Script/MeshModelingTools.EDrawPolyPathWidthMode
/// Size: 0x03
enum EDrawPolyPathWidthMode : uint8_t
{
	EDrawPolyPathWidthMode__Interactive                                              = 0,
	EDrawPolyPathWidthMode__Constant                                                 = 1,
	EDrawPolyPathWidthMode__EDrawPolyPathWidthMode_MAX                               = 2
};

/// Enum /Script/MeshModelingTools.EDrawPolyPathOutputMode
/// Size: 0x04
enum EDrawPolyPathOutputMode : uint8_t
{
	EDrawPolyPathOutputMode__Ribbon                                                  = 0,
	EDrawPolyPathOutputMode__Extrusion                                               = 1,
	EDrawPolyPathOutputMode__Ramp                                                    = 2,
	EDrawPolyPathOutputMode__EDrawPolyPathOutputMode_MAX                             = 3
};

/// Enum /Script/MeshModelingTools.EDynamicMeshSculptBrushType
/// Size: 0x18
enum EDynamicMeshSculptBrushType : uint8_t
{
	EDynamicMeshSculptBrushType__Move                                                = 0,
	EDynamicMeshSculptBrushType__PullKelvin                                          = 1,
	EDynamicMeshSculptBrushType__PullSharpKelvin                                     = 2,
	EDynamicMeshSculptBrushType__Smooth                                              = 3,
	EDynamicMeshSculptBrushType__Offset                                              = 4,
	EDynamicMeshSculptBrushType__SculptView                                          = 5,
	EDynamicMeshSculptBrushType__SculptMax                                           = 6,
	EDynamicMeshSculptBrushType__Inflate                                             = 7,
	EDynamicMeshSculptBrushType__ScaleKelvin                                         = 8,
	EDynamicMeshSculptBrushType__Pinch                                               = 9,
	EDynamicMeshSculptBrushType__TwistKelvin                                         = 10,
	EDynamicMeshSculptBrushType__Flatten                                             = 11,
	EDynamicMeshSculptBrushType__Plane                                               = 12,
	EDynamicMeshSculptBrushType__PlaneViewAligned                                    = 13,
	EDynamicMeshSculptBrushType__FixedPlane                                          = 14,
	EDynamicMeshSculptBrushType__Resample                                            = 15,
	EDynamicMeshSculptBrushType__LastValue                                           = 16,
	EDynamicMeshSculptBrushType__EDynamicMeshSculptBrushType_MAX                     = 17
};

/// Enum /Script/MeshModelingTools.EEdgeLoopInsertionMode
/// Size: 0x03
enum EEdgeLoopInsertionMode : uint8_t
{
	EEdgeLoopInsertionMode__Retriangulate                                            = 0,
	EEdgeLoopInsertionMode__PlaneCut                                                 = 1,
	EEdgeLoopInsertionMode__EEdgeLoopInsertionMode_MAX                               = 2
};

/// Enum /Script/MeshModelingTools.EEdgeLoopPositioningMode
/// Size: 0x04
enum EEdgeLoopPositioningMode : uint8_t
{
	EEdgeLoopPositioningMode__Even                                                   = 0,
	EEdgeLoopPositioningMode__ProportionOffset                                       = 1,
	EEdgeLoopPositioningMode__DistanceOffset                                         = 2,
	EEdgeLoopPositioningMode__EEdgeLoopPositioningMode_MAX                           = 3
};

/// Enum /Script/MeshModelingTools.EPolyEditCutPlaneOrientation
/// Size: 0x03
enum EPolyEditCutPlaneOrientation : uint8_t
{
	EPolyEditCutPlaneOrientation__FaceNormals                                        = 0,
	EPolyEditCutPlaneOrientation__ViewDirection                                      = 1,
	EPolyEditCutPlaneOrientation__EPolyEditCutPlaneOrientation_MAX                   = 2
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeDirection
/// Size: 0x08
enum EPolyEditExtrudeDirection : uint8_t
{
	EPolyEditExtrudeDirection__SelectionNormal                                       = 0,
	EPolyEditExtrudeDirection__WorldX                                                = 1,
	EPolyEditExtrudeDirection__WorldY                                                = 2,
	EPolyEditExtrudeDirection__WorldZ                                                = 3,
	EPolyEditExtrudeDirection__LocalX                                                = 4,
	EPolyEditExtrudeDirection__LocalY                                                = 5,
	EPolyEditExtrudeDirection__LocalZ                                                = 6,
	EPolyEditExtrudeDirection__EPolyEditExtrudeDirection_MAX                         = 7
};

/// Enum /Script/MeshModelingTools.EEditMeshPolygonsToolActions
/// Size: 0x24
enum EEditMeshPolygonsToolActions : uint8_t
{
	EEditMeshPolygonsToolActions__NoAction                                           = 0,
	EEditMeshPolygonsToolActions__PlaneCut                                           = 1,
	EEditMeshPolygonsToolActions__Extrude                                            = 2,
	EEditMeshPolygonsToolActions__Offset                                             = 3,
	EEditMeshPolygonsToolActions__Inset                                              = 4,
	EEditMeshPolygonsToolActions__Outset                                             = 5,
	EEditMeshPolygonsToolActions__Merge                                              = 6,
	EEditMeshPolygonsToolActions__Delete                                             = 7,
	EEditMeshPolygonsToolActions__CutFaces                                           = 8,
	EEditMeshPolygonsToolActions__RecalculateNormals                                 = 9,
	EEditMeshPolygonsToolActions__FlipNormals                                        = 10,
	EEditMeshPolygonsToolActions__Retriangulate                                      = 11,
	EEditMeshPolygonsToolActions__Decompose                                          = 12,
	EEditMeshPolygonsToolActions__Disconnect                                         = 13,
	EEditMeshPolygonsToolActions__CollapseEdge                                       = 14,
	EEditMeshPolygonsToolActions__WeldEdges                                          = 15,
	EEditMeshPolygonsToolActions__StraightenEdge                                     = 16,
	EEditMeshPolygonsToolActions__FillHole                                           = 17,
	EEditMeshPolygonsToolActions__PlanarProjectionUV                                 = 18,
	EEditMeshPolygonsToolActions__PokeSingleFace                                     = 19,
	EEditMeshPolygonsToolActions__SplitSingleEdge                                    = 20,
	EEditMeshPolygonsToolActions__FlipSingleEdge                                     = 21,
	EEditMeshPolygonsToolActions__CollapseSingleEdge                                 = 22,
	EEditMeshPolygonsToolActions__EEditMeshPolygonsToolActions_MAX                   = 23
};

/// Enum /Script/MeshModelingTools.ELocalFrameMode
/// Size: 0x03
enum ELocalFrameMode : uint8_t
{
	ELocalFrameMode__FromObject                                                      = 0,
	ELocalFrameMode__FromGeometry                                                    = 1,
	ELocalFrameMode__ELocalFrameMode_MAX                                             = 2
};

/// Enum /Script/MeshModelingTools.EEditPivotToolActions
/// Size: 0x09
enum EEditPivotToolActions : uint8_t
{
	EEditPivotToolActions__NoAction                                                  = 0,
	EEditPivotToolActions__Center                                                    = 1,
	EEditPivotToolActions__Bottom                                                    = 2,
	EEditPivotToolActions__Top                                                       = 3,
	EEditPivotToolActions__Left                                                      = 4,
	EEditPivotToolActions__Right                                                     = 5,
	EEditPivotToolActions__Front                                                     = 6,
	EEditPivotToolActions__Back                                                      = 7,
	EEditPivotToolActions__EEditPivotToolActions_MAX                                 = 8
};

/// Enum /Script/MeshModelingTools.EEditPivotSnapDragRotationMode
/// Size: 0x05
enum EEditPivotSnapDragRotationMode : uint8_t
{
	EEditPivotSnapDragRotationMode__Ignore                                           = 0,
	EEditPivotSnapDragRotationMode__Align                                            = 1,
	EEditPivotSnapDragRotationMode__AlignFlipped                                     = 2,
	EEditPivotSnapDragRotationMode__LastValue                                        = 3,
	EEditPivotSnapDragRotationMode__EEditPivotSnapDragRotationMode_MAX               = 4
};

/// Enum /Script/MeshModelingTools.EGroupEdgeInsertionMode
/// Size: 0x03
enum EGroupEdgeInsertionMode : uint8_t
{
	EGroupEdgeInsertionMode__Retriangulate                                           = 0,
	EGroupEdgeInsertionMode__PlaneCut                                                = 1,
	EGroupEdgeInsertionMode__EGroupEdgeInsertionMode_MAX                             = 2
};

/// Enum /Script/MeshModelingTools.EHoleFillToolActions
/// Size: 0x04
enum EHoleFillToolActions : uint8_t
{
	EHoleFillToolActions__NoAction                                                   = 0,
	EHoleFillToolActions__SelectAll                                                  = 1,
	EHoleFillToolActions__ClearSelection                                             = 2,
	EHoleFillToolActions__EHoleFillToolActions_MAX                                   = 3
};

/// Enum /Script/MeshModelingTools.EMeshAttributePaintToolActions
/// Size: 0x02
enum EMeshAttributePaintToolActions : uint8_t
{
	EMeshAttributePaintToolActions__NoAction                                         = 0,
	EMeshAttributePaintToolActions__EMeshAttributePaintToolActions_MAX               = 1
};

/// Enum /Script/MeshModelingTools.EPlaneBrushSideMode
/// Size: 0x04
enum EPlaneBrushSideMode : uint8_t
{
	EPlaneBrushSideMode__BothSides                                                   = 0,
	EPlaneBrushSideMode__PushDown                                                    = 1,
	EPlaneBrushSideMode__PullTowards                                                 = 2,
	EPlaneBrushSideMode__EPlaneBrushSideMode_MAX                                     = 3
};

/// Enum /Script/MeshModelingTools.EMeshEditingMaterialModes
/// Size: 0x07
enum EMeshEditingMaterialModes : uint8_t
{
	EMeshEditingMaterialModes__ExistingMaterial                                      = 0,
	EMeshEditingMaterialModes__Diffuse                                               = 1,
	EMeshEditingMaterialModes__Grey                                                  = 2,
	EMeshEditingMaterialModes__Soft                                                  = 3,
	EMeshEditingMaterialModes__TangentNormal                                         = 4,
	EMeshEditingMaterialModes__Custom                                                = 5,
	EMeshEditingMaterialModes__EMeshEditingMaterialModes_MAX                         = 6
};

/// Enum /Script/MeshModelingTools.ESetMeshMaterialMode
/// Size: 0x04
enum ESetMeshMaterialMode : uint8_t
{
	ESetMeshMaterialMode__KeepOriginal                                               = 0,
	ESetMeshMaterialMode__Checkerboard                                               = 1,
	ESetMeshMaterialMode__Override                                                   = 2,
	ESetMeshMaterialMode__ESetMeshMaterialMode_MAX                                   = 3
};

/// Enum /Script/MeshModelingTools.EMeshSculptFalloffType
/// Size: 0x10
enum EMeshSculptFalloffType : uint8_t
{
	EMeshSculptFalloffType__Smooth                                                   = 0,
	EMeshSculptFalloffType__Linear                                                   = 1,
	EMeshSculptFalloffType__Inverse                                                  = 2,
	EMeshSculptFalloffType__Round                                                    = 3,
	EMeshSculptFalloffType__BoxSmooth                                                = 4,
	EMeshSculptFalloffType__BoxLinear                                                = 5,
	EMeshSculptFalloffType__BoxInverse                                               = 6,
	EMeshSculptFalloffType__BoxRound                                                 = 7,
	EMeshSculptFalloffType__LastValue                                                = 8,
	EMeshSculptFalloffType__EMeshSculptFalloffType_MAX                               = 9
};

/// Enum /Script/MeshModelingTools.EMeshFacesColorMode
/// Size: 0x05
enum EMeshFacesColorMode : uint8_t
{
	EMeshFacesColorMode__None                                                        = 0,
	EMeshFacesColorMode__ByGroup                                                     = 1,
	EMeshFacesColorMode__ByMaterialID                                                = 2,
	EMeshFacesColorMode__ByUVIsland                                                  = 3,
	EMeshFacesColorMode__EMeshFacesColorMode_MAX                                     = 4
};

/// Enum /Script/MeshModelingTools.EMeshSelectionToolPrimaryMode
/// Size: 0x10
enum EMeshSelectionToolPrimaryMode : uint8_t
{
	EMeshSelectionToolPrimaryMode__Brush                                             = 0,
	EMeshSelectionToolPrimaryMode__VolumetricBrush                                   = 1,
	EMeshSelectionToolPrimaryMode__AngleFiltered                                     = 2,
	EMeshSelectionToolPrimaryMode__Visible                                           = 3,
	EMeshSelectionToolPrimaryMode__AllConnected                                      = 4,
	EMeshSelectionToolPrimaryMode__AllInGroup                                        = 5,
	EMeshSelectionToolPrimaryMode__ByMaterial                                        = 6,
	EMeshSelectionToolPrimaryMode__ByUVIsland                                        = 7,
	EMeshSelectionToolPrimaryMode__AllWithinAngle                                    = 8,
	EMeshSelectionToolPrimaryMode__EMeshSelectionToolPrimaryMode_MAX                 = 9
};

/// Enum /Script/MeshModelingTools.EMeshSelectionToolActions
/// Size: 0x18
enum EMeshSelectionToolActions : uint8_t
{
	EMeshSelectionToolActions__NoAction                                              = 0,
	EMeshSelectionToolActions__SelectAll                                             = 1,
	EMeshSelectionToolActions__ClearSelection                                        = 2,
	EMeshSelectionToolActions__InvertSelection                                       = 3,
	EMeshSelectionToolActions__GrowSelection                                         = 4,
	EMeshSelectionToolActions__ShrinkSelection                                       = 5,
	EMeshSelectionToolActions__ExpandToConnected                                     = 6,
	EMeshSelectionToolActions__SelectLargestComponentByTriCount                      = 7,
	EMeshSelectionToolActions__SelectLargestComponentByArea                          = 8,
	EMeshSelectionToolActions__OptimizeSelection                                     = 9,
	EMeshSelectionToolActions__DeleteSelected                                        = 10,
	EMeshSelectionToolActions__DisconnectSelected                                    = 11,
	EMeshSelectionToolActions__SeparateSelected                                      = 12,
	EMeshSelectionToolActions__FlipSelected                                          = 13,
	EMeshSelectionToolActions__CreateGroup                                           = 14,
	EMeshSelectionToolActions__CycleSelectionMode                                    = 15,
	EMeshSelectionToolActions__CycleViewMode                                         = 16,
	EMeshSelectionToolActions__EMeshSelectionToolActions_MAX                         = 17
};

/// Enum /Script/MeshModelingTools.ENonlinearOperationType
/// Size: 0x04
enum ENonlinearOperationType : uint8_t
{
	ENonlinearOperationType__Bend                                                    = 0,
	ENonlinearOperationType__Flare                                                   = 1,
	ENonlinearOperationType__Twist                                                   = 2,
	ENonlinearOperationType__ENonlinearOperationType_MAX                             = 3
};

/// Enum /Script/MeshModelingTools.EMeshVertexSculptBrushType
/// Size: 0x18
enum EMeshVertexSculptBrushType : uint8_t
{
	EMeshVertexSculptBrushType__Move                                                 = 0,
	EMeshVertexSculptBrushType__PullKelvin                                           = 1,
	EMeshVertexSculptBrushType__PullSharpKelvin                                      = 2,
	EMeshVertexSculptBrushType__Smooth                                               = 3,
	EMeshVertexSculptBrushType__SmoothFill                                           = 4,
	EMeshVertexSculptBrushType__Offset                                               = 5,
	EMeshVertexSculptBrushType__SculptView                                           = 6,
	EMeshVertexSculptBrushType__SculptMax                                            = 7,
	EMeshVertexSculptBrushType__Inflate                                              = 8,
	EMeshVertexSculptBrushType__ScaleKelvin                                          = 9,
	EMeshVertexSculptBrushType__Pinch                                                = 10,
	EMeshVertexSculptBrushType__TwistKelvin                                          = 11,
	EMeshVertexSculptBrushType__Flatten                                              = 12,
	EMeshVertexSculptBrushType__Plane                                                = 13,
	EMeshVertexSculptBrushType__PlaneViewAligned                                     = 14,
	EMeshVertexSculptBrushType__FixedPlane                                           = 15,
	EMeshVertexSculptBrushType__LastValue                                            = 16,
	EMeshVertexSculptBrushType__EMeshVertexSculptBrushType_MAX                       = 17
};

/// Enum /Script/MeshModelingTools.EMirrorToolAction
/// Size: 0x09
enum EMirrorToolAction : uint8_t
{
	EMirrorToolAction__NoAction                                                      = 0,
	EMirrorToolAction__ShiftToCenter                                                 = 1,
	EMirrorToolAction__Left                                                          = 2,
	EMirrorToolAction__Right                                                         = 3,
	EMirrorToolAction__Up                                                            = 4,
	EMirrorToolAction__Down                                                          = 5,
	EMirrorToolAction__Forward                                                       = 6,
	EMirrorToolAction__Backward                                                      = 7,
	EMirrorToolAction__EMirrorToolAction_MAX                                         = 8
};

/// Enum /Script/MeshModelingTools.EMirrorCtrlClickBehavior
/// Size: 0x03
enum EMirrorCtrlClickBehavior : uint8_t
{
	EMirrorCtrlClickBehavior__Reposition                                             = 0,
	EMirrorCtrlClickBehavior__RepositionAndReorient                                  = 1,
	EMirrorCtrlClickBehavior__EMirrorCtrlClickBehavior_MAX                           = 2
};

/// Enum /Script/MeshModelingTools.EMirrorOperationMode
/// Size: 0x03
enum EMirrorOperationMode : uint8_t
{
	EMirrorOperationMode__MirrorAndAppend                                            = 0,
	EMirrorOperationMode__MirrorExisting                                             = 1,
	EMirrorOperationMode__EMirrorOperationMode_MAX                                   = 2
};

/// Enum /Script/MeshModelingTools.EMirrorSaveMode
/// Size: 0x03
enum EMirrorSaveMode : uint8_t
{
	EMirrorSaveMode__UpdateAssets                                                    = 0,
	EMirrorSaveMode__CreateNewAssets                                                 = 1,
	EMirrorSaveMode__EMirrorSaveMode_MAX                                             = 2
};

/// Enum /Script/MeshModelingTools.EOffsetMeshToolOffsetType
/// Size: 0x03
enum EOffsetMeshToolOffsetType : uint8_t
{
	EOffsetMeshToolOffsetType__Iterative                                             = 0,
	EOffsetMeshToolOffsetType__Implicit                                              = 1,
	EOffsetMeshToolOffsetType__EOffsetMeshToolOffsetType_MAX                         = 2
};

/// Enum /Script/MeshModelingTools.EMaterialBoundaryConstraint
/// Size: 0x05
enum EMaterialBoundaryConstraint : uint8_t
{
	EMaterialBoundaryConstraint__Fixed                                               = 7,
	EMaterialBoundaryConstraint__Refine                                              = 5,
	EMaterialBoundaryConstraint__Free                                                = 1,
	EMaterialBoundaryConstraint__Ignore                                              = 0,
	EMaterialBoundaryConstraint__EMaterialBoundaryConstraint_MAX                     = 8
};

/// Enum /Script/MeshModelingTools.EGroupBoundaryConstraint
/// Size: 0x05
enum EGroupBoundaryConstraint : uint8_t
{
	EGroupBoundaryConstraint__Fixed                                                  = 7,
	EGroupBoundaryConstraint__Refine                                                 = 5,
	EGroupBoundaryConstraint__Free                                                   = 1,
	EGroupBoundaryConstraint__Ignore                                                 = 0,
	EGroupBoundaryConstraint__EGroupBoundaryConstraint_MAX                           = 8
};

/// Enum /Script/MeshModelingTools.EMeshBoundaryConstraint
/// Size: 0x04
enum EMeshBoundaryConstraint : uint8_t
{
	EMeshBoundaryConstraint__Fixed                                                   = 7,
	EMeshBoundaryConstraint__Refine                                                  = 5,
	EMeshBoundaryConstraint__Free                                                    = 1,
	EMeshBoundaryConstraint__EMeshBoundaryConstraint_MAX                             = 8
};

/// Enum /Script/MeshModelingTools.EOcclusionCalculationUIMode
/// Size: 0x03
enum EOcclusionCalculationUIMode : uint8_t
{
	EOcclusionCalculationUIMode__GeneralizedWindingNumber                            = 0,
	EOcclusionCalculationUIMode__RaycastOcclusionSamples                             = 1,
	EOcclusionCalculationUIMode__EOcclusionCalculationUIMode_MAX                     = 2
};

/// Enum /Script/MeshModelingTools.EOcclusionTriangleSamplingUIMode
/// Size: 0x03
enum EOcclusionTriangleSamplingUIMode : uint8_t
{
	EOcclusionTriangleSamplingUIMode__Vertices                                       = 0,
	EOcclusionTriangleSamplingUIMode__VerticesAndCentroids                           = 1,
	EOcclusionTriangleSamplingUIMode__EOcclusionTriangleSamplingUIMode_MAX           = 2
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesQuadSplit
/// Size: 0x03
enum ERevolvePropertiesQuadSplit : uint8_t
{
	ERevolvePropertiesQuadSplit__Uniform                                             = 0,
	ERevolvePropertiesQuadSplit__ShortestDiagonal                                    = 1,
	ERevolvePropertiesQuadSplit__ERevolvePropertiesQuadSplit_MAX                     = 2
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesPolygroupMode
/// Size: 0x05
enum ERevolvePropertiesPolygroupMode : uint8_t
{
	ERevolvePropertiesPolygroupMode__Single                                          = 0,
	ERevolvePropertiesPolygroupMode__PerFace                                         = 1,
	ERevolvePropertiesPolygroupMode__PerStep                                         = 2,
	ERevolvePropertiesPolygroupMode__AccordingToProfileCurve                         = 3,
	ERevolvePropertiesPolygroupMode__ERevolvePropertiesPolygroupMode_MAX             = 4
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesCapFillMode
/// Size: 0x05
enum ERevolvePropertiesCapFillMode : uint8_t
{
	ERevolvePropertiesCapFillMode__None                                              = 0,
	ERevolvePropertiesCapFillMode__Delaunay                                          = 1,
	ERevolvePropertiesCapFillMode__EarClipping                                       = 2,
	ERevolvePropertiesCapFillMode__CenterFan                                         = 3,
	ERevolvePropertiesCapFillMode__ERevolvePropertiesCapFillMode_MAX                 = 4
};

/// Enum /Script/MeshModelingTools.EProjectedHullAxis
/// Size: 0x06
enum EProjectedHullAxis : uint8_t
{
	EProjectedHullAxis__X                                                            = 0,
	EProjectedHullAxis__Y                                                            = 1,
	EProjectedHullAxis__Z                                                            = 2,
	EProjectedHullAxis__SmallestBoxDimension                                         = 3,
	EProjectedHullAxis__SmallestVolume                                               = 4,
	EProjectedHullAxis__EProjectedHullAxis_MAX                                       = 5
};

/// Enum /Script/MeshModelingTools.ECollisionGeometryType
/// Size: 0x10
enum ECollisionGeometryType : uint8_t
{
	ECollisionGeometryType__KeepExisting                                             = 0,
	ECollisionGeometryType__AlignedBoxes                                             = 1,
	ECollisionGeometryType__OrientedBoxes                                            = 2,
	ECollisionGeometryType__MinimalSpheres                                           = 3,
	ECollisionGeometryType__Capsules                                                 = 4,
	ECollisionGeometryType__ConvexHulls                                              = 5,
	ECollisionGeometryType__SweptHulls                                               = 6,
	ECollisionGeometryType__MinVolume                                                = 10,
	ECollisionGeometryType__None                                                     = 11,
	ECollisionGeometryType__ECollisionGeometryType_MAX                               = 12
};

/// Enum /Script/MeshModelingTools.ESetCollisionGeometryInputMode
/// Size: 0x05
enum ESetCollisionGeometryInputMode : uint8_t
{
	ESetCollisionGeometryInputMode__CombineAll                                       = 0,
	ESetCollisionGeometryInputMode__PerInputObject                                   = 1,
	ESetCollisionGeometryInputMode__PerMeshComponent                                 = 2,
	ESetCollisionGeometryInputMode__PerMeshGroup                                     = 3,
	ESetCollisionGeometryInputMode__ESetCollisionGeometryInputMode_MAX               = 4
};

/// Enum /Script/MeshModelingTools.ESmoothMeshToolSmoothType
/// Size: 0x04
enum ESmoothMeshToolSmoothType : uint8_t
{
	ESmoothMeshToolSmoothType__Iterative                                             = 0,
	ESmoothMeshToolSmoothType__Implicit                                              = 1,
	ESmoothMeshToolSmoothType__Diffusion                                             = 2,
	ESmoothMeshToolSmoothType__ESmoothMeshToolSmoothType_MAX                         = 3
};

/// Enum /Script/MeshModelingTools.ETransformMeshesSnapDragRotationMode
/// Size: 0x05
enum ETransformMeshesSnapDragRotationMode : uint8_t
{
	ETransformMeshesSnapDragRotationMode__Ignore                                     = 0,
	ETransformMeshesSnapDragRotationMode__Align                                      = 1,
	ETransformMeshesSnapDragRotationMode__AlignFlipped                               = 2,
	ETransformMeshesSnapDragRotationMode__LastValue                                  = 3,
	ETransformMeshesSnapDragRotationMode__ETransformMeshesSnapDragRotationMode_MAX   = 4
};

/// Enum /Script/MeshModelingTools.ETransformMeshesSnapDragSource
/// Size: 0x04
enum ETransformMeshesSnapDragSource : uint8_t
{
	ETransformMeshesSnapDragSource__ClickPoint                                       = 0,
	ETransformMeshesSnapDragSource__Pivot                                            = 1,
	ETransformMeshesSnapDragSource__LastValue                                        = 2,
	ETransformMeshesSnapDragSource__ETransformMeshesSnapDragSource_MAX               = 3
};

/// Enum /Script/MeshModelingTools.ETransformMeshesTransformMode
/// Size: 0x05
enum ETransformMeshesTransformMode : uint8_t
{
	ETransformMeshesTransformMode__SharedGizmo                                       = 0,
	ETransformMeshesTransformMode__SharedGizmoLocal                                  = 1,
	ETransformMeshesTransformMode__PerObjectGizmo                                    = 2,
	ETransformMeshesTransformMode__LastValue                                         = 3,
	ETransformMeshesTransformMode__ETransformMeshesTransformMode_MAX                 = 4
};

