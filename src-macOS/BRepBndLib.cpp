
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_OBB.hxx>

// module includes
#include <BRepBndLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepBndLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepBndLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepBndLib , shared_ptr<BRepBndLib>>(m,"BRepBndLib");

    static_cast<py::class_<BRepBndLib , shared_ptr<BRepBndLib> >>(m.attr("BRepBndLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepBndLib.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
