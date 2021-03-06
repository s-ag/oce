// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_IndexedDataMapOfOwnerPrs_HeaderFile
#define _AIS_IndexedDataMapOfOwnerPrs_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_SelectMgr_EntityOwner.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class SelectMgr_EntityOwner;
class Prs3d_Presentation;
class TColStd_MapTransientHasher;
class AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs;



class AIS_IndexedDataMapOfOwnerPrs  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AIS_IndexedDataMapOfOwnerPrs(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   AIS_IndexedDataMapOfOwnerPrs& Assign (const AIS_IndexedDataMapOfOwnerPrs& Other) ;
  AIS_IndexedDataMapOfOwnerPrs& operator = (const AIS_IndexedDataMapOfOwnerPrs& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~AIS_IndexedDataMapOfOwnerPrs()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const Handle(SelectMgr_EntityOwner)& K, const Handle(Prs3d_Presentation)& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const Handle(SelectMgr_EntityOwner)& K, const Handle(Prs3d_Presentation)& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(SelectMgr_EntityOwner)& K)  const;
  
  Standard_EXPORT  const  Handle(SelectMgr_EntityOwner)& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  Handle(Prs3d_Presentation)& FindFromIndex (const Standard_Integer I)  const;
 const  Handle(Prs3d_Presentation)& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   Handle(Prs3d_Presentation)& ChangeFromIndex (const Standard_Integer I) ;
  Handle(Prs3d_Presentation)& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const Handle(SelectMgr_EntityOwner)& K)  const;
  
  Standard_EXPORT  const  Handle(Prs3d_Presentation)& FindFromKey (const Handle(SelectMgr_EntityOwner)& K)  const;
  
  Standard_EXPORT   Handle(Prs3d_Presentation)& ChangeFromKey (const Handle(SelectMgr_EntityOwner)& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const Handle(SelectMgr_EntityOwner)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const Handle(SelectMgr_EntityOwner)& K) ;




protected:





private:

  
  Standard_EXPORT AIS_IndexedDataMapOfOwnerPrs(const AIS_IndexedDataMapOfOwnerPrs& Other);




};







#endif // _AIS_IndexedDataMapOfOwnerPrs_HeaderFile
