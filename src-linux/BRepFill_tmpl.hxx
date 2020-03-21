#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Ax3.hxx>
#include <BRepMAT2d_BisectingLocus.hxx>
#include <BRepMAT2d_LinkTopoBilo.hxx>
#include <BRepTools_Quilt.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_Filling.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomFill_LocationDraft.hxx>
#include <Law_Function.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <BRepFill_Sweep.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BOPAlgo_MakerVolume.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Ax3.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <BRepFill_Generator.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <BRepFill_ShapeLaw.hxx>
#include <BRepFill_NSections.hxx>
#include <BRepFill_Draft.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_DraftLaw.hxx>
#include <BRepFill_Edge3DLaw.hxx>
#include <BRepFill_EdgeOnSurfLaw.hxx>
#include <BRepFill_ACRLaw.hxx>
#include <BRepFill_Pipe.hxx>
#include <BRepFill_PipeShell.hxx>
#include <BRepFill_Evolved.hxx>
#include <BRepFill_Sweep.hxx>
#include <BRepFill_CompatibleWires.hxx>
#include <BRepFill_OffsetWire.hxx>
#include <BRepFill_OffsetAncestors.hxx>
#include <BRepFill_ApproxSeewing.hxx>
#include <BRepFill_ComputeCLine.hxx>
#include <BRepFill_TrimSurfaceTool.hxx>
#include <BRepFill_TrimEdgeTool.hxx>
#include <BRepFill_SectionPlacement.hxx>
#include <BRepFill_Section.hxx>
#include <BRepFill_TrimShellCorner.hxx>
#include <BRepFill_CurveConstraint.hxx>
#include <BRepFill_Filling.hxx>
#include <BRepFill_FaceAndOrder.hxx>
#include <BRepFill_EdgeFaceAndOrder.hxx>
#include <BRepFill_Filling.hxx>
#include <BRepFill_DraftLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepFill_OffsetWire.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_BSplineSurface.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepFill_Sweep.hxx>
#include <Law_Function.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <BRepFill_TrimEdgeTool.hxx>
#include <GeomFill_LocationGuide.hxx>

// module includes
#include <BRepFill_DataMapOfShapeSequenceOfReal.hxx>
#include <BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx>
#include <BRepFill_ListOfOffsetWire.hxx>
#include <BRepFill_Evolved.hxx>
#include <BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx>
#include <BRepFill_SectionPlacement.hxx>
#include <BRepFill_EdgeFaceAndOrder.hxx>
#include <BRepFill_TransitionStyle.hxx>
#include <BRepFill_EdgeOnSurfLaw.hxx>
#include <BRepFill_CompatibleWires.hxx>
#include <BRepFill_DataMapOfOrientedShapeListOfShape.hxx>
#include <BRepFill_Generator.hxx>
#include <BRepFill_Filling.hxx>
#include <BRepFill_DataMapOfShapeHArray2OfShape.hxx>
#include <BRepFill_DraftLaw.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt.hxx>
#include <BRepFill_TypeOfContact.hxx>
#include <BRepFill_PipeShell.hxx>
#include <BRepFill_SequenceOfEdgeFaceAndOrder.hxx>
#include <BRepFill_Section.hxx>
#include <BRepFill_CurveConstraint.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <BRepFill_ApproxSeewing.hxx>
#include <BRepFill_Edge3DLaw.hxx>
#include <BRepFill_TrimEdgeTool.hxx>
#include <BRepFill_Sweep.hxx>
#include <BRepFill_TrimSurfaceTool.hxx>
#include <BRepFill_ComputeCLine.hxx>
#include <BRepFill_AdvancedEvolved.hxx>
#include <BRepFill.hxx>
#include <BRepFill_FaceAndOrder.hxx>
#include <BRepFill_TrimShellCorner.hxx>
#include <BRepFill_Draft.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_SequenceOfSection.hxx>
#include <BRepFill_OffsetAncestors.hxx>
#include <BRepFill_DataMapOfNodeShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape.hxx>
#include <BRepFill_NSections.hxx>
#include <BRepFill_Pipe.hxx>
#include <BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape.hxx>
#include <BRepFill_ShapeLaw.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfNodeShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal.hxx>
#include <BRepFill_MultiLine.hxx>
#include <BRepFill_ListIteratorOfListOfOffsetWire.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape.hxx>
#include <BRepFill_OffsetWire.hxx>
#include <BRepFill_SequenceOfFaceAndOrder.hxx>
#include <BRepFill_DataMapOfShapeSequenceOfPnt.hxx>
#include <BRepFill_ACRLaw.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepFill_DataMapOfShapeSequenceOfReal.hxx
// ./opencascade/BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx
// ./opencascade/BRepFill_ListOfOffsetWire.hxx
// ./opencascade/BRepFill_Evolved.hxx
// ./opencascade/BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx
// ./opencascade/BRepFill_SectionPlacement.hxx
// ./opencascade/BRepFill_EdgeFaceAndOrder.hxx
// ./opencascade/BRepFill_TransitionStyle.hxx
// ./opencascade/BRepFill_EdgeOnSurfLaw.hxx
// ./opencascade/BRepFill_CompatibleWires.hxx
// ./opencascade/BRepFill_DataMapOfOrientedShapeListOfShape.hxx
// ./opencascade/BRepFill_Generator.hxx
// ./opencascade/BRepFill_Filling.hxx
// ./opencascade/BRepFill_DataMapOfShapeHArray2OfShape.hxx
// ./opencascade/BRepFill_DraftLaw.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt.hxx
// ./opencascade/BRepFill_TypeOfContact.hxx
// ./opencascade/BRepFill_PipeShell.hxx
// ./opencascade/BRepFill_SequenceOfEdgeFaceAndOrder.hxx
// ./opencascade/BRepFill_Section.hxx
// ./opencascade/BRepFill_CurveConstraint.hxx
// ./opencascade/BRepFill_SectionLaw.hxx
// ./opencascade/BRepFill_ApproxSeewing.hxx
// ./opencascade/BRepFill_Edge3DLaw.hxx
// ./opencascade/BRepFill_TrimEdgeTool.hxx
// ./opencascade/BRepFill_Sweep.hxx
// ./opencascade/BRepFill_TrimSurfaceTool.hxx
// ./opencascade/BRepFill_ComputeCLine.hxx
// ./opencascade/BRepFill_AdvancedEvolved.hxx
// ./opencascade/BRepFill.hxx
// ./opencascade/BRepFill_FaceAndOrder.hxx
// ./opencascade/BRepFill_TrimShellCorner.hxx
// ./opencascade/BRepFill_Draft.hxx
// ./opencascade/BRepFill_LocationLaw.hxx
// ./opencascade/BRepFill_SequenceOfSection.hxx
// ./opencascade/BRepFill_OffsetAncestors.hxx
// ./opencascade/BRepFill_DataMapOfNodeShape.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape.hxx
// ./opencascade/BRepFill_NSections.hxx
// ./opencascade/BRepFill_Pipe.hxx
// ./opencascade/BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape.hxx
// ./opencascade/BRepFill_ShapeLaw.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfNodeShape.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal.hxx
// ./opencascade/BRepFill_MultiLine.hxx
// ./opencascade/BRepFill_ListIteratorOfListOfOffsetWire.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape.hxx
// ./opencascade/BRepFill_OffsetWire.hxx
// ./opencascade/BRepFill_SequenceOfFaceAndOrder.hxx
// ./opencascade/BRepFill_DataMapOfShapeSequenceOfPnt.hxx
// ./opencascade/BRepFill_ACRLaw.hxx

// user-defined post
