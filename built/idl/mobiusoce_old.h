#include <iostream>
#include <stdio.h>
#include <gp_Pnt.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeSegment.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRep_Builder.hxx>
#include <BRepLib.hxx>
#include <gp_Ax1.hxx>
#include <gp_Trsf.hxx>
#include <gp_Vec.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepFilletAPI_MakeFillet.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>
#include <BRepAlgoAPI_Fuse.hxx>
#include <BRepAlgoAPI_Cut.hxx>
#include <TopExp_Explorer.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <TopTools_ListOfShape.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <GCE2d_MakeSegment.hxx>

using namespace std;

class Mobius{
	public:
	Mobius();
	TopoDS_Shape& MakeBottle(const Standard_Real myWidth, const Standard_Real myHeight,
                        const Standard_Real myThickness);
	TopoDS_Shape& MakeBox();
	TopoDS_Shape& MakeCylinder();
	TopoDS_Shape& booleanOp(TopoDS_Shape& obj1, TopoDS_Shape& obj2);
};

class Geometry{
};

class GeomCurve: public Geometry
{

};

class GeomLineSegment: public GeomCurve
{
	public:
	GeomLineSegment();
};

class Toposhape
{
	public:
	Standard_Boolean canBeExtruded();

};


//subclass edge
class Topoedge: public Toposhape
{
	
	public:
	Standard_EXPORT Topoedge();

};


// Subclass wire
class Topowire: public Toposhape
{
	public:
	Standard_EXPORT Topowire();
		
};



// subclass face
class Topoface: public Toposhape
{
	public:
	Standard_EXPORT Topoface();
		
};


