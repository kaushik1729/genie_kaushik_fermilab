// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhIBDXS

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
#include "IBDXSecMap.h"
#include "StrumiaVissaniIBDPXSec.h"
#include "KLVOxygenIBDPXSec.h"

// Header files passed via #pragma extra_include

namespace genie {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "Framework/Algorithm/AlgStatus.h", 26,
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

namespace ROOT {
   static void *new_geniecLcLIBDXSecMap(void *p = 0);
   static void *newArray_geniecLcLIBDXSecMap(Long_t size, void *p);
   static void delete_geniecLcLIBDXSecMap(void *p);
   static void deleteArray_geniecLcLIBDXSecMap(void *p);
   static void destruct_geniecLcLIBDXSecMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::IBDXSecMap*)
   {
      ::genie::IBDXSecMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::IBDXSecMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::IBDXSecMap", ::genie::IBDXSecMap::Class_Version(), "", 31,
                  typeid(::genie::IBDXSecMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::IBDXSecMap::Dictionary, isa_proxy, 4,
                  sizeof(::genie::IBDXSecMap) );
      instance.SetNew(&new_geniecLcLIBDXSecMap);
      instance.SetNewArray(&newArray_geniecLcLIBDXSecMap);
      instance.SetDelete(&delete_geniecLcLIBDXSecMap);
      instance.SetDeleteArray(&deleteArray_geniecLcLIBDXSecMap);
      instance.SetDestructor(&destruct_geniecLcLIBDXSecMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::IBDXSecMap*)
   {
      return GenerateInitInstanceLocal((::genie::IBDXSecMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::IBDXSecMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLStrumiaVissaniIBDPXSec(void *p = 0);
   static void *newArray_geniecLcLStrumiaVissaniIBDPXSec(Long_t size, void *p);
   static void delete_geniecLcLStrumiaVissaniIBDPXSec(void *p);
   static void deleteArray_geniecLcLStrumiaVissaniIBDPXSec(void *p);
   static void destruct_geniecLcLStrumiaVissaniIBDPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::StrumiaVissaniIBDPXSec*)
   {
      ::genie::StrumiaVissaniIBDPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::StrumiaVissaniIBDPXSec >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::StrumiaVissaniIBDPXSec", ::genie::StrumiaVissaniIBDPXSec::Class_Version(), "", 101,
                  typeid(::genie::StrumiaVissaniIBDPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::StrumiaVissaniIBDPXSec::Dictionary, isa_proxy, 4,
                  sizeof(::genie::StrumiaVissaniIBDPXSec) );
      instance.SetNew(&new_geniecLcLStrumiaVissaniIBDPXSec);
      instance.SetNewArray(&newArray_geniecLcLStrumiaVissaniIBDPXSec);
      instance.SetDelete(&delete_geniecLcLStrumiaVissaniIBDPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLStrumiaVissaniIBDPXSec);
      instance.SetDestructor(&destruct_geniecLcLStrumiaVissaniIBDPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::StrumiaVissaniIBDPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::StrumiaVissaniIBDPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::StrumiaVissaniIBDPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLKLVOxygenIBDPXSec(void *p = 0);
   static void *newArray_geniecLcLKLVOxygenIBDPXSec(Long_t size, void *p);
   static void delete_geniecLcLKLVOxygenIBDPXSec(void *p);
   static void deleteArray_geniecLcLKLVOxygenIBDPXSec(void *p);
   static void destruct_geniecLcLKLVOxygenIBDPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KLVOxygenIBDPXSec*)
   {
      ::genie::KLVOxygenIBDPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::KLVOxygenIBDPXSec >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::KLVOxygenIBDPXSec", ::genie::KLVOxygenIBDPXSec::Class_Version(), "", 194,
                  typeid(::genie::KLVOxygenIBDPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::KLVOxygenIBDPXSec::Dictionary, isa_proxy, 4,
                  sizeof(::genie::KLVOxygenIBDPXSec) );
      instance.SetNew(&new_geniecLcLKLVOxygenIBDPXSec);
      instance.SetNewArray(&newArray_geniecLcLKLVOxygenIBDPXSec);
      instance.SetDelete(&delete_geniecLcLKLVOxygenIBDPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLKLVOxygenIBDPXSec);
      instance.SetDestructor(&destruct_geniecLcLKLVOxygenIBDPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KLVOxygenIBDPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::KLVOxygenIBDPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::KLVOxygenIBDPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr IBDXSecMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IBDXSecMap::Class_Name()
{
   return "genie::IBDXSecMap";
}

//______________________________________________________________________________
const char *IBDXSecMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::IBDXSecMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IBDXSecMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::IBDXSecMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IBDXSecMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::IBDXSecMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IBDXSecMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::IBDXSecMap*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr StrumiaVissaniIBDPXSec::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *StrumiaVissaniIBDPXSec::Class_Name()
{
   return "genie::StrumiaVissaniIBDPXSec";
}

//______________________________________________________________________________
const char *StrumiaVissaniIBDPXSec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::StrumiaVissaniIBDPXSec*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StrumiaVissaniIBDPXSec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::StrumiaVissaniIBDPXSec*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StrumiaVissaniIBDPXSec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::StrumiaVissaniIBDPXSec*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StrumiaVissaniIBDPXSec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::StrumiaVissaniIBDPXSec*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr KLVOxygenIBDPXSec::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KLVOxygenIBDPXSec::Class_Name()
{
   return "genie::KLVOxygenIBDPXSec";
}

//______________________________________________________________________________
const char *KLVOxygenIBDPXSec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::KLVOxygenIBDPXSec*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KLVOxygenIBDPXSec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::KLVOxygenIBDPXSec*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KLVOxygenIBDPXSec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::KLVOxygenIBDPXSec*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KLVOxygenIBDPXSec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::KLVOxygenIBDPXSec*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
void IBDXSecMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::IBDXSecMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::IBDXSecMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::IBDXSecMap::Class(),this);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLIBDXSecMap(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::IBDXSecMap : new ::genie::IBDXSecMap;
   }
   static void *newArray_geniecLcLIBDXSecMap(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::IBDXSecMap[nElements] : new ::genie::IBDXSecMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLIBDXSecMap(void *p) {
      delete ((::genie::IBDXSecMap*)p);
   }
   static void deleteArray_geniecLcLIBDXSecMap(void *p) {
      delete [] ((::genie::IBDXSecMap*)p);
   }
   static void destruct_geniecLcLIBDXSecMap(void *p) {
      typedef ::genie::IBDXSecMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::IBDXSecMap

namespace genie {
//______________________________________________________________________________
void StrumiaVissaniIBDPXSec::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::StrumiaVissaniIBDPXSec.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::StrumiaVissaniIBDPXSec::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::StrumiaVissaniIBDPXSec::Class(),this);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLStrumiaVissaniIBDPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::StrumiaVissaniIBDPXSec : new ::genie::StrumiaVissaniIBDPXSec;
   }
   static void *newArray_geniecLcLStrumiaVissaniIBDPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::StrumiaVissaniIBDPXSec[nElements] : new ::genie::StrumiaVissaniIBDPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLStrumiaVissaniIBDPXSec(void *p) {
      delete ((::genie::StrumiaVissaniIBDPXSec*)p);
   }
   static void deleteArray_geniecLcLStrumiaVissaniIBDPXSec(void *p) {
      delete [] ((::genie::StrumiaVissaniIBDPXSec*)p);
   }
   static void destruct_geniecLcLStrumiaVissaniIBDPXSec(void *p) {
      typedef ::genie::StrumiaVissaniIBDPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::StrumiaVissaniIBDPXSec

namespace genie {
//______________________________________________________________________________
void KLVOxygenIBDPXSec::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::KLVOxygenIBDPXSec.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::KLVOxygenIBDPXSec::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::KLVOxygenIBDPXSec::Class(),this);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLKLVOxygenIBDPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KLVOxygenIBDPXSec : new ::genie::KLVOxygenIBDPXSec;
   }
   static void *newArray_geniecLcLKLVOxygenIBDPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KLVOxygenIBDPXSec[nElements] : new ::genie::KLVOxygenIBDPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLKLVOxygenIBDPXSec(void *p) {
      delete ((::genie::KLVOxygenIBDPXSec*)p);
   }
   static void deleteArray_geniecLcLKLVOxygenIBDPXSec(void *p) {
      delete [] ((::genie::KLVOxygenIBDPXSec*)p);
   }
   static void destruct_geniecLcLKLVOxygenIBDPXSec(void *p) {
      typedef ::genie::KLVOxygenIBDPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::KLVOxygenIBDPXSec

namespace ROOT {
   static TClass *maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR_Dictionary();
   static void maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR_TClassManip(TClass*);
   static void *new_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(void *p = 0);
   static void *newArray_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(Long_t size, void *p);
   static void delete_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(void *p);
   static void deleteArray_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(void *p);
   static void destruct_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,const genie::XSecAlgorithmI*>*)
   {
      map<int,const genie::XSecAlgorithmI*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,const genie::XSecAlgorithmI*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,const genie::XSecAlgorithmI*>", -2, "map", 99,
                  typeid(map<int,const genie::XSecAlgorithmI*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,const genie::XSecAlgorithmI*>) );
      instance.SetNew(&new_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR);
      instance.SetNewArray(&newArray_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR);
      instance.SetDelete(&delete_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR);
      instance.SetDestructor(&destruct_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,const genie::XSecAlgorithmI*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,const genie::XSecAlgorithmI*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,const genie::XSecAlgorithmI*>*)0x0)->GetClass();
      maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,const genie::XSecAlgorithmI*> : new map<int,const genie::XSecAlgorithmI*>;
   }
   static void *newArray_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,const genie::XSecAlgorithmI*>[nElements] : new map<int,const genie::XSecAlgorithmI*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(void *p) {
      delete ((map<int,const genie::XSecAlgorithmI*>*)p);
   }
   static void deleteArray_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(void *p) {
      delete [] ((map<int,const genie::XSecAlgorithmI*>*)p);
   }
   static void destruct_maplEintcOconstsPgeniecLcLXSecAlgorithmImUgR(void *p) {
      typedef map<int,const genie::XSecAlgorithmI*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,const genie::XSecAlgorithmI*>

namespace {
  void TriggerDictionaryInitialization_libGPhIBDXS_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/InverseBetaDecay/XSection",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/InverseBetaDecay/XSection",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/InverseBetaDecay/XSection",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/InverseBetaDecay/XSection/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhIBDXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class __attribute__((annotate(R"ATTRDUMP(maps a request for the xsec on a given nucleus to the most appropriate model for that nucleus)ATTRDUMP"))) IBDXSecMap;}
namespace genie{class __attribute__((annotate(R"ATTRDUMP(Inverse Beta Decay partial cross section calculation based on a Strumia/Vissani paper)ATTRDUMP"))) StrumiaVissaniIBDPXSec;}
namespace genie{class __attribute__((annotate(R"ATTRDUMP(Oxygen16 - (anti)neutrino cross section estimator based on a Kolbe/Langanke/Vogel paper)ATTRDUMP"))) KLVOxygenIBDPXSec;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhIBDXS dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::IBDXSecMap

\brief    Maps specific nuclei to appropriate cross section models.

\author   Corey Reed <cjreed \at nikhef.nl>
          Nikhef

\created  February 4, 2010

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _IBD_CROSSSECTION_MAP_H_
#define _IBD_CROSSSECTION_MAP_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class IBDXSecMap : public XSecAlgorithmI {
      
   public:
      IBDXSecMap();
      IBDXSecMap(string config);
      virtual ~IBDXSecMap();
      
      //-- XSecAlgorithmI interface implementation
      double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
      double Integral        (const Interaction * i) const;
      bool   ValidProcess    (const Interaction * i) const;
      bool   ValidKinematics (const Interaction * i) const;

      //-- overload the Algorithm::Configure() methods to load private data
      //   members from configuration options
      void Configure(const Registry & config);
      void Configure(string config);

   protected:
      const XSecAlgorithmI* SelectModel(const Target & t) const;
      
   private:
      void LoadConfig (void);
      
      bool                                 fIsotopesUseSameModel; //  if true, force all nuclei with same Z to use the same cross section model
      const XSecAlgorithmI*                fDefaultModel;         //  the default xsec model (should "work" with any nucleus)
      std::map<int, const XSecAlgorithmI*> fRefinedModels;        //  specific models for the given nucleus (int being the PDG code of the nucleus)
      
   public:
      ClassDef(IBDXSecMap, 1) // maps a request for the xsec on a given nucleus to the most appropriate model for that nucleus

};

};

#endif // _IBD_CROSSSECTION_MAP_H_

//____________________________________________________________________________
/*!

\class    genie::StrumiaVissaniIBDPXSec

\brief    An implementation of the neutrino - (free) nucleon [inverse beta
          decay] cross section, valid from the threshold energy (1.806MeV)
          up to hundreds of MeV. Currently cut off at 1/2 nucleon mass.
	  Based on the Strumia/Vissani paper Phys.Lett.B564:42-54,2003

\ref      Strumia A., Vissani F., Phys. Lett. B564, pp42-54 (2003)

\author   Corey Reed <cjreed \at nikhef.nl>
          Nikhef

\created  June 22, 2009

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SV_QUASIELASTIC_NU_NUCLEON_XSEC_H_
#define _SV_QUASIELASTIC_NU_NUCLEON_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class StrumiaVissaniIBDPXSec : public XSecAlgorithmI {

public:
  StrumiaVissaniIBDPXSec();
  StrumiaVissaniIBDPXSec(string config);
  virtual ~StrumiaVissaniIBDPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
  
  //-- Routines for calculating the scattering amplitute
  double dSigDt(const double sMinusU,
		const double sMinusMnuc,
		const double t) const;
  double MtxElm(const double sMinusU,
		const double t) const;
  static double MAterm(const double t,
		       const double t2,
		       const double f124,
		       const double f22,
		       const double g124,
		       const double g224meM2,
		       const double f1cf2R8,
		       const double g1cg2R16me,
		       const double g1cFsumR);
  static double MBterm(const double t,
		       const double f1cf2,
		       const double g1cg2,
		       const double g1cFsumR,
		       const double f22);
  static double MCterm(const double t,
		       const double f124,
		       const double f22,
		       const double g124);
  double RadiativeCorr(const double Ee) const;
  double FinalStateCorr(const double Ee) const;

  // variables
  double                  fCosCabibbo2;    //  cos^2(cabibbo)
  double                  fg1of0;          //  axial form factor at q2=0
  double                  fMa2;            //  axial mass squared
  double                  fMv2;            //  vector mass squared
  double                  fNucleonMMDiff;  //  nucleon magnetic moment difference
  double                  fEpsilon;        //  small number used to compare floats with 0

  const XSecIntegratorI * fXSecIntegrator; //! the integrator to get total xsec

public:      
  ClassDef(StrumiaVissaniIBDPXSec, 1) // Inverse Beta Decay partial cross section calculation based on a Strumia/Vissani paper
};
}       // genie namespace
#endif  // _SV_QUASIELASTIC_NU_NUCLEON_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::KLVOxygenIBDPXSec

\brief    An implementation of the neutrino - Oxygen16 cross section.

\ref      E. Kolbe, K. Langanke, P. Vogel ; Phys. Rev. D66, 013007, 2002

\author   Corey Reed <cjreed \at nikhef.nl>
          Nikhef

\created  January 27, 2010

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _KLV_QUASIELASTIC_NU_OXYGEN_XSEC_H_
#define _KLV_QUASIELASTIC_NU_OXYGEN_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

class TSpline3;

namespace genie {

class KLVOxygenIBDPXSec : public XSecAlgorithmI {

public:
  static const double kO16NubarThr; //  energy threshold for 16O + nu_e_bar
  static const double kO16NuMinE;   //  minimum energy for 16O + nu_e
  static const double kMaxE;        //  maximum neutrino energy for this xsec model
  
  KLVOxygenIBDPXSec();
  KLVOxygenIBDPXSec(string config);
  virtual ~KLVOxygenIBDPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
  bool   ValidKinematics (const Interaction * i) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
  
  void MakeAntiNuESpline(void);
  void MakeNuESpline(void);

  TSpline3* fXsplNue; //! a spline around the 16O+nu_e xsec points listed in the reference paper
  TSpline3* fXsplNuebar; //! a spline around the 16O+nu_e_bar xsec points listed in the reference paper

public:
  ClassDef(KLVOxygenIBDPXSec, 1) // Oxygen16 - (anti)neutrino cross section estimator based on a Kolbe/Langanke/Vogel paper
};
}       // genie namespace
#endif  // _KLV_QUASIELASTIC_NU_OXYGEN_XSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::IBDXSecMap", payloadCode, "@",
"genie::KLVOxygenIBDPXSec", payloadCode, "@",
"genie::StrumiaVissaniIBDPXSec", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhIBDXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhIBDXS_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhIBDXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhIBDXS() {
  TriggerDictionaryInitialization_libGPhIBDXS_Impl();
}
