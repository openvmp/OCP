#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TDF_IDFilter.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TDF_Transaction.hxx>
#include <TDF_Delta.hxx>
#include <TDF_Data.hxx>
#include <Standard_NullObject.hxx>
#include <TDF_Delta.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_ClosureMode.hxx>
#include <Standard_NullObject.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_LabelMapHasher.hxx>
#include <Standard_GUID.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_Data.hxx>
#include <TDF_Label.hxx>
#include <TDF_Data.hxx>
#include <TDF_Label.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_DeltaOnForget.hxx>
#include <Standard_GUID.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_DeltaOnAddition.hxx>
#include <TDF_DeltaOnResume.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_Attribute.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_IDFilter.hxx>
#include <Standard_GUID.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDF_Data.hxx>
#include <TDF_Label.hxx>
#include <TDF_Attribute.hxx>
#include <TDF_TagSource.hxx>
#include <TDF_Reference.hxx>
#include <TDF_ClosureMode.hxx>
#include <TDF_ClosureTool.hxx>
#include <TDF_CopyTool.hxx>
#include <TDF_CopyLabel.hxx>
#include <TDF_ComparisonTool.hxx>
#include <TDF_Transaction.hxx>
#include <TDF_Delta.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_DeltaOnAddition.hxx>
#include <TDF_DeltaOnForget.hxx>
#include <TDF_DeltaOnResume.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_DefaultDeltaOnRemoval.hxx>
#include <TDF_DefaultDeltaOnModification.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_ChildIDIterator.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Tool.hxx>
#include <TDF_LabelMapHasher.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>

// module includes
#include <TDF_DeltaOnAddition.hxx>
#include <TDF_Tool.hxx>
#include <TDF_LabelDoubleMap.hxx>
#include <TDF_Reference.hxx>
#include <TDF_DeltaList.hxx>
#include <TDF_TagSource.hxx>
#include <TDF_Delta.hxx>
#include <TDF_DeltaOnResume.hxx>
#include <TDF_Data.hxx>
#include <TDF_ClosureMode.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_LabelSequence.hxx>
#include <TDF_Transaction.hxx>
#include <TDF_ListIteratorOfAttributeList.hxx>
#include <TDF_AttributeList.hxx>
#include <TDF_AttributeArray1.hxx>
#include <TDF_DeltaOnForget.hxx>
#include <TDF_DataMapIteratorOfLabelIntegerMap.hxx>
#include <TDF_ListIteratorOfIDList.hxx>
#include <TDF_DefaultDeltaOnRemoval.hxx>
#include <TDF_ClosureTool.hxx>
#include <TDF_Label.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_LabelNode.hxx>
#include <TDF_DataMapIteratorOfAttributeDataMap.hxx>
#include <TDF_LabelMapHasher.hxx>
#include <TDF_IDList.hxx>
#include <TDF_LabelList.hxx>
#include <TDF_Attribute.hxx>
#include <TDF_DataMapIteratorOfLabelDataMap.hxx>
#include <TDF_DoubleMapIteratorOfLabelDoubleMap.hxx>
#include <TDF_MapIteratorOfLabelMap.hxx>
#include <TDF_AttributeDoubleMap.hxx>
#include <TDF_LabelDataMap.hxx>
#include <TDF_GUIDProgIDMap.hxx>
#include <TDF_AttributeIndexedMap.hxx>
#include <TDF_ChildIDIterator.hxx>
#include <TDF_DefaultDeltaOnModification.hxx>
#include <TDF_AttributeSequence.hxx>
#include <TDF_CopyTool.hxx>
#include <TDF_ListIteratorOfAttributeDeltaList.hxx>
#include <TDF_IDMap.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_LabelIndexedMap.hxx>
#include <TDF_HAllocator.hxx>
#include <TDF.hxx>
#include <TDF_ComparisonTool.hxx>
#include <TDF_AttributeDeltaList.hxx>
#include <TDF_MapIteratorOfIDMap.hxx>
#include <TDF_AttributeDataMap.hxx>
#include <TDF_LabelIntegerMap.hxx>
#include <TDF_LabelNodePtr.hxx>
#include <TDF_MapIteratorOfAttributeMap.hxx>
#include <TDF_DoubleMapIteratorOfGUIDProgIDMap.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_ListIteratorOfDeltaList.hxx>
#include <TDF_HAttributeArray1.hxx>
#include <TDF_LabelMap.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_DoubleMapIteratorOfAttributeDoubleMap.hxx>
#include <TDF_ListIteratorOfLabelList.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_AttributeMap.hxx>
#include <TDF_CopyLabel.hxx>
#include <TDF_DataSet.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TDF_DeltaOnAddition.hxx
// ./opencascade/TDF_Tool.hxx
// ./opencascade/TDF_LabelDoubleMap.hxx
// ./opencascade/TDF_Reference.hxx
// ./opencascade/TDF_DeltaList.hxx
// ./opencascade/TDF_TagSource.hxx
// ./opencascade/TDF_Delta.hxx
// ./opencascade/TDF_DeltaOnResume.hxx
// ./opencascade/TDF_Data.hxx
// ./opencascade/TDF_ClosureMode.hxx
// ./opencascade/TDF_DeltaOnRemoval.hxx
// ./opencascade/TDF_LabelSequence.hxx
// ./opencascade/TDF_Transaction.hxx
// ./opencascade/TDF_ListIteratorOfAttributeList.hxx
// ./opencascade/TDF_AttributeList.hxx
// ./opencascade/TDF_AttributeArray1.hxx
// ./opencascade/TDF_DeltaOnForget.hxx
// ./opencascade/TDF_DataMapIteratorOfLabelIntegerMap.hxx
// ./opencascade/TDF_ListIteratorOfIDList.hxx
// ./opencascade/TDF_DefaultDeltaOnRemoval.hxx
// ./opencascade/TDF_ClosureTool.hxx
// ./opencascade/TDF_Label.hxx
// ./opencascade/TDF_ChildIterator.hxx
// ./opencascade/TDF_LabelNode.hxx
// ./opencascade/TDF_DataMapIteratorOfAttributeDataMap.hxx
// ./opencascade/TDF_LabelMapHasher.hxx
// ./opencascade/TDF_IDList.hxx
// ./opencascade/TDF_LabelList.hxx
// ./opencascade/TDF_Attribute.hxx
// ./opencascade/TDF_DataMapIteratorOfLabelDataMap.hxx
// ./opencascade/TDF_DoubleMapIteratorOfLabelDoubleMap.hxx
// ./opencascade/TDF_MapIteratorOfLabelMap.hxx
// ./opencascade/TDF_AttributeDoubleMap.hxx
// ./opencascade/TDF_LabelDataMap.hxx
// ./opencascade/TDF_GUIDProgIDMap.hxx
// ./opencascade/TDF_AttributeIndexedMap.hxx
// ./opencascade/TDF_ChildIDIterator.hxx
// ./opencascade/TDF_DefaultDeltaOnModification.hxx
// ./opencascade/TDF_AttributeSequence.hxx
// ./opencascade/TDF_CopyTool.hxx
// ./opencascade/TDF_ListIteratorOfAttributeDeltaList.hxx
// ./opencascade/TDF_IDMap.hxx
// ./opencascade/TDF_AttributeIterator.hxx
// ./opencascade/TDF_DeltaOnModification.hxx
// ./opencascade/TDF_LabelIndexedMap.hxx
// ./opencascade/TDF_HAllocator.hxx
// ./opencascade/TDF.hxx
// ./opencascade/TDF_ComparisonTool.hxx
// ./opencascade/TDF_AttributeDeltaList.hxx
// ./opencascade/TDF_MapIteratorOfIDMap.hxx
// ./opencascade/TDF_AttributeDataMap.hxx
// ./opencascade/TDF_LabelIntegerMap.hxx
// ./opencascade/TDF_LabelNodePtr.hxx
// ./opencascade/TDF_MapIteratorOfAttributeMap.hxx
// ./opencascade/TDF_DoubleMapIteratorOfGUIDProgIDMap.hxx
// ./opencascade/TDF_IDFilter.hxx
// ./opencascade/TDF_ListIteratorOfDeltaList.hxx
// ./opencascade/TDF_HAttributeArray1.hxx
// ./opencascade/TDF_LabelMap.hxx
// ./opencascade/TDF_AttributeDelta.hxx
// ./opencascade/TDF_DoubleMapIteratorOfAttributeDoubleMap.hxx
// ./opencascade/TDF_ListIteratorOfLabelList.hxx
// ./opencascade/TDF_RelocationTable.hxx
// ./opencascade/TDF_AttributeMap.hxx
// ./opencascade/TDF_CopyLabel.hxx
// ./opencascade/TDF_DataSet.hxx

// user-defined post
