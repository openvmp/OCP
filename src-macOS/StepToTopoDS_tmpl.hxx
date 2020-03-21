#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepGeom_CartesianPoint.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepToTopoDS_Root.hxx>
#include <StepToTopoDS_TranslateShell.hxx>
#include <StepToTopoDS_TranslateFace.hxx>
#include <StepToTopoDS_TranslateEdgeLoop.hxx>
#include <StepToTopoDS_TranslateEdge.hxx>
#include <StepToTopoDS_TranslateVertex.hxx>
#include <StepToTopoDS_TranslatePolyLoop.hxx>
#include <StepToTopoDS_TranslateVertexLoop.hxx>
#include <StepToTopoDS_TranslateCompositeCurve.hxx>
#include <StepToTopoDS_TranslateCurveBoundedSurface.hxx>
#include <StepToTopoDS_Builder.hxx>
#include <StepToTopoDS_MakeTransformed.hxx>
#include <StepToTopoDS_GeometricTool.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_CartesianPointHasher.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_MappedItem.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_Edge.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepGeom_Curve.hxx>
#include <StepShape_EdgeCurve.hxx>
#include <StepShape_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <StepGeom_Pcurve.hxx>
#include <Geom_Surface.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepGeom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_FaceBound.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <StepGeom_Surface.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_Vertex.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>

// module includes
#include <StepToTopoDS_TranslateVertexError.hxx>
#include <StepToTopoDS_BuilderError.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepToTopoDS_TranslateCurveBoundedSurface.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepToTopoDS_GeometricToolError.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfRINames.hxx>
#include <StepToTopoDS_TranslateShellError.hxx>
#include <StepToTopoDS_TranslateVertexLoopError.hxx>
#include <StepToTopoDS_CartesianPointHasher.hxx>
#include <StepToTopoDS_Builder.hxx>
#include <StepToTopoDS_GeometricTool.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfTRI.hxx>
#include <StepToTopoDS_DataMapOfRINames.hxx>
#include <StepToTopoDS_TranslateFaceError.hxx>
#include <StepToTopoDS_TranslateShell.hxx>
#include <StepToTopoDS_DataMapIteratorOfPointVertexMap.hxx>
#include <StepToTopoDS_TranslateEdgeLoopError.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfRI.hxx>
#include <StepToTopoDS_Root.hxx>
#include <StepToTopoDS_DataMapOfRI.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS.hxx>
#include <StepToTopoDS_TranslatePolyLoop.hxx>
#include <StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx>
#include <StepToTopoDS_MakeTransformed.hxx>
#include <StepToTopoDS_DataMapOfTRI.hxx>
#include <StepToTopoDS_TranslateEdge.hxx>
#include <StepToTopoDS_PointVertexMap.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StepToTopoDS_TranslatePolyLoopError.hxx>
#include <StepToTopoDS_TranslateCompositeCurve.hxx>
#include <StepToTopoDS_TranslateEdgeError.hxx>
#include <StepToTopoDS_TranslateEdgeLoop.hxx>
#include <StepToTopoDS_TranslateVertexLoop.hxx>
#include <StepToTopoDS_TranslateFace.hxx>
#include <StepToTopoDS_TranslateVertex.hxx>
#include <StepToTopoDS_PointEdgeMap.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StepToTopoDS_TranslateVertexError.hxx
// ./opencascade/StepToTopoDS_BuilderError.hxx
// ./opencascade/StepToTopoDS_PointPair.hxx
// ./opencascade/StepToTopoDS_TranslateCurveBoundedSurface.hxx
// ./opencascade/StepToTopoDS_NMTool.hxx
// ./opencascade/StepToTopoDS_GeometricToolError.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfRINames.hxx
// ./opencascade/StepToTopoDS_TranslateShellError.hxx
// ./opencascade/StepToTopoDS_TranslateVertexLoopError.hxx
// ./opencascade/StepToTopoDS_CartesianPointHasher.hxx
// ./opencascade/StepToTopoDS_Builder.hxx
// ./opencascade/StepToTopoDS_GeometricTool.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfTRI.hxx
// ./opencascade/StepToTopoDS_DataMapOfRINames.hxx
// ./opencascade/StepToTopoDS_TranslateFaceError.hxx
// ./opencascade/StepToTopoDS_TranslateShell.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfPointVertexMap.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeLoopError.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfRI.hxx
// ./opencascade/StepToTopoDS_Root.hxx
// ./opencascade/StepToTopoDS_DataMapOfRI.hxx
// ./opencascade/StepToTopoDS_Tool.hxx
// ./opencascade/StepToTopoDS.hxx
// ./opencascade/StepToTopoDS_TranslatePolyLoop.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx
// ./opencascade/StepToTopoDS_MakeTransformed.hxx
// ./opencascade/StepToTopoDS_DataMapOfTRI.hxx
// ./opencascade/StepToTopoDS_TranslateEdge.hxx
// ./opencascade/StepToTopoDS_PointVertexMap.hxx
// ./opencascade/StepToTopoDS_PointPairHasher.hxx
// ./opencascade/StepToTopoDS_TranslatePolyLoopError.hxx
// ./opencascade/StepToTopoDS_TranslateCompositeCurve.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeError.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeLoop.hxx
// ./opencascade/StepToTopoDS_TranslateVertexLoop.hxx
// ./opencascade/StepToTopoDS_TranslateFace.hxx
// ./opencascade/StepToTopoDS_TranslateVertex.hxx
// ./opencascade/StepToTopoDS_PointEdgeMap.hxx

// user-defined post
