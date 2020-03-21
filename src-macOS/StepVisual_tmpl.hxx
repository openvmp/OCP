#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepVisual_SurfaceSideStyle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_NullStyleMember.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepVisual_AnnotationTextOccurrence.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <StepGeom_Plane.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <StepGeom_Plane.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_PreDefinedTextFont.hxx>
#include <StepVisual_ExternallyDefinedTextFont.hxx>
#include <MeshVS_TwoColors.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_AnnotationText.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepVisual_StyledItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepData_SelectMember.hxx>
#include <StepVisual_MarkerMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_PresentedItem.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_Colour.hxx>
#include <TCollection_HAsciiString.hxx>

// module includes
#include <StepVisual_Array1OfDirectionCountSelect.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_HArray1OfFillStyleSelect.hxx>
#include <StepVisual_HArray1OfInvisibleItem.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationArea.hxx>
#include <StepVisual_PresentationStyleSelect.hxx>
#include <StepVisual_CompositeTextWithExtent.hxx>
#include <StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#include <StepVisual_FillStyleSelect.hxx>
#include <StepVisual_StyleContextSelect.hxx>
#include <StepVisual_AnnotationPlane.hxx>
#include <StepVisual_SurfaceSide.hxx>
#include <StepVisual_PresentationSize.hxx>
#include <StepVisual_ColourSpecification.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <StepVisual_TemplateInstance.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx>
#include <StepVisual_TextStyle.hxx>
#include <StepVisual_DraughtingCalloutElement.hxx>
#include <StepVisual_Array1OfTextOrCharacter.hxx>
#include <StepVisual_AnnotationText.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <StepVisual_ExternallyDefinedTextFont.hxx>
#include <StepVisual_PresentationLayerUsage.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <StepVisual_InvisibilityContext.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepVisual_CameraImage2dWithScale.hxx>
#include <StepVisual_Array1OfDraughtingCalloutElement.hxx>
#include <StepVisual_CurveStyleFontPattern.hxx>
#include <StepVisual_CameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_SurfaceSideStyle.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepVisual_CameraUsage.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_Array1OfFillStyleSelect.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <StepVisual_PresentationStyleByContext.hxx>
#include <StepVisual_PresentationSizeAssignmentSelect.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect.hxx>
#include <StepVisual_DirectionCountSelect.hxx>
#include <StepVisual_PreDefinedColour.hxx>
#include <StepVisual_DraughtingPreDefinedColour.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnionSelect.hxx>
#include <StepVisual_AreaOrView.hxx>
#include <StepVisual_Array1OfAnnotationPlaneElement.hxx>
#include <StepVisual_CameraModelD3MultiClipping.hxx>
#include <StepVisual_Array1OfBoxCharacteristicSelect.hxx>
#include <StepVisual_HArray1OfDirectionCountSelect.hxx>
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepVisual_ContextDependentOverRidingStyledItem.hxx>
#include <StepVisual_CameraModelD3.hxx>
#include <StepVisual_NullStyle.hxx>
#include <StepVisual_TextPath.hxx>
#include <StepVisual_InvisibleItem.hxx>
#include <StepVisual_Array1OfInvisibleItem.hxx>
#include <StepVisual_HArray1OfDraughtingCalloutElement.hxx>
#include <StepVisual_BoxCharacteristicSelect.hxx>
#include <StepVisual_LayeredItem.hxx>
#include <StepVisual_Array1OfStyleContextSelect.hxx>
#include <StepVisual_Array1OfCurveStyleFontPattern.hxx>
#include <StepVisual_ContextDependentInvisibility.hxx>
#include <StepVisual_NullStyleMember.hxx>
#include <StepVisual_FontSelect.hxx>
#include <StepVisual_CameraImage.hxx>
#include <StepVisual_TessellatedCurveSet.hxx>
#include <StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx>
#include <StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_SurfaceStyleSilhouette.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepVisual_CameraModel.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <StepVisual_CurveStyleFontSelect.hxx>
#include <StepVisual_CameraImage3dWithScale.hxx>
#include <StepVisual_PresentationRepresentationSelect.hxx>
#include <StepVisual_OverRidingStyledItem.hxx>
#include <StepVisual_DraughtingPreDefinedCurveFont.hxx>
#include <StepVisual_TextOrCharacter.hxx>
#include <StepVisual_HArray1OfTextOrCharacter.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepVisual_Invisibility.hxx>
#include <StepVisual_PreDefinedTextFont.hxx>
#include <StepVisual_BackgroundColour.hxx>
#include <StepVisual_AnnotationOccurrence.hxx>
#include <StepVisual_SurfaceStyleControlGrid.hxx>
#include <StepVisual_AnnotationPlaneElement.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <StepVisual_ColourRgb.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepVisual_MarkerSelect.hxx>
#include <StepVisual_AnnotationTextOccurrence.hxx>
#include <StepVisual_CentralOrParallel.hxx>
#include <StepVisual_HArray1OfBoxCharacteristicSelect.hxx>
#include <StepVisual_PresentedItem.hxx>
#include <StepVisual_HArray1OfPresentationStyleSelect.hxx>
#include <StepVisual_MarkerType.hxx>
#include <StepVisual_HArray1OfLayeredItem.hxx>
#include <StepVisual_HArray1OfSurfaceStyleElementSelect.hxx>
#include <StepVisual_AnnotationFillArea.hxx>
#include <StepVisual_TessellatedItem.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect.hxx>
#include <StepVisual_DraughtingAnnotationOccurrence.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <StepVisual_SurfaceStyleElementSelect.hxx>
#include <StepVisual_Array1OfSurfaceStyleElementSelect.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_TextStyleWithBoxCharacteristics.hxx>
#include <StepVisual_Colour.hxx>
#include <StepVisual_HArray1OfAnnotationPlaneElement.hxx>
#include <StepVisual_PresentedItemRepresentation.hxx>
#include <StepVisual_CameraModelD2.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepVisual_MarkerMember.hxx>
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepVisual_Template.hxx>
#include <StepVisual_Array1OfLayeredItem.hxx>
#include <StepVisual_StyledItemTarget.hxx>
#include <StepVisual_HArray1OfCurveStyleFontPattern.hxx>
#include <StepVisual_SurfaceStyleSegmentationCurve.hxx>
#include <StepVisual_HArray1OfStyleContextSelect.hxx>
#include <StepVisual_Array1OfPresentationStyleSelect.hxx>
#include <StepVisual_TessellatedGeometricSet.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_Array1OfPresentationStyleAssignment.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <StepVisual_PresentationArea.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StepVisual_Array1OfDirectionCountSelect.hxx
// ./opencascade/StepVisual_SurfaceStyleUsage.hxx
// ./opencascade/StepVisual_DraughtingCallout.hxx
// ./opencascade/StepVisual_PresentationLayerAssignment.hxx
// ./opencascade/StepVisual_HArray1OfFillStyleSelect.hxx
// ./opencascade/StepVisual_HArray1OfInvisibleItem.hxx
// ./opencascade/StepVisual_MechanicalDesignGeometricPresentationArea.hxx
// ./opencascade/StepVisual_PresentationStyleSelect.hxx
// ./opencascade/StepVisual_CompositeTextWithExtent.hxx
// ./opencascade/StepVisual_HArray1OfPresentationStyleAssignment.hxx
// ./opencascade/StepVisual_FillStyleSelect.hxx
// ./opencascade/StepVisual_StyleContextSelect.hxx
// ./opencascade/StepVisual_AnnotationPlane.hxx
// ./opencascade/StepVisual_SurfaceSide.hxx
// ./opencascade/StepVisual_PresentationSize.hxx
// ./opencascade/StepVisual_ColourSpecification.hxx
// ./opencascade/StepVisual_ViewVolume.hxx
// ./opencascade/StepVisual_TemplateInstance.hxx
// ./opencascade/StepVisual_CurveStyleFont.hxx
// ./opencascade/StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx
// ./opencascade/StepVisual_TextStyle.hxx
// ./opencascade/StepVisual_DraughtingCalloutElement.hxx
// ./opencascade/StepVisual_Array1OfTextOrCharacter.hxx
// ./opencascade/StepVisual_AnnotationText.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClippingUnion.hxx
// ./opencascade/StepVisual_ExternallyDefinedTextFont.hxx
// ./opencascade/StepVisual_PresentationLayerUsage.hxx
// ./opencascade/StepVisual_SurfaceStyleParameterLine.hxx
// ./opencascade/StepVisual_InvisibilityContext.hxx
// ./opencascade/StepVisual_AnnotationFillAreaOccurrence.hxx
// ./opencascade/StepVisual_FillAreaStyleColour.hxx
// ./opencascade/StepVisual_CameraImage2dWithScale.hxx
// ./opencascade/StepVisual_Array1OfDraughtingCalloutElement.hxx
// ./opencascade/StepVisual_CurveStyleFontPattern.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClippingInterectionSelect.hxx
// ./opencascade/StepVisual_SurfaceSideStyle.hxx
// ./opencascade/StepVisual_PresentationSet.hxx
// ./opencascade/StepVisual_CameraUsage.hxx
// ./opencascade/StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx
// ./opencascade/StepVisual_Array1OfFillStyleSelect.hxx
// ./opencascade/StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx
// ./opencascade/StepVisual_DraughtingModel.hxx
// ./opencascade/StepVisual_TextLiteral.hxx
// ./opencascade/StepVisual_PresentationStyleByContext.hxx
// ./opencascade/StepVisual_PresentationSizeAssignmentSelect.hxx
// ./opencascade/StepVisual_PlanarExtent.hxx
// ./opencascade/StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect.hxx
// ./opencascade/StepVisual_DirectionCountSelect.hxx
// ./opencascade/StepVisual_PreDefinedColour.hxx
// ./opencascade/StepVisual_DraughtingPreDefinedColour.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClippingUnionSelect.hxx
// ./opencascade/StepVisual_AreaOrView.hxx
// ./opencascade/StepVisual_Array1OfAnnotationPlaneElement.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClipping.hxx
// ./opencascade/StepVisual_Array1OfBoxCharacteristicSelect.hxx
// ./opencascade/StepVisual_HArray1OfDirectionCountSelect.hxx
// ./opencascade/StepVisual_AnnotationCurveOccurrence.hxx
// ./opencascade/StepVisual_ContextDependentOverRidingStyledItem.hxx
// ./opencascade/StepVisual_CameraModelD3.hxx
// ./opencascade/StepVisual_NullStyle.hxx
// ./opencascade/StepVisual_TextPath.hxx
// ./opencascade/StepVisual_InvisibleItem.hxx
// ./opencascade/StepVisual_Array1OfInvisibleItem.hxx
// ./opencascade/StepVisual_HArray1OfDraughtingCalloutElement.hxx
// ./opencascade/StepVisual_BoxCharacteristicSelect.hxx
// ./opencascade/StepVisual_LayeredItem.hxx
// ./opencascade/StepVisual_Array1OfStyleContextSelect.hxx
// ./opencascade/StepVisual_Array1OfCurveStyleFontPattern.hxx
// ./opencascade/StepVisual_ContextDependentInvisibility.hxx
// ./opencascade/StepVisual_NullStyleMember.hxx
// ./opencascade/StepVisual_FontSelect.hxx
// ./opencascade/StepVisual_CameraImage.hxx
// ./opencascade/StepVisual_TessellatedCurveSet.hxx
// ./opencascade/StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx
// ./opencascade/StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect.hxx
// ./opencascade/StepVisual_SurfaceStyleSilhouette.hxx
// ./opencascade/StepVisual_SurfaceStyleFillArea.hxx
// ./opencascade/StepVisual_CameraModel.hxx
// ./opencascade/StepVisual_PreDefinedItem.hxx
// ./opencascade/StepVisual_CurveStyleFontSelect.hxx
// ./opencascade/StepVisual_CameraImage3dWithScale.hxx
// ./opencascade/StepVisual_PresentationRepresentationSelect.hxx
// ./opencascade/StepVisual_OverRidingStyledItem.hxx
// ./opencascade/StepVisual_DraughtingPreDefinedCurveFont.hxx
// ./opencascade/StepVisual_TextOrCharacter.hxx
// ./opencascade/StepVisual_HArray1OfTextOrCharacter.hxx
// ./opencascade/StepVisual_PointStyle.hxx
// ./opencascade/StepVisual_CoordinatesList.hxx
// ./opencascade/StepVisual_Invisibility.hxx
// ./opencascade/StepVisual_PreDefinedTextFont.hxx
// ./opencascade/StepVisual_BackgroundColour.hxx
// ./opencascade/StepVisual_AnnotationOccurrence.hxx
// ./opencascade/StepVisual_SurfaceStyleControlGrid.hxx
// ./opencascade/StepVisual_AnnotationPlaneElement.hxx
// ./opencascade/StepVisual_TessellatedAnnotationOccurrence.hxx
// ./opencascade/StepVisual_FillAreaStyle.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClippingIntersection.hxx
// ./opencascade/StepVisual_ColourRgb.hxx
// ./opencascade/StepVisual_SurfaceStyleBoundary.hxx
// ./opencascade/StepVisual_MarkerSelect.hxx
// ./opencascade/StepVisual_AnnotationTextOccurrence.hxx
// ./opencascade/StepVisual_CentralOrParallel.hxx
// ./opencascade/StepVisual_HArray1OfBoxCharacteristicSelect.hxx
// ./opencascade/StepVisual_PresentedItem.hxx
// ./opencascade/StepVisual_HArray1OfPresentationStyleSelect.hxx
// ./opencascade/StepVisual_MarkerType.hxx
// ./opencascade/StepVisual_HArray1OfLayeredItem.hxx
// ./opencascade/StepVisual_HArray1OfSurfaceStyleElementSelect.hxx
// ./opencascade/StepVisual_AnnotationFillArea.hxx
// ./opencascade/StepVisual_TessellatedItem.hxx
// ./opencascade/StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect.hxx
// ./opencascade/StepVisual_DraughtingAnnotationOccurrence.hxx
// ./opencascade/StepVisual_StyledItem.hxx
// ./opencascade/StepVisual_PresentationStyleAssignment.hxx
// ./opencascade/StepVisual_AreaInSet.hxx
// ./opencascade/StepVisual_SurfaceStyleElementSelect.hxx
// ./opencascade/StepVisual_Array1OfSurfaceStyleElementSelect.hxx
// ./opencascade/StepVisual_PreDefinedCurveFont.hxx
// ./opencascade/StepVisual_CurveStyle.hxx
// ./opencascade/StepVisual_TextStyleWithBoxCharacteristics.hxx
// ./opencascade/StepVisual_Colour.hxx
// ./opencascade/StepVisual_HArray1OfAnnotationPlaneElement.hxx
// ./opencascade/StepVisual_PresentedItemRepresentation.hxx
// ./opencascade/StepVisual_CameraModelD2.hxx
// ./opencascade/StepVisual_PresentationRepresentation.hxx
// ./opencascade/StepVisual_CompositeText.hxx
// ./opencascade/StepVisual_MarkerMember.hxx
// ./opencascade/StepVisual_ExternallyDefinedCurveFont.hxx
// ./opencascade/StepVisual_PresentationView.hxx
// ./opencascade/StepVisual_Template.hxx
// ./opencascade/StepVisual_Array1OfLayeredItem.hxx
// ./opencascade/StepVisual_StyledItemTarget.hxx
// ./opencascade/StepVisual_HArray1OfCurveStyleFontPattern.hxx
// ./opencascade/StepVisual_SurfaceStyleSegmentationCurve.hxx
// ./opencascade/StepVisual_HArray1OfStyleContextSelect.hxx
// ./opencascade/StepVisual_Array1OfPresentationStyleSelect.hxx
// ./opencascade/StepVisual_TessellatedGeometricSet.hxx
// ./opencascade/StepVisual_TextStyleForDefinedFont.hxx
// ./opencascade/StepVisual_Array1OfPresentationStyleAssignment.hxx
// ./opencascade/StepVisual_PlanarBox.hxx
// ./opencascade/StepVisual_PresentationArea.hxx

// user-defined post
