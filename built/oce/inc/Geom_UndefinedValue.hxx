// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_UndefinedValue_HeaderFile
#define _Geom_UndefinedValue_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_DomainError.hxx>
#include <Handle_Geom_UndefinedValue.hxx>

#if !defined No_Exception && !defined No_Geom_UndefinedValue
  #define Geom_UndefinedValue_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Geom_UndefinedValue::Raise(MESSAGE);
#else
  #define Geom_UndefinedValue_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Geom_UndefinedValue, Standard_DomainError)

#endif // _Geom_UndefinedValue_HeaderFile
