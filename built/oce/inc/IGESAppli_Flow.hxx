// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_Flow_HeaderFile
#define _IGESAppli_Flow_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_Flow.hxx>

#include <Standard_Integer.hxx>
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <Handle_IGESDraw_HArray1OfConnectPoint.hxx>
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#include <Handle_IGESGraph_HArray1OfTextDisplayTemplate.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_IGESDraw_ConnectPoint.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_IGESGraph_TextDisplayTemplate.hxx>
class IGESData_HArray1OfIGESEntity;
class IGESDraw_HArray1OfConnectPoint;
class Interface_HArray1OfHAsciiString;
class IGESGraph_HArray1OfTextDisplayTemplate;
class Standard_OutOfRange;
class IGESData_IGESEntity;
class IGESDraw_ConnectPoint;
class TCollection_HAsciiString;
class IGESGraph_TextDisplayTemplate;


//! defines Flow, Type <402> Form <18>
//! in package IGESAppli
//! Represents a single signal or a single fluid flow path
//! starting from a starting Connect Point Entity and
//! including additional intermediate connect points.
class IGESAppli_Flow : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_Flow();
  
  //! This method is used to set the fields of the class Flow
  //! - nbContextFlags    : Count of Context Flags, always = 2
  //! - aFlowType         : Type of Flow, default = 0
  //! - aFuncFlag         : Function Flag, default = 0
  //! - allFlowAssocs     : Flow Associativity Entities
  //! - allConnectPoints  : Connect Point Entities
  //! - allJoins          : Join Entities
  //! - allFlowNames      : Flow Names
  //! - allTextDisps      : Text Display Template Entities
  //! - allContFlowAssocs : Continuation Flow Associativity Entities
  Standard_EXPORT   void Init (const Standard_Integer nbContextFlags, const Standard_Integer aFlowType, const Standard_Integer aFuncFlag, const Handle(IGESData_HArray1OfIGESEntity)& allFlowAssocs, const Handle(IGESDraw_HArray1OfConnectPoint)& allConnectPoints, const Handle(IGESData_HArray1OfIGESEntity)& allJoins, const Handle(Interface_HArray1OfHAsciiString)& allFlowNames, const Handle(IGESGraph_HArray1OfTextDisplayTemplate)& allTextDisps, const Handle(IGESData_HArray1OfIGESEntity)& allContFlowAssocs) ;
  
  //! forces NbContextFalgs to 2, returns True if changed
  Standard_EXPORT   Standard_Boolean OwnCorrect() ;
  
  //! returns number of Count of Context Flags, always = 2
  Standard_EXPORT   Standard_Integer NbContextFlags()  const;
  
  //! returns number of Flow Associativity Entities
  Standard_EXPORT   Standard_Integer NbFlowAssociativities()  const;
  
  //! returns number of Connect Point Entities
  Standard_EXPORT   Standard_Integer NbConnectPoints()  const;
  
  //! returns number of Join Entities
  Standard_EXPORT   Standard_Integer NbJoins()  const;
  
  //! returns number of Flow Names
  Standard_EXPORT   Standard_Integer NbFlowNames()  const;
  
  //! returns number of Text Display Template Entities
  Standard_EXPORT   Standard_Integer NbTextDisplayTemplates()  const;
  
  //! returns number of Continuation Flow Associativity Entities
  Standard_EXPORT   Standard_Integer NbContFlowAssociativities()  const;
  
  //! returns Type of Flow = 0 : Not Specified (default)
  //! 1 : Logical
  //! 2 : Physical
  Standard_EXPORT   Standard_Integer TypeOfFlow()  const;
  
  //! returns Function Flag = 0 : Not Specified (default)
  //! 1 : Electrical Signal
  //! 2 : Fluid Flow Path
  Standard_EXPORT   Standard_Integer FunctionFlag()  const;
  
  //! returns Flow Associativity Entity
  //! raises exception if Index <= 0 or Index > NbFlowAssociativities()
  Standard_EXPORT   Handle(IGESData_IGESEntity) FlowAssociativity (const Standard_Integer Index)  const;
  
  //! returns Connect Point Entity
  //! raises exception if Index <= 0 or Index > NbConnectPoints()
  Standard_EXPORT   Handle(IGESDraw_ConnectPoint) ConnectPoint (const Standard_Integer Index)  const;
  
  //! returns Join Entity
  //! raises exception if Index <= 0 or Index > NbJoins()
  Standard_EXPORT   Handle(IGESData_IGESEntity) Join (const Standard_Integer Index)  const;
  
  //! returns Flow Name
  //! raises exception if Index <= 0 or Index > NbFlowNames()
  Standard_EXPORT   Handle(TCollection_HAsciiString) FlowName (const Standard_Integer Index)  const;
  
  //! returns Text Display Template Entity
  //! raises exception if Index <= 0 or Index > NbTextDisplayTemplates()
  Standard_EXPORT   Handle(IGESGraph_TextDisplayTemplate) TextDisplayTemplate (const Standard_Integer Index)  const;
  
  //! returns Continuation Flow Associativity Entity
  //! raises exception if Index <= 0 or Index > NbContFlowAssociativities()
  Standard_EXPORT   Handle(IGESData_IGESEntity) ContFlowAssociativity (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESAppli_Flow)

protected:




private: 


  Standard_Integer theNbContextFlags;
  Standard_Integer theTypeOfFlow;
  Standard_Integer theFunctionFlag;
  Handle(IGESData_HArray1OfIGESEntity) theFlowAssociativities;
  Handle(IGESDraw_HArray1OfConnectPoint) theConnectPoints;
  Handle(IGESData_HArray1OfIGESEntity) theJoins;
  Handle(Interface_HArray1OfHAsciiString) theFlowNames;
  Handle(IGESGraph_HArray1OfTextDisplayTemplate) theTextDisplayTemplates;
  Handle(IGESData_HArray1OfIGESEntity) theContFlowAssociativities;


};







#endif // _IGESAppli_Flow_HeaderFile
