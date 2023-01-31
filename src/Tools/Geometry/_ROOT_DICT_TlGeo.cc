// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_TlGeo

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "GeomVolSelectorBasic.h"
#include "GeomVolSelectorFiducial.h"
#include "GeomVolSelectorI.h"
#include "GeoUtils.h"
#include "FidShape.h"
#include "GeomVolSelectorRockBox.h"
#include "ROOTGeomAnalyzer.h"
#include "PointGeomAnalyzer.h"
#include "PathSegmentList.h"

// Header files passed via #pragma extra_include

namespace genie {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "GeomVolSelectorI.h", 25,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &genie_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *genie_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace genie {
   namespace geometry {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLgeometry_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::geometry", 0 /*version*/, "GeomVolSelectorI.h", 26,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLgeometry_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLgeometry_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace genie {
   namespace utils {
      namespace geometry {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLgeometry_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::geometry", 0 /*version*/, "", 305,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLutilscLcLgeometry_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLgeometry_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLGeomVolSelectorI_Dictionary();
   static void geniecLcLgeometrycLcLGeomVolSelectorI_TClassManip(TClass*);
   static void delete_geniecLcLgeometrycLcLGeomVolSelectorI(void *p);
   static void deleteArray_geniecLcLgeometrycLcLGeomVolSelectorI(void *p);
   static void destruct_geniecLcLgeometrycLcLGeomVolSelectorI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::GeomVolSelectorI*)
   {
      ::genie::geometry::GeomVolSelectorI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::GeomVolSelectorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::GeomVolSelectorI", "GeomVolSelectorI.h", 31,
                  typeid(::genie::geometry::GeomVolSelectorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLGeomVolSelectorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::GeomVolSelectorI) );
      instance.SetDelete(&delete_geniecLcLgeometrycLcLGeomVolSelectorI);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLGeomVolSelectorI);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLGeomVolSelectorI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::GeomVolSelectorI*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::GeomVolSelectorI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::GeomVolSelectorI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLGeomVolSelectorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::GeomVolSelectorI*)0x0)->GetClass();
      geniecLcLgeometrycLcLGeomVolSelectorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLGeomVolSelectorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLGeomVolSelectorBasic_Dictionary();
   static void geniecLcLgeometrycLcLGeomVolSelectorBasic_TClassManip(TClass*);
   static void *new_geniecLcLgeometrycLcLGeomVolSelectorBasic(void *p = 0);
   static void *newArray_geniecLcLgeometrycLcLGeomVolSelectorBasic(Long_t size, void *p);
   static void delete_geniecLcLgeometrycLcLGeomVolSelectorBasic(void *p);
   static void deleteArray_geniecLcLgeometrycLcLGeomVolSelectorBasic(void *p);
   static void destruct_geniecLcLgeometrycLcLGeomVolSelectorBasic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::GeomVolSelectorBasic*)
   {
      ::genie::geometry::GeomVolSelectorBasic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::GeomVolSelectorBasic));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::GeomVolSelectorBasic", "", 41,
                  typeid(::genie::geometry::GeomVolSelectorBasic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLGeomVolSelectorBasic_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::GeomVolSelectorBasic) );
      instance.SetNew(&new_geniecLcLgeometrycLcLGeomVolSelectorBasic);
      instance.SetNewArray(&newArray_geniecLcLgeometrycLcLGeomVolSelectorBasic);
      instance.SetDelete(&delete_geniecLcLgeometrycLcLGeomVolSelectorBasic);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLGeomVolSelectorBasic);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLGeomVolSelectorBasic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::GeomVolSelectorBasic*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::GeomVolSelectorBasic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::GeomVolSelectorBasic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLGeomVolSelectorBasic_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::GeomVolSelectorBasic*)0x0)->GetClass();
      geniecLcLgeometrycLcLGeomVolSelectorBasic_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLGeomVolSelectorBasic_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLRayIntercept_Dictionary();
   static void geniecLcLgeometrycLcLRayIntercept_TClassManip(TClass*);
   static void *new_geniecLcLgeometrycLcLRayIntercept(void *p = 0);
   static void *newArray_geniecLcLgeometrycLcLRayIntercept(Long_t size, void *p);
   static void delete_geniecLcLgeometrycLcLRayIntercept(void *p);
   static void deleteArray_geniecLcLgeometrycLcLRayIntercept(void *p);
   static void destruct_geniecLcLgeometrycLcLRayIntercept(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::RayIntercept*)
   {
      ::genie::geometry::RayIntercept *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::RayIntercept));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::RayIntercept", "FidShape.h", 44,
                  typeid(::genie::geometry::RayIntercept), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLRayIntercept_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::RayIntercept) );
      instance.SetNew(&new_geniecLcLgeometrycLcLRayIntercept);
      instance.SetNewArray(&newArray_geniecLcLgeometrycLcLRayIntercept);
      instance.SetDelete(&delete_geniecLcLgeometrycLcLRayIntercept);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLRayIntercept);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLRayIntercept);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::RayIntercept*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::RayIntercept*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::RayIntercept*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLRayIntercept_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::RayIntercept*)0x0)->GetClass();
      geniecLcLgeometrycLcLRayIntercept_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLRayIntercept_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLPlaneParam_Dictionary();
   static void geniecLcLgeometrycLcLPlaneParam_TClassManip(TClass*);
   static void *new_geniecLcLgeometrycLcLPlaneParam(void *p = 0);
   static void *newArray_geniecLcLgeometrycLcLPlaneParam(Long_t size, void *p);
   static void delete_geniecLcLgeometrycLcLPlaneParam(void *p);
   static void deleteArray_geniecLcLgeometrycLcLPlaneParam(void *p);
   static void destruct_geniecLcLgeometrycLcLPlaneParam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::PlaneParam*)
   {
      ::genie::geometry::PlaneParam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::PlaneParam));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::PlaneParam", "FidShape.h", 60,
                  typeid(::genie::geometry::PlaneParam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLPlaneParam_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::PlaneParam) );
      instance.SetNew(&new_geniecLcLgeometrycLcLPlaneParam);
      instance.SetNewArray(&newArray_geniecLcLgeometrycLcLPlaneParam);
      instance.SetDelete(&delete_geniecLcLgeometrycLcLPlaneParam);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLPlaneParam);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLPlaneParam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::PlaneParam*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::PlaneParam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::PlaneParam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLPlaneParam_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::PlaneParam*)0x0)->GetClass();
      geniecLcLgeometrycLcLPlaneParam_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLPlaneParam_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLFidShape_Dictionary();
   static void geniecLcLgeometrycLcLFidShape_TClassManip(TClass*);
   static void delete_geniecLcLgeometrycLcLFidShape(void *p);
   static void deleteArray_geniecLcLgeometrycLcLFidShape(void *p);
   static void destruct_geniecLcLgeometrycLcLFidShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::FidShape*)
   {
      ::genie::geometry::FidShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::FidShape));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::FidShape", "FidShape.h", 91,
                  typeid(::genie::geometry::FidShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLFidShape_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::FidShape) );
      instance.SetDelete(&delete_geniecLcLgeometrycLcLFidShape);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLFidShape);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLFidShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::FidShape*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::FidShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::FidShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLFidShape_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::FidShape*)0x0)->GetClass();
      geniecLcLgeometrycLcLFidShape_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLFidShape_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLFidSphere_Dictionary();
   static void geniecLcLgeometrycLcLFidSphere_TClassManip(TClass*);
   static void delete_geniecLcLgeometrycLcLFidSphere(void *p);
   static void deleteArray_geniecLcLgeometrycLcLFidSphere(void *p);
   static void destruct_geniecLcLgeometrycLcLFidSphere(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::FidSphere*)
   {
      ::genie::geometry::FidSphere *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::FidSphere));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::FidSphere", "FidShape.h", 108,
                  typeid(::genie::geometry::FidSphere), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLFidSphere_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::FidSphere) );
      instance.SetDelete(&delete_geniecLcLgeometrycLcLFidSphere);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLFidSphere);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLFidSphere);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::FidSphere*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::FidSphere*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::FidSphere*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLFidSphere_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::FidSphere*)0x0)->GetClass();
      geniecLcLgeometrycLcLFidSphere_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLFidSphere_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLFidCylinder_Dictionary();
   static void geniecLcLgeometrycLcLFidCylinder_TClassManip(TClass*);
   static void delete_geniecLcLgeometrycLcLFidCylinder(void *p);
   static void deleteArray_geniecLcLgeometrycLcLFidCylinder(void *p);
   static void destruct_geniecLcLgeometrycLcLFidCylinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::FidCylinder*)
   {
      ::genie::geometry::FidCylinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::FidCylinder));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::FidCylinder", "FidShape.h", 119,
                  typeid(::genie::geometry::FidCylinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLFidCylinder_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::FidCylinder) );
      instance.SetDelete(&delete_geniecLcLgeometrycLcLFidCylinder);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLFidCylinder);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLFidCylinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::FidCylinder*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::FidCylinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::FidCylinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLFidCylinder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::FidCylinder*)0x0)->GetClass();
      geniecLcLgeometrycLcLFidCylinder_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLFidCylinder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLFidPolyhedron_Dictionary();
   static void geniecLcLgeometrycLcLFidPolyhedron_TClassManip(TClass*);
   static void *new_geniecLcLgeometrycLcLFidPolyhedron(void *p = 0);
   static void *newArray_geniecLcLgeometrycLcLFidPolyhedron(Long_t size, void *p);
   static void delete_geniecLcLgeometrycLcLFidPolyhedron(void *p);
   static void deleteArray_geniecLcLgeometrycLcLFidPolyhedron(void *p);
   static void destruct_geniecLcLgeometrycLcLFidPolyhedron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::FidPolyhedron*)
   {
      ::genie::geometry::FidPolyhedron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::FidPolyhedron));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::FidPolyhedron", "FidShape.h", 137,
                  typeid(::genie::geometry::FidPolyhedron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLFidPolyhedron_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::FidPolyhedron) );
      instance.SetNew(&new_geniecLcLgeometrycLcLFidPolyhedron);
      instance.SetNewArray(&newArray_geniecLcLgeometrycLcLFidPolyhedron);
      instance.SetDelete(&delete_geniecLcLgeometrycLcLFidPolyhedron);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLFidPolyhedron);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLFidPolyhedron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::FidPolyhedron*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::FidPolyhedron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::FidPolyhedron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLFidPolyhedron_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::FidPolyhedron*)0x0)->GetClass();
      geniecLcLgeometrycLcLFidPolyhedron_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLFidPolyhedron_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLPathSegment_Dictionary();
   static void geniecLcLgeometrycLcLPathSegment_TClassManip(TClass*);
   static void *new_geniecLcLgeometrycLcLPathSegment(void *p = 0);
   static void *newArray_geniecLcLgeometrycLcLPathSegment(Long_t size, void *p);
   static void delete_geniecLcLgeometrycLcLPathSegment(void *p);
   static void deleteArray_geniecLcLgeometrycLcLPathSegment(void *p);
   static void destruct_geniecLcLgeometrycLcLPathSegment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::PathSegment*)
   {
      ::genie::geometry::PathSegment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::PathSegment));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::PathSegment", "PathSegmentList.h", 57,
                  typeid(::genie::geometry::PathSegment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLPathSegment_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::PathSegment) );
      instance.SetNew(&new_geniecLcLgeometrycLcLPathSegment);
      instance.SetNewArray(&newArray_geniecLcLgeometrycLcLPathSegment);
      instance.SetDelete(&delete_geniecLcLgeometrycLcLPathSegment);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLPathSegment);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLPathSegment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::PathSegment*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::PathSegment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::PathSegment*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLPathSegment_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::PathSegment*)0x0)->GetClass();
      geniecLcLgeometrycLcLPathSegment_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLPathSegment_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLPathSegmentList_Dictionary();
   static void geniecLcLgeometrycLcLPathSegmentList_TClassManip(TClass*);
   static void *new_geniecLcLgeometrycLcLPathSegmentList(void *p = 0);
   static void *newArray_geniecLcLgeometrycLcLPathSegmentList(Long_t size, void *p);
   static void delete_geniecLcLgeometrycLcLPathSegmentList(void *p);
   static void deleteArray_geniecLcLgeometrycLcLPathSegmentList(void *p);
   static void destruct_geniecLcLgeometrycLcLPathSegmentList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::PathSegmentList*)
   {
      ::genie::geometry::PathSegmentList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::PathSegmentList));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::PathSegmentList", "PathSegmentList.h", 124,
                  typeid(::genie::geometry::PathSegmentList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLPathSegmentList_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::PathSegmentList) );
      instance.SetNew(&new_geniecLcLgeometrycLcLPathSegmentList);
      instance.SetNewArray(&newArray_geniecLcLgeometrycLcLPathSegmentList);
      instance.SetDelete(&delete_geniecLcLgeometrycLcLPathSegmentList);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLPathSegmentList);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLPathSegmentList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::PathSegmentList*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::PathSegmentList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::PathSegmentList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLPathSegmentList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::PathSegmentList*)0x0)->GetClass();
      geniecLcLgeometrycLcLPathSegmentList_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLPathSegmentList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLGeomVolSelectorFiducial_Dictionary();
   static void geniecLcLgeometrycLcLGeomVolSelectorFiducial_TClassManip(TClass*);
   static void *new_geniecLcLgeometrycLcLGeomVolSelectorFiducial(void *p = 0);
   static void *newArray_geniecLcLgeometrycLcLGeomVolSelectorFiducial(Long_t size, void *p);
   static void delete_geniecLcLgeometrycLcLGeomVolSelectorFiducial(void *p);
   static void deleteArray_geniecLcLgeometrycLcLGeomVolSelectorFiducial(void *p);
   static void destruct_geniecLcLgeometrycLcLGeomVolSelectorFiducial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::GeomVolSelectorFiducial*)
   {
      ::genie::geometry::GeomVolSelectorFiducial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::GeomVolSelectorFiducial));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::GeomVolSelectorFiducial", "", 133,
                  typeid(::genie::geometry::GeomVolSelectorFiducial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLGeomVolSelectorFiducial_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::GeomVolSelectorFiducial) );
      instance.SetNew(&new_geniecLcLgeometrycLcLGeomVolSelectorFiducial);
      instance.SetNewArray(&newArray_geniecLcLgeometrycLcLGeomVolSelectorFiducial);
      instance.SetDelete(&delete_geniecLcLgeometrycLcLGeomVolSelectorFiducial);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLGeomVolSelectorFiducial);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLGeomVolSelectorFiducial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::GeomVolSelectorFiducial*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::GeomVolSelectorFiducial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::GeomVolSelectorFiducial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLGeomVolSelectorFiducial_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::GeomVolSelectorFiducial*)0x0)->GetClass();
      geniecLcLgeometrycLcLGeomVolSelectorFiducial_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLGeomVolSelectorFiducial_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLROOTGeomAnalyzer_Dictionary();
   static void geniecLcLgeometrycLcLROOTGeomAnalyzer_TClassManip(TClass*);
   static void *new_geniecLcLgeometrycLcLROOTGeomAnalyzer(void *p = 0);
   static void *newArray_geniecLcLgeometrycLcLROOTGeomAnalyzer(Long_t size, void *p);
   static void delete_geniecLcLgeometrycLcLROOTGeomAnalyzer(void *p);
   static void deleteArray_geniecLcLgeometrycLcLROOTGeomAnalyzer(void *p);
   static void destruct_geniecLcLgeometrycLcLROOTGeomAnalyzer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::ROOTGeomAnalyzer*)
   {
      ::genie::geometry::ROOTGeomAnalyzer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::ROOTGeomAnalyzer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::ROOTGeomAnalyzer", "", 613,
                  typeid(::genie::geometry::ROOTGeomAnalyzer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLROOTGeomAnalyzer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::ROOTGeomAnalyzer) );
      instance.SetNew(&new_geniecLcLgeometrycLcLROOTGeomAnalyzer);
      instance.SetNewArray(&newArray_geniecLcLgeometrycLcLROOTGeomAnalyzer);
      instance.SetDelete(&delete_geniecLcLgeometrycLcLROOTGeomAnalyzer);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLROOTGeomAnalyzer);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLROOTGeomAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::ROOTGeomAnalyzer*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::ROOTGeomAnalyzer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::ROOTGeomAnalyzer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLROOTGeomAnalyzer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::ROOTGeomAnalyzer*)0x0)->GetClass();
      geniecLcLgeometrycLcLROOTGeomAnalyzer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLROOTGeomAnalyzer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLgeometrycLcLPointGeomAnalyzer_Dictionary();
   static void geniecLcLgeometrycLcLPointGeomAnalyzer_TClassManip(TClass*);
   static void delete_geniecLcLgeometrycLcLPointGeomAnalyzer(void *p);
   static void deleteArray_geniecLcLgeometrycLcLPointGeomAnalyzer(void *p);
   static void destruct_geniecLcLgeometrycLcLPointGeomAnalyzer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::geometry::PointGeomAnalyzer*)
   {
      ::genie::geometry::PointGeomAnalyzer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::geometry::PointGeomAnalyzer));
      static ::ROOT::TGenericClassInfo 
         instance("genie::geometry::PointGeomAnalyzer", "", 786,
                  typeid(::genie::geometry::PointGeomAnalyzer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLgeometrycLcLPointGeomAnalyzer_Dictionary, isa_proxy, 0,
                  sizeof(::genie::geometry::PointGeomAnalyzer) );
      instance.SetDelete(&delete_geniecLcLgeometrycLcLPointGeomAnalyzer);
      instance.SetDeleteArray(&deleteArray_geniecLcLgeometrycLcLPointGeomAnalyzer);
      instance.SetDestructor(&destruct_geniecLcLgeometrycLcLPointGeomAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::geometry::PointGeomAnalyzer*)
   {
      return GenerateInitInstanceLocal((::genie::geometry::PointGeomAnalyzer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::geometry::PointGeomAnalyzer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLgeometrycLcLPointGeomAnalyzer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::geometry::PointGeomAnalyzer*)0x0)->GetClass();
      geniecLcLgeometrycLcLPointGeomAnalyzer_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLgeometrycLcLPointGeomAnalyzer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLGeomVolSelectorI(void *p) {
      delete ((::genie::geometry::GeomVolSelectorI*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLGeomVolSelectorI(void *p) {
      delete [] ((::genie::geometry::GeomVolSelectorI*)p);
   }
   static void destruct_geniecLcLgeometrycLcLGeomVolSelectorI(void *p) {
      typedef ::genie::geometry::GeomVolSelectorI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::GeomVolSelectorI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLgeometrycLcLGeomVolSelectorBasic(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::GeomVolSelectorBasic : new ::genie::geometry::GeomVolSelectorBasic;
   }
   static void *newArray_geniecLcLgeometrycLcLGeomVolSelectorBasic(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::GeomVolSelectorBasic[nElements] : new ::genie::geometry::GeomVolSelectorBasic[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLGeomVolSelectorBasic(void *p) {
      delete ((::genie::geometry::GeomVolSelectorBasic*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLGeomVolSelectorBasic(void *p) {
      delete [] ((::genie::geometry::GeomVolSelectorBasic*)p);
   }
   static void destruct_geniecLcLgeometrycLcLGeomVolSelectorBasic(void *p) {
      typedef ::genie::geometry::GeomVolSelectorBasic current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::GeomVolSelectorBasic

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLgeometrycLcLRayIntercept(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::RayIntercept : new ::genie::geometry::RayIntercept;
   }
   static void *newArray_geniecLcLgeometrycLcLRayIntercept(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::RayIntercept[nElements] : new ::genie::geometry::RayIntercept[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLRayIntercept(void *p) {
      delete ((::genie::geometry::RayIntercept*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLRayIntercept(void *p) {
      delete [] ((::genie::geometry::RayIntercept*)p);
   }
   static void destruct_geniecLcLgeometrycLcLRayIntercept(void *p) {
      typedef ::genie::geometry::RayIntercept current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::RayIntercept

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLgeometrycLcLPlaneParam(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::PlaneParam : new ::genie::geometry::PlaneParam;
   }
   static void *newArray_geniecLcLgeometrycLcLPlaneParam(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::PlaneParam[nElements] : new ::genie::geometry::PlaneParam[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLPlaneParam(void *p) {
      delete ((::genie::geometry::PlaneParam*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLPlaneParam(void *p) {
      delete [] ((::genie::geometry::PlaneParam*)p);
   }
   static void destruct_geniecLcLgeometrycLcLPlaneParam(void *p) {
      typedef ::genie::geometry::PlaneParam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::PlaneParam

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLFidShape(void *p) {
      delete ((::genie::geometry::FidShape*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLFidShape(void *p) {
      delete [] ((::genie::geometry::FidShape*)p);
   }
   static void destruct_geniecLcLgeometrycLcLFidShape(void *p) {
      typedef ::genie::geometry::FidShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::FidShape

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLFidSphere(void *p) {
      delete ((::genie::geometry::FidSphere*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLFidSphere(void *p) {
      delete [] ((::genie::geometry::FidSphere*)p);
   }
   static void destruct_geniecLcLgeometrycLcLFidSphere(void *p) {
      typedef ::genie::geometry::FidSphere current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::FidSphere

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLFidCylinder(void *p) {
      delete ((::genie::geometry::FidCylinder*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLFidCylinder(void *p) {
      delete [] ((::genie::geometry::FidCylinder*)p);
   }
   static void destruct_geniecLcLgeometrycLcLFidCylinder(void *p) {
      typedef ::genie::geometry::FidCylinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::FidCylinder

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLgeometrycLcLFidPolyhedron(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::FidPolyhedron : new ::genie::geometry::FidPolyhedron;
   }
   static void *newArray_geniecLcLgeometrycLcLFidPolyhedron(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::FidPolyhedron[nElements] : new ::genie::geometry::FidPolyhedron[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLFidPolyhedron(void *p) {
      delete ((::genie::geometry::FidPolyhedron*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLFidPolyhedron(void *p) {
      delete [] ((::genie::geometry::FidPolyhedron*)p);
   }
   static void destruct_geniecLcLgeometrycLcLFidPolyhedron(void *p) {
      typedef ::genie::geometry::FidPolyhedron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::FidPolyhedron

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLgeometrycLcLPathSegment(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::PathSegment : new ::genie::geometry::PathSegment;
   }
   static void *newArray_geniecLcLgeometrycLcLPathSegment(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::PathSegment[nElements] : new ::genie::geometry::PathSegment[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLPathSegment(void *p) {
      delete ((::genie::geometry::PathSegment*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLPathSegment(void *p) {
      delete [] ((::genie::geometry::PathSegment*)p);
   }
   static void destruct_geniecLcLgeometrycLcLPathSegment(void *p) {
      typedef ::genie::geometry::PathSegment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::PathSegment

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLgeometrycLcLPathSegmentList(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::PathSegmentList : new ::genie::geometry::PathSegmentList;
   }
   static void *newArray_geniecLcLgeometrycLcLPathSegmentList(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::PathSegmentList[nElements] : new ::genie::geometry::PathSegmentList[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLPathSegmentList(void *p) {
      delete ((::genie::geometry::PathSegmentList*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLPathSegmentList(void *p) {
      delete [] ((::genie::geometry::PathSegmentList*)p);
   }
   static void destruct_geniecLcLgeometrycLcLPathSegmentList(void *p) {
      typedef ::genie::geometry::PathSegmentList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::PathSegmentList

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLgeometrycLcLGeomVolSelectorFiducial(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::GeomVolSelectorFiducial : new ::genie::geometry::GeomVolSelectorFiducial;
   }
   static void *newArray_geniecLcLgeometrycLcLGeomVolSelectorFiducial(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::GeomVolSelectorFiducial[nElements] : new ::genie::geometry::GeomVolSelectorFiducial[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLGeomVolSelectorFiducial(void *p) {
      delete ((::genie::geometry::GeomVolSelectorFiducial*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLGeomVolSelectorFiducial(void *p) {
      delete [] ((::genie::geometry::GeomVolSelectorFiducial*)p);
   }
   static void destruct_geniecLcLgeometrycLcLGeomVolSelectorFiducial(void *p) {
      typedef ::genie::geometry::GeomVolSelectorFiducial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::GeomVolSelectorFiducial

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLgeometrycLcLROOTGeomAnalyzer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::ROOTGeomAnalyzer : new ::genie::geometry::ROOTGeomAnalyzer;
   }
   static void *newArray_geniecLcLgeometrycLcLROOTGeomAnalyzer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::geometry::ROOTGeomAnalyzer[nElements] : new ::genie::geometry::ROOTGeomAnalyzer[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLROOTGeomAnalyzer(void *p) {
      delete ((::genie::geometry::ROOTGeomAnalyzer*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLROOTGeomAnalyzer(void *p) {
      delete [] ((::genie::geometry::ROOTGeomAnalyzer*)p);
   }
   static void destruct_geniecLcLgeometrycLcLROOTGeomAnalyzer(void *p) {
      typedef ::genie::geometry::ROOTGeomAnalyzer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::ROOTGeomAnalyzer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLgeometrycLcLPointGeomAnalyzer(void *p) {
      delete ((::genie::geometry::PointGeomAnalyzer*)p);
   }
   static void deleteArray_geniecLcLgeometrycLcLPointGeomAnalyzer(void *p) {
      delete [] ((::genie::geometry::PointGeomAnalyzer*)p);
   }
   static void destruct_geniecLcLgeometrycLcLPointGeomAnalyzer(void *p) {
      typedef ::genie::geometry::PointGeomAnalyzer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::geometry::PointGeomAnalyzer

namespace {
  void TriggerDictionaryInitialization_libGTlGeo_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Tools/Geometry",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Tools/Geometry",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Tools/Geometry",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Tools/Geometry/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGTlGeo dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/GeomVolSelectorI.h")))  GeomVolSelectorI;}}
namespace genie{namespace geometry{class GeomVolSelectorBasic;}}
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/FidShape.h")))  RayIntercept;}}
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/FidShape.h")))  PlaneParam;}}
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/FidShape.h")))  FidShape;}}
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/FidShape.h")))  FidSphere;}}
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/FidShape.h")))  FidCylinder;}}
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/FidShape.h")))  FidPolyhedron;}}
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/PathSegmentList.h")))  PathSegment;}}
namespace genie{namespace geometry{class __attribute__((annotate("$clingAutoload$Tools/Geometry/PathSegmentList.h")))  PathSegmentList;}}
namespace genie{namespace geometry{class GeomVolSelectorFiducial;}}
namespace genie{namespace geometry{class ROOTGeomAnalyzer;}}
namespace genie{namespace geometry{class PointGeomAnalyzer;}}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGTlGeo dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::geometry::GeomVolSelectorBasic

\brief    GENIE Interface for user-defined volume selector functors
          This basic version allows configurations that depend on PathSegment elements'
          material/media/volume and/or "path"

\author   Robert Hatcher <rhatcher@fnal.gov>
          FNAL

\created  December 3, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GEOM_VOL_SELECTOR_BASIC_H_
#define _GEOM_VOL_SELECTOR_BASIC_H_

#include <string>
#include <vector>
#include "TLorentzVector.h"
#include "Tools/Geometry/GeomVolSelectorI.h"

using namespace std;

namespace genie {
namespace geometry {

class PathSegmentList;

class GeomVolSelectorBasic : public GeomVolSelectorI {

public :
           GeomVolSelectorBasic();
  virtual ~GeomVolSelectorBasic();

  ///
  ///  Selections are string based, elements are specified as a list of items separated by
  ///  comma, semicolon or colons.  Elements that start with "-" are rejections; elements
  ///  that start with "+" (or nothing) are required, e.g.
  ///     "+N276B,-air0"
  ///
  void     SetVolumeSelection(string volstr);
  void     SetMediumSelection(string medstr);
  void     SetMaterialSelection(string matstr);
  void     SetPathSelection(string pathstr);

  //
  // define the missing parts of the GeomVolSelectorI interface:
  //
  void TrimSegment(PathSegment& segment) const;
  void BeginPSList(const PathSegmentList* untrimmed) const;
  void EndPSList() const;

protected:

  void ParseSelection(const string& str, vector<string>& required, vector<string>& forbidden);
  bool RejectString(const string& str, const vector<string>& required, const vector<string>& forbidden) const;

  // PathSegment must contain one of the things in these lists (if there are any)
  vector<string> fRequiredVol;
  vector<string> fRequiredMed;
  vector<string> fRequiredMat;
  vector<string> fRequiredPath;

  // PathSegment must not contain any of the things in these lists
  vector<string> fForbiddenVol;
  vector<string> fForbiddenMed;
  vector<string> fForbiddenMat;
  vector<string> fForbiddenPath;

};

}      // geometry namespace
}      // genie    namespace

#endif // _GEOM_VOL_SELECTOR_BASIC_H_
//____________________________________________________________________________
/*!

\class    genie::geometry::GeomVolSelectorFiducial

\brief    GENIE Interface for user-defined volume selector functors
          Trim path segments based on the intersection with a cylinder, box
          or sphere as well as everything the Basic selector can do.

          Assumes that the fiducial volume is defined in the same coords
          and units as the PathSegmentList ("top vol") and that the ray
          always starts outside the defined volume.  (If not user should
          cap the fid volume just down from the flux window or use the
          SetUpstreamZ() in the flux driver to push the ray back to make it so).

\author   Robert Hatcher <rhatcher@fnal.gov>
          FNAL

\created  July 14, 2010

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE

*/
//____________________________________________________________________________

#ifndef _GEOM_VOL_SELECTOR_FIDUCIAL_H_
#define _GEOM_VOL_SELECTOR_FIDUCIAL_H_

#include <string>
#include <vector>

#include "TMath.h"
#include "TLorentzVector.h"
#include "Tools/Geometry/FidShape.h"
#include "Tools/Geometry/PathSegmentList.h"
#include "Tools/Geometry/GeomVolSelectorBasic.h"

using namespace std;

namespace genie {
namespace geometry {

class GeomVolSelectorFiducial : public GeomVolSelectorBasic {

public :
           GeomVolSelectorFiducial();
  virtual ~GeomVolSelectorFiducial();

  //
  // define the missing part of the GeomVolSelectorI interface:
  //
  void TrimSegment(PathSegment& segment) const;
  void BeginPSList(const PathSegmentList* untrimmed) const;
  void EndPSList() const;

  // allow the selection to be reversed (i.e. exclude "fid" region)
  void SetReverseFiducial(Bool_t reverse=true) { fSelectReverse = reverse; }

  //
  // set fiducial volume parameter (call only one)
  // in "top vol" coordinates and units
  //
  void AdoptFidShape(FidShape* shape);
  void MakeSphere(Double_t x0, Double_t y0, Double_t z0, Double_t radius);
  void MakeZCylinder(Double_t x0, Double_t y0, Double_t radius, Double_t zmin, Double_t zmax);
  void MakeCylinder(Double_t* base, Double_t* axis, Double_t radius, Double_t* cap1, Double_t* cap2);
  void MakeBox(Double_t* xyzmin, Double_t* xyzmax);
  void MakeZPolygon(Int_t n, Double_t x0, Double_t y0, Double_t inradius, Double_t phi0deg, Double_t zmin, Double_t zmax);

  // by default shapes are assumed to be in "top vol" coordinates
  // in the case where they are entered in master coordinates
  // ask the configured shape to convert itself  
  // (do this only once for any shape definition)
  virtual void ConvertShapeMaster2Top(const ROOTGeomAnalyzer* rgeom);

protected:

  static Bool_t NewStepPairs(Bool_t selectReverse,
                             Double_t raydist, Double_t slo, Double_t shi, 
                             const RayIntercept& intercept, Bool_t& split,
                             StepRange& step1, StepRange& step2);

  Bool_t fSelectReverse; /// select for "outside" fiducial?

  FidShape* fShape;   /// shape

  // values calculated during BeginPSList():
  mutable const PathSegmentList* fCurrPathSegmentList;  // reference only, for ray info
  mutable RayIntercept fIntercept;  // current intercept parameters

};

}      // geometry namespace
}      // genie    namespace

#endif // _GEOM_VOL_SELECTOR_FIDUCIAL_H_
//____________________________________________________________________________
/*!

\class    genie::geometry::GeomVolSelectorI

\brief    GENIE Interface for user-defined volume selector functors

\author   Robert Hatcher <rhatcher@fnal.gov>
          FNAL

\created  August 25, 2009

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GEOM_VOL_SELECTOR_I_H_
#define _GEOM_VOL_SELECTOR_I_H_

#include <string>
#include "TLorentzVector.h"

namespace genie {
namespace geometry {

class PathSegment;
class PathSegmentList;

class GeomVolSelectorI {

public :
  virtual ~GeomVolSelectorI();
  //
  // define the GeomVolSelectorI interface:
  //

  /// create and return a new PathSegmentList from the old list
  /// relinquishes ownership of returned object
  virtual PathSegmentList* GenerateTrimmedList(const PathSegmentList* untrimmed) const;

  /// This is the method every derived version must implement
  /// To reject a segment outright:  segment.fStepRangeSet.clear()
  virtual void TrimSegment(PathSegment& segment) const = 0;

  /// Every derived version must also respond to a signal that starts
  /// a new path segment list processing and ends it.
  /// In general they can simply ignore the signal.
  /// If the derived class needs to cache something, make it mutable
  virtual void BeginPSList(const PathSegmentList* untrimmed) const = 0;
  virtual void EndPSList() const = 0;

  /// configure for individual neutrino ray
  void SetCurrentRay(const TLorentzVector& x4, const TLorentzVector& p4)
  { fX4 = x4; fP4 = p4; }

  /// set scale factor for SI to "raydist" units of PathSegmentList
  void SetSI2Local(double scale) { fScale = scale; }

  void        SetRemoveEntries(bool rmset) { fRemoveEntries = rmset; }
  bool        GetRemoveEntries()           { return fRemoveEntries; }

  void        SetNeedPath()                { fNeedPath = true; }  /// allow toggle *on* only
  bool        GetNeedPath() const          { return fNeedPath; }

  std::string GetName() const              { return fName; }

protected:

 GeomVolSelectorI();
 GeomVolSelectorI(std::string name);

 TLorentzVector     fX4;             ///< current neutrino ray's start position (global)
 TLorentzVector     fP4;             ///< current neutrino ray's momentum (global)
 double             fScale;          ///< SI->raydist scale factor
 bool               fRemoveEntries;  ///< whether selector should remove entries or set hi=lo
 bool               fNeedPath;       ///< selector needs PathSegment "path" string
 std::string        fName;           ///< volume selector name    

};

}      // geometry namespace
}      // genie    namespace

#endif // _GEOM_VOL_SELECTOR_I_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::geometry

\brief      Geometry utilities

\author     Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
            University of Liverpool & STFC Rutherford Appleton Lab

\created    March 26, 2009

\cpright    Copyright (c) 2003-2019, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org
            or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GEO_UTILS_H_
#define _GEO_UTILS_H_

#include <string>

class TGeoVolume;

using std::string;

namespace genie {
namespace utils {

namespace geometry   
{
  void RecursiveExhaust(TGeoVolume *topvol, string volnames, bool exhaust);

} // geometry namespace
} // utils namespace
} // genie namespace

#endif // _GEO_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::geometry::FidShape

\brief    Some simple volumes that know how to calculate where a ray 
          intercepts them.

\author   Robert Hatcher <rhatcher@fnal.gov>
          FNAL

\created  August 3, 2010

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE

          Some of the algorithms here are (loosely) based on those found in:
          Graphics Gems II, ISBN 0-12-064480-0
          pg. 247 "Fast Ray-Convex Polyhedron Intersection"
          Graphics Gems IV, ed. Paul Heckbert, ISBN 0-12-336156-7  T385.G6974 (1994)
          pg. 356 "Intersecting a Ray with a Cylinder"
*/
//____________________________________________________________________________

#ifndef _FID_SHAPE_H_
#define _FID_SHAPE_H_

#include <vector>
#include <cfloat> // for DBL_MAX

#include "TMath.h"
#include "TLorentzVector.h"

namespace genie {
namespace geometry {

class ROOTGeomAnalyzer;

class PlaneParam;
std::ostream& operator<< (std::ostream& stream, 
                           const genie::geometry::PlaneParam& pparam);

class RayIntercept {
  /// A class to hold information about where a ray intercepts a
  /// convex shape.  
  public:
  RayIntercept() : fDistIn(-DBL_MAX), fDistOut(DBL_MAX), 
      fIsHit(false), fSurfIn(-1), fSurfOut(-1) { ; }
  ~RayIntercept() { ; }
  Double_t  fDistIn;   /// distance along ray to enter fid volume
  Double_t  fDistOut;  /// distance along ray to exit fid volume
  Bool_t    fIsHit;    /// was the volume hit
  Int_t     fSurfIn;   /// what surface was hit on way in
  Int_t     fSurfOut;  /// what surface was hit on way out
};
std::ostream& operator<< (std::ostream& stream, 
                          const genie::geometry::RayIntercept& ri);

class PlaneParam {
  // A plane is described by the equation a*x +b*y + c*z + d = 0
  // n = [a,b,c] are the plane normal components  (one must be non-zero)
  // d is the distance to the origin
  // for a point "p" on the plane:  d = - p.n    (note the "-")
  public:
  PlaneParam(Double_t ain=0, Double_t bin=0, Double_t cin=0, Double_t din=0)
    { a = ain; b = bin; c = cin; d = din; Normalize(); }
  PlaneParam(Double_t* abcd)
    { a = abcd[0]; b = abcd[1]; c = abcd[2]; d = abcd[3]; Normalize(); }

  void     Normalize()  // make the a,b,c parameters a unit normal
    { Double_t mag = TMath::Sqrt(a*a+b*b+c*c); 
      if (mag>0) { a /= mag; b /= mag; c /= mag; d /= mag; } }
  Double_t Vn(const TVector3& raybase) const
    { return raybase.X()*a + raybase.Y()*b + raybase.Z()*c + d; }
  Double_t Vd(const TVector3& raycos) const
    { return raycos.Px()*a + raycos.Py()*b + raycos.Pz()*c; }
  Bool_t   IsValid() const { return (a != 0 || b != 0 || c != 0 ); }
  void     ConvertMaster2Top(const ROOTGeomAnalyzer* rgeom);
  void     Print(std::ostream& stream) const;
  friend std::ostream& operator<< (std::ostream& stream, 
                                   const genie::geometry::PlaneParam& pparam);

  Double_t a, b, c, d; // the parameters
};

class FidShape;
std::ostream& operator<< (std::ostream& stream, 
                          const genie::geometry::FidShape& shape);

class FidShape {
  // generic fiducial shape
  public:
  FidShape() { ; } 
  virtual ~FidShape() { ; }
  /// derived classes must implement the Intercept() method
  /// which calculates the entry/exit point of a ray w/ the shape
  virtual RayIntercept Intercept(const TVector3& start, const TVector3& dir) const = 0; 
  /// derived classes must implement the ConvertMaster2Top() method
  /// which transforms the shape specification from master coordinates to "top vol"
  virtual void ConvertMaster2Top(const ROOTGeomAnalyzer* rgeom) = 0;
  virtual void Print(std::ostream& stream) const = 0;
  friend std::ostream& operator<< (std::ostream& stream, 
                              const genie::geometry::FidShape& shape);

};

class FidSphere : public FidShape {
 public:
 FidSphere(const TVector3& center, Double_t radius) : fCenter(center), fSRadius(radius) { ; }
 RayIntercept Intercept(const TVector3& start, const TVector3& dir) const;
 void         ConvertMaster2Top(const ROOTGeomAnalyzer* rgeom);
 void         Print(std::ostream& stream) const;
 protected:
 TVector3    fCenter;   /// center of the sphere
 Double_t    fSRadius;  /// radius of the sphere
};

class FidCylinder : public FidShape {
 public:
 FidCylinder(const TVector3& base, const TVector3& axis, Double_t radius, 
             const PlaneParam& cap1, const PlaneParam& cap2) 
   : fCylBase(base), fCylAxis(axis), fCylRadius(radius), fCylCap1(cap1), fCylCap2(cap2) { ; }
 RayIntercept Intercept(const TVector3& start, const TVector3& dir) const;
 RayIntercept InterceptUncapped(const TVector3& start, const TVector3& dir) const;
 void         ConvertMaster2Top(const ROOTGeomAnalyzer* rgeom);
 void         Print(std::ostream& stream) const;
 protected:

 TVector3    fCylBase;   /// base point on cylinder axis
 TVector3    fCylAxis;   /// direction cosines of cylinder axis
 Double_t    fCylRadius; /// radius of cylinder
 PlaneParam  fCylCap1;   /// define a plane for 1st cylinder cap
 PlaneParam  fCylCap2;   /// define a plane for 2nd cylinder cap
};

class FidPolyhedron : public FidShape {
  /// convex polyhedron is made of multiple planar equations
 public:
 FidPolyhedron() { ; }
 void push_back(const PlaneParam& pln) { fPolyFaces.push_back(pln); }
 void clear() { fPolyFaces.clear(); }
 RayIntercept Intercept(const TVector3& start, const TVector3& dir) const;
 void         ConvertMaster2Top(const ROOTGeomAnalyzer* rgeom);
 void         Print(std::ostream& stream) const;
 protected:
 std::vector<PlaneParam> fPolyFaces;  /// the collection of planar equations for the faces
};

}      // geometry namespace
}      // genie    namespace

#endif // _FID_SHAPE_H_
//____________________________________________________________________________
/*!

\class    genie::geometry::GeomVolSelectorRockBox

\brief    GENIE Interface for limiting vertex selection in the rock
          to a volume that depends (in part) on the neutrino p4.
          Uses GeomVolSelectorFiducial to possibly exclude an inner region.

\author   Robert Hatcher <rhatcher@fnal.gov>
          FNAL

\created  August 5, 2010

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE

*/
//____________________________________________________________________________

#ifndef _GEOM_VOL_SELECTOR_ROCKBOX_H_
#define _GEOM_VOL_SELECTOR_ROCKBOX_H_


#include <string>
#include <vector>

#include "TMath.h"
#include "TLorentzVector.h"
#include "Tools/Geometry/FidShape.h"
#include "Tools/Geometry/PathSegmentList.h"
#include "Tools/Geometry/GeomVolSelectorFiducial.h"

using namespace std;

namespace genie {
namespace geometry {

class GeomVolSelectorRockBox : public GeomVolSelectorFiducial {

public :
           GeomVolSelectorRockBox();
  virtual ~GeomVolSelectorRockBox();

  //
  // define the missing part of the GeomVolSelectorI interface:
  //
  void TrimSegment(PathSegment& segment) const;
  void BeginPSList(const PathSegmentList* untrimmed) const;
  void EndPSList() const;

  //
  // set fiducial volume parameter (call only once)
  //   in "top vol" coordinates and units
  // set minimal (inner (optionally exclusion)) extent 
  //   before either wall or inclusion extent (which define region 
  //   where events are always accepted)
  void SetRockBoxMinimal(Double_t* xyzmin, Double_t* xyzmax);
  void SetRockBoxInclusion(Double_t* xyzmin, Double_t* xyzmax);
  void SetMinimumWall(Double_t w);
  void SetDeDx(Double_t dedx) { fDeDx = dedx; }
  void SetExpandFromInclusion(bool how=false) { fExpandInclusion = how; }

  // by default shapes are assumed to be in "top vol" coordinates
  // in the case where they are entered in master coordinates
  // ask the configured shape to convert itself  
  // (do this only once for any shape definition)
  virtual void ConvertShapeMaster2Top(const ROOTGeomAnalyzer* rgeom);

protected:

  void MakeRockBox() const;

  Double_t  fMinimalXYZMin[3];   /// interior box lower corner
  Double_t  fMinimalXYZMax[3];   /// interior box upper corner
  Double_t  fMinimumWall;        /// minimum distance around (XYZmin,XYZmax)
  Double_t  fInclusionXYZMin[3]; /// box within which events are always 
  Double_t  fInclusionXYZMax[3]; ///   accepted
  Double_t  fDeDx;               /// how to scale from energy to distance
  Bool_t    fExpandInclusion;    /// expand from minimal or inclusion box?

  mutable FidShape* fRockBoxShape;   /// shape changes for every nu ray
  
  const ROOTGeomAnalyzer* fROOTGeom;  // ref! only (for coordinate transforms, units)

  // values calculated during BeginPSList():
  mutable RayIntercept fInterceptRock;  // current intercept parameters

};

}      // geometry namespace
}      // genie    namespace

#endif // _GEOM_VOL_SELECTOR_ROCKBOX_H_
//____________________________________________________________________________
/*!

\class    genie::geometry::ROOTGeomAnalyzer

\brief    A ROOT/GEANT4 geometry driver

\author   Anselmo Meregaglia <anselmo.meregaglia \at cern.ch>, ETH Zurich
          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>, STFC, Rutherford Lab
          Robert Hatcher <rhatcher \at fnal.gov>, Fermilab

\created  May 24, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _ROOT_GEOMETRY_ANALYZER_H_
#define _ROOT_GEOMETRY_ANALYZER_H_

#include <string>
#include <algorithm>

#include <TGeoManager.h>
#include <TVector3.h>

#include "Framework/EventGen/GeomAnalyzerI.h"
#include "Framework/ParticleData/PDGUtils.h"

class TGeoVolume;
class TGeoMaterial;
class TGeoMixture;
class TGeoElement;
class TGeoHMatrix;

using std::string;

namespace genie    {

class GFluxI;

namespace geometry {

class PathSegmentList;
class GeomVolSelectorI;

class ROOTGeomAnalyzer : public GeomAnalyzerI {

public :
  ROOTGeomAnalyzer(string geometry_filename);
  ROOTGeomAnalyzer(TGeoManager * gm);
  ROOTGeomAnalyzer() : GeomAnalyzerI() { ; } // used ONLY for derived class overloading
 ~ROOTGeomAnalyzer();

  /// implement the GeomAnalyzerI interface

  virtual const  PDGCodeList &    ListOfTargetNuclei    (void);
  virtual const  PathLengthList & ComputeMaxPathLengths (void);

  virtual const  PathLengthList & ComputePathLengths(const TLorentzVector & x, 
                                                     const TLorentzVector & p);
  virtual const  TVector3 &       GenerateVertex(const TLorentzVector & x, 
                                                 const TLorentzVector & p, int tgtpdg);

  /// set geometry driver's configuration options

  virtual void SetScannerNPoints    (int    np) { fNPoints    = np; } /* box  scanner */
  virtual void SetScannerNRays      (int    nr) { fNRays      = nr; } /* box  scanner */
  virtual void SetScannerNParticles (int    np) { fNParticles = np; } /* flux scanner */
  virtual void SetScannerFlux       (GFluxI* f) { fFlux       = f;  } /* flux scanner */
  virtual void SetWeightWithDensity (bool   wt) { fDensWeight = wt; }
  virtual void SetMixtureWeightsSum (double sum);
  virtual void SetLengthUnits       (double lu);
  virtual void SetDensityUnits      (double du);
  virtual void SetMaxPlSafetyFactor (double sf);
  virtual void SetTopVolName        (string nm);
  virtual void SetKeepSegPath       (bool keep) { fKeepSegPath = keep; }
  virtual void SetDebugFlags        (int  flgs) { fDebugFlags  = flgs; }

  /// retrieve geometry driver's configuration options

  virtual int           ScannerNPoints    (void) const { return fNPoints;           }
  virtual int           ScannerNRays      (void) const { return fNRays;             }
  virtual int           ScannerNParticles (void) const { return fNParticles;        }
  virtual bool          WeightWithDensity (void) const { return fDensWeight;        }
  virtual double        LengthUnits       (void) const { return fLengthScale;       }
  virtual double        DensityUnits      (void) const { return fDensityScale;      }
  virtual double        MixtureWeightsSum (void) const { return fMixtWghtSum;       }
  virtual double        MaxPlSafetyFactor (void) const { return fMaxPlSafetyFactor; }
  virtual string        TopVolName        (void) const { return fTopVolumeName;     }
  virtual TGeoManager * GetGeometry       (void) const { return fGeometry;          }
  virtual bool          GetKeepSegPath    (void) const { return fKeepSegPath;       }
  virtual const PathLengthList& GetMaxPathLengths(void) const { return *fCurrMaxPathLengthList; } // call only after ComputeMaxPathLengths() has been called 

  /// access to geometry coordinate/unit transforms for validation/test purposes

  virtual void   Local2SI      (PathLengthList & pl) const;
  virtual void   Local2SI      (TVector3 & v) const;
  virtual void   SI2Local      (TVector3 & v) const;
  virtual void   Master2Top    (TVector3 & v) const;
  virtual void   Master2TopDir (TVector3 & v) const;
  virtual void   Top2Master    (TVector3 & v) const;
  virtual void   Top2MasterDir (TVector3 & v) const;

  /// configure processing to perform path segment trimming

  virtual GeomVolSelectorI* AdoptGeomVolSelector (GeomVolSelectorI* selector) /// take ownership, return old
  { std::swap(selector,fGeomVolSelector); return selector; }


protected:

  virtual void   Initialize              (void);
  virtual void   CleanUp                 (void);
  virtual void   Load                    (string geometry_filename);
  virtual void   Load                    (TGeoManager * gm);
  virtual void   BuildListOfTargetNuclei (void);

  virtual int    GetTargetPdgCode        (const TGeoMaterial * const m) const;
  virtual int    GetTargetPdgCode        (const TGeoMixture * const m, int ielement) const;
  virtual double GetWeight               (const TGeoMaterial * mat, int pdgc);
  virtual double GetWeight               (const TGeoMixture * mixt, int pdgc);
  virtual double GetWeight               (const TGeoMixture * mixt, int ielement, int pdgc);

  virtual void   MaxPathLengthsFluxMethod(void);
  virtual void   MaxPathLengthsBoxMethod (void);
  virtual bool   GenBoxRay               (int indx, TLorentzVector& x4, TLorentzVector& p4);

  virtual double ComputePathLengthPDG    (const TVector3 & r, const TVector3 & udir, int pdgc);
  virtual void   SwimOnce                (const TVector3 & r, const TVector3 & udir);

  virtual bool   FindMaterialInCurrentVol(int pdgc);
  virtual bool   WillNeverEnter          (double step);
  virtual double StepToNextBoundary      (void);
  virtual double Step                    (void);
  virtual double StepUntilEntering       (void);



  int              fMaterial;              ///< input selected material for vertex generation
  TGeoManager *    fGeometry;              ///< input detector geometry
  string           fTopVolumeName;         ///< input top vol [other than TGeoManager::GetTopVolume()]
  int              fNPoints;               ///< max path length scanner (box method): points/surface [def:200]
  int              fNRays;                 ///< max path length scanner (box method): rays/point [def:200]
  int              fNParticles;            ///< max path length scanner (flux method): particles in [def:10000]
  GFluxI *         fFlux;                  ///< a flux objects that can be used to scan the max path lengths
  bool             fDensWeight;            ///< if true pathlengths are weighted with density [def:true]
  double           fLengthScale;           ///< conversion factor: input geometry length units -> meters
  double           fDensityScale;          ///< conversion factor: input geometry density units -> kgr/meters^3
  double           fMaxPlSafetyFactor;     ///< factor that can multiply the computed max path lengths
  double           fMixtWghtSum;           ///< norm of relative weights (<0 if explicit summing required)
  TVector3 *       fCurrVertex;            ///< current generated vertex
  PathLengthList * fCurrPathLengthList;    ///< current list of path-lengths
  PathLengthList * fCurrMaxPathLengthList; ///< current list of max path-lengths
  PDGCodeList *    fCurrPDGCodeList;       ///< current list of target nuclei
  TGeoVolume *     fTopVolume;             ///< top volume
  TGeoHMatrix *    fMasterToTop;           ///< matrix connecting master coordinates to top volume coordinates
  bool             fMasterToTopIsIdentity; ///< is fMasterToTop matrix the identity matrix?

  bool             fKeepSegPath;           ///< need to fill path segment "path"
  PathSegmentList* fCurrPathSegmentList;   ///< current list of path-segments
  GeomVolSelectorI* fGeomVolSelector;      ///< optional path seg trimmer (owned)

  // used by GenBoxRay to retain history between calls
  TVector3         fGenBoxRayPos;
  TVector3         fGenBoxRayDir;
  int              fiface, fipoint, firay;
  bool             fnewpnt;
  double           fdx, fdy, fdz, fox, foy, foz;  ///< top vol size/origin (top vol units)
  
  // test purposes
  double           fmxddist, fmxdstep;   ///< max errors in pathsegmentlist
  int              fDebugFlags;

};

}      // geometry namespace
}      // genie    namespace

#endif // _ROOT_GEOMETRY_ANALYZER_H_
//____________________________________________________________________________
/*!

\class   genie::geometry::PointGeomAnalyzer

\brief   The PointGeomAnalyzer class is the simplest implementation of the
         GeomAnalyserI interface and defines a simple 'point-like' geometry.

         Use this geometry analyzer to generate events when you do not want
         to use a detailed GEANT/ROOT geometry description but you only need
         to generate events for a 'single' nuclear target while you still want
         to use the GENIE MC job driver 'loaded' with a GENIE flux driver.
         The geometry can also support a mix of targets, each with its 
         corresponding weight.

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created July 14, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _POINT_GEOMETRY_ANALYZER_H_
#define _POINT_GEOMETRY_ANALYZER_H_

#include <map>

#include "Framework/EventGen/GeomAnalyzerI.h"

using std::map;

namespace genie    {
namespace geometry {

class PointGeomAnalyzer : public GeomAnalyzerI {

public :
  PointGeomAnalyzer(int tgtpdgc);
  PointGeomAnalyzer(unsigned int n, const int tgt_pdg[], const double weight[]);
  PointGeomAnalyzer(const map<int,double> & tgtmap /* pdg -> weight*/);
 ~PointGeomAnalyzer();

  // implement the GeomAnalyzerI interface

  const PDGCodeList &    ListOfTargetNuclei    (void);
  const PathLengthList & ComputeMaxPathLengths (void);

  const PathLengthList &
           ComputePathLengths
             (const TLorentzVector & x, const TLorentzVector & p);
  const TVector3 &
           GenerateVertex
             (const TLorentzVector & x, const TLorentzVector & p, int tgtpdg);
private:

  void Initialize (const map<int,double> & tgtmap);
  void CleanUp    (void);

  TVector3 *       fCurrVertex;          ///< current generated vertex
  PathLengthList * fCurrPathLengthList;  ///< current list of path-lengths
  PDGCodeList *    fCurrPDGCodeList;     ///< current list of target nuclei
};

}      // geometry namespace
}      // genie    namespace

#endif // _POINT_GEOMETRY_ANALYZER_H_
//____________________________________________________________________________
/*!

\class   genie::geometry::PathSegmentList

\brief   Object to be filled with the neutrino path-segments representing
         geometry volume steps (generally boundary-to-boundary) along with
         geometry materials.  Good for a single starting position and 
         travelling along the direction of the neutrino 4-momentum.

\author  Robert Hatcher <rhatcher@fnal.gov>
         FNAL

\created May 26, 2009

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PATH_SEGMENT_LIST_H_
#define _PATH_SEGMENT_LIST_H_

/// --- for test purposes allow compilation of class without string member
/// fetching/keeping the geometry path seems to add a significant (2x)
/// overhead to swimming through the geometry.
#define PATHSEG_KEEP_PATH
//#undef  PATHSEG_KEEP_PATH

#include <utility>  // for pair<>
#include <vector>
#include <list>
#include <ostream>
#include <string>
#include <map>

#include <TVector3.h>
class TGeoVolume;
class TGeoMedium;
class TGeoMaterial;

using std::vector;
using std::ostream;
using std::string;
using std::pair;

namespace genie {
namespace geometry {

class PathSegment;
ostream & operator << (ostream & stream, const PathSegment & list);

typedef std::pair<Double_t,Double_t> StepRange;
typedef std::vector<StepRange>       StepRangeSet;

class PathSegment {

 public:
  PathSegment();
 ~PathSegment() { ; }

  /// point of entry to geometry element
  void SetEnter(const TVector3 & p3enter, double raydist) 
     { fEnter = p3enter; fRayDist = raydist; }
  void SetEnter(const Double_t * p3enter, double raydist) 
     { fEnter.SetXYZ(p3enter[0],p3enter[1],p3enter[2]); fRayDist = raydist; }

  /// point of exit from geometry element
  void SetExit(const TVector3 & p3exit) { fExit = p3exit;  }
  void SetExit(const Double_t * p3exit) 
     { fExit.SetXYZ(p3exit[0],p3exit[1],p3exit[2]); }

  /// info about the geometry element
  void SetGeo(const TGeoVolume * gvol, const TGeoMedium * gmed, 
              const TGeoMaterial * gmat)
  { fVolume = gvol; fMedium = gmed; fMaterial = gmat; }
#ifdef PATHSEG_KEEP_PATH
  void SetPath(const char* path) { fPathString = path; }
#endif

  /// step taken in the geometry element
  void SetStep(Double_t step, bool setlimits = true );

  bool IsTrimmedEmpty() const { return fStepRangeSet.empty(); }

  /// get the sum of all the step range (in case step has been trimmed or split)
  Double_t GetSummedStepRange() const;

  /// calculate position within allowed ranges passed on fraction of total
  TVector3 GetPosition(Double_t frac) const;

  /// perform cross check on segment, return differences
  void DoCrossCheck(const TVector3& startpos, double& ddist, double& dstep) const;

  //void Copy (const PathSegment & ps);
  //PathSegment& operator = (const PathSegment & ps);

  void Print (ostream & stream) const;
  friend ostream & operator << (ostream & stream, const PathSegment & list);
  friend bool      operator <  (const PathSegment &lhs, const PathSegment &rhs);
                                

  Double_t               fRayDist;      ///< distance from start of ray
  Double_t               fStepLength;   ///< total step size in volume
  const TGeoVolume *     fVolume;       ///< ref only ptr to TGeoVolume
  const TGeoMedium *     fMedium;       ///< ref only ptr to TGeoMedium
  const TGeoMaterial *   fMaterial;     ///< ref only ptr to TGeoMaterial
  TVector3               fEnter;        ///< top vol coordinates and units
  TVector3               fExit;         ///< top vol coordinates and units
#ifdef PATHSEG_KEEP_PATH
  std::string            fPathString;   ///< full path names
#endif
  StepRangeSet           fStepRangeSet; ///< collection of {steplo,stephi} pairs
};

inline bool operator < (const PathSegment &lhs, const PathSegment &rhs)
  { return ( lhs.fRayDist < rhs.fRayDist ); }


class PathSegmentList;
ostream & operator << (ostream & stream, const PathSegmentList & list);

class PathSegmentList {

public :
  PathSegmentList();
  PathSegmentList(const PathSegmentList & plist);
 ~PathSegmentList();

  void    SetDoCrossCheck (bool doit = true) { fDoCrossCheck = doit; }
  void    SetPrintVerbose (bool doit = true) { fPrintVerbose = doit; }
  void    SetAllToZero    (void);
  void    SetStartInfo    (const TVector3& pos = TVector3(0,0,1e37), 
                           const TVector3& dir = TVector3(0,0,0)     );
  bool    IsSameStart     (const TVector3& pos, const TVector3& dir) const;
  void    AddSegment      (const PathSegment& ps) { fSegmentList.push_back(ps); }

  const TVector3& GetDirection() const { return fDirection; }
  const TVector3& GetStartPos() const  { return fStartPos; }

  typedef std::list<PathSegment> PathSegmentV_t;
  typedef PathSegmentV_t::const_iterator PathSegVCItr_t;

  const   PathSegmentV_t&   GetPathSegmentV (void) const { return fSegmentList; }  
  size_t                    size(void) const { return fSegmentList.size(); }

  typedef std::map<const TGeoMaterial*,Double_t> MaterialMap_t;
  typedef MaterialMap_t::const_iterator MaterialMapCItr_t;

  void                      FillMatStepSum   (void);
  const   MaterialMap_t&    GetMatStepSumMap (void) const { return fMatStepSum; };

  void                      CrossCheck(double& mxddist, double& mxdstep) const;

#ifdef UNNEEDED_SEGFUNCS
  //  XmlParserStatus_t LoadFromXml (string filename);
  //  void              SaveAsXml   (string filename) const;
#endif

  void Copy  (const PathSegmentList & plist);
  PathSegmentList & operator =  (const PathSegmentList & list);

  void Print (ostream & stream) const;
  friend ostream & operator << (ostream & stream, const PathSegmentList & list);

 protected:

  /// Record, for future comparison, the path taken
  TVector3         fStartPos;  ///< starting position (in top vol coords)
  TVector3         fDirection; ///< direction (in top vol coords)

  /// Actual list of segments
  PathSegmentV_t   fSegmentList;

  /// Segment list re-evaluated by material for fast lookup of path lengths
  MaterialMap_t    fMatStepSum;

  bool             fDoCrossCheck;
  bool             fPrintVerbose;

};

}      // geometry namespace
}      // genie    namespace

#endif // _PATH_SEGMENT_LIST_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::geometry::FidCylinder", payloadCode, "@",
"genie::geometry::FidPolyhedron", payloadCode, "@",
"genie::geometry::FidShape", payloadCode, "@",
"genie::geometry::FidSphere", payloadCode, "@",
"genie::geometry::GeomVolSelectorBasic", payloadCode, "@",
"genie::geometry::GeomVolSelectorFiducial", payloadCode, "@",
"genie::geometry::GeomVolSelectorI", payloadCode, "@",
"genie::geometry::PathSegment", payloadCode, "@",
"genie::geometry::PathSegmentList", payloadCode, "@",
"genie::geometry::PlaneParam", payloadCode, "@",
"genie::geometry::PointGeomAnalyzer", payloadCode, "@",
"genie::geometry::ROOTGeomAnalyzer", payloadCode, "@",
"genie::geometry::RayIntercept", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGTlGeo",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGTlGeo_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGTlGeo_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGTlGeo() {
  TriggerDictionaryInitialization_libGTlGeo_Impl();
}
