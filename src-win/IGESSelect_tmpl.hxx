#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_Protocol.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_Protocol.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_PacketList.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Message_Messenger.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_Graph.hxx>
#include <IGESSelect_EditHeader.hxx>
#include <IGESSelect_EditDirPart.hxx>
#include <IGESSelect_IGESTypeForm.hxx>
#include <IGESSelect_IGESName.hxx>
#include <IGESSelect_SignStatus.hxx>
#include <IGESSelect_SignLevelNumber.hxx>
#include <IGESSelect_SignColor.hxx>
#include <IGESSelect_CounterOfLevelNumber.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <IGESSelect_DispPerSingleView.hxx>
#include <IGESSelect_DispPerDrawing.hxx>
#include <IGESSelect_SelectVisibleStatus.hxx>
#include <IGESSelect_SelectSubordinate.hxx>
#include <IGESSelect_SelectLevelNumber.hxx>
#include <IGESSelect_SelectName.hxx>
#include <IGESSelect_SelectFromSingleView.hxx>
#include <IGESSelect_SelectFromDrawing.hxx>
#include <IGESSelect_SelectSingleViewFrom.hxx>
#include <IGESSelect_SelectDrawingFrom.hxx>
#include <IGESSelect_SelectBypassGroup.hxx>
#include <IGESSelect_SelectBypassSubfigure.hxx>
#include <IGESSelect_SelectBasicGeom.hxx>
#include <IGESSelect_SelectFaces.hxx>
#include <IGESSelect_SelectPCurves.hxx>
#include <IGESSelect_ModelModifier.hxx>
#include <IGESSelect_FileModifier.hxx>
#include <IGESSelect_FloatFormat.hxx>
#include <IGESSelect_AddFileComment.hxx>
#include <IGESSelect_UpdateFileName.hxx>
#include <IGESSelect_UpdateCreationDate.hxx>
#include <IGESSelect_UpdateLastChange.hxx>
#include <IGESSelect_SetVersion5.hxx>
#include <IGESSelect_SetGlobalParameter.hxx>
#include <IGESSelect_AutoCorrect.hxx>
#include <IGESSelect_ComputeStatus.hxx>
#include <IGESSelect_RebuildDrawings.hxx>
#include <IGESSelect_RebuildGroups.hxx>
#include <IGESSelect_AddGroup.hxx>
#include <IGESSelect_ChangeLevelNumber.hxx>
#include <IGESSelect_ChangeLevelList.hxx>
#include <IGESSelect_SplineToBSpline.hxx>
#include <IGESSelect_RemoveCurves.hxx>
#include <IGESSelect_SetLabel.hxx>
#include <IGESSelect_WorkLibrary.hxx>
#include <IGESSelect_Activator.hxx>
#include <IGESSelect_Dumper.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <IGESSelect_SelectPCurves.hxx>
#include <IGESSelect_UpdateCreationDate.hxx>
#include <IGESSelect_ChangeLevelList.hxx>
#include <IGESSelect_Activator.hxx>
#include <IGESSelect_WorkLibrary.hxx>
#include <IGESSelect_RebuildDrawings.hxx>
#include <IGESSelect_SelectFromSingleView.hxx>
#include <IGESSelect_Dumper.hxx>
#include <IGESSelect_ModelModifier.hxx>
#include <IGESSelect_FloatFormat.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <IGESSelect_SetVersion5.hxx>
#include <IGESSelect_FileModifier.hxx>
#include <IGESSelect_ComputeStatus.hxx>
#include <IGESSelect_SetGlobalParameter.hxx>
#include <IGESSelect_AutoCorrect.hxx>
#include <IGESSelect_SelectBypassSubfigure.hxx>
#include <IGESSelect_SelectName.hxx>
#include <IGESSelect_SignColor.hxx>
#include <IGESSelect_SelectDrawingFrom.hxx>
#include <IGESSelect_UpdateLastChange.hxx>
#include <IGESSelect_ChangeLevelNumber.hxx>
#include <IGESSelect_EditHeader.hxx>
#include <IGESSelect_RemoveCurves.hxx>
#include <IGESSelect_SignLevelNumber.hxx>
#include <IGESSelect_CounterOfLevelNumber.hxx>
#include <IGESSelect_SelectSingleViewFrom.hxx>
#include <IGESSelect_SelectLevelNumber.hxx>
#include <IGESSelect_SignStatus.hxx>
#include <IGESSelect_SelectSubordinate.hxx>
#include <IGESSelect_AddFileComment.hxx>
#include <IGESSelect_SplineToBSpline.hxx>
#include <IGESSelect_RebuildGroups.hxx>
#include <IGESSelect_IGESName.hxx>
#include <IGESSelect_SelectBypassGroup.hxx>
#include <IGESSelect_SelectFromDrawing.hxx>
#include <IGESSelect.hxx>
#include <IGESSelect_AddGroup.hxx>
#include <IGESSelect_EditDirPart.hxx>
#include <IGESSelect_SetLabel.hxx>
#include <IGESSelect_SelectVisibleStatus.hxx>
#include <IGESSelect_SelectFaces.hxx>
#include <IGESSelect_SelectBasicGeom.hxx>
#include <IGESSelect_UpdateFileName.hxx>
#include <IGESSelect_IGESTypeForm.hxx>
#include <IGESSelect_DispPerSingleView.hxx>
#include <IGESSelect_DispPerDrawing.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\IGESSelect_SelectPCurves.hxx
// ./opencascade\IGESSelect_UpdateCreationDate.hxx
// ./opencascade\IGESSelect_ChangeLevelList.hxx
// ./opencascade\IGESSelect_Activator.hxx
// ./opencascade\IGESSelect_WorkLibrary.hxx
// ./opencascade\IGESSelect_RebuildDrawings.hxx
// ./opencascade\IGESSelect_SelectFromSingleView.hxx
// ./opencascade\IGESSelect_Dumper.hxx
// ./opencascade\IGESSelect_ModelModifier.hxx
// ./opencascade\IGESSelect_FloatFormat.hxx
// ./opencascade\IGESSelect_ViewSorter.hxx
// ./opencascade\IGESSelect_SetVersion5.hxx
// ./opencascade\IGESSelect_FileModifier.hxx
// ./opencascade\IGESSelect_ComputeStatus.hxx
// ./opencascade\IGESSelect_SetGlobalParameter.hxx
// ./opencascade\IGESSelect_AutoCorrect.hxx
// ./opencascade\IGESSelect_SelectBypassSubfigure.hxx
// ./opencascade\IGESSelect_SelectName.hxx
// ./opencascade\IGESSelect_SignColor.hxx
// ./opencascade\IGESSelect_SelectDrawingFrom.hxx
// ./opencascade\IGESSelect_UpdateLastChange.hxx
// ./opencascade\IGESSelect_ChangeLevelNumber.hxx
// ./opencascade\IGESSelect_EditHeader.hxx
// ./opencascade\IGESSelect_RemoveCurves.hxx
// ./opencascade\IGESSelect_SignLevelNumber.hxx
// ./opencascade\IGESSelect_CounterOfLevelNumber.hxx
// ./opencascade\IGESSelect_SelectSingleViewFrom.hxx
// ./opencascade\IGESSelect_SelectLevelNumber.hxx
// ./opencascade\IGESSelect_SignStatus.hxx
// ./opencascade\IGESSelect_SelectSubordinate.hxx
// ./opencascade\IGESSelect_AddFileComment.hxx
// ./opencascade\IGESSelect_SplineToBSpline.hxx
// ./opencascade\IGESSelect_RebuildGroups.hxx
// ./opencascade\IGESSelect_IGESName.hxx
// ./opencascade\IGESSelect_SelectBypassGroup.hxx
// ./opencascade\IGESSelect_SelectFromDrawing.hxx
// ./opencascade\IGESSelect.hxx
// ./opencascade\IGESSelect_AddGroup.hxx
// ./opencascade\IGESSelect_EditDirPart.hxx
// ./opencascade\IGESSelect_SetLabel.hxx
// ./opencascade\IGESSelect_SelectVisibleStatus.hxx
// ./opencascade\IGESSelect_SelectFaces.hxx
// ./opencascade\IGESSelect_SelectBasicGeom.hxx
// ./opencascade\IGESSelect_UpdateFileName.hxx
// ./opencascade\IGESSelect_IGESTypeForm.hxx
// ./opencascade\IGESSelect_DispPerSingleView.hxx
// ./opencascade\IGESSelect_DispPerDrawing.hxx

// user-defined post
