// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectErrorEntities_HeaderFile
#define _IFSelect_SelectErrorEntities_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IFSelect_SelectErrorEntities.hxx>

#include <IFSelect_SelectExtract.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! A SelectErrorEntities sorts the Entities which are qualified
//! as "Error" (their Type has not been recognized) during reading
//! a File. This does not concern Entities which are syntactically
//! correct, but with incorrect data (for integrity constraints).
class IFSelect_SelectErrorEntities : public IFSelect_SelectExtract
{

public:

  
  //! Creates a SelectErrorEntities
  Standard_EXPORT IFSelect_SelectErrorEntities();
  
  //! Returns True for an Entity which is qualified as "Error", i.e.
  //! if <model> explicitly knows <ent> (through its Number) as
  //! Erroneous
  Standard_EXPORT   Standard_Boolean Sort (const Standard_Integer rank, const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;
  
  //! Returns a text defining the criterium : "Error Entities"
  Standard_EXPORT   TCollection_AsciiString ExtractLabel()  const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectErrorEntities)

protected:




private: 




};







#endif // _IFSelect_SelectErrorEntities_HeaderFile
