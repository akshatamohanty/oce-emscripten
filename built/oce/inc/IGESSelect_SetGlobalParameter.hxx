// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SetGlobalParameter_HeaderFile
#define _IGESSelect_SetGlobalParameter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SetGlobalParameter.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <IGESSelect_ModelModifier.hxx>
#include <Handle_IGESData_IGESModel.hxx>
class TCollection_HAsciiString;
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Sets a Global (Header) Parameter to a new value, directly given
//! Controls the form of the parameter (Integer, Real, String
//! with such or such form), but not the consistence of the new
//! value regarding the rest of the file.
//!
//! The new value is given under the form of a HAsciiString, even
//! for Integer or Real values. For String values, Hollerith forms
//! are accepted but not mandatory
//! Warning : a Null (not set) value is not accepted. For an empty string,
//! give a Text Parameter which is empty
class IGESSelect_SetGlobalParameter : public IGESSelect_ModelModifier
{

public:

  
  //! Creates an SetGlobalParameter, to be applied on Global
  //! Parameter <numpar>
  Standard_EXPORT IGESSelect_SetGlobalParameter(const Standard_Integer numpar);
  
  //! Returns the global parameter number to which this modifiers
  //! applies
  Standard_EXPORT   Standard_Integer GlobalNumber()  const;
  
  //! Sets a Text Parameter for the new value
  Standard_EXPORT   void SetValue (const Handle(TCollection_HAsciiString)& text) ;
  
  //! Returns the value to set to the global parameter (Text Param)
  Standard_EXPORT   Handle(TCollection_HAsciiString) Value()  const;
  
  //! Specific action : only <target> is used : the form of the new
  //! value is checked regarding the parameter number (given at
  //! creation time).
  Standard_EXPORT   void Performing (IFSelect_ContextModif& ctx, const Handle(IGESData_IGESModel)& target, Interface_CopyTool& TC)  const;
  
  //! Returns a text which is
  //! "Sets Global Parameter <numpar> to <new value>"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SetGlobalParameter)

protected:




private: 


  Standard_Integer thenum;
  Handle(TCollection_HAsciiString) theval;


};







#endif // _IGESSelect_SetGlobalParameter_HeaderFile
