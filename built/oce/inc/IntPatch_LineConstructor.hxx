// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_LineConstructor_HeaderFile
#define _IntPatch_LineConstructor_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <IntPatch_SequenceOfLine.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IntPatch_Line.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_TopolTool.hxx>
#include <Standard_Real.hxx>
class IntPatch_SequenceOfLine;
class IntPatch_Line;
class Adaptor3d_HSurface;
class Adaptor3d_TopolTool;


//! The intersections  algorithms compute the intersection
//! on two surfaces and  return the intersections lines as
//! IntPatch_Line.
class IntPatch_LineConstructor 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntPatch_LineConstructor(const Standard_Integer mode);
  
  Standard_EXPORT   void Perform (const IntPatch_SequenceOfLine& SL, const Handle(IntPatch_Line)& L, const Handle(Adaptor3d_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& D1, const Handle(Adaptor3d_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& D2, const Standard_Real Tol) ;
  
  Standard_EXPORT   Standard_Integer NbLines()  const;
  
  Standard_EXPORT   Handle(IntPatch_Line) Line (const Standard_Integer index)  const;




protected:





private:



  IntPatch_SequenceOfLine slin;


};







#endif // _IntPatch_LineConstructor_HeaderFile
