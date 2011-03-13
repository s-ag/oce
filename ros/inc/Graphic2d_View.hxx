// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_View_HeaderFile
#define _Graphic2d_View_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_View_HeaderFile
#include <Handle_Graphic2d_View.hxx>
#endif

#ifndef _Graphic2d_SequenceOfGraphicObject_HeaderFile
#include <Graphic2d_SequenceOfGraphicObject.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _Graphic2d_SequenceOfBuffer_HeaderFile
#include <Graphic2d_SequenceOfBuffer.hxx>
#endif
#ifndef _Handle_Graphic2d_DisplayList_HeaderFile
#include <Handle_Graphic2d_DisplayList.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Aspect_TypeOfDeflection_HeaderFile
#include <Aspect_TypeOfDeflection.hxx>
#endif
#ifndef _Handle_Graphic2d_TransientManager_HeaderFile
#include <Handle_Graphic2d_TransientManager.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic2d_Buffer_HeaderFile
#include <Handle_Graphic2d_Buffer.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Aspect_Driver_HeaderFile
#include <Handle_Aspect_Driver.hxx>
#endif
#ifndef _Handle_Graphic2d_ViewMapping_HeaderFile
#include <Handle_Graphic2d_ViewMapping.hxx>
#endif
#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif
#ifndef _Graphic2d_PickMode_HeaderFile
#include <Graphic2d_PickMode.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
class Graphic2d_DisplayList;
class Graphic2d_TransientManager;
class Graphic2d_OverrideColorError;
class Graphic2d_GraphicObject;
class Graphic2d_Buffer;
class Graphic2d_Primitive;
class Aspect_Driver;
class Graphic2d_ViewMapping;
class Graphic2d_Drawer;


//! A View is a graphic object manager. <br>
class Graphic2d_View : public MMgt_TShared {

public:

  //! Creates a view. <br>
//!	    A view is a set of graphic objects. <br>
//!	    The view manages this set. <br>
  Standard_EXPORT   Graphic2d_View();
  //! Removes all the graphic objects from the view <me>. <br>
  Standard_EXPORT     void Remove() ;
  //! Forbids the drawing of all graphic objects in <me>. <br>
  Standard_EXPORT     void Erase() ;
  //! Deletes <me> <br>
  Standard_EXPORT     void Destroy() ;
~Graphic2d_View()
{
  Destroy();
}
  //! Fully updates the driver <aDriver> in function of <br>
//!	    modifications of the graphic objects displayed <br>
//!	    in the view <me>. <br>
//!	    <aViewMapping> defines the "map from". <br>
//!	    <aXPosition>, <aYPosition>, <aScale> define the "map to". <br>
//!	    The entire window which supporting the view will be <br>
//!	    cleared before if <ClearBefore> flag is TRUE. <br>
  Standard_EXPORT     void Update(const Handle(Aspect_Driver)& aDriver,const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real aXPosition,const Standard_Real aYPosition,const Standard_Real aScale,const Standard_Boolean ClearBefore = Standard_True) ;
  //! Partially updates the driver <aDriver> in function of <br>
//!	    modifications of the graphic objects displayed <br>
//!	    in the view <me> with the defined mapping parameters <br>
//!	    and reset the update pointer if <Reset> is TRUE. <br>
//!  Warning: Only the new primitives created since the last Update <br>
//!	    are drawn. All others primitives are in the fixed <br>
//!	    background. <br>
  Standard_EXPORT     void TinyUpdate(const Handle(Aspect_Driver)& aDriver,const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real aXPosition,const Standard_Real aYPosition,const Standard_Real aScale,const Standard_Boolean Reset = Standard_False) ;
  //! Partially updates the driver <aDriver> with <br>
//!          the graphic object <aGraphicObject> in the <br>
//!	    the view <me> with the defined mapping parameters. <br>
  Standard_EXPORT     void Update(const Handle(Aspect_Driver)& aDriver,const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real aXPosition,const Standard_Real aYPosition,const Standard_Real aScale) ;
  //! Partially updates the driver <aDriver> with <br>
//!          the primitive <aPrimitive> in the <br>
//!	    the view <me> with the defined mapping parameters. <br>
  Standard_EXPORT     void Update(const Handle(Aspect_Driver)& aDriver,const Handle(Graphic2d_Primitive)& aPrimitive,const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real aXPosition,const Standard_Real aYPosition,const Standard_Real aScale) ;
  //! Returns the list of graphic objects displayed in <me>. <br>
  Standard_EXPORT     Handle_Graphic2d_DisplayList DisplayList() const;
  //! Returns Standard_True if the graphic object <br>
//!	    <aGraphicObject> is displayed in <me>, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsIn(const Handle(Graphic2d_GraphicObject)& aGraphicObject) const;
  //! Returns the coordinates of the boundary box of all <br>
//!	    graphic objects referenced in the list <aList>. <br>
//!  Warning: All markers are ignored. <br>
//!  Warning: If <aList> is empty or contains markers and nothing else <br>
//!	    returns Minx = Miny = RealLast () and <br>
//!	    returns Maxx = Maxy = RealFirst () <br>
  Standard_EXPORT     void MinMax(const Handle(Graphic2d_DisplayList)& aList,Quantity_Length& Minx,Quantity_Length& Maxx,Quantity_Length& Miny,Quantity_Length& Maxy) const;
  //! Returns the coordinates of the boundary box of all <br>
//!	    graphic objects displayed in the view <me>. <br>
//!  Warning: All markers are ignored. <br>
//!  Warning: If <me> is empty or contains markers and nothing else <br>
//!	    returns Minx = Miny = RealLast () and <br>
//!	    returns Maxx = Maxy = RealFirst () <br>
  Standard_EXPORT     void MinMax(Quantity_Length& Minx,Quantity_Length& Maxx,Quantity_Length& Miny,Quantity_Length& Maxy) const;
  //! Returns the coordinates of the boundary box of all <br>
//!	    markers referenced in the graphic objects referenced <br>
//!	    in the list <aList>. <br>
//!  Warning: If <aList> is empty or without markers <br>
//!	    returns Minx = Miny = RealLast () and <br>
//!	    returns Maxx = Maxy = RealFirst () <br>
  Standard_EXPORT     void MarkerMinMax(const Handle(Graphic2d_DisplayList)& aList,Quantity_Length& Minx,Quantity_Length& Maxx,Quantity_Length& Miny,Quantity_Length& Maxy) const;
  //! Returns the coordinates of the boundary box of all <br>
//!	    markers referenced in the graphic objects displayed <br>
//!	    in the view <me>. <br>
//!  Warning: If <me> is empty or without markers <br>
//!	    returns Minx = Miny = RealLast () and <br>
//!	    returns Maxx = Maxy = RealFirst () <br>
  Standard_EXPORT     void MarkerMinMax(Quantity_Length& Minx,Quantity_Length& Maxx,Quantity_Length& Miny,Quantity_Length& Maxy) const;
  //! Returns the list of graphic objects picked. <br>
  Standard_EXPORT     Handle_Graphic2d_DisplayList Pick(const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real X,const Standard_Real Y,const Standard_Real aPrecision,const Standard_Real aXPosition,const Standard_Real aYPosition,const Standard_Real aScale) ;
  //! Returns the list of graphic objects picked. <br>
  Standard_EXPORT     Handle_Graphic2d_DisplayList PickByCircle(const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real X,const Standard_Real Y,const Standard_Real Radius,const Standard_Real aXPosition,const Standard_Real aYPosition,const Standard_Real aScale) ;
  //! Returns Standard_True if the primitive <me> is: <br>
//!          included in rectangle (<aPickMode = PM_INCLUDE>), <br>
//!          excluded from rectangle (<aPickMode = PM_EXLUDE>), <br>
//!          intersected by rectangle (<aPickMode = PM_INTERSECT>), <br>
//!          defined by Xmin, Ymin, Xmax, Ymax. <br>
//!	        Standard_False if not. <br>
  Standard_EXPORT     Handle_Graphic2d_DisplayList Pick(const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real Xmin,const Standard_Real Ymin,const Standard_Real Xmax,const Standard_Real Ymax,const Standard_Real aXPosition,const Standard_Real aYPosition,const Standard_Real aScale,const Graphic2d_PickMode aPickMode = Graphic2d_PM_INCLUDE) ;
  //! Returns the override color index. <br>
  Standard_EXPORT     Standard_Integer DefaultOverrideColor() const;
  //! Returns Standard_True if the override color index <br>
//!	    is defined, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsDefinedColor() const;
  //! Sets the override color index. <br>
  Standard_EXPORT     void SetDefaultOverrideColor(const Standard_Integer anIndex) ;
  //! by default: TOD_RELATIVE; <br>
//!	    However, except for the shapes, the drawing will be <br>
//!	    made using the absolute deflection. <br>
  Standard_EXPORT     void SetTypeOfDeflection(const Aspect_TypeOfDeflection aTypeOfDeflection = Aspect_TOD_RELATIVE) ;
  //! Returns the deflection type. <br>
  Standard_EXPORT     Aspect_TypeOfDeflection TypeOfDeflection() const;
  //! Sets the absolute deflection value. <br>
  Standard_EXPORT     void SetDeflection(const Quantity_Length aDeflection = 0.001) ;
  //! Returns the absolute deflection value. <br>
  Standard_EXPORT     Standard_Real Deflection() const;
  //! Sets the relative deflection coefficient. <br>
//!	    default value = 0.00033 <br>
  Standard_EXPORT     void SetDeflectionCoefficient(const Standard_Real aCoefficient = 0.00033) ;
  //! Returns the relative deflection coefficient. <br>
  Standard_EXPORT     Standard_Real DeflectionCoefficient() const;
  //! Sets the MIN viewable text height precision in Device space, <br>
//!	    the texts whose the size is < to this precision <br>
//!	    is drawn at screen with an outlined or filled rectangle. <br>
//!          The default text precision value is 0.0015 <br>
  Standard_EXPORT     void SetTextPrecision(const Standard_Real aPrecision = 0.0015) ;
  //! Returns the text precision. <br>
  Standard_EXPORT     Standard_Real TextPrecision() const;
  //! ???? <br>
  Standard_EXPORT     void Convert(const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real aDrawPositionX,const Standard_Real aDrawPositionY,const Standard_Real aXPosition,const Standard_Real aYPosition,const Standard_Real aScale,Standard_Real& aX,Standard_Real& aY) const;
  //! ???? <br>
  Standard_EXPORT     Standard_Real Convert(const Handle(Graphic2d_ViewMapping)& aViewMapping,const Standard_Real aScalar,const Standard_Real aScale) const;
  //! Returns the attached drawer of this view. <br>
  Standard_EXPORT     Handle_Graphic2d_Drawer Drawer() const;

friend class Graphic2d_GraphicObject;
friend class Graphic2d_Buffer;
friend class Graphic2d_Primitive;


  DEFINE_STANDARD_RTTI(Graphic2d_View)

protected:




private: 

  //! Adds the grafic buffer <aBuffer> in the <br>
//!	    view  <me>. <br>
//!  Warning: Called by the constructor of <aBuffer> <br>
  Standard_EXPORT     void Add(const Handle(Graphic2d_Buffer)& aBuffer) ;
  //! Adds the graphic object <aGraphicObject> in the <br>
//!	    view  <me> at the altitude <anAltitude>. <br>
//!  and returns the rank of the object in the display-list. <br>
//!  Warning: Called by the constructor of <aGraphicObject> <br>
  Standard_EXPORT     Standard_Integer Add(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Standard_Integer anAltitude = 1) ;
  //! Changes the altitude <anAltitude> of <br>
//!  the graphic object <aGraphicObject> <br>
//!  and returns the updated rank of the object in the display-list. <br>
  Standard_EXPORT     Standard_Integer Change(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Standard_Integer anAltitude) ;
  //! Removes the graphic object <aGraphicObject> from <br>
//!	    the view <me>. <br>
//!  and returns the previous rank of the deleted object in the display-list. <br>
  Standard_EXPORT     Standard_Integer Remove(const Handle(Graphic2d_GraphicObject)& aGraphicObject) ;
  //! Removes the graphic buffer <aBuffer> from <br>
//!	    the view <me>. <br>
  Standard_EXPORT     void Remove(const Handle(Graphic2d_Buffer)& aBuffer) ;
  //! Forbids the drawing of the specified graphic object in <me>. <br>
  Standard_EXPORT     void Erase(const Handle(Graphic2d_GraphicObject)& aGraphicObject) ;
  //! Returns the rank of <br>
//!  the graphic object <aGraphicObject> in the display-list. <br>
  Standard_EXPORT     Standard_Integer Position(const Handle(Graphic2d_GraphicObject)& aGraphicObject) const;
  //! Returns the altitude of <br>
//!  the graphic object <aGraphicObject> in the display-list. <br>
  Standard_EXPORT     Standard_Integer Altitude(const Handle(Graphic2d_GraphicObject)& aGraphicObject) const;

Graphic2d_SequenceOfGraphicObject myGraphicObjects;
TColStd_SequenceOfInteger myGraphicAltitudes;
Graphic2d_SequenceOfBuffer myBuffers;
Handle_Graphic2d_DisplayList myPickList;
Standard_Integer myDefaultOverrideColor;
Standard_Boolean myOverrideColorIsDef;
Quantity_Length myDeflection;
Standard_Real myDeflectionCoefficient;
Aspect_TypeOfDeflection myTypeOfDeflection;
Handle_Graphic2d_TransientManager myDrawer;
Standard_ShortReal myXCenter;
Standard_ShortReal myYCenter;
Standard_ShortReal mySize;
Standard_ShortReal myXPosition;
Standard_ShortReal myYPosition;
Standard_ShortReal myScale;
Standard_ShortReal myZoom;
Standard_ShortReal myTextPrecision;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif