/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ModelingComponents.

/// Class /Script/ModelingComponents.BaseCreateFromSelectedToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
{ 
public:
	EHandleSourcesMethod                               OnToolAccept;                                               // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
/// Size: 0x0028 (0x000068 - 0x000090)
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{ 
public:
	EBaseCreateFromSelectedTargetType                  WriteOutputTo;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            OutputName;                                                 // 0x0070   (0x0010)  
	FString                                            OutputAsset;                                                // 0x0080   (0x0010)  
};

/// Class /Script/ModelingComponents.TransformInputsToolProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowTransformUI;                                           // 0x0060   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedTool
/// Size: 0x0060 (0x000090 - 0x0000F0)
class UBaseCreateFromSelectedTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	UTransformInputsToolProperties*                    TransformProperties;                                        // 0x0098   (0x0008)  
	UBaseCreateFromSelectedHandleSourceProperties*     HandleSourcesProperties;                                    // 0x00A0   (0x0008)  
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x00A8   (0x0008)  
	TArray<UTransformProxy*>                           TransformProxies;                                           // 0x00B0   (0x0010)  
	TArray<UTransformGizmo*>                           TransformGizmos;                                            // 0x00C0   (0x0010)  
	TArray<FVector>                                    TransformInitialScales;                                     // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.BaseDynamicMeshComponent
/// Size: 0x0040 (0x000480 - 0x0004C0)
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0480   (0x0040)  MISSED
};

/// Class /Script/ModelingComponents.BaseMeshProcessingToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.BaseMeshProcessingTool
/// Size: 0x0378 (0x000088 - 0x000400)
class UBaseMeshProcessingTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0088   (0x0028)  MISSED
	UMeshOpPreviewWithBackgroundCompute*               Preview;                                                    // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x348];                                     // 0x00B8   (0x0348)  MISSED
};

/// Class /Script/ModelingComponents.BaseVoxelTool
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{ 
public:
	UVoxelProperties*                                  VoxProperties;                                              // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F8   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.CollectSurfacePathMechanic
/// Size: 0x0520 (0x000030 - 0x000550)
class UCollectSurfacePathMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x520];                                     // 0x0030   (0x0520)  MISSED
};

/// Class /Script/ModelingComponents.ConstructionPlaneMechanic
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UConstructionPlaneMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_2[0x98];                                      // 0x0030   (0x0098)  MISSED
	UTransformGizmo*                                   PlaneTransformGizmo;                                        // 0x00C8   (0x0008)  
	UTransformProxy*                                   PlaneTransformProxy;                                        // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00D8   (0x0010)  MISSED
	USingleClickInputBehavior*                         ClickToSetPlaneBehavior;                                    // 0x00E8   (0x0008)  
};

/// Class /Script/ModelingComponents.CurveControlPointsMechanic
/// Size: 0x0620 (0x000030 - 0x000650)
class UCurveControlPointsMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	USingleClickInputBehavior*                         ClickBehavior;                                              // 0x0040   (0x0008)  
	UMouseHoverBehavior*                               HoverBehavior;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_5[0x498];                                     // 0x0050   (0x0498)  MISSED
	APreviewGeometryActor*                             PreviewGeometryActor;                                       // 0x04E8   (0x0008)  
	UPointSetComponent*                                DrawnControlPoints;                                         // 0x04F0   (0x0008)  
	ULineSetComponent*                                 DrawnControlSegments;                                       // 0x04F8   (0x0008)  
	UPointSetComponent*                                PreviewPoint;                                               // 0x0500   (0x0008)  
	ULineSetComponent*                                 PreviewSegment;                                             // 0x0508   (0x0008)  
	unsigned char                                      UnknownData02_5[0x78];                                      // 0x0510   (0x0078)  MISSED
	UTransformProxy*                                   PointTransformProxy;                                        // 0x0588   (0x0008)  
	UTransformGizmo*                                   PointTransformGizmo;                                        // 0x0590   (0x0008)  
	unsigned char                                      UnknownData03_6[0xB8];                                      // 0x0598   (0x00B8)  MISSED
};

/// Class /Script/ModelingComponents.DynamicMeshReplacementChangeTarget
/// Size: 0x0030 (0x000028 - 0x000058)
class UDynamicMeshReplacementChangeTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/ModelingComponents.LineSetComponent
/// Size: 0x0060 (0x000480 - 0x0004E0)
class ULineSetComponent : public UMeshComponent
{ 
public:
	UMaterialInterface*                                LineMaterial;                                               // 0x0478   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0480   (0x001C)  
	bool                                               bBoundsDirty;                                               // 0x049C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x43];                                      // 0x049D   (0x0043)  MISSED
};

/// Class /Script/ModelingComponents.MeshCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.MeshOpPreviewWithBackgroundCompute
/// Size: 0x0068 (0x000028 - 0x000090)
class UMeshOpPreviewWithBackgroundCompute : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0028   (0x0030)  MISSED
	UPreviewMesh*                                      PreviewMesh;                                                // 0x0058   (0x0008)  
	TArray<UMaterialInterface*>                        StandardMaterials;                                          // 0x0060   (0x0010)  
	UMaterialInterface*                                OverrideMaterial;                                           // 0x0070   (0x0008)  
	UMaterialInterface*                                WorkingMaterial;                                            // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.MeshReplacementCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReplacementCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.MeshVertexCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshVertexCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.MultiTransformer
/// Size: 0x0118 (0x000028 - 0x000140)
class UMultiTransformer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0028   (0x0048)  MISSED
	UInteractiveGizmoManager*                          GizmoManager;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_5[0x68];                                      // 0x0078   (0x0068)  MISSED
	UTransformGizmo*                                   TransformGizmo;                                             // 0x00E0   (0x0008)  
	UTransformProxy*                                   TransformProxy;                                             // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Class /Script/ModelingComponents.OctreeDynamicMeshComponent
/// Size: 0x0110 (0x0004C0 - 0x0005D0)
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x04C0   (0x0018)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x04D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF7];                                      // 0x04D9   (0x00F7)  MISSED
};

/// Class /Script/ModelingComponents.PlaneDistanceFromHitMechanic
/// Size: 0x0470 (0x000030 - 0x0004A0)
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x470];                                     // 0x0030   (0x0470)  MISSED
};

/// Class /Script/ModelingComponents.PointSetComponent
/// Size: 0x0060 (0x000480 - 0x0004E0)
class UPointSetComponent : public UMeshComponent
{ 
public:
	UMaterialInterface*                                PointMaterial;                                              // 0x0478   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0480   (0x001C)  
	bool                                               bBoundsDirty;                                               // 0x049C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x43];                                      // 0x049D   (0x0043)  MISSED
};

/// Class /Script/ModelingComponents.PreviewMesh
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPreviewMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0028   (0x0018)  MISSED
	bool                                               bBuildSpatialDataStructure;                                 // 0x0040   (0x0001)  
	bool                                               bDrawOnTop;                                                 // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0042   (0x000E)  MISSED
	USimpleDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0050   (0x0008)  
	unsigned char                                      UnknownData02_6[0x88];                                      // 0x0058   (0x0088)  MISSED
};

/// Class /Script/ModelingComponents.PolyEditPreviewMesh
/// Size: 0x03F0 (0x0000E0 - 0x0004D0)
class UPolyEditPreviewMesh : public UPreviewMesh
{ 
public:
	unsigned char                                      UnknownData00_1[0x3F0];                                     // 0x00E0   (0x03F0)  MISSED
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanicProperties
/// Size: 0x0008 (0x000060 - 0x000068)
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bSelectFaces;                                               // 0x0060   (0x0001)  
	bool                                               bSelectEdges;                                               // 0x0061   (0x0001)  
	bool                                               bSelectVertices;                                            // 0x0062   (0x0001)  
	bool                                               bSelectEdgeLoops;                                           // 0x0063   (0x0001)  
	bool                                               bSelectEdgeRings;                                           // 0x0064   (0x0001)  
	bool                                               bPreferProjectedElement;                                    // 0x0065   (0x0001)  
	bool                                               bSelectDownRay;                                             // 0x0066   (0x0001)  
	bool                                               bIgnoreOcclusion;                                           // 0x0067   (0x0001)  
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanic
/// Size: 0x0800 (0x000030 - 0x000830)
class UPolygonSelectionMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0030   (0x0020)  MISSED
	UPolygonSelectionMechanicProperties*               Properties;                                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4C8];                                     // 0x0058   (0x04C8)  MISSED
	APreviewGeometryActor*                             PreviewGeometryActor;                                       // 0x0520   (0x0008)  
	UTriangleSetComponent*                             DrawnTriangleSetComponent;                                  // 0x0528   (0x0008)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x0530   (0x0050)  MISSED
	UMaterialInterface*                                HighlightedFaceMaterial;                                    // 0x0580   (0x0008)  
	unsigned char                                      UnknownData03_6[0x2A8];                                     // 0x0588   (0x02A8)  MISSED
};

/// Class /Script/ModelingComponents.PreviewGeometryActor
/// Size: 0x0000 (0x000220 - 0x000220)
class APreviewGeometryActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/ModelingComponents.PreviewGeometry
/// Size: 0x0058 (0x000028 - 0x000080)
class UPreviewGeometry : public UObject
{ 
public:
	APreviewGeometryActor*                             ParentActor;                                                // 0x0028   (0x0008)  
	TMap<FString, ULineSetComponent*>                  LineSets;                                                   // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetVisibility
	bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible);                                                     // [0xc13bd0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetMaterial
	bool SetLineSetMaterial(FString LineSetIdentifier, UMaterialInterface* NewMaterial);                                     // [0xc13ae0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	void SetAllLineSetsMaterial(UMaterialInterface* Material);                                                               // [0xc13a50] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveLineSet
	bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy);                                                            // [0xc13960] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllLineSets
	void RemoveAllLineSets(bool bDestroy);                                                                                   // [0xc138d0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.GetActor
	APreviewGeometryActor* GetActor();                                                                                       // [0xc137d0] Final|Native|Public|Const 
	// Function /Script/ModelingComponents.PreviewGeometry.FindLineSet
	ULineSetComponent* FindLineSet(FString LineSetIdentifier);                                                               // [0xc13720] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.Disconnect
	void Disconnect();                                                                                                       // [0xc13700] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.CreateInWorld
	void CreateInWorld(UWorld* World, FTransform& WithTransform);                                                            // [0xc135e0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/ModelingComponents.PreviewGeometry.AddLineSet
	ULineSetComponent* AddLineSet(FString LineSetIdentifier);                                                                // [0xc13530] Final|Native|Public  
};

/// Class /Script/ModelingComponents.PreviewMeshActor
/// Size: 0x0000 (0x000220 - 0x000220)
class APreviewMeshActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/ModelingComponents.SimpleDynamicMeshComponent
/// Size: 0x0150 (0x0004C0 - 0x000610)
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	EDynamicMeshTangentCalcType                        TangentsType;                                               // 0x04C0   (0x0001)  
	bool                                               bInvalidateProxyOnChange;                                   // 0x04C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x36];                                      // 0x04C2   (0x0036)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x04F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x47];                                      // 0x04F9   (0x0047)  MISSED
	bool                                               bDrawOnTop;                                                 // 0x0540   (0x0001)  
	unsigned char                                      UnknownData02_6[0xCF];                                      // 0x0541   (0x00CF)  MISSED
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanicPropertySet
/// Size: 0x0010 (0x000060 - 0x000070)
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{ 
public:
	ESpaceCurveControlPointTransformMode               TransformMode;                                              // 0x0060   (0x0004)  
	ESpaceCurveControlPointOriginMode                  TransformOrigin;                                            // 0x0064   (0x0004)  
	float                                              Softness;                                                   // 0x0068   (0x0004)  
	ESpaceCurveControlPointFalloffType                 SoftFalloff;                                                // 0x006C   (0x0004)  
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanic
/// Size: 0x0280 (0x000030 - 0x0002B0)
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	USingleClickInputBehavior*                         ClickBehavior;                                              // 0x0040   (0x0008)  
	UMouseHoverBehavior*                               HoverBehavior;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0050   (0x0018)  MISSED
	USpaceCurveDeformationMechanicPropertySet*         TransformProperties;                                        // 0x0068   (0x0008)  
	unsigned char                                      UnknownData02_5[0xF8];                                      // 0x0070   (0x00F8)  MISSED
	APreviewGeometryActor*                             PreviewGeometryActor;                                       // 0x0168   (0x0008)  
	UPointSetComponent*                                RenderPoints;                                               // 0x0170   (0x0008)  
	ULineSetComponent*                                 RenderSegments;                                             // 0x0178   (0x0008)  
	unsigned char                                      UnknownData03_5[0x38];                                      // 0x0180   (0x0038)  MISSED
	UTransformProxy*                                   PointTransformProxy;                                        // 0x01B8   (0x0008)  
	UTransformGizmo*                                   PointTransformGizmo;                                        // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData04_6[0xE8];                                      // 0x01C8   (0x00E8)  MISSED
};

/// Class /Script/ModelingComponents.SpatialCurveDistanceMechanic
/// Size: 0x03C0 (0x000030 - 0x0003F0)
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x3C0];                                     // 0x0030   (0x03C0)  MISSED
};

/// Class /Script/ModelingComponents.TriangleSetComponent
/// Size: 0x00E0 (0x000480 - 0x000560)
class UTriangleSetComponent : public UMeshComponent
{ 
public:
	FBoxSphereBounds                                   Bounds;                                                     // 0x0478   (0x001C)  
	bool                                               bBoundsDirty;                                               // 0x0494   (0x0001)  
	unsigned char                                      UnknownData00_6[0xCB];                                      // 0x0495   (0x00CB)  MISSED
};

/// Class /Script/ModelingComponents.UVLayoutPreviewProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bVisible;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              ScaleFactor;                                                // 0x0064   (0x0004)  
	EUVLayoutPreviewSide                               WhichSide;                                                  // 0x0068   (0x0004)  
	bool                                               bShowWireframe;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	FVector2D                                          Shift;                                                      // 0x0070   (0x0008)  
};

/// Class /Script/ModelingComponents.UVLayoutPreview
/// Size: 0x0118 (0x000028 - 0x000140)
class UUVLayoutPreview : public UObject
{ 
public:
	UUVLayoutPreviewProperties*                        Settings;                                                   // 0x0028   (0x0008)  
	UPreviewMesh*                                      PreviewMesh;                                                // 0x0030   (0x0008)  
	UTriangleSetComponent*                             TriangleComponent;                                          // 0x0038   (0x0008)  
	bool                                               bShowBackingRectangle;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	UMaterialInterface*                                BackingRectangleMaterial;                                   // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0xF0];                                      // 0x0050   (0x00F0)  MISSED
};

/// Class /Script/ModelingComponents.VoxelProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UVoxelProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            VoxelCount;                                                 // 0x0060   (0x0004)  
	bool                                               bAutoSimplify;                                              // 0x0064   (0x0001)  
	bool                                               bRemoveInternalSurfaces;                                    // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0066   (0x0002)  MISSED
	double                                             SimplifyMaxErrorFactor;                                     // 0x0068   (0x0008)  
	double                                             CubeRootMinComponentVolume;                                 // 0x0070   (0x0008)  
};

/// Class /Script/ModelingComponents.WeightMapSetProperties
/// Size: 0x0020 (0x000060 - 0x000080)
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{ 
public:
	FName                                              WeightMap;                                                  // 0x0060   (0x0008)  
	TArray<FString>                                    WeightMapsList;                                             // 0x0068   (0x0010)  
	bool                                               bInvertWeightMap;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
	TArray<FString> GetWeightMapsFunc();                                                                                     // [0xc137f0] Final|Native|Public  
};

/// Struct /Script/ModelingComponents.RenderableTriangle
/// Size: 0x0078 (0x000000 - 0x000078)
struct FRenderableTriangle
{ 
	UMaterialInterface*                                Material;                                                   // 0x0000   (0x0008)  
	FRenderableTriangleVertex                          Vertex0;                                                    // 0x0008   (0x0024)  
	FRenderableTriangleVertex                          Vertex1;                                                    // 0x002C   (0x0024)  
	FRenderableTriangleVertex                          Vertex2;                                                    // 0x0050   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ModelingComponents.RenderableTriangleVertex
/// Size: 0x0024 (0x000000 - 0x000024)
struct FRenderableTriangleVertex
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	FVector2D                                          UV;                                                         // 0x000C   (0x0008)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
	FColor                                             Color;                                                      // 0x0020   (0x0004)  
};

/// Enum /Script/ModelingComponents.EBaseCreateFromSelectedTargetType
/// Size: 0x04
enum EBaseCreateFromSelectedTargetType : uint8_t
{
	EBaseCreateFromSelectedTargetType__NewAsset                                      = 0,
	EBaseCreateFromSelectedTargetType__FirstInputAsset                               = 1,
	EBaseCreateFromSelectedTargetType__LastInputAsset                                = 2,
	EBaseCreateFromSelectedTargetType__EBaseCreateFromSelectedTargetType_MAX         = 3
};

/// Enum /Script/ModelingComponents.EDynamicMeshTangentCalcType
/// Size: 0x04
enum EDynamicMeshTangentCalcType : uint8_t
{
	EDynamicMeshTangentCalcType__NoTangents                                          = 0,
	EDynamicMeshTangentCalcType__AutoCalculated                                      = 1,
	EDynamicMeshTangentCalcType__ExternallyCalculated                                = 2,
	EDynamicMeshTangentCalcType__EDynamicMeshTangentCalcType_MAX                     = 3
};

/// Enum /Script/ModelingComponents.EMultiTransformerMode
/// Size: 0x03
enum EMultiTransformerMode : uint8_t
{
	EMultiTransformerMode__DefaultGizmo                                              = 1,
	EMultiTransformerMode__QuickAxisTranslation                                      = 2,
	EMultiTransformerMode__EMultiTransformerMode_MAX                                 = 3
};

/// Enum /Script/ModelingComponents.EHandleSourcesMethod
/// Size: 0x04
enum EHandleSourcesMethod : uint8_t
{
	EHandleSourcesMethod__DeleteSources                                              = 0,
	EHandleSourcesMethod__HideSources                                                = 1,
	EHandleSourcesMethod__KeepSources                                                = 2,
	EHandleSourcesMethod__EHandleSourcesMethod_MAX                                   = 3
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointFalloffType
/// Size: 0x03
enum ESpaceCurveControlPointFalloffType : uint8_t
{
	ESpaceCurveControlPointFalloffType__Linear                                       = 0,
	ESpaceCurveControlPointFalloffType__Smooth                                       = 1,
	ESpaceCurveControlPointFalloffType__ESpaceCurveControlPointFalloffType_MAX       = 2
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointOriginMode
/// Size: 0x04
enum ESpaceCurveControlPointOriginMode : uint8_t
{
	ESpaceCurveControlPointOriginMode__Shared                                        = 0,
	ESpaceCurveControlPointOriginMode__First                                         = 1,
	ESpaceCurveControlPointOriginMode__Last                                          = 2,
	ESpaceCurveControlPointOriginMode__ESpaceCurveControlPointOriginMode_MAX         = 3
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointTransformMode
/// Size: 0x03
enum ESpaceCurveControlPointTransformMode : uint8_t
{
	ESpaceCurveControlPointTransformMode__Shared                                     = 0,
	ESpaceCurveControlPointTransformMode__PerVertex                                  = 1,
	ESpaceCurveControlPointTransformMode__ESpaceCurveControlPointTransformMode_MAX   = 2
};

/// Enum /Script/ModelingComponents.EUVLayoutPreviewSide
/// Size: 0x03
enum EUVLayoutPreviewSide : uint8_t
{
	EUVLayoutPreviewSide__Left                                                       = 0,
	EUVLayoutPreviewSide__Right                                                      = 1,
	EUVLayoutPreviewSide__EUVLayoutPreviewSide_MAX                                   = 2
};

