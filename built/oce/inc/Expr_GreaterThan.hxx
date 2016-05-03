// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_GreaterThan_HeaderFile
#define _Expr_GreaterThan_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Expr_GreaterThan.hxx>

#include <Expr_SingleRelation.hxx>
#include <Handle_Expr_GeneralExpression.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Expr_GeneralRelation.hxx>
class Standard_NumericError;
class Expr_GeneralExpression;
class Expr_GeneralRelation;
class TCollection_AsciiString;



class Expr_GreaterThan : public Expr_SingleRelation
{

public:

  
  //! Creates the relation <exp1> > <exp2>.
  Standard_EXPORT Expr_GreaterThan(const Handle(Expr_GeneralExpression)& exp1, const Handle(Expr_GeneralExpression)& exp2);
  
  Standard_EXPORT   Standard_Boolean IsSatisfied()  const;
  
  //! Returns a GeneralRelation after replacement of
  //! NamedUnknowns by an associated expression, and after
  //! values computation.
  Standard_EXPORT   Handle(Expr_GeneralRelation) Simplified()  const;
  
  //! Replaces NamedUnknowns by associated expressions,
  //! and computes values in <me>.
  Standard_EXPORT   void Simplify() ;
  
  //! Returns a copy of <me> having the same unknowns and functions.
  Standard_EXPORT   Handle(Expr_GeneralRelation) Copy()  const;
  
  //! returns a string representing <me> in a readable way.
  Standard_EXPORT   TCollection_AsciiString String()  const;




  DEFINE_STANDARD_RTTI(Expr_GreaterThan)

protected:




private: 




};







#endif // _Expr_GreaterThan_HeaderFile
