// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <BRepApprox_TheComputeLineOfApprox.hxx>

#include <TColStd_HArray1OfReal.hxx>
#include <TColStd_HArray1OfInteger.hxx>
#include <AppParCurves_HArray1OfConstraintCouple.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <AppParCurves_MultiCurve.hxx>
 

#define MultiLine BRepApprox_TheMultiLineOfApprox
#define MultiLine_hxx <BRepApprox_TheMultiLineOfApprox.hxx>
#define LineTool BRepApprox_TheMultiLineToolOfApprox
#define LineTool_hxx <BRepApprox_TheMultiLineToolOfApprox.hxx>
#define Approx_MyBSplGradient BRepApprox_MyBSplGradientOfTheComputeLineOfApprox
#define Approx_MyBSplGradient_hxx <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#define Approx_BSpParLeastSquareOfMyBSplGradient BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox
#define Approx_BSpParLeastSquareOfMyBSplGradient_hxx <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#define Approx_BSpParFunctionOfMyBSplGradient BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox
#define Approx_BSpParFunctionOfMyBSplGradient_hxx <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#define Approx_BSpGradient_BFGSOfMyBSplGradient BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox
#define Approx_BSpGradient_BFGSOfMyBSplGradient_hxx <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#define Approx_BSpParLeastSquareOfMyBSplGradient BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox
#define Approx_BSpParLeastSquareOfMyBSplGradient_hxx <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#define Approx_BSpParFunctionOfMyBSplGradient BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox
#define Approx_BSpParFunctionOfMyBSplGradient_hxx <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#define Approx_BSpGradient_BFGSOfMyBSplGradient BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox
#define Approx_BSpGradient_BFGSOfMyBSplGradient_hxx <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#define Approx_MyGradientbis BRepApprox_MyGradientbisOfTheComputeLineOfApprox
#define Approx_MyGradientbis_hxx <BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_ParLeastSquareOfMyGradientbis BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox
#define Approx_ParLeastSquareOfMyGradientbis_hxx <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_ResConstraintOfMyGradientbis BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox
#define Approx_ResConstraintOfMyGradientbis_hxx <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_ParFunctionOfMyGradientbis BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox
#define Approx_ParFunctionOfMyGradientbis_hxx <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_Gradient_BFGSOfMyGradientbis BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox
#define Approx_Gradient_BFGSOfMyGradientbis_hxx <BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_ParLeastSquareOfMyGradientbis BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox
#define Approx_ParLeastSquareOfMyGradientbis_hxx <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_ResConstraintOfMyGradientbis BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox
#define Approx_ResConstraintOfMyGradientbis_hxx <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_ParFunctionOfMyGradientbis BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox
#define Approx_ParFunctionOfMyGradientbis_hxx <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_Gradient_BFGSOfMyGradientbis BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox
#define Approx_Gradient_BFGSOfMyGradientbis_hxx <BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#define Approx_BSplComputeLine BRepApprox_TheComputeLineOfApprox
#define Approx_BSplComputeLine_hxx <BRepApprox_TheComputeLineOfApprox.hxx>
#include <Approx_BSplComputeLine.gxx>

