// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepVisual_RWPresentationStyleByContext_HeaderFile
#define _RWStepVisual_RWPresentationStyleByContext_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepVisual_PresentationStyleByContext.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepVisual_PresentationStyleByContext;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for PresentationStyleByContext
class RWStepVisual_RWPresentationStyleByContext 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepVisual_RWPresentationStyleByContext();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepVisual_PresentationStyleByContext)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepVisual_PresentationStyleByContext)& ent)  const;
  
  Standard_EXPORT   void Share (const Handle(StepVisual_PresentationStyleByContext)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepVisual_RWPresentationStyleByContext_HeaderFile
