#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductConceptContext.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepRepr_Representation.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepRepr_Representation.hxx>

// module includes
#include <StepRepr_Tangent.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_Array1OfPropertyDefinitionRepresentation.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <StepRepr_ProductDefinitionUsage.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_Array1OfRepresentationItem.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepRepr_ConstructiveGeometryRepresentationRelationship.hxx>
#include <StepRepr_CentreOfSymmetry.hxx>
#include <StepRepr_CompShAspAndDatumFeatAndShAsp.hxx>
#include <StepRepr_IntegerRepresentationItem.hxx>
#include <StepRepr_CharacterizedDefinition.hxx>
#include <StepRepr_StructuralResponseProperty.hxx>
#include <StepRepr_ReprItemAndMeasureWithUnit.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepRepr_DerivedShapeAspect.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepRepr_HArray1OfShapeAspect.hxx>
#include <StepRepr_RepresentedDefinition.hxx>
#include <StepRepr_ConstructiveGeometryRepresentation.hxx>
#include <StepRepr_HSequenceOfMaterialPropertyRepresentation.hxx>
#include <StepRepr_Transformation.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <StepRepr_ConfigurationDesignItem.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_Extension.hxx>
#include <StepRepr_HArray1OfPropertyDefinitionRepresentation.hxx>
#include <StepRepr_SequenceOfRepresentationItem.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_MaterialProperty.hxx>
#include <StepRepr_Array1OfShapeAspect.hxx>
#include <StepRepr_PromissoryUsageOccurrence.hxx>
#include <StepRepr_ShapeDefinition.hxx>
#include <StepRepr_FeatureForDatumTargetRelationship.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepRepr_ReprItemAndMeasureWithUnitAndQRI.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <StepRepr_HSequenceOfRepresentationItem.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <StepRepr_ContinuosShapeAspect.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepRepr_ValueRange.hxx>
#include <StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx>
#include <StepRepr_GeometricAlignment.hxx>
#include <StepRepr_ShapeAspectDerivingRelationship.hxx>
#include <StepRepr_ShapeAspectTransition.hxx>
#include <StepRepr_ParallelOffset.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepRepr_SequenceOfMaterialPropertyRepresentation.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepRepr_CompositeShapeAspect.hxx>
#include <StepRepr_PerpendicularTo.hxx>
#include <StepRepr_HArray1OfRepresentationItem.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <StepRepr_CompositeGroupShapeAspect.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepRepr_HArray1OfMaterialPropertyRepresentation.hxx>
#include <StepRepr_AllAroundShapeAspect.hxx>
#include <StepRepr_CharacterizedRepresentation.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#include <StepRepr_Array1OfMaterialPropertyRepresentation.hxx>
#include <StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepRepr_QuantifiedAssemblyComponentUsage.hxx>
#include <StepRepr_Apex.hxx>
#include <StepRepr_SpecifiedHigherUsageOccurrence.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepRepr_SuppliedPartRelationship.hxx>
#include <StepRepr_BetweenShapeAspect.hxx>
#include <StepRepr_ValueRepresentationItem.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepRepr_MaterialPropertyRepresentation.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StepRepr_Tangent.hxx
// ./opencascade/StepRepr_ParametricRepresentationContext.hxx
// ./opencascade/StepRepr_RepresentationRelationshipWithTransformation.hxx
// ./opencascade/StepRepr_Array1OfPropertyDefinitionRepresentation.hxx
// ./opencascade/StepRepr_PropertyDefinition.hxx
// ./opencascade/StepRepr_GlobalUnitAssignedContext.hxx
// ./opencascade/StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/StepRepr_ProductDefinitionUsage.hxx
// ./opencascade/StepRepr_Representation.hxx
// ./opencascade/StepRepr_Array1OfRepresentationItem.hxx
// ./opencascade/StepRepr_ExternallyDefinedRepresentation.hxx
// ./opencascade/StepRepr_ConstructiveGeometryRepresentationRelationship.hxx
// ./opencascade/StepRepr_CentreOfSymmetry.hxx
// ./opencascade/StepRepr_CompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/StepRepr_IntegerRepresentationItem.hxx
// ./opencascade/StepRepr_CharacterizedDefinition.hxx
// ./opencascade/StepRepr_StructuralResponseProperty.hxx
// ./opencascade/StepRepr_ReprItemAndMeasureWithUnit.hxx
// ./opencascade/StepRepr_MaterialDesignation.hxx
// ./opencascade/StepRepr_DerivedShapeAspect.hxx
// ./opencascade/StepRepr_CompoundRepresentationItem.hxx
// ./opencascade/StepRepr_ShapeRepresentationRelationship.hxx
// ./opencascade/StepRepr_ShapeAspect.hxx
// ./opencascade/StepRepr_MeasureRepresentationItem.hxx
// ./opencascade/StepRepr_HArray1OfShapeAspect.hxx
// ./opencascade/StepRepr_RepresentedDefinition.hxx
// ./opencascade/StepRepr_ConstructiveGeometryRepresentation.hxx
// ./opencascade/StepRepr_HSequenceOfMaterialPropertyRepresentation.hxx
// ./opencascade/StepRepr_Transformation.hxx
// ./opencascade/StepRepr_PropertyDefinitionRelationship.hxx
// ./opencascade/StepRepr_RepresentationMap.hxx
// ./opencascade/StepRepr_ConfigurationDesignItem.hxx
// ./opencascade/StepRepr_ItemDefinedTransformation.hxx
// ./opencascade/StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx
// ./opencascade/StepRepr_RepresentationItem.hxx
// ./opencascade/StepRepr_Extension.hxx
// ./opencascade/StepRepr_HArray1OfPropertyDefinitionRepresentation.hxx
// ./opencascade/StepRepr_SequenceOfRepresentationItem.hxx
// ./opencascade/StepRepr_MappedItem.hxx
// ./opencascade/StepRepr_MaterialProperty.hxx
// ./opencascade/StepRepr_Array1OfShapeAspect.hxx
// ./opencascade/StepRepr_PromissoryUsageOccurrence.hxx
// ./opencascade/StepRepr_ShapeDefinition.hxx
// ./opencascade/StepRepr_FeatureForDatumTargetRelationship.hxx
// ./opencascade/StepRepr_ProductConcept.hxx
// ./opencascade/StepRepr_ReprItemAndMeasureWithUnitAndQRI.hxx
// ./opencascade/StepRepr_ShapeAspectRelationship.hxx
// ./opencascade/StepRepr_AssemblyComponentUsageSubstitute.hxx
// ./opencascade/StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx
// ./opencascade/StepRepr_HSequenceOfRepresentationItem.hxx
// ./opencascade/StepRepr_FunctionallyDefinedTransformation.hxx
// ./opencascade/StepRepr_ContinuosShapeAspect.hxx
// ./opencascade/StepRepr_ConfigurationItem.hxx
// ./opencascade/StepRepr_ValueRange.hxx
// ./opencascade/StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx
// ./opencascade/StepRepr_GeometricAlignment.hxx
// ./opencascade/StepRepr_ShapeAspectDerivingRelationship.hxx
// ./opencascade/StepRepr_ShapeAspectTransition.hxx
// ./opencascade/StepRepr_ParallelOffset.hxx
// ./opencascade/StepRepr_DataEnvironment.hxx
// ./opencascade/StepRepr_ProductDefinitionShape.hxx
// ./opencascade/StepRepr_RepresentationRelationship.hxx
// ./opencascade/StepRepr_SequenceOfMaterialPropertyRepresentation.hxx
// ./opencascade/StepRepr_DescriptiveRepresentationItem.hxx
// ./opencascade/StepRepr_NextAssemblyUsageOccurrence.hxx
// ./opencascade/StepRepr_RepresentationContext.hxx
// ./opencascade/StepRepr_CompositeShapeAspect.hxx
// ./opencascade/StepRepr_PerpendicularTo.hxx
// ./opencascade/StepRepr_HArray1OfRepresentationItem.hxx
// ./opencascade/StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx
// ./opencascade/StepRepr_CompositeGroupShapeAspect.hxx
// ./opencascade/StepRepr_ConfigurationEffectivity.hxx
// ./opencascade/StepRepr_AssemblyComponentUsage.hxx
// ./opencascade/StepRepr_HArray1OfMaterialPropertyRepresentation.hxx
// ./opencascade/StepRepr_AllAroundShapeAspect.hxx
// ./opencascade/StepRepr_CharacterizedRepresentation.hxx
// ./opencascade/StepRepr_ConfigurationDesign.hxx
// ./opencascade/StepRepr_ReprItemAndLengthMeasureWithUnit.hxx
// ./opencascade/StepRepr_Array1OfMaterialPropertyRepresentation.hxx
// ./opencascade/StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx
// ./opencascade/StepRepr_DefinitionalRepresentation.hxx
// ./opencascade/StepRepr_PropertyDefinitionRepresentation.hxx
// ./opencascade/StepRepr_QuantifiedAssemblyComponentUsage.hxx
// ./opencascade/StepRepr_Apex.hxx
// ./opencascade/StepRepr_SpecifiedHigherUsageOccurrence.hxx
// ./opencascade/StepRepr_GlobalUncertaintyAssignedContext.hxx
// ./opencascade/StepRepr_SuppliedPartRelationship.hxx
// ./opencascade/StepRepr_BetweenShapeAspect.hxx
// ./opencascade/StepRepr_ValueRepresentationItem.hxx
// ./opencascade/StepRepr_MakeFromUsageOption.hxx
// ./opencascade/StepRepr_MaterialPropertyRepresentation.hxx

// user-defined post
