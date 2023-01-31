// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_TlFlx

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
#include "GFluxBlender.h"
#include "GHAKKMAtmoFlux.h"
#include "GFlavorMap.h"
#include "GFlavorMixerI.h"
#include "GNuMIFlux.h"
#include "GJPARCNuFlux.h"
#include "GSimpleNtpFlux.h"
#include "GFLUKAAtmoFlux.h"
#include "GMonoEnergeticFlux.h"
#include "GFluxFileConfigI.h"
#include "GFluxDriverFactory.h"
#include "GAtmoFlux.h"
#include "GFlavorMixerFactory.h"
#include "GAstroFlux.h"
#include "GBGLRSAtmoFlux.h"
#include "GCylindTH1Flux.h"
#include "GFluxExposureI.h"

// Header files passed via #pragma extra_include

namespace genie {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "Framework/EventGen/GFluxI.h", 33,
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
   namespace flux {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLflux_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::flux", 0 /*version*/, "", 42,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLflux_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLflux_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGFluxBlender_Dictionary();
   static void geniecLcLfluxcLcLGFluxBlender_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGFluxBlender(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGFluxBlender(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGFluxBlender(void *p);
   static void deleteArray_geniecLcLfluxcLcLGFluxBlender(void *p);
   static void destruct_geniecLcLfluxcLcLGFluxBlender(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GFluxBlender*)
   {
      ::genie::flux::GFluxBlender *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GFluxBlender));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GFluxBlender", "", 49,
                  typeid(::genie::flux::GFluxBlender), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGFluxBlender_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GFluxBlender) );
      instance.SetNew(&new_geniecLcLfluxcLcLGFluxBlender);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGFluxBlender);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGFluxBlender);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGFluxBlender);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGFluxBlender);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GFluxBlender*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GFluxBlender*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GFluxBlender*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGFluxBlender_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GFluxBlender*)0x0)->GetClass();
      geniecLcLfluxcLcLGFluxBlender_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGFluxBlender_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGAtmoFlux_Dictionary();
   static void geniecLcLfluxcLcLGAtmoFlux_TClassManip(TClass*);
   static void delete_geniecLcLfluxcLcLGAtmoFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGAtmoFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGAtmoFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GAtmoFlux*)
   {
      ::genie::flux::GAtmoFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GAtmoFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GAtmoFlux", "GAtmoFlux.h", 61,
                  typeid(::genie::flux::GAtmoFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGAtmoFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GAtmoFlux) );
      instance.SetDelete(&delete_geniecLcLfluxcLcLGAtmoFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGAtmoFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGAtmoFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GAtmoFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GAtmoFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GAtmoFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGAtmoFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GAtmoFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGAtmoFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGAtmoFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGHAKKMAtmoFlux_Dictionary();
   static void geniecLcLfluxcLcLGHAKKMAtmoFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGHAKKMAtmoFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGHAKKMAtmoFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGHAKKMAtmoFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGHAKKMAtmoFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGHAKKMAtmoFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GHAKKMAtmoFlux*)
   {
      ::genie::flux::GHAKKMAtmoFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GHAKKMAtmoFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GHAKKMAtmoFlux", "", 175,
                  typeid(::genie::flux::GHAKKMAtmoFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGHAKKMAtmoFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GHAKKMAtmoFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGHAKKMAtmoFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGHAKKMAtmoFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGHAKKMAtmoFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGHAKKMAtmoFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGHAKKMAtmoFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GHAKKMAtmoFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GHAKKMAtmoFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GHAKKMAtmoFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGHAKKMAtmoFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GHAKKMAtmoFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGHAKKMAtmoFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGHAKKMAtmoFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGFlavorMixerI_Dictionary();
   static void geniecLcLfluxcLcLGFlavorMixerI_TClassManip(TClass*);
   static void delete_geniecLcLfluxcLcLGFlavorMixerI(void *p);
   static void deleteArray_geniecLcLfluxcLcLGFlavorMixerI(void *p);
   static void destruct_geniecLcLfluxcLcLGFlavorMixerI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GFlavorMixerI*)
   {
      ::genie::flux::GFlavorMixerI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GFlavorMixerI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GFlavorMixerI", "GFlavorMixerI.h", 37,
                  typeid(::genie::flux::GFlavorMixerI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGFlavorMixerI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GFlavorMixerI) );
      instance.SetDelete(&delete_geniecLcLfluxcLcLGFlavorMixerI);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGFlavorMixerI);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGFlavorMixerI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GFlavorMixerI*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GFlavorMixerI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GFlavorMixerI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGFlavorMixerI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GFlavorMixerI*)0x0)->GetClass();
      geniecLcLfluxcLcLGFlavorMixerI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGFlavorMixerI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGFlavorMap_Dictionary();
   static void geniecLcLfluxcLcLGFlavorMap_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGFlavorMap(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGFlavorMap(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGFlavorMap(void *p);
   static void deleteArray_geniecLcLfluxcLcLGFlavorMap(void *p);
   static void destruct_geniecLcLfluxcLcLGFlavorMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GFlavorMap*)
   {
      ::genie::flux::GFlavorMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GFlavorMap));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GFlavorMap", "", 243,
                  typeid(::genie::flux::GFlavorMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGFlavorMap_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GFlavorMap) );
      instance.SetNew(&new_geniecLcLfluxcLcLGFlavorMap);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGFlavorMap);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGFlavorMap);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGFlavorMap);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGFlavorMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GFlavorMap*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GFlavorMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GFlavorMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGFlavorMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GFlavorMap*)0x0)->GetClass();
      geniecLcLfluxcLcLGFlavorMap_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGFlavorMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGFluxExposureI_Dictionary();
   static void geniecLcLfluxcLcLGFluxExposureI_TClassManip(TClass*);
   static void delete_geniecLcLfluxcLcLGFluxExposureI(void *p);
   static void deleteArray_geniecLcLfluxcLcLGFluxExposureI(void *p);
   static void destruct_geniecLcLfluxcLcLGFluxExposureI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GFluxExposureI*)
   {
      ::genie::flux::GFluxExposureI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GFluxExposureI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GFluxExposureI", "GFluxExposureI.h", 32,
                  typeid(::genie::flux::GFluxExposureI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGFluxExposureI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GFluxExposureI) );
      instance.SetDelete(&delete_geniecLcLfluxcLcLGFluxExposureI);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGFluxExposureI);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGFluxExposureI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GFluxExposureI*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GFluxExposureI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GFluxExposureI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGFluxExposureI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GFluxExposureI*)0x0)->GetClass();
      geniecLcLfluxcLcLGFluxExposureI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGFluxExposureI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGFluxFileConfigI_Dictionary();
   static void geniecLcLfluxcLcLGFluxFileConfigI_TClassManip(TClass*);
   static void delete_geniecLcLfluxcLcLGFluxFileConfigI(void *p);
   static void deleteArray_geniecLcLfluxcLcLGFluxFileConfigI(void *p);
   static void destruct_geniecLcLfluxcLcLGFluxFileConfigI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GFluxFileConfigI*)
   {
      ::genie::flux::GFluxFileConfigI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GFluxFileConfigI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GFluxFileConfigI", "GFluxFileConfigI.h", 29,
                  typeid(::genie::flux::GFluxFileConfigI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGFluxFileConfigI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GFluxFileConfigI) );
      instance.SetDelete(&delete_geniecLcLfluxcLcLGFluxFileConfigI);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGFluxFileConfigI);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGFluxFileConfigI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GFluxFileConfigI*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GFluxFileConfigI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GFluxFileConfigI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGFluxFileConfigI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GFluxFileConfigI*)0x0)->GetClass();
      geniecLcLfluxcLcLGFluxFileConfigI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGFluxFileConfigI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(void *p);
   static void deleteArray_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(void *p);
   static void destruct_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(void *p);
   static void streamer_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GNuMIFluxPassThroughInfo*)
   {
      ::genie::flux::GNuMIFluxPassThroughInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::flux::GNuMIFluxPassThroughInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GNuMIFluxPassThroughInfo", ::genie::flux::GNuMIFluxPassThroughInfo::Class_Version(), "", 466,
                  typeid(::genie::flux::GNuMIFluxPassThroughInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::flux::GNuMIFluxPassThroughInfo::Dictionary, isa_proxy, 16,
                  sizeof(::genie::flux::GNuMIFluxPassThroughInfo) );
      instance.SetNew(&new_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo);
      instance.SetStreamerFunc(&streamer_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GNuMIFluxPassThroughInfo*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GNuMIFluxPassThroughInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GNuMIFluxPassThroughInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGNuMIFlux_Dictionary();
   static void geniecLcLfluxcLcLGNuMIFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGNuMIFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGNuMIFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGNuMIFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGNuMIFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGNuMIFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GNuMIFlux*)
   {
      ::genie::flux::GNuMIFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GNuMIFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GNuMIFlux", "", 610,
                  typeid(::genie::flux::GNuMIFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGNuMIFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GNuMIFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGNuMIFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGNuMIFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGNuMIFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGNuMIFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGNuMIFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GNuMIFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GNuMIFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GNuMIFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGNuMIFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GNuMIFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGNuMIFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGNuMIFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGJPARCNuFlux_Dictionary();
   static void geniecLcLfluxcLcLGJPARCNuFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGJPARCNuFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGJPARCNuFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGJPARCNuFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGJPARCNuFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGJPARCNuFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GJPARCNuFlux*)
   {
      ::genie::flux::GJPARCNuFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GJPARCNuFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GJPARCNuFlux", "", 914,
                  typeid(::genie::flux::GJPARCNuFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGJPARCNuFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GJPARCNuFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGJPARCNuFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGJPARCNuFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGJPARCNuFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGJPARCNuFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGJPARCNuFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GJPARCNuFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GJPARCNuFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GJPARCNuFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGJPARCNuFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GJPARCNuFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGJPARCNuFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGJPARCNuFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(void *p);
   static void deleteArray_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(void *p);
   static void destruct_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(void *p);
   static void streamer_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GJPARCNuFluxPassThroughInfo*)
   {
      ::genie::flux::GJPARCNuFluxPassThroughInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::flux::GJPARCNuFluxPassThroughInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GJPARCNuFluxPassThroughInfo", ::genie::flux::GJPARCNuFluxPassThroughInfo::Class_Version(), "", 1016,
                  typeid(::genie::flux::GJPARCNuFluxPassThroughInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::flux::GJPARCNuFluxPassThroughInfo::Dictionary, isa_proxy, 16,
                  sizeof(::genie::flux::GJPARCNuFluxPassThroughInfo) );
      instance.SetNew(&new_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo);
      instance.SetStreamerFunc(&streamer_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GJPARCNuFluxPassThroughInfo*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GJPARCNuFluxPassThroughInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GJPARCNuFluxPassThroughInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLfluxcLcLGSimpleNtpEntry(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpEntry(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGSimpleNtpEntry(void *p);
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpEntry(void *p);
   static void destruct_geniecLcLfluxcLcLGSimpleNtpEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GSimpleNtpEntry*)
   {
      ::genie::flux::GSimpleNtpEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::flux::GSimpleNtpEntry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GSimpleNtpEntry", ::genie::flux::GSimpleNtpEntry::Class_Version(), "", 1153,
                  typeid(::genie::flux::GSimpleNtpEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::flux::GSimpleNtpEntry::Dictionary, isa_proxy, 4,
                  sizeof(::genie::flux::GSimpleNtpEntry) );
      instance.SetNew(&new_geniecLcLfluxcLcLGSimpleNtpEntry);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGSimpleNtpEntry);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGSimpleNtpEntry);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGSimpleNtpEntry);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGSimpleNtpEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GSimpleNtpEntry*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GSimpleNtpEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpEntry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLfluxcLcLGSimpleNtpNuMI(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpNuMI(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGSimpleNtpNuMI(void *p);
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpNuMI(void *p);
   static void destruct_geniecLcLfluxcLcLGSimpleNtpNuMI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GSimpleNtpNuMI*)
   {
      ::genie::flux::GSimpleNtpNuMI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::flux::GSimpleNtpNuMI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GSimpleNtpNuMI", ::genie::flux::GSimpleNtpNuMI::Class_Version(), "", 1190,
                  typeid(::genie::flux::GSimpleNtpNuMI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::flux::GSimpleNtpNuMI::Dictionary, isa_proxy, 4,
                  sizeof(::genie::flux::GSimpleNtpNuMI) );
      instance.SetNew(&new_geniecLcLfluxcLcLGSimpleNtpNuMI);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGSimpleNtpNuMI);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGSimpleNtpNuMI);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGSimpleNtpNuMI);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGSimpleNtpNuMI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GSimpleNtpNuMI*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GSimpleNtpNuMI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpNuMI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLfluxcLcLGSimpleNtpAux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpAux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGSimpleNtpAux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpAux(void *p);
   static void destruct_geniecLcLfluxcLcLGSimpleNtpAux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GSimpleNtpAux*)
   {
      ::genie::flux::GSimpleNtpAux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::flux::GSimpleNtpAux >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GSimpleNtpAux", ::genie::flux::GSimpleNtpAux::Class_Version(), "", 1229,
                  typeid(::genie::flux::GSimpleNtpAux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::flux::GSimpleNtpAux::Dictionary, isa_proxy, 4,
                  sizeof(::genie::flux::GSimpleNtpAux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGSimpleNtpAux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGSimpleNtpAux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGSimpleNtpAux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGSimpleNtpAux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGSimpleNtpAux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GSimpleNtpAux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GSimpleNtpAux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpAux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLfluxcLcLGSimpleNtpMeta(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpMeta(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGSimpleNtpMeta(void *p);
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpMeta(void *p);
   static void destruct_geniecLcLfluxcLcLGSimpleNtpMeta(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GSimpleNtpMeta*)
   {
      ::genie::flux::GSimpleNtpMeta *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::flux::GSimpleNtpMeta >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GSimpleNtpMeta", ::genie::flux::GSimpleNtpMeta::Class_Version(), "", 1252,
                  typeid(::genie::flux::GSimpleNtpMeta), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::flux::GSimpleNtpMeta::Dictionary, isa_proxy, 4,
                  sizeof(::genie::flux::GSimpleNtpMeta) );
      instance.SetNew(&new_geniecLcLfluxcLcLGSimpleNtpMeta);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGSimpleNtpMeta);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGSimpleNtpMeta);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGSimpleNtpMeta);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGSimpleNtpMeta);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GSimpleNtpMeta*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GSimpleNtpMeta*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpMeta*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGSimpleNtpFlux_Dictionary();
   static void geniecLcLfluxcLcLGSimpleNtpFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGSimpleNtpFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGSimpleNtpFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGSimpleNtpFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GSimpleNtpFlux*)
   {
      ::genie::flux::GSimpleNtpFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GSimpleNtpFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GSimpleNtpFlux", "", 1293,
                  typeid(::genie::flux::GSimpleNtpFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGSimpleNtpFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GSimpleNtpFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGSimpleNtpFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGSimpleNtpFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGSimpleNtpFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGSimpleNtpFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGSimpleNtpFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GSimpleNtpFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GSimpleNtpFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGSimpleNtpFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGSimpleNtpFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGSimpleNtpFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGFLUKAAtmoFlux_Dictionary();
   static void geniecLcLfluxcLcLGFLUKAAtmoFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGFLUKAAtmoFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGFLUKAAtmoFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGFLUKAAtmoFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGFLUKAAtmoFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGFLUKAAtmoFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GFLUKAAtmoFlux*)
   {
      ::genie::flux::GFLUKAAtmoFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GFLUKAAtmoFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GFLUKAAtmoFlux", "", 1505,
                  typeid(::genie::flux::GFLUKAAtmoFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGFLUKAAtmoFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GFLUKAAtmoFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGFLUKAAtmoFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGFLUKAAtmoFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGFLUKAAtmoFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGFLUKAAtmoFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGFLUKAAtmoFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GFLUKAAtmoFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GFLUKAAtmoFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GFLUKAAtmoFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGFLUKAAtmoFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GFLUKAAtmoFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGFLUKAAtmoFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGFLUKAAtmoFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGMonoEnergeticFlux_Dictionary();
   static void geniecLcLfluxcLcLGMonoEnergeticFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGMonoEnergeticFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGMonoEnergeticFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGMonoEnergeticFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGMonoEnergeticFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGMonoEnergeticFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GMonoEnergeticFlux*)
   {
      ::genie::flux::GMonoEnergeticFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GMonoEnergeticFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GMonoEnergeticFlux", "", 1566,
                  typeid(::genie::flux::GMonoEnergeticFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGMonoEnergeticFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GMonoEnergeticFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGMonoEnergeticFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGMonoEnergeticFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGMonoEnergeticFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGMonoEnergeticFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGMonoEnergeticFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GMonoEnergeticFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GMonoEnergeticFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GMonoEnergeticFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGMonoEnergeticFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GMonoEnergeticFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGMonoEnergeticFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGMonoEnergeticFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGFluxDriverFactory_Dictionary();
   static void geniecLcLfluxcLcLGFluxDriverFactory_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GFluxDriverFactory*)
   {
      ::genie::flux::GFluxDriverFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GFluxDriverFactory));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GFluxDriverFactory", "", 1763,
                  typeid(::genie::flux::GFluxDriverFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGFluxDriverFactory_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GFluxDriverFactory) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GFluxDriverFactory*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GFluxDriverFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GFluxDriverFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGFluxDriverFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GFluxDriverFactory*)0x0)->GetClass();
      geniecLcLfluxcLcLGFluxDriverFactory_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGFluxDriverFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGFlavorMixerFactory_Dictionary();
   static void geniecLcLfluxcLcLGFlavorMixerFactory_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GFlavorMixerFactory*)
   {
      ::genie::flux::GFlavorMixerFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GFlavorMixerFactory));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GFlavorMixerFactory", "", 2071,
                  typeid(::genie::flux::GFlavorMixerFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGFlavorMixerFactory_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GFlavorMixerFactory) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GFlavorMixerFactory*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GFlavorMixerFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GFlavorMixerFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGFlavorMixerFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GFlavorMixerFactory*)0x0)->GetClass();
      geniecLcLfluxcLcLGFlavorMixerFactory_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGFlavorMixerFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGAstroFlux_Dictionary();
   static void geniecLcLfluxcLcLGAstroFlux_TClassManip(TClass*);
   static void delete_geniecLcLfluxcLcLGAstroFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGAstroFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGAstroFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GAstroFlux*)
   {
      ::genie::flux::GAstroFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GAstroFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GAstroFlux", "", 2314,
                  typeid(::genie::flux::GAstroFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGAstroFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GAstroFlux) );
      instance.SetDelete(&delete_geniecLcLfluxcLcLGAstroFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGAstroFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGAstroFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GAstroFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GAstroFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GAstroFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGAstroFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GAstroFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGAstroFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGAstroFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGDiffuseAstroFlux_Dictionary();
   static void geniecLcLfluxcLcLGDiffuseAstroFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGDiffuseAstroFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGDiffuseAstroFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGDiffuseAstroFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGDiffuseAstroFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGDiffuseAstroFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GDiffuseAstroFlux*)
   {
      ::genie::flux::GDiffuseAstroFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GDiffuseAstroFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GDiffuseAstroFlux", "", 2420,
                  typeid(::genie::flux::GDiffuseAstroFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGDiffuseAstroFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GDiffuseAstroFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGDiffuseAstroFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGDiffuseAstroFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGDiffuseAstroFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGDiffuseAstroFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGDiffuseAstroFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GDiffuseAstroFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GDiffuseAstroFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GDiffuseAstroFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGDiffuseAstroFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GDiffuseAstroFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGDiffuseAstroFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGDiffuseAstroFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGPointSourceAstroFlux_Dictionary();
   static void geniecLcLfluxcLcLGPointSourceAstroFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGPointSourceAstroFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGPointSourceAstroFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGPointSourceAstroFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGPointSourceAstroFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGPointSourceAstroFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GPointSourceAstroFlux*)
   {
      ::genie::flux::GPointSourceAstroFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GPointSourceAstroFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GPointSourceAstroFlux", "", 2432,
                  typeid(::genie::flux::GPointSourceAstroFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGPointSourceAstroFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GPointSourceAstroFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGPointSourceAstroFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGPointSourceAstroFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGPointSourceAstroFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGPointSourceAstroFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGPointSourceAstroFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GPointSourceAstroFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GPointSourceAstroFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GPointSourceAstroFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGPointSourceAstroFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GPointSourceAstroFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGPointSourceAstroFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGPointSourceAstroFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGBGLRSAtmoFlux_Dictionary();
   static void geniecLcLfluxcLcLGBGLRSAtmoFlux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGBGLRSAtmoFlux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGBGLRSAtmoFlux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGBGLRSAtmoFlux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGBGLRSAtmoFlux(void *p);
   static void destruct_geniecLcLfluxcLcLGBGLRSAtmoFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GBGLRSAtmoFlux*)
   {
      ::genie::flux::GBGLRSAtmoFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GBGLRSAtmoFlux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GBGLRSAtmoFlux", "", 2522,
                  typeid(::genie::flux::GBGLRSAtmoFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGBGLRSAtmoFlux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GBGLRSAtmoFlux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGBGLRSAtmoFlux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGBGLRSAtmoFlux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGBGLRSAtmoFlux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGBGLRSAtmoFlux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGBGLRSAtmoFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GBGLRSAtmoFlux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GBGLRSAtmoFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GBGLRSAtmoFlux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGBGLRSAtmoFlux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GBGLRSAtmoFlux*)0x0)->GetClass();
      geniecLcLfluxcLcLGBGLRSAtmoFlux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGBGLRSAtmoFlux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLfluxcLcLGCylindTH1Flux_Dictionary();
   static void geniecLcLfluxcLcLGCylindTH1Flux_TClassManip(TClass*);
   static void *new_geniecLcLfluxcLcLGCylindTH1Flux(void *p = 0);
   static void *newArray_geniecLcLfluxcLcLGCylindTH1Flux(Long_t size, void *p);
   static void delete_geniecLcLfluxcLcLGCylindTH1Flux(void *p);
   static void deleteArray_geniecLcLfluxcLcLGCylindTH1Flux(void *p);
   static void destruct_geniecLcLfluxcLcLGCylindTH1Flux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::flux::GCylindTH1Flux*)
   {
      ::genie::flux::GCylindTH1Flux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::flux::GCylindTH1Flux));
      static ::ROOT::TGenericClassInfo 
         instance("genie::flux::GCylindTH1Flux", "", 2589,
                  typeid(::genie::flux::GCylindTH1Flux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLfluxcLcLGCylindTH1Flux_Dictionary, isa_proxy, 0,
                  sizeof(::genie::flux::GCylindTH1Flux) );
      instance.SetNew(&new_geniecLcLfluxcLcLGCylindTH1Flux);
      instance.SetNewArray(&newArray_geniecLcLfluxcLcLGCylindTH1Flux);
      instance.SetDelete(&delete_geniecLcLfluxcLcLGCylindTH1Flux);
      instance.SetDeleteArray(&deleteArray_geniecLcLfluxcLcLGCylindTH1Flux);
      instance.SetDestructor(&destruct_geniecLcLfluxcLcLGCylindTH1Flux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::flux::GCylindTH1Flux*)
   {
      return GenerateInitInstanceLocal((::genie::flux::GCylindTH1Flux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::flux::GCylindTH1Flux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLfluxcLcLGCylindTH1Flux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GCylindTH1Flux*)0x0)->GetClass();
      geniecLcLfluxcLcLGCylindTH1Flux_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLfluxcLcLGCylindTH1Flux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace genie {
   namespace flux {
//______________________________________________________________________________
atomic_TClass_ptr GNuMIFluxPassThroughInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GNuMIFluxPassThroughInfo::Class_Name()
{
   return "genie::flux::GNuMIFluxPassThroughInfo";
}

//______________________________________________________________________________
const char *GNuMIFluxPassThroughInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GNuMIFluxPassThroughInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GNuMIFluxPassThroughInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GNuMIFluxPassThroughInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GNuMIFluxPassThroughInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GNuMIFluxPassThroughInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GNuMIFluxPassThroughInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GNuMIFluxPassThroughInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie::flux
} // namespace genie::flux
namespace genie {
   namespace flux {
//______________________________________________________________________________
atomic_TClass_ptr GJPARCNuFluxPassThroughInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GJPARCNuFluxPassThroughInfo::Class_Name()
{
   return "genie::flux::GJPARCNuFluxPassThroughInfo";
}

//______________________________________________________________________________
const char *GJPARCNuFluxPassThroughInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GJPARCNuFluxPassThroughInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GJPARCNuFluxPassThroughInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GJPARCNuFluxPassThroughInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GJPARCNuFluxPassThroughInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GJPARCNuFluxPassThroughInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GJPARCNuFluxPassThroughInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GJPARCNuFluxPassThroughInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie::flux
} // namespace genie::flux
namespace genie {
   namespace flux {
//______________________________________________________________________________
atomic_TClass_ptr GSimpleNtpEntry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GSimpleNtpEntry::Class_Name()
{
   return "genie::flux::GSimpleNtpEntry";
}

//______________________________________________________________________________
const char *GSimpleNtpEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpEntry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GSimpleNtpEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpEntry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GSimpleNtpEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpEntry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GSimpleNtpEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpEntry*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie::flux
} // namespace genie::flux
namespace genie {
   namespace flux {
//______________________________________________________________________________
atomic_TClass_ptr GSimpleNtpNuMI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GSimpleNtpNuMI::Class_Name()
{
   return "genie::flux::GSimpleNtpNuMI";
}

//______________________________________________________________________________
const char *GSimpleNtpNuMI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpNuMI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GSimpleNtpNuMI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpNuMI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GSimpleNtpNuMI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpNuMI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GSimpleNtpNuMI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpNuMI*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie::flux
} // namespace genie::flux
namespace genie {
   namespace flux {
//______________________________________________________________________________
atomic_TClass_ptr GSimpleNtpAux::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GSimpleNtpAux::Class_Name()
{
   return "genie::flux::GSimpleNtpAux";
}

//______________________________________________________________________________
const char *GSimpleNtpAux::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpAux*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GSimpleNtpAux::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpAux*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GSimpleNtpAux::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpAux*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GSimpleNtpAux::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpAux*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie::flux
} // namespace genie::flux
namespace genie {
   namespace flux {
//______________________________________________________________________________
atomic_TClass_ptr GSimpleNtpMeta::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GSimpleNtpMeta::Class_Name()
{
   return "genie::flux::GSimpleNtpMeta";
}

//______________________________________________________________________________
const char *GSimpleNtpMeta::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpMeta*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GSimpleNtpMeta::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpMeta*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GSimpleNtpMeta::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpMeta*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GSimpleNtpMeta::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::flux::GSimpleNtpMeta*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie::flux
} // namespace genie::flux
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGFluxBlender(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GFluxBlender : new ::genie::flux::GFluxBlender;
   }
   static void *newArray_geniecLcLfluxcLcLGFluxBlender(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GFluxBlender[nElements] : new ::genie::flux::GFluxBlender[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGFluxBlender(void *p) {
      delete ((::genie::flux::GFluxBlender*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGFluxBlender(void *p) {
      delete [] ((::genie::flux::GFluxBlender*)p);
   }
   static void destruct_geniecLcLfluxcLcLGFluxBlender(void *p) {
      typedef ::genie::flux::GFluxBlender current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GFluxBlender

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGAtmoFlux(void *p) {
      delete ((::genie::flux::GAtmoFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGAtmoFlux(void *p) {
      delete [] ((::genie::flux::GAtmoFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGAtmoFlux(void *p) {
      typedef ::genie::flux::GAtmoFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GAtmoFlux

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGHAKKMAtmoFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GHAKKMAtmoFlux : new ::genie::flux::GHAKKMAtmoFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGHAKKMAtmoFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GHAKKMAtmoFlux[nElements] : new ::genie::flux::GHAKKMAtmoFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGHAKKMAtmoFlux(void *p) {
      delete ((::genie::flux::GHAKKMAtmoFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGHAKKMAtmoFlux(void *p) {
      delete [] ((::genie::flux::GHAKKMAtmoFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGHAKKMAtmoFlux(void *p) {
      typedef ::genie::flux::GHAKKMAtmoFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GHAKKMAtmoFlux

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGFlavorMixerI(void *p) {
      delete ((::genie::flux::GFlavorMixerI*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGFlavorMixerI(void *p) {
      delete [] ((::genie::flux::GFlavorMixerI*)p);
   }
   static void destruct_geniecLcLfluxcLcLGFlavorMixerI(void *p) {
      typedef ::genie::flux::GFlavorMixerI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GFlavorMixerI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGFlavorMap(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GFlavorMap : new ::genie::flux::GFlavorMap;
   }
   static void *newArray_geniecLcLfluxcLcLGFlavorMap(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GFlavorMap[nElements] : new ::genie::flux::GFlavorMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGFlavorMap(void *p) {
      delete ((::genie::flux::GFlavorMap*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGFlavorMap(void *p) {
      delete [] ((::genie::flux::GFlavorMap*)p);
   }
   static void destruct_geniecLcLfluxcLcLGFlavorMap(void *p) {
      typedef ::genie::flux::GFlavorMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GFlavorMap

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGFluxExposureI(void *p) {
      delete ((::genie::flux::GFluxExposureI*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGFluxExposureI(void *p) {
      delete [] ((::genie::flux::GFluxExposureI*)p);
   }
   static void destruct_geniecLcLfluxcLcLGFluxExposureI(void *p) {
      typedef ::genie::flux::GFluxExposureI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GFluxExposureI

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGFluxFileConfigI(void *p) {
      delete ((::genie::flux::GFluxFileConfigI*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGFluxFileConfigI(void *p) {
      delete [] ((::genie::flux::GFluxFileConfigI*)p);
   }
   static void destruct_geniecLcLfluxcLcLGFluxFileConfigI(void *p) {
      typedef ::genie::flux::GFluxFileConfigI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GFluxFileConfigI

namespace genie {
   namespace flux {
//______________________________________________________________________________
void GNuMIFluxPassThroughInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::flux::GNuMIFluxPassThroughInfo.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::flux::GNuMIFluxPassThroughInfo thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> pcodes;
      R__b >> units;
      R__b >> fgPdgC;
      R__b >> fgXYWgt;
      fgP4.Streamer(R__b);
      fgX4.Streamer(R__b);
      fgP4User.Streamer(R__b);
      fgX4User.Streamer(R__b);
      R__b >> run;
      R__b >> evtno;
      R__b >> ndxdz;
      R__b >> ndydz;
      R__b >> npz;
      R__b >> nenergy;
      R__b >> ndxdznea;
      R__b >> ndydznea;
      R__b >> nenergyn;
      R__b >> nwtnear;
      R__b >> ndxdzfar;
      R__b >> ndydzfar;
      R__b >> nenergyf;
      R__b >> nwtfar;
      R__b >> norig;
      R__b >> ndecay;
      R__b >> ntype;
      R__b >> vx;
      R__b >> vy;
      R__b >> vz;
      R__b >> pdpx;
      R__b >> pdpy;
      R__b >> pdpz;
      R__b >> ppdxdz;
      R__b >> ppdydz;
      R__b >> pppz;
      R__b >> ppenergy;
      R__b >> ppmedium;
      R__b >> ptype;
      R__b >> ppvx;
      R__b >> ppvy;
      R__b >> ppvz;
      R__b >> muparpx;
      R__b >> muparpy;
      R__b >> muparpz;
      R__b >> mupare;
      R__b >> necm;
      R__b >> nimpwt;
      R__b >> xpoint;
      R__b >> ypoint;
      R__b >> zpoint;
      R__b >> tvx;
      R__b >> tvy;
      R__b >> tvz;
      R__b >> tpx;
      R__b >> tpy;
      R__b >> tpz;
      R__b >> tptype;
      R__b >> tgen;
      R__b >> tgptype;
      R__b >> tgppx;
      R__b >> tgppy;
      R__b >> tgppz;
      R__b >> tprivx;
      R__b >> tprivy;
      R__b >> tprivz;
      R__b >> beamx;
      R__b >> beamy;
      R__b >> beamz;
      R__b >> beampx;
      R__b >> beampy;
      R__b >> beampz;
      R__b >> ntrajectory;
      R__b >> overflow;
      R__b.ReadStaticArray((int*)pdgcode);
      R__b.ReadStaticArray((int*)trackId);
      R__b.ReadStaticArray((int*)parentId);
      R__b.ReadStaticArray((double*)startx);
      R__b.ReadStaticArray((double*)starty);
      R__b.ReadStaticArray((double*)startz);
      R__b.ReadStaticArray((double*)startpx);
      R__b.ReadStaticArray((double*)startpy);
      R__b.ReadStaticArray((double*)startpz);
      R__b.ReadStaticArray((double*)stopx);
      R__b.ReadStaticArray((double*)stopy);
      R__b.ReadStaticArray((double*)stopz);
      R__b.ReadStaticArray((double*)stoppx);
      R__b.ReadStaticArray((double*)stoppy);
      R__b.ReadStaticArray((double*)stoppz);
      R__b.ReadStaticArray((double*)pprodpx);
      R__b.ReadStaticArray((double*)pprodpy);
      R__b.ReadStaticArray((double*)pprodpz);
      R__b.ReadStaticArray((int*)proc);
      R__b.ReadStaticArray((int*)ivol);
      R__b.ReadStaticArray((int*)fvol);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << pcodes;
      R__b << units;
      R__b << fgPdgC;
      R__b << fgXYWgt;
      fgP4.Streamer(R__b);
      fgX4.Streamer(R__b);
      fgP4User.Streamer(R__b);
      fgX4User.Streamer(R__b);
      R__b << run;
      R__b << evtno;
      R__b << ndxdz;
      R__b << ndydz;
      R__b << npz;
      R__b << nenergy;
      R__b << ndxdznea;
      R__b << ndydznea;
      R__b << nenergyn;
      R__b << nwtnear;
      R__b << ndxdzfar;
      R__b << ndydzfar;
      R__b << nenergyf;
      R__b << nwtfar;
      R__b << norig;
      R__b << ndecay;
      R__b << ntype;
      R__b << vx;
      R__b << vy;
      R__b << vz;
      R__b << pdpx;
      R__b << pdpy;
      R__b << pdpz;
      R__b << ppdxdz;
      R__b << ppdydz;
      R__b << pppz;
      R__b << ppenergy;
      R__b << ppmedium;
      R__b << ptype;
      R__b << ppvx;
      R__b << ppvy;
      R__b << ppvz;
      R__b << muparpx;
      R__b << muparpy;
      R__b << muparpz;
      R__b << mupare;
      R__b << necm;
      R__b << nimpwt;
      R__b << xpoint;
      R__b << ypoint;
      R__b << zpoint;
      R__b << tvx;
      R__b << tvy;
      R__b << tvz;
      R__b << tpx;
      R__b << tpy;
      R__b << tpz;
      R__b << tptype;
      R__b << tgen;
      R__b << tgptype;
      R__b << tgppx;
      R__b << tgppy;
      R__b << tgppz;
      R__b << tprivx;
      R__b << tprivy;
      R__b << tprivz;
      R__b << beamx;
      R__b << beamy;
      R__b << beamz;
      R__b << beampx;
      R__b << beampy;
      R__b << beampz;
      R__b << ntrajectory;
      R__b << overflow;
      R__b.WriteArray(pdgcode, 10);
      R__b.WriteArray(trackId, 10);
      R__b.WriteArray(parentId, 10);
      R__b.WriteArray(startx, 10);
      R__b.WriteArray(starty, 10);
      R__b.WriteArray(startz, 10);
      R__b.WriteArray(startpx, 10);
      R__b.WriteArray(startpy, 10);
      R__b.WriteArray(startpz, 10);
      R__b.WriteArray(stopx, 10);
      R__b.WriteArray(stopy, 10);
      R__b.WriteArray(stopz, 10);
      R__b.WriteArray(stoppx, 10);
      R__b.WriteArray(stoppy, 10);
      R__b.WriteArray(stoppz, 10);
      R__b.WriteArray(pprodpx, 10);
      R__b.WriteArray(pprodpy, 10);
      R__b.WriteArray(pprodpz, 10);
      R__b.WriteArray(proc, 10);
      R__b.WriteArray(ivol, 10);
      R__b.WriteArray(fvol, 10);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie::flux
} // namespace genie::flux
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(void *p) {
      return  p ? new(p) ::genie::flux::GNuMIFluxPassThroughInfo : new ::genie::flux::GNuMIFluxPassThroughInfo;
   }
   static void *newArray_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(Long_t nElements, void *p) {
      return p ? new(p) ::genie::flux::GNuMIFluxPassThroughInfo[nElements] : new ::genie::flux::GNuMIFluxPassThroughInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(void *p) {
      delete ((::genie::flux::GNuMIFluxPassThroughInfo*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(void *p) {
      delete [] ((::genie::flux::GNuMIFluxPassThroughInfo*)p);
   }
   static void destruct_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(void *p) {
      typedef ::genie::flux::GNuMIFluxPassThroughInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLfluxcLcLGNuMIFluxPassThroughInfo(TBuffer &buf, void *obj) {
      ((::genie::flux::GNuMIFluxPassThroughInfo*)obj)->::genie::flux::GNuMIFluxPassThroughInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::flux::GNuMIFluxPassThroughInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGNuMIFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GNuMIFlux : new ::genie::flux::GNuMIFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGNuMIFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GNuMIFlux[nElements] : new ::genie::flux::GNuMIFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGNuMIFlux(void *p) {
      delete ((::genie::flux::GNuMIFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGNuMIFlux(void *p) {
      delete [] ((::genie::flux::GNuMIFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGNuMIFlux(void *p) {
      typedef ::genie::flux::GNuMIFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GNuMIFlux

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGJPARCNuFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GJPARCNuFlux : new ::genie::flux::GJPARCNuFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGJPARCNuFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GJPARCNuFlux[nElements] : new ::genie::flux::GJPARCNuFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGJPARCNuFlux(void *p) {
      delete ((::genie::flux::GJPARCNuFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGJPARCNuFlux(void *p) {
      delete [] ((::genie::flux::GJPARCNuFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGJPARCNuFlux(void *p) {
      typedef ::genie::flux::GJPARCNuFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GJPARCNuFlux

namespace genie {
   namespace flux {
//______________________________________________________________________________
void GJPARCNuFluxPassThroughInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::flux::GJPARCNuFluxPassThroughInfo.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::flux::GJPARCNuFluxPassThroughInfo thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fluxentry;
      { TString R__str; R__str.Streamer(R__b); fluxfilename = R__str.Data(); }
      R__b >> Enu;
      R__b >> ppid;
      R__b >> mode;
      R__b >> ppi;
      R__b.ReadStaticArray((float*)xpi);
      R__b.ReadStaticArray((float*)npi);
      R__b >> norm;
      R__b >> nvtx0;
      R__b >> ppi0;
      R__b.ReadStaticArray((float*)xpi0);
      R__b.ReadStaticArray((float*)npi0);
      R__b >> rnu;
      R__b >> xnu;
      R__b >> ynu;
      R__b.ReadStaticArray((float*)nnu);
      R__b >> cospibm;
      R__b >> cospi0bm;
      R__b >> idfd;
      R__b >> gipart;
      R__b.ReadStaticArray((float*)gpos0);
      R__b.ReadStaticArray((float*)gvec0);
      R__b >> gamom0;
      R__b >> ng;
      R__b.ReadStaticArray((float*)gpx);
      R__b.ReadStaticArray((float*)gpy);
      R__b.ReadStaticArray((float*)gpz);
      R__b.ReadStaticArray((float*)gcosbm);
      R__b.ReadStaticArray((float*)gvx);
      R__b.ReadStaticArray((float*)gvy);
      R__b.ReadStaticArray((float*)gvz);
      R__b.ReadStaticArray((int*)gpid);
      R__b.ReadStaticArray((int*)gmec);
      R__b.ReadStaticArray((int*)gmat);
      R__b.ReadStaticArray((float*)gdistc);
      R__b.ReadStaticArray((float*)gdistal);
      R__b.ReadStaticArray((float*)gdistti);
      R__b.ReadStaticArray((float*)gdistfe);
      R__b >> Enusk;
      R__b >> normsk;
      R__b >> anorm;
      R__b >> version;
      R__b >> tuneid;
      R__b >> ntrig;
      R__b >> pint;
      R__b.ReadStaticArray((float*)bpos);
      R__b.ReadStaticArray((float*)btilt);
      R__b.ReadStaticArray((float*)brms);
      R__b.ReadStaticArray((float*)emit);
      R__b.ReadStaticArray((float*)alpha);
      R__b.ReadStaticArray((float*)hcur);
      R__b >> rand;
      R__b.ReadStaticArray((int*)rseed);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fluxentry;
      { TString R__str = fluxfilename.c_str(); R__str.Streamer(R__b);}
      R__b << Enu;
      R__b << ppid;
      R__b << mode;
      R__b << ppi;
      R__b.WriteArray(xpi, 3);
      R__b.WriteArray(npi, 3);
      R__b << norm;
      R__b << nvtx0;
      R__b << ppi0;
      R__b.WriteArray(xpi0, 3);
      R__b.WriteArray(npi0, 3);
      R__b << rnu;
      R__b << xnu;
      R__b << ynu;
      R__b.WriteArray(nnu, 3);
      R__b << cospibm;
      R__b << cospi0bm;
      R__b << idfd;
      R__b << gipart;
      R__b.WriteArray(gpos0, 3);
      R__b.WriteArray(gvec0, 3);
      R__b << gamom0;
      R__b << ng;
      R__b.WriteArray(gpx, 12);
      R__b.WriteArray(gpy, 12);
      R__b.WriteArray(gpz, 12);
      R__b.WriteArray(gcosbm, 12);
      R__b.WriteArray(gvx, 12);
      R__b.WriteArray(gvy, 12);
      R__b.WriteArray(gvz, 12);
      R__b.WriteArray(gpid, 12);
      R__b.WriteArray(gmec, 12);
      R__b.WriteArray(gmat, 12);
      R__b.WriteArray(gdistc, 12);
      R__b.WriteArray(gdistal, 12);
      R__b.WriteArray(gdistti, 12);
      R__b.WriteArray(gdistfe, 12);
      R__b << Enusk;
      R__b << normsk;
      R__b << anorm;
      R__b << version;
      R__b << tuneid;
      R__b << ntrig;
      R__b << pint;
      R__b.WriteArray(bpos, 2);
      R__b.WriteArray(btilt, 2);
      R__b.WriteArray(brms, 2);
      R__b.WriteArray(emit, 2);
      R__b.WriteArray(alpha, 2);
      R__b.WriteArray(hcur, 3);
      R__b << rand;
      R__b.WriteArray(rseed, 2);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie::flux
} // namespace genie::flux
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(void *p) {
      return  p ? new(p) ::genie::flux::GJPARCNuFluxPassThroughInfo : new ::genie::flux::GJPARCNuFluxPassThroughInfo;
   }
   static void *newArray_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(Long_t nElements, void *p) {
      return p ? new(p) ::genie::flux::GJPARCNuFluxPassThroughInfo[nElements] : new ::genie::flux::GJPARCNuFluxPassThroughInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(void *p) {
      delete ((::genie::flux::GJPARCNuFluxPassThroughInfo*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(void *p) {
      delete [] ((::genie::flux::GJPARCNuFluxPassThroughInfo*)p);
   }
   static void destruct_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(void *p) {
      typedef ::genie::flux::GJPARCNuFluxPassThroughInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLfluxcLcLGJPARCNuFluxPassThroughInfo(TBuffer &buf, void *obj) {
      ((::genie::flux::GJPARCNuFluxPassThroughInfo*)obj)->::genie::flux::GJPARCNuFluxPassThroughInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::flux::GJPARCNuFluxPassThroughInfo

namespace genie {
   namespace flux {
//______________________________________________________________________________
void GSimpleNtpEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::flux::GSimpleNtpEntry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::flux::GSimpleNtpEntry::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::flux::GSimpleNtpEntry::Class(),this);
   }
}

} // namespace genie::flux
} // namespace genie::flux
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGSimpleNtpEntry(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GSimpleNtpEntry : new ::genie::flux::GSimpleNtpEntry;
   }
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpEntry(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GSimpleNtpEntry[nElements] : new ::genie::flux::GSimpleNtpEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGSimpleNtpEntry(void *p) {
      delete ((::genie::flux::GSimpleNtpEntry*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpEntry(void *p) {
      delete [] ((::genie::flux::GSimpleNtpEntry*)p);
   }
   static void destruct_geniecLcLfluxcLcLGSimpleNtpEntry(void *p) {
      typedef ::genie::flux::GSimpleNtpEntry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GSimpleNtpEntry

namespace genie {
   namespace flux {
//______________________________________________________________________________
void GSimpleNtpNuMI::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::flux::GSimpleNtpNuMI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::flux::GSimpleNtpNuMI::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::flux::GSimpleNtpNuMI::Class(),this);
   }
}

} // namespace genie::flux
} // namespace genie::flux
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGSimpleNtpNuMI(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GSimpleNtpNuMI : new ::genie::flux::GSimpleNtpNuMI;
   }
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpNuMI(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GSimpleNtpNuMI[nElements] : new ::genie::flux::GSimpleNtpNuMI[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGSimpleNtpNuMI(void *p) {
      delete ((::genie::flux::GSimpleNtpNuMI*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpNuMI(void *p) {
      delete [] ((::genie::flux::GSimpleNtpNuMI*)p);
   }
   static void destruct_geniecLcLfluxcLcLGSimpleNtpNuMI(void *p) {
      typedef ::genie::flux::GSimpleNtpNuMI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GSimpleNtpNuMI

namespace genie {
   namespace flux {
//______________________________________________________________________________
void GSimpleNtpAux::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::flux::GSimpleNtpAux.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::flux::GSimpleNtpAux::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::flux::GSimpleNtpAux::Class(),this);
   }
}

} // namespace genie::flux
} // namespace genie::flux
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGSimpleNtpAux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GSimpleNtpAux : new ::genie::flux::GSimpleNtpAux;
   }
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpAux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GSimpleNtpAux[nElements] : new ::genie::flux::GSimpleNtpAux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGSimpleNtpAux(void *p) {
      delete ((::genie::flux::GSimpleNtpAux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpAux(void *p) {
      delete [] ((::genie::flux::GSimpleNtpAux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGSimpleNtpAux(void *p) {
      typedef ::genie::flux::GSimpleNtpAux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GSimpleNtpAux

namespace genie {
   namespace flux {
//______________________________________________________________________________
void GSimpleNtpMeta::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::flux::GSimpleNtpMeta.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genie::flux::GSimpleNtpMeta::Class(),this);
   } else {
      R__b.WriteClassBuffer(genie::flux::GSimpleNtpMeta::Class(),this);
   }
}

} // namespace genie::flux
} // namespace genie::flux
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGSimpleNtpMeta(void *p) {
      return  p ? new(p) ::genie::flux::GSimpleNtpMeta : new ::genie::flux::GSimpleNtpMeta;
   }
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpMeta(Long_t nElements, void *p) {
      return p ? new(p) ::genie::flux::GSimpleNtpMeta[nElements] : new ::genie::flux::GSimpleNtpMeta[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGSimpleNtpMeta(void *p) {
      delete ((::genie::flux::GSimpleNtpMeta*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpMeta(void *p) {
      delete [] ((::genie::flux::GSimpleNtpMeta*)p);
   }
   static void destruct_geniecLcLfluxcLcLGSimpleNtpMeta(void *p) {
      typedef ::genie::flux::GSimpleNtpMeta current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GSimpleNtpMeta

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGSimpleNtpFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GSimpleNtpFlux : new ::genie::flux::GSimpleNtpFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGSimpleNtpFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GSimpleNtpFlux[nElements] : new ::genie::flux::GSimpleNtpFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGSimpleNtpFlux(void *p) {
      delete ((::genie::flux::GSimpleNtpFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGSimpleNtpFlux(void *p) {
      delete [] ((::genie::flux::GSimpleNtpFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGSimpleNtpFlux(void *p) {
      typedef ::genie::flux::GSimpleNtpFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GSimpleNtpFlux

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGFLUKAAtmoFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GFLUKAAtmoFlux : new ::genie::flux::GFLUKAAtmoFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGFLUKAAtmoFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GFLUKAAtmoFlux[nElements] : new ::genie::flux::GFLUKAAtmoFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGFLUKAAtmoFlux(void *p) {
      delete ((::genie::flux::GFLUKAAtmoFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGFLUKAAtmoFlux(void *p) {
      delete [] ((::genie::flux::GFLUKAAtmoFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGFLUKAAtmoFlux(void *p) {
      typedef ::genie::flux::GFLUKAAtmoFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GFLUKAAtmoFlux

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGMonoEnergeticFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GMonoEnergeticFlux : new ::genie::flux::GMonoEnergeticFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGMonoEnergeticFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GMonoEnergeticFlux[nElements] : new ::genie::flux::GMonoEnergeticFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGMonoEnergeticFlux(void *p) {
      delete ((::genie::flux::GMonoEnergeticFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGMonoEnergeticFlux(void *p) {
      delete [] ((::genie::flux::GMonoEnergeticFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGMonoEnergeticFlux(void *p) {
      typedef ::genie::flux::GMonoEnergeticFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GMonoEnergeticFlux

namespace ROOT {
} // end of namespace ROOT for class ::genie::flux::GFluxDriverFactory

namespace ROOT {
} // end of namespace ROOT for class ::genie::flux::GFlavorMixerFactory

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGAstroFlux(void *p) {
      delete ((::genie::flux::GAstroFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGAstroFlux(void *p) {
      delete [] ((::genie::flux::GAstroFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGAstroFlux(void *p) {
      typedef ::genie::flux::GAstroFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GAstroFlux

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGDiffuseAstroFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GDiffuseAstroFlux : new ::genie::flux::GDiffuseAstroFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGDiffuseAstroFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GDiffuseAstroFlux[nElements] : new ::genie::flux::GDiffuseAstroFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGDiffuseAstroFlux(void *p) {
      delete ((::genie::flux::GDiffuseAstroFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGDiffuseAstroFlux(void *p) {
      delete [] ((::genie::flux::GDiffuseAstroFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGDiffuseAstroFlux(void *p) {
      typedef ::genie::flux::GDiffuseAstroFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GDiffuseAstroFlux

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGPointSourceAstroFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GPointSourceAstroFlux : new ::genie::flux::GPointSourceAstroFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGPointSourceAstroFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GPointSourceAstroFlux[nElements] : new ::genie::flux::GPointSourceAstroFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGPointSourceAstroFlux(void *p) {
      delete ((::genie::flux::GPointSourceAstroFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGPointSourceAstroFlux(void *p) {
      delete [] ((::genie::flux::GPointSourceAstroFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGPointSourceAstroFlux(void *p) {
      typedef ::genie::flux::GPointSourceAstroFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GPointSourceAstroFlux

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGBGLRSAtmoFlux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GBGLRSAtmoFlux : new ::genie::flux::GBGLRSAtmoFlux;
   }
   static void *newArray_geniecLcLfluxcLcLGBGLRSAtmoFlux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GBGLRSAtmoFlux[nElements] : new ::genie::flux::GBGLRSAtmoFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGBGLRSAtmoFlux(void *p) {
      delete ((::genie::flux::GBGLRSAtmoFlux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGBGLRSAtmoFlux(void *p) {
      delete [] ((::genie::flux::GBGLRSAtmoFlux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGBGLRSAtmoFlux(void *p) {
      typedef ::genie::flux::GBGLRSAtmoFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GBGLRSAtmoFlux

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLfluxcLcLGCylindTH1Flux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GCylindTH1Flux : new ::genie::flux::GCylindTH1Flux;
   }
   static void *newArray_geniecLcLfluxcLcLGCylindTH1Flux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::flux::GCylindTH1Flux[nElements] : new ::genie::flux::GCylindTH1Flux[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLfluxcLcLGCylindTH1Flux(void *p) {
      delete ((::genie::flux::GCylindTH1Flux*)p);
   }
   static void deleteArray_geniecLcLfluxcLcLGCylindTH1Flux(void *p) {
      delete [] ((::genie::flux::GCylindTH1Flux*)p);
   }
   static void destruct_geniecLcLfluxcLcLGCylindTH1Flux(void *p) {
      typedef ::genie::flux::GCylindTH1Flux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::flux::GCylindTH1Flux

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 216,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_libGTlFlx_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Tools/Flux",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Tools/Flux",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Tools/Flux",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Tools/Flux/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGTlFlx dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{namespace flux{class GFluxBlender;}}
namespace genie{namespace flux{class __attribute__((annotate("$clingAutoload$Tools/Flux/GAtmoFlux.h")))  GAtmoFlux;}}
namespace genie{namespace flux{class GHAKKMAtmoFlux;}}
namespace genie{namespace flux{class __attribute__((annotate("$clingAutoload$Tools/Flux/GFlavorMixerI.h")))  GFlavorMixerI;}}
namespace genie{namespace flux{class GFlavorMap;}}
namespace genie{namespace flux{class __attribute__((annotate("$clingAutoload$Tools/Flux/GFluxExposureI.h")))  GFluxExposureI;}}
namespace genie{namespace flux{class __attribute__((annotate("$clingAutoload$Tools/Flux/GFluxFileConfigI.h")))  GFluxFileConfigI;}}
namespace genie{namespace flux{class GNuMIFluxPassThroughInfo;}}
namespace genie{namespace flux{class GNuMIFlux;}}
namespace genie{namespace flux{class GJPARCNuFlux;}}
namespace genie{namespace flux{class GJPARCNuFluxPassThroughInfo;}}
namespace genie{namespace flux{class GSimpleNtpEntry;}}
namespace genie{namespace flux{class GSimpleNtpNuMI;}}
namespace genie{namespace flux{class GSimpleNtpAux;}}
namespace genie{namespace flux{class GSimpleNtpMeta;}}
namespace genie{namespace flux{class GSimpleNtpFlux;}}
namespace genie{namespace flux{class GFLUKAAtmoFlux;}}
namespace genie{namespace flux{class GMonoEnergeticFlux;}}
namespace genie{namespace flux{class GFluxDriverFactory;}}
namespace genie{namespace flux{class GFlavorMixerFactory;}}
namespace genie{namespace flux{class GAstroFlux;}}
namespace genie{namespace flux{class GDiffuseAstroFlux;}}
namespace genie{namespace flux{class GPointSourceAstroFlux;}}
namespace genie{namespace flux{class GBGLRSAtmoFlux;}}
namespace genie{namespace flux{class GCylindTH1Flux;}}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGTlFlx dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
////////////////////////////////////////////////////////////////////////
/// \file  GFluxBlender.h
/// \brief GENIE GFluxI adapter to allow flavor modification
///
///        This adapter intervenes between the GENIE GMCJDriver class
///        (MC job driver) and a concrete GFluxI flux generator, to
///        allow user modification of the neutrino flavor.  This
///        modification could be a fixed "swap" or an energy and/or
///        distance dependent (standard oscillations) one.
///
///        Because the GMCJDriver only queries the flavor of a 
///        generated neutrino once, prior to propagation through
///        the geometry, this approach is _not_ appropriate with
///        use of an oscillatory model in situations where the flavor 
///        might change significantly over the scale of the geometry.
///        In such cases one would have to generate with a fixed flavor
///        (energy/distance independent) swap and reweight after the fact.
///
///        Do not use this as a means of selecting only certain flavor
///        from flux generators that support other means (e.g. GNuMIFlux,
///        GSimpleNtpFlux which have SetFluxParticles(PDGCodeList)) as
///        those will be more efficient.
///
/// \version $Id: GFluxBlender.h,v 1.1.1.1 2010/12/22 16:18:52 p-nusoftart Exp $
/// \author  Robert Hatcher <rhatcher \at fnal.gov>
///          Fermi National Accelerator Laboratory
///
////////////////////////////////////////////////////////////////////////
#ifndef GENIE_FLUX_GFLUXBLENDER_H
#define GENIE_FLUX_GFLUXBLENDER_H

#include <vector>
#include "Framework/EventGen/GFluxI.h"
#include "Framework/ParticleData/PDGCodeList.h"

namespace genie {
namespace flux {

  // forward declarations within namespace
  class GFlavorMixerI;
  class GNuMIFlux;
  class GSimpleNtpFlux;

  class GFluxBlender : public GFluxI {
    
  public:
  
    GFluxBlender();
    ~GFluxBlender();

    //
    // implement the GFluxI interface:
    //   overriding real GFluxI methods:
    //      FluxParticles()  [final list of flavor might be more than source]
    //      GenerateNext()   [choose flavor during generation, avoid sterile]
    //
    const PDGCodeList &    FluxParticles (void); ///< declare list of flux neutrinos that can be generated (for init. purposes)
    double                 MaxEnergy     (void) { return fRealGFluxI->MaxEnergy(); } ///< declare the max flux neutrino energy that can be generated (for init. purposes)
    bool                   GenerateNext  (void); ///< generate the next flux neutrino (return false in err)
    int                    PdgCode       (void) { return fPdgCMixed; } ///< returns the flux neutrino pdg code
    double                 Weight        (void) { return fRealGFluxI->Weight(); } ///< returns the flux neutrino weight (if any)
    const TLorentzVector & Momentum      (void) { return fRealGFluxI->Momentum(); } ///< returns the flux neutrino 4-momentum 
    const TLorentzVector & Position      (void) { return fRealGFluxI->Position(); } ///< returns the flux neutrino 4-position (note: expect SI rather than physical units)
    bool                   End           (void) { return fRealGFluxI->End(); }  ///< true if no more flux nu's can be thrown (eg reaching end of beam sim ntuples)
    long int               Index            (void);
    void                   Clear            (Option_t * opt);
    void                   GenerateWeighted (bool gen_weighted);

    //
    // Additions to the GFluxI interface:
    //
    int             PdgCodeGenerated (void) { return fPdgCGenerated; } ///< returns the flux neutrino original pdg code
    double          Energy           (void) { return fEnergy; } //< returns the current neutrino's energy
    double          TravelDist       (void) { return fDistance; } ///< returns the distance used in the flavor mixing
    //
    // For flux methods that report a distance from the point of origin
    // to the chosen starting point for the ray use that distance
    // (supported in GNuMIFlux and GSimpleNtpFlux).
    // For other cases use a fixed travel distance (meters) set via:
    //
    void            SetBaselineDist  (double dist) { fBaselineDist = dist; }
    double          GetBaselineDist  (void) { return fBaselineDist; }

    //
    // Configuration:
    //
    GFluxI*         AdoptFluxGenerator(GFluxI* generator);    ///< return previous
    GFlavorMixerI*  AdoptFlavorMixer(GFlavorMixerI* mixer);   ///< return previous
    GFluxI*         GetFluxGenerator() { return fRealGFluxI; }  ///< access, not ownership
    GFlavorMixerI*  GetFlavorMixer()   { return fFlavorMixer; } ///< access, not ownership

    void            PrintConfig(void);
    void            PrintState(bool verbose=true);

  private:
    int             ChooseFlavor(int pdg_init, double energy, double dist);

    GFluxI*         fRealGFluxI;        ///< actual flux generator
    GNuMIFlux*      fGNuMIFlux;         ///< ref to avoid repeat dynamic_cast
    GSimpleNtpFlux* fGSimpleFlux;       ///< ref to avoid repeat dynamic_cast

    GFlavorMixerI*  fFlavorMixer;       ///< flavor modification schema

    PDGCodeList     fPDGListGenerator;  ///< possible flavors from generator
    PDGCodeList     fPDGListMixed;      ///< possible flavors after mixing
    size_t          fNPDGOut;           ///< # of possible output flavors

    double          fBaselineDist;      ///< travel dist for mixing (if flux doesn't support GetDecayDist())

    double          fEnergy;            ///< current neutrino's energy
    double          fDistance;          ///< current neutrino's travel distance
    int             fPdgCGenerated;     ///< current neutrino's original flavor
    int             fPdgCMixed;         ///< current neutrino's new flavor

    std::vector<double> fProb;          ///< individual transition probs
    std::vector<double> fSumProb;       ///< cummulative probability
    double              fRndm;          ///< random # used to make choice

  };

} // namespace flux
} // namespace genie
#endif //GENIE_FLUX_GFLUXBLENDER_H
//____________________________________________________________________________
/*!

\class   genie::flux::GHAKKMAtmoFlux

\brief   A driver for the HAKKM 3-D atmospheric neutrino flux (commonly known 
         as the `Honda flux') 

\ref     M. Honda, M. Sajjad Athar, T. Kajita, K. Kasahara, and S. Midorikawa
         Phys. Rev. D 92 (2015) 023004 

         The flux files necessary for running this flux driver can be obtained
         from:​http://www.icrr.u-tokyo.ac.jp/~mhonda/

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created July 9, 2015

\cpright Copyright (c) 2003-2019, The GENIE Collaboration
         for the full text of the license visit http://copyright.genie-mc.org
         or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GENIE_HAKKM_ATMO_FLUX_H_
#define _GENIE_HAKKM_ATMO_FLUX_H_

#include "Tools/Flux/GAtmoFlux.h"

namespace genie {
namespace flux  {

// Number of cos(zenith), azimuthat, and log(energy) bins in flux simulation

const unsigned int kGHnd3DNumCosThetaBins       =  20;
const double       kGHnd3DCosThetaMin           =  -1.0;
const double       kGHnd3DCosThetaMax           =   1.0;
const unsigned int kGHnd3DNumPhiBins       	=  12;
const double       kGHnd3DPhiMin           	=   0.0;
const double       kGHnd3DPhiMax           	= 360.0;
const unsigned int kGHnd3DNumLogEvBins          = 101;	
const unsigned int kGHnd3DNumLogEvBinsPerDecade =  20;
const double       kGHnd3DEvMin                 =   0.1; // GeV

class GHAKKMAtmoFlux: public GAtmoFlux {

public :
  GHAKKMAtmoFlux();
 ~GHAKKMAtmoFlux();

  //
  // Most implementation is derived from the base GAtmoFlux
  // The concrete driver is only required to implement a function for
  // loading the input data files
  //

private:

  void SetBinSizes   (void);
  bool FillFluxHisto (int nu_pdg, string filename);
};

} // flux namespace
} // genie namespace

#endif // _GENIE_ATMNC_ATMO_3D_FLUX_I_H_
////////////////////////////////////////////////////////////////////////
/// \file  GFlavorMap.h
/// \class genie::flux::GFlavorMap
/// \brief GENIE interface for flavor modification
///
///        Concrete instance of GFlavorMixerI that maps from
///        one flavor to another independent of energy or distance.
///        Users specify the transition probability from one flavor 
///        to any of the PDG codes { 0, 12, 14, 16, -12, -14, -16 } 
///        where 0 represents the complete disappearance (decay, sterile, ...).
///
///        Probability is expected to be normalized (that is, the sum
///        of all possible outcomes, including 0, must be 1).
///
///        Supported config string formats:
///        1)  " swap pdg1:pdg2  pdg3:pdg4 "
///            Map all neutrinos of flavor "pdg1" to "pdg2",  "pdg3" to "pdg4"
///            Use PDG values { 0, 12, 14, 16, -12, -14, -16 }
///              for { sterile, nu_e, nu_mu, nu_tau, nu_e_bar, ...}
///            Unnamed initial flavors are left unmodified.
///            Use numeric values with spaces only between pairs.
///            Must start with the literal "swap"
///            (FMWK note:  param must be surrounded by explicit "'s)
///        2)  " fixedfrac {pdg1:f0,f12,f14,f16,f-12,f-14,f-16} ..."
///            For each group delineated by {}'s the map the "pdg1"
///            by each pdg by the fraction given [0-1, sum=1].
///            So {12:0.5,0.5,0,0,0,0,0} means nu_e => 50/50% nu_e/nu_mu.
///            Each list *must* have an int + 7 fractions.
///
/// \author  Robert Hatcher <rhatcher \at fnal.gov>
///          Fermi National Accelerator Laboratory
///
/// \created 2010-10-31
/// \version $Id: GFlavorMap.h,v 1.1.1.1 2010/12/22 16:18:52 p-nusoftart Exp $
////////////////////////////////////////////////////////////////////////

#ifndef GENIE_FLUX_GFLAVORSWAP_H
#define GENIE_FLUX_GFLAVORSWAP_H

#include <string>
#include "Tools/Flux/GFlavorMixerI.h"

namespace genie {
namespace flux {

  class GFlavorMap : public GFlavorMixerI {
    
  public:
  
    GFlavorMap();
    ~GFlavorMap();

    //
    // implement the GFlavorMixerI interface:
    //

    /// each schema must take a string that configures it
    /// it is up to the individual model to parse said string
    /// and extract parameters (e.g. sin2th23, deltam12, etc)
    void      Config(std::string config);

    /// for any pair of PDG codes the model must calculate
    /// the transition probability.  This can also depend on
    /// neutrino energy (in GeV) and distance (in meters) from 
    /// the neutrino origin.
    double    Probability(int pdg_initial, int pdg_final, 
                          double energy, double dist);

    /// provide a means of printing the configuration
    void     PrintConfig(bool verbose=true);

  private:

    void         ParseMapString(std::string config);
    void         ParseFixedfracString(std::string config);

    int          PDG2Indx(int pdg);
    int          Indx2PDG(int indx);
    const char*  IndxName(int indx);
    const char*  NuName(int pdg) { return IndxName(PDG2Indx(pdg)); }

    double   fProb[7][7];

  };

} // namespace flux
} // namespace genie

//
//    Name        PDG   Indx
//    sterile       0   0
//    nu_e         12   1
//    nu_mu        14   2
//    nu_tau       16   3
//    nu_e_bar    -12   4
//    nu_mu_bar   -14   5
//    nu_tau_bar  -16   6
//
inline int genie::flux::GFlavorMap::PDG2Indx(int pdg)
{
  switch ( pdg ) {
  case  12: return 1; break;
  case  14: return 2; break;
  case  16: return 3; break;
  case -12: return 4; break;
  case -14: return 5; break;
  case -16: return 6; break;
  default:  return 0; break;
  }
  return 0;
}
inline int genie::flux::GFlavorMap::Indx2PDG(int indx)
{
  switch ( indx ) {
  case  1: return  12; break;
  case  2: return  14; break;
  case  3: return  16; break;
  case  4: return -12; break;
  case  5: return -14; break;
  case  6: return -16; break;
  default: return   0; break;
  }
  return 0;
}

#endif //GENIE_FLUX_GFLAVORSWAP_H
////////////////////////////////////////////////////////////////////////
/// \file  GFlavorMixerI.h
/// \class genie::flux::GFlavorMixerI
/// \brief GENIE interface for flavor modification
///
///        Specific implementations of this class when used in conjuction
///        with the genie::flux::GFluxBlender class allow it to act as
///        an intermediate between a concrete flux generator and the
///        genie::GMCJDriver class.  Using this adapter allows one to
///        apply neutrino flavor changes using different models without
///        modifying either the concrete flux generator or GMCJDriver.
///
///        Concrete instances of this interface must be configurable
///        from a string, and provide a means of calculating the
///        transition probability from one flavor to any of the PDG
///        codes { 0, 12, 14, 16, -12, -14, -16 } where 0 represents
///        the complete disappearance (decay, sterile, ...).
///
///        Probability is expected to be normalized (that is, the sum
///        of all possible outcomes, including 0, must be 1).
///
/// \author  Robert Hatcher <rhatcher \at fnal.gov>
///          Fermi National Accelerator Laboratory
///
/// \created 2010-10-31
/// \version $Id: GFlavorMixerI.h,v 1.1.1.1 2010/12/22 16:18:52 p-nusoftart Exp $
////////////////////////////////////////////////////////////////////////

#ifndef GENIE_FLUX_GFLAVORMIXERI_H
#define GENIE_FLUX_GFLAVORMIXERI_H

#include <string>

namespace genie {
namespace flux {

  class GFlavorMixerI {
    
  public:
  
    GFlavorMixerI();
    virtual ~GFlavorMixerI();

    //
    // define the GFlavorMixerI interface:
    //

    /// each schema must take a string that configures it
    /// it is up to the individual model to parse said string
    /// and extract parameters (e.g. sin2th23, deltam12, etc)
    virtual void      Config(std::string config) = 0;

    /// for any pair of PDG codes the model must calculate
    /// the transition probability.  This can also depend on
    /// neutrino energy (in GeV) and distance (in meters) from 
    /// the neutrino origin.
    virtual double    Probability(int pdg_initial, int pdg_final, 
                                  double energy, double dist) = 0;

    /// provide a means of printing the configuration
    virtual void     PrintConfig(bool verbose=true) = 0;

  };

} // namespace flux
} // namespace genie

#endif //GENIE_FLUX_GFLAVORMIXERI_H
//____________________________________________________________________________
/*!

\class    genie::flux::GNuMIFlux

\brief    A GENIE flux driver encapsulating the NuMI neutrino flux.
          It reads-in the official GNUMI neutrino flux ntuples.
          Supports both geant3 and geant4 formats.

\ref      http://www.hep.utexas.edu/~zarko/wwwgnumi/v19/

\author   Robert Hatcher <rhatcher \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  Jun 27, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GNUMI_NEUTRINO_FLUX_H_
#define _GNUMI_NEUTRINO_FLUX_H_

#include <string>
#include <iostream>
#include <vector>
#include <set>

#include <TVector3.h>
#include <TLorentzVector.h>
#include <TLorentzRotation.h>

#include "Framework/EventGen/GFluxI.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Tools/Flux/GFluxExposureI.h"
#include "Tools/Flux/GFluxFileConfigI.h"

class TFile;
class TChain;
class TTree;
class TBranch;

// MakeClass created classes for handling NuMI flux files
class g3numi;
class g4numi;
class flugg;

using std::string;
using std::ostream;

namespace genie {
namespace flux  {

class GNuMIFluxPassThroughInfo;
ostream & operator << (ostream & stream, const GNuMIFluxPassThroughInfo & info);

/// GNuMIFluxPassThroughInfo:
/// =========================
/// A small persistable C-struct -like class that mirrors (some of) the 
/// structure of the gnumi ntuples.  This can then be stored as an extra 
/// branch of the output event tree -alongside with the generated event 
/// branch- for use further upstream in the analysis chain - e.g. beam 
/// reweighting etc.
/// To do future x-y reweighting users must retain the info found in:
//     Ntype   Vx      Vy      Vz      
//     pdPx    pdPy    pdPz    
//     ppdxdz  ppdydz  pppz    ppenergy ptype
//     muparpx muparpy muparpz mupare   Necm
//     Nimpwt  
///
class GNuMIFluxPassThroughInfo: public TObject {
public:
   GNuMIFluxPassThroughInfo();
   /* allow default copy constructor ... for now nothing special
   GNuMIFluxPassThroughInfo(const GNuMIFluxPassThroughInfo & info);
   */
   virtual ~GNuMIFluxPassThroughInfo() { };

   void MakeCopy(const g3numi*);  ///< pull in from g3 ntuple
   void MakeCopy(const g4numi*);  ///< pull in from g4 ntuple
   void MakeCopy(const flugg*);   ///< pull in from flugg ntuple

   void ResetCopy();     // reset portion copied from ntuple
   void ResetCurrent();  // reset generated xy positioned info
   void ConvertPartCodes();
   void Print(const Option_t* opt = "") const;

   int CalcEnuWgt(const TLorentzVector& xyz, double& enu, double& wgt_xy) const;

   friend ostream & operator << (ostream & stream, const GNuMIFluxPassThroughInfo & info);

   int   pcodes;  // 0=original GEANT particle codes, 1=converted to PDG
   int   units;   // 0=original GEANT cm, 1=meters

   // Values for GNuMIFlux chosen x-y-z position, not from flux ntuple
   int            fgPdgC;   ///< generated nu pdg-code
   double         fgXYWgt;  ///< generated nu x-y weight
                            ///   not the same as GNuMIFlux::Weight()
                            ///   which include importance wgt and deweighting
   TLorentzVector fgP4;     ///< generated nu 4-momentum beam coord
   TLorentzVector fgX4;     ///< generated nu 4-position beam coord
   TLorentzVector fgP4User; ///< generated nu 4-momentum user coord
   TLorentzVector fgX4User; ///< generated nu 4-position user coord

   // Values copied from gnumi ntuples (generally maintained variable names)
   // see http://www.hep.utexas.edu/~zarko/wwwgnumi/v19/[/v19/output_gnumi.html]

   Int_t    run;
   Int_t    evtno;
   Double_t ndxdz;
   Double_t ndydz;
   Double_t npz;
   Double_t nenergy;
   Double_t ndxdznea;
   Double_t ndydznea;
   Double_t nenergyn;
   Double_t nwtnear;
   Double_t ndxdzfar;
   Double_t ndydzfar;
   Double_t nenergyf;
   Double_t nwtfar;
   Int_t    norig;
   Int_t    ndecay;
   Int_t    ntype;
   Double_t vx;
   Double_t vy;
   Double_t vz;
   Double_t pdpx;
   Double_t pdpy;
   Double_t pdpz;
   Double_t ppdxdz;
   Double_t ppdydz;
   Double_t pppz;
   Double_t ppenergy;
   Int_t    ppmedium;
   Int_t    ptype;     // converted to PDG
   Double_t ppvx;
   Double_t ppvy;
   Double_t ppvz;
   Double_t muparpx;
   Double_t muparpy;
   Double_t muparpz;
   Double_t mupare;
   Double_t necm;
   Double_t nimpwt;
   Double_t xpoint;
   Double_t ypoint;
   Double_t zpoint;
   Double_t tvx;
   Double_t tvy;
   Double_t tvz;
   Double_t tpx;
   Double_t tpy;
   Double_t tpz;
   Int_t    tptype;   // converted to PDG
   Int_t    tgen;
   Int_t    tgptype;  // converted to PDG
   Double_t tgppx;
   Double_t tgppy;
   Double_t tgppz;
   Double_t tprivx;
   Double_t tprivy;
   Double_t tprivz;
   Double_t beamx;
   Double_t beamy;
   Double_t beamz;
   Double_t beampx;
   Double_t beampy;
   Double_t beampz;    

#ifndef SKIP_MINERVA_MODS
   //=========================================
   // The following was inserted by MINERvA
   //=========================================
   int getProcessID(TString sval);
   int getVolID(TString sval);

   static const unsigned int MAX_N_TRAJ = 10; ///< Maximum number of trajectories to store

   Int_t    ntrajectory;
   Bool_t   overflow;
   int pdgcode[MAX_N_TRAJ];
   int trackId[MAX_N_TRAJ];
   int parentId[MAX_N_TRAJ];

   double startx[MAX_N_TRAJ];
   double starty[MAX_N_TRAJ];
   double startz[MAX_N_TRAJ];
   double startpx[MAX_N_TRAJ];
   double startpy[MAX_N_TRAJ];
   double startpz[MAX_N_TRAJ];
   double stopx[MAX_N_TRAJ];
   double stopy[MAX_N_TRAJ];
   double stopz[MAX_N_TRAJ];
   double stoppx[MAX_N_TRAJ];
   double stoppy[MAX_N_TRAJ];
   double stoppz[MAX_N_TRAJ];
   double pprodpx[MAX_N_TRAJ];
   double pprodpy[MAX_N_TRAJ];
   double pprodpz[MAX_N_TRAJ];

   int proc[MAX_N_TRAJ];
   int ivol[MAX_N_TRAJ];
   int fvol[MAX_N_TRAJ];
   //END of minerva additions
#endif

ClassDef(GNuMIFluxPassThroughInfo,5)
};

/// GNuMIFlux:
/// ==========
/// An implementation of the GFluxI interface that provides NuMI flux
///
class GNuMIFlux 
  : public genie::GFluxI
  , public genie::flux::GFluxExposureI
  , public genie::flux::GFluxFileConfigI 
{

public :
  GNuMIFlux();
 ~GNuMIFlux();

  // Methods implementing the GENIE GFluxI interface, required for integrating
  // the NuMI neutrino flux simulations with the GENIE event generation drivers

  const PDGCodeList &    FluxParticles (void) { return *fPdgCList;            }
  double                 MaxEnergy     (void) { return  fMaxEv;               }
  bool                   GenerateNext  (void);
  int                    PdgCode       (void) { return  fCurEntry->fgPdgC;    }
  double                 Weight        (void) { return  fWeight;              }
  const TLorentzVector & Momentum      (void) { return  fCurEntry->fgP4User;  }
  const TLorentzVector & Position      (void) { return  fCurEntry->fgX4User;  }
  bool                   End           (void) { return  fEnd;                 }
  long int               Index         (void) { return  fIEntry;              }
  void                   Clear            (Option_t * opt);
  void                   GenerateWeighted (bool gen_weighted);

  // Methods specific to the NuMI flux driver,
  // for configuration/initialization of the flux & event generation drivers 
  // and and for passing-through flux information (e.g. neutrino parent decay
  // kinematics) not used by the generator but required by analyses/processing 
  // further downstream

  //
  // information about or actions on current entry
  //
  const GNuMIFluxPassThroughInfo &
     PassThroughInfo(void) { return *fCurEntry; } ///< GNuMIFluxPassThroughInfo
  Long64_t GetEntryNumber() { return fIEntry; }   ///< index in chain

  double    GetDecayDist() const; ///< dist (user units) from dk to current pos
  void      MoveToZ0(double z0);  ///< move ray origin to user coord Z0

  //
  // information about the current state
  //
  virtual double    GetTotalExposure() const;  // GFluxExposureI interface
  virtual long int  NFluxNeutrinos() const;    ///< # of rays generated

  double    POT_curr(void);             ///< current average POT (RWH?)
  double    UsedPOTs(void) const;       ///< # of protons-on-target used

  double    SumWeight(void) const { return fSumWeight;  } ///< integrated weight for flux neutrinos looped so far

  void      PrintCurrent(void);         ///< print current entry from leaves
  void      PrintConfig();              ///< print the current configuration

  std::vector<std::string> GetFileList();  ///< list of files currently part of chain

  // 
  // GFluxFileConfigI interface
  //
  virtual void  LoadBeamSimData(const std::vector<std::string>& filenames,
                                const std::string&              det_loc);
  using GFluxFileConfigI::LoadBeamSimData; // inherit the rest
  virtual void GetBranchInfo(std::vector<std::string>& branchNames,
                             std::vector<std::string>& branchClassNames,
                             std::vector<void**>&      branchObjPointers);
  virtual TTree* GetMetaDataTree();

  //
  // configuration of GNuMIFlux
  //

  bool      LoadConfig(string cfg);                               ///< load a named configuration
  void      SetMaxEnergy(double Ev);                              ///< specify maximum flx neutrino energy

  void      SetGenWeighted(bool genwgt=false) { fGenWeighted = genwgt; } ///< toggle whether GenerateNext() returns weight=1 flux (initial default false)

  void      SetEntryReuse(long int nuse=1);                       ///<  # of times to use entry before moving to next

  void      SetTreeName(string name);                             ///< set input tree name (default: "h10")
  void      ScanForMaxWeight(void);                               ///< scan for max flux weight (before generating unweighted flux neutrinos)
  void      SetMaxWgtScan(double fudge = 1.05, long int nentries = 2500000)      ///< configuration when estimating max weight
            { fMaxWgtFudge = fudge; fMaxWgtEntries = nentries; }
  void      SetMaxEFudge(double fudge = 1.05)                     ///< extra fudge factor in estimating maximum energy
            { fMaxEFudge = fudge; }
  void      SetApplyWindowTiltWeight(bool apply = true)           ///< apply wgt due to tilt of flux window relative to beam
            { fApplyTiltWeight = apply; }


  // GNuMIFlux uses "cm" as the length unit consistently internally (this is 
  // the length units used by both the g3 and g4 ntuples).  User interactions 
  // setting the beam-to-detector coordinate transform, flux window, and the 
  // returned position might need to be in other units.  Use:
  //     double scale = genie::utils::units::UnitFromString("cm");
  // ( #include "Utils/UnitUtils.h for declaration )
  // to get the correct scale factor to pass in.  This should get set
  // FIRST before setting detector position/rotation

  void   SetLengthUnits(double user_units);  ///< Set units assumed by user
  double    LengthUnits(void) const;         ///< Return user units
  
  // set relative orientation of user coords vs. beam system, i.e.
  //  x3_user = ( beamrot * x3_beam ) + x0beam_user
  //  p3_user =   beamrot * p3_beam 

  ///< beam (0,0,0) relative to user frame, beam direction in user frame
  void      SetBeamRotation(TRotation beamrot);
  void      SetBeamCenter(TVector3 beam0);
  TRotation GetBeamRotation() const; ///< rotation to apply from beam->user
  TVector3  GetBeamCenter() const;   ///< beam origin in user frame

  // configure a flux window (or point) where E_nu and weight are evaluated

  typedef enum EStdFluxWindow {
    kMinosNearDet,      // appropriate for Near Detector
    kMinosFarDet,       // appropriate for Far Detector
    kMinosNearRock,     // appropriate for Near rock generation
    kMinosFarRock,      // appropriate for Far rock generation
    kMinosNearCenter,   // point location mimic near value in ntuple
    kMinosFarCenter     // point location mimic far value in ntuple
  } StdFluxWindow_t;

  // set both flux window in user coord and coordinate transform 
  // for some standard conditions
  bool      SetFluxWindow(StdFluxWindow_t stdwindow, double padding=0);  ///< return false if unhandled
  
  // rwh: potential upgrade: allow flux window set/get in beam coords 
  // as optional flag to *etFluxWindow
  void      SetFluxWindow(TVector3  p1, TVector3  p2, TVector3  p3); ///< 3 points define a plane (by default in user coordinates)
  void      GetFluxWindow(TVector3& p1, TVector3& p2, TVector3& p3) const; ///< 3 points define a plane in beam coordinate 

  /// force weights at MINOS detector "center" as found in ntuple
  void      UseFluxAtNearDetCenter(void);
  void      UseFluxAtFarDetCenter(void);

  //
  // Actual coordinate transformations  b=beam, u=user (e.g. detector)
  //
  void      Beam2UserPos(const TLorentzVector& beamxyz,
                               TLorentzVector& usrxyz  ) const;
  void      Beam2UserDir(const TLorentzVector& beamdir,
                               TLorentzVector& usrdir  ) const;
  void      Beam2UserP4 (const TLorentzVector& beamp4,
                               TLorentzVector& usrp4   ) const;
  void      User2BeamPos(const TLorentzVector& usrxyz,
                               TLorentzVector& beamxyz ) const;
  void      User2BeamDir(const TLorentzVector& usrdir,
                               TLorentzVector& beamdir ) const;
  void      User2BeamP4 (const TLorentzVector& usrp4,
                               TLorentzVector& beamp4  ) const;

  TVector3  FluxWindowNormal() { return fWindowNormal; }

private:

  // Private methods
  //
  bool GenerateNext_weighted (void);
  void Initialize            (void);
  void SetDefaults           (void);
  void CleanUp               (void);
  void ResetCurrent          (void);
  void AddFile               (TTree* tree, string fname);
  void CalcEffPOTsPerNu      (void);
  
  // Private data members
  //
  double         fMaxEv;          ///< maximum energy
  bool           fEnd;            ///< end condition reached

  std::vector<string> fNuFluxFilePatterns;   ///< (potentially wildcarded) path(s)
  string    fNuFluxTreeName;      ///< Tree name "h10" (g3) or "nudata" (g4)
  TChain*   fNuFluxTree;          ///< TTree in g3numi or g4numi // REF ONLY!
  string    fNuFluxGen;           ///< "g3numi" "g4numi" or "flugg"
  g3numi*   fG3NuMI;              ///< g3numi ntuple
  g4numi*   fG4NuMI;              ///< g4numi ntuple
  flugg*    fFlugg;               ///< flugg ntuple
  int       fNFiles;              ///< number of files in chain
  Long64_t  fNEntries;            ///< number of flux ntuple entries
  Long64_t  fIEntry;              ///< current flux ntuple entry
  Long64_t  fNuTot;               ///< cummulative # of entries (=fNEntries)
  Long64_t  fFilePOTs;            ///< # of protons-on-target represented by all files

  double    fWeight;              ///< current neutrino weight, =1 if generating unweighted entries
  double    fMaxWeight;           ///< max flux neutrino weight in input file
  double    fMaxWgtFudge;         ///< fudge factor for estimating max wgt
  long int  fMaxWgtEntries;       ///< # of entries in estimating max wgt
  double    fMaxEFudge;           ///< fudge factor for estmating max enu (0=> use fixed 120GeV)

  long int  fNUse;                ///< how often to use same entry in a row
  long int  fIUse;                ///< current # of times an entry has been used
  double    fSumWeight;           ///< sum of weights for nus thrown so far
  long int  fNNeutrinos;          ///< number of flux neutrinos thrown so far
  double    fEffPOTsPerNu;        ///< what a entry is worth ...
  double    fAccumPOTs;           ///< POTs used so far

  bool      fGenWeighted;         ///< does GenerateNext() give weights?
  bool      fApplyTiltWeight;     ///< wgt due to window normal not || beam 
  bool      fDetLocIsSet;         ///< is a flux location (near/far) set?
  int       fUseFluxAtDetCenter;  ///< use flux at near (-1) or far (+1) det center from ntuple?
  
  double           fLengthUnits;    ///< units for coord in user exchanges
  double           fLengthScaleB2U; ///< scale factor beam (cm) --> user
  double           fLengthScaleU2B; ///< scale factor beam user --> (cm)

  TLorentzVector   fBeamZero;       ///< beam origin in user coords
  TLorentzRotation fBeamRot;        ///< rotation applied beam --> user coord
  TLorentzRotation fBeamRotInv;

  TVector3         fFluxWindowPtUser[3]; ///<  user points of flux window
  TLorentzVector   fFluxWindowBase; ///< base point for flux window - beam coord
  TLorentzVector   fFluxWindowDir1; ///< extent for flux window (direction 1)
  TLorentzVector   fFluxWindowDir2; ///< extent for flux window (direction 2)
  double           fFluxWindowLen1;
  double           fFluxWindowLen2;
  TVector3         fWindowNormal;   ///< normal direction for flux window

  TLorentzVector   fgX4dkvtx;       ///< decay 4-position beam coord

  GNuMIFluxPassThroughInfo* fCurEntry;  ///< copy of current ntuple entry info (owned structure)

};

//#define GNUMI_TEST_XY_WGT
#ifdef  GNUMI_TEST_XY_WGT
class xypartials { 
  // intermediate partial info from xy reweighting for comparison w/ f77 version
   friend ostream & operator << (ostream & stream, const xypartials & info);
public:
  xypartials() { ; }
  void ReadStream(std::ifstream& myfile);
  int  Compare(const xypartials& other) const;
  void Print(const Option_t* opt = "") const;
  static xypartials& GetStaticInstance(); // copy used by CalcEnuWgt()
  // actual data
  double xdet, ydet, zdet;
  double parent_mass, parentp, parent_energy;
  double gamma, beta_mag, enuzr, rad;
  double costh_pardet, theta_pardet, emrat, eneu;
  double sangdet, wgt;
  double betanu[3], p_nu[3], partial1, p_dcm_nu[4];
  double muparent_px, muparent_py, muparent_pz;
  double gammamp, betamp[3], partial2, p_pcm_mp[3], p_pcm;
  double costhmu, wgt_ratio;
  int ptype, ntype;

};
#endif

} // flux namespace
} // genie namespace

#endif // _GNUMI_NEUTRINO_FLUX_H_
//____________________________________________________________________________
/*!

\class    genie::flux::GJPARCNuFlux

\brief    A GENIE flux driver encapsulating the JPARC neutrino flux.
          It reads-in the official JPARC neutrino flux ntuples.

\ref      See http://jnusrv01.kek.jp/internal/t2k/nubeam/flux/ 
          (Note: T2K internal)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 04, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GJPARC_NEUTRINO_FLUX_H_
#define _GJPARC_NEUTRINO_FLUX_H_

#include <string>
#include <iostream>

#include <TLorentzVector.h>
#include <TVector3.h>
#include <TH1D.h>

#include "Framework/EventGen/GFluxI.h"
#include "Framework/ParticleData/PDGUtils.h"

class TFile;
class TTree;
class TChain;
class TBranch;

using std::string;
using std::ostream;

namespace genie {
namespace flux  {

class GJPARCNuFluxPassThroughInfo;

ostream & operator << (ostream & stream, const GJPARCNuFluxPassThroughInfo & info);

class GJPARCNuFlux: public GFluxI {

public :
  GJPARCNuFlux();
 ~GJPARCNuFlux();

  // Methods implementing the GENIE GFluxI interface, required for integrating
  // the JPARC neutrino flux simulations with the GENIE event generation drivers

  const PDGCodeList &    FluxParticles (void) { return *fPdgCList;             }
  double                 MaxEnergy     (void) { return  fMaxEv;                }
  bool                   GenerateNext  (void);
  int                    PdgCode       (void) { return  fgPdgC;                }
  double                 Weight        (void) { return  fNorm / fMaxWeight;    }
  const TLorentzVector & Momentum      (void) { return  fgP4;                  }
  const TLorentzVector & Position      (void) { return  fgX4;                  }
  bool                   End           (void) { return  fEntriesThisCycle >= fNEntries 
                                                     && fICycle == fNCycles && fNCycles > 0;   }
  long int               Index         (void);                              
  void                   Clear            (Option_t * opt); 
  void                   GenerateWeighted (bool gen_weighted = true);

  // Methods specific to the JPARC flux driver, 
  // for configuration/initialization of the flux & event generation drivers and
  // and for passing-through flux information (eg neutrino parent decay kinematics)
  // not used by the generator but required by analyses/processing further upstream

  bool LoadBeamSimData  (string filename, string det_loc);     ///< load a jnubeam root flux ntuple
  void SetFluxParticles (const PDGCodeList & particles);       ///< specify list of flux neutrino species
  void SetMaxEnergy     (double Ev);                           ///< specify maximum flx neutrino energy
  void SetFilePOT       (double pot);                          ///< flux file norm is in /N POT/det [ND] or /N POT/cm^2 [FD]. Specify N (typically 1E+21)
  void SetUpstreamZ     (double z0);                           ///< set flux neutrino initial z position (upstream of the detector)
  void SetNumOfCycles   (int n);                               ///< set how many times to cycle through the ntuple (default: 1 / n=0 means 'infinite')
  void DisableOffset    (void){fUseRandomOffset = false;}      ///< switch off random offset, must be called before LoadBeamSimData to have any effect 
  void RandomOffset     (void);                                ///< choose a random offset as starting entry in flux ntuple 

  double   POT_1cycle     (void);                              ///< flux POT per cycle
  double   POT_curravg    (void);                              ///< current average POT
  long int NFluxNeutrinos (void) const { return fNNeutrinos; } ///< number of flux neutrinos looped so far
  double   SumWeight      (void) const { return fSumWeight;  } ///< intergated weight for flux neutrinos looped so far

  const GJPARCNuFluxPassThroughInfo & 
     PassThroughInfo(void) { return *fPassThroughInfo; } ///< GJPARCNuFluxPassThroughInfo

private:

  // Private methods
  //
  bool GenerateNext_weighted (void);
  void Initialize            (void);
  void SetDefaults           (void);  
  void CleanUp               (void);
  void ResetCurrent          (void);
  int  DLocName2Id           (string name);

  // Private data members
  //
  double         fMaxEv;       ///< maximum energy
  PDGCodeList *  fPdgCList;    ///< list of neutrino pdg-codes

  int            fgPdgC;       ///< running generated nu pdg-code
  TLorentzVector fgP4;         ///< running generated nu 4-momentum
  TLorentzVector fgX4;         ///< running generated nu 4-position

  TFile *   fNuFluxFile;       ///< input flux file
  TTree *   fNuFluxTree;       ///< input flux ntuple
  TChain *  fNuFluxChain;      ///< input flux ntuple
  TTree *   fNuFluxSumTree;    ///< input summary ntuple for flux file. This tree is only present for later flux versions > 10a
  TChain *  fNuFluxSumChain;   ///< input summary ntuple for flux file. This tree is only present for later flux versions > 10a
  bool      fNuFluxUsingTree;  ///< are we using a TTree or a TChain to view the input flux file?
  string    fDetLoc;           ///< input detector location ('sk','nd1','nd2',...)
  int       fDetLocId;         ///< input detector location id (fDetLoc -> jnubeam idfd)
  int       fNDetLocIdFound;   ///< per cycle keep track of the number of fDetLocId are found - if this is zero will exit job 
  bool      fIsFDLoc;          ///< input location is a 'far'  detector location?
  bool      fIsNDLoc;          ///< input location is a 'near' detector location?
  long int  fNEntries;         ///< number of flux ntuple entries
  long int  fIEntry;           ///< current flux ntuple entry
  long int  fEntriesThisCycle; ///< keep track of number of entries used so far for this cycle   
  long int  fOffset;           ///< start looping at entry fOffset
  double    fNorm;             ///< current flux ntuple normalisation
  double    fMaxWeight;        ///< max flux  neutrino weight in input file for the specified detector location
  double    fFilePOT;          ///< file POT normalization, typically 1E+21
  double    fZ0;               ///< configurable starting z position for each flux neutrino (in detector coord system)
  int       fNCycles;          ///< how many times to cycle through the flux ntuple
  int       fICycle;           ///< current cycle
  double    fSumWeight;        ///< sum of weights for neutrinos thrown so far
  long int  fNNeutrinos;       ///< number of flux neutrinos thrown so far
  double    fSumWeightTot1c;   ///< total sum of weights for neutrinos to be thrown / cycle
  long int  fNNeutrinosTot1c;  ///< total number of flux neutrinos to be thrown / cycle
  bool      fGenerateWeighted; ///< generate weighted/deweighted flux neutrinos (default is false)
  bool      fUseRandomOffset;  ///< whether set random starting point when looping over flux ntuples
  bool      fLoadedNeutrino;   ///< set to true when GenerateNext_weighted has been called successfully

  GJPARCNuFluxPassThroughInfo * fPassThroughInfo;
};


// A small persistable C-struct - like class that may be stored at an extra branch of 
// the output event tree -alongside with the generated event branch- for use further 
// upstream in the t2k analysis chain -eg beam reweighting etc-)
//
const int fNgmax = 12;
class GJPARCNuFluxPassThroughInfo: public TObject { 
public:
   GJPARCNuFluxPassThroughInfo();
   GJPARCNuFluxPassThroughInfo(const GJPARCNuFluxPassThroughInfo & info);
   virtual ~GJPARCNuFluxPassThroughInfo() { };

   void Reset();
   friend ostream & operator << (ostream & stream, const GJPARCNuFluxPassThroughInfo & info);

   long   fluxentry;
   string fluxfilename;
   // Using an instance of this class the following datamembers are set 
   // directly as the branch addresses of jnubeam flux ntuples tree:
   float  Enu;            // set to "Enu/F": Nu energy (GeV)  
   int    ppid;           // set to "ppid/I": Nu parent GEANT particle id 
   int    mode;           // set to "mode/I": Nu parent decay mode (see http://jnusrv01.kek.jp/internal/t2k/nubeam/flux/nemode.h)
   float  ppi;            // set to "ppi/F": Nu parent momentum at its decay point (GeV)
   float  xpi[3];         // set to "xpi[3]/F": Nu parent position vector at decay (cm, in t2k global coord system)
   float  npi[3];         // set to "npi[3]/F": Nu parent direction vector at decay (in t2k global coord system) 
   float  norm;           // set to "norm/F": Weight to give flux in /N POT/det. [ND] or /N POT/cm^2 [FD], where is N is typically 1E+21
   int    nvtx0;          // set to "nvtx0/I": Number of vtx where the nu. parent was produced (made obsolete by nd variable inroduced in 10d flux version)
   float  ppi0;           // set to "ppi0/F": Nu parent momentum at its production point (GeV)
   float  xpi0[3];        // set to "xpi0[3]/F": Nu parent position vector at production (cm, in t2k global coord system)
   float  npi0[3];        // set to "npi0[3]/F": Nu parent direction vector at production (in t2k global coord system)
   float  rnu;            // set to "rnu/F": Nu radial position (cm, in detector coord system)
   float  xnu;            // set to "xnu/F": Nu x position (cm, in detector coord system)
   float  ynu;            // set to "ynu/F": Nu y position (cm, in detector coord system)
   float  nnu[3];         // set to "nnu[3]/F": Nu direction (in t2k global coord system)
   // New since JNuBeam 10a flux version.
   float  cospibm;        // set to "cospibm/F": Nu parent direction cosine at decay (with respect to the beam direction) 
   float  cospi0bm;       // set to "cospi0bm/F": Nu parent direction cosine at production (with respect to the beam direction)
   int    idfd;           // set to "idfd/I": Detector ID
   unsigned char gipart;  // set to "gipart/B": Primary particle ID
   float  gpos0[3];       // set to "gpos0[3]/F": Primary particle starting point
   float  gvec0[3];       // set to "gvec0[3]/F": Primary particle direction at the starting point
   float  gamom0;         // set to "gamom0/F": Momentum of the primary particle at the starting point
   // New since JNuBeam 10d and 11a flux version updates
   int    ng;             // set to "ng/I": Number of parents (number of generations)
   float  gpx[fNgmax];    // set to "gpx[20]/F":  Momentum X of each ancestor particle
   float  gpy[fNgmax];    // set to "gpy[20]/F":  Momentum Y of each ancestor particle
   float  gpz[fNgmax];    // set to "gpz[20]/F":  Momentum Z of each ancestor particle
   float  gcosbm[fNgmax]; // set to "gcosbm[20]/F": Cosine of the angle between the ancestor particle direction and the beam direction
   float  gvx[fNgmax];    // set to "gvx[20]/F": Vertex X position of each ancestor particle 
   float  gvy[fNgmax];    // set to "gvy[20]/F": Vertex Y position of each ancestor particle 
   float  gvz[fNgmax];    // set to "gvz[20]/F": Vertex Z position of each ancestor particle 
   int    gpid[fNgmax];   // set to "gpid[20]/I": Particle ID of each ancestor particles
   int    gmec[fNgmax];   // set to "gmec[20]/I": Particle production mechanism of each ancestor particle 
   // Next five only present since 11a flux
   int    gmat[fNgmax];   // set to "gmat[fNgmax]/I": Material in which the particle originates 
   float  gdistc[fNgmax]; // set to "gdistc[fNgmax]/F": Distance traveled through carbon 
   float  gdistal[fNgmax]; // set to "gdista[fNgmax]/F": Distance traveled through aluminum
   float  gdistti[fNgmax];// set to "gdistti[fNgmax]/F": Distance traveled through titanium
   float  gdistfe[fNgmax];// set to "gdistte[fNgmax]/F": Distance traveled through iron
   float  Enusk;          // set to "Enusk/F": "Enu" for SK
   float  normsk;         // set to "normsk/F": "norm" for SK 
   float  anorm;          // set to "anorm/F": Norm component from ND acceptance calculation
   // The following do not change per flux entry as is summary info for the flux
   // file. For simplicity we just store per flux entry and accept the duplication.
   float  version;        // set to "version/F": Jnubeam version
   int    tuneid;         // set to "tuneid/I": Parameter set identifier
   int    ntrig;          // set to "ntrig/I": Number of Triggers in simulation
   int    pint;           // set to "pint/I": Interaction model ID
   float  bpos[2];        // set to "bpos[2]/F": Beam center position
   float  btilt[2];       // set to "btilt[2]/F": Beam Direction
   float  brms[2];        // set to "brms[2]/F": Beam RMS Width
   float  emit[2];        // set to "emit[2]/F": Beam Emittance 
   float  alpha[2];       // set to "alpha[2]/F": Beam alpha parameter
   float  hcur[3];        // set to "hcur[3]/F": Horns 1, 2 and 3 Currents
   int    rand;           // set to "rand/I": Random seed
   int    rseed[2];          // set to "rseed/I": Random seed

ClassDef(GJPARCNuFluxPassThroughInfo,3)
};

} // flux namespace
} // genie namespace

#endif // _GJPARC_NEUTRINO_FLUX_H_
//____________________________________________________________________________
/*!

\class    genie::flux::GSimpleNtpFlux

\brief    A GENIE flux driver using a simple ntuple format

\author   Robert Hatcher <rhatcher \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  Jan 25, 2010

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _SIMPLE_NTP_FLUX_H_
#define _SIMPLE_NTP_FLUX_H_

#include <string>
#include <iostream>
#include <vector>
#include <set>

#include <TVector3.h>
#include <TLorentzVector.h>
#include <TLorentzRotation.h>

#include "Framework/EventGen/GFluxI.h"
#include "Tools/Flux/GFluxExposureI.h"
#include "Tools/Flux/GFluxFileConfigI.h"
#include "Framework/ParticleData/PDGUtils.h"

class TFile;
class TChain;
class TTree;
class TBranch;

using std::string;
using std::ostream;

namespace genie {
namespace flux  {

class GSimpleNtpEntry;    
ostream & operator << (ostream & stream, const GSimpleNtpEntry & info);

/// Small persistable C-struct -like classes that makes up the SimpleNtpFlux
/// ntuple.  This is only valid for a particular flux window (no reweighting,
/// no coordinate transformation available).
///
/// Order elements from largest to smallest for ROOT alignment purposes

/// GSimpleNtpEntry
/// =========================
/// This is the only required branch ("entry") of the "flux" tree
  class GSimpleNtpEntry {
  public:
    GSimpleNtpEntry();
    /* allow default copy constructor ... for now nothing special
       GSimpleNtpEntry(const GSimpleNtpEntry & info);
    */
    virtual ~GSimpleNtpEntry() { };
    void Reset();
    void Print(const Option_t* opt = "") const;
    friend ostream & operator << (ostream & stream, const GSimpleNtpEntry & info);
    
    Double_t   wgt;      ///< nu weight
    
    Double_t   vtxx;     ///< x position in lab frame
    Double_t   vtxy;     ///< y position in lab frame
    Double_t   vtxz;     ///< z position in lab frame
    Double_t   dist;     ///< distance from hadron decay
    
    Double_t   px;       ///< x momentum in lab frame
    Double_t   py;       ///< y momentum in lab frame
    Double_t   pz;       ///< z momentum in lab frame
    Double_t   E;        ///< energy in lab frame
    
    Int_t      pdg;      ///< nu pdg-code
    UInt_t     metakey;  ///< key to meta data

    ClassDef(GSimpleNtpEntry,1)
  };


  class GSimpleNtpNuMI;
  ostream & operator << (ostream & stream, const GSimpleNtpNuMI & info);

/// GSimpleNtpNuMI
/// =========================
/// Additional elements for NuMI (allow SKZP reweighting and reference
/// back to original GNuMI flux entries) as "numi" branch
  class GSimpleNtpNuMI {
  public:
    GSimpleNtpNuMI();
    virtual ~GSimpleNtpNuMI() { };
    void Reset();
    void Print(const Option_t* opt = "") const;
    friend ostream & operator << (ostream & stream, const GSimpleNtpNuMI & info);
    Double_t   tpx;      ///< parent particle px at target exit
    Double_t   tpy;
    Double_t   tpz;
    Double_t   vx;       ///< vertex position of hadron/muon decay
    Double_t   vy;
    Double_t   vz;
    Double_t   pdpx;     ///< nu parent momentum at time of decay
    Double_t   pdpy;
    Double_t   pdpz;
    Double_t   pppx;     ///< nu parent momentum at production point
    Double_t   pppy;
    Double_t   pppz;

    Int_t      ndecay;   ///< decay mode
    Int_t      ptype;    ///< parent type (PDG)
    Int_t      ppmedium; ///< tracking medium where parent was produced
    Int_t      tptype;   ///< parent particle type at target exit
    
    Int_t      run;      ///< 
    Int_t      evtno;    ///<
    Int_t      entryno;  ///<
    
    ClassDef(GSimpleNtpNuMI,3)
  };


  class GSimpleNtpAux;
  ostream & operator << (ostream & stream, const GSimpleNtpAux & info);

/// GSimpleNtpAux
/// =========================
/// Additional elements for expansion as "aux" branch
  class GSimpleNtpAux {
  public:
    GSimpleNtpAux();
    virtual ~GSimpleNtpAux() { };
    void Reset();
    void Print(const Option_t* opt = "") const;
    friend ostream & operator << (ostream & stream, const GSimpleNtpAux & info);

   std::vector<Int_t>    auxint;  ///< additional ints associated w/ entry
   std::vector<Double_t> auxdbl;  ///< additional doubles associated w/ entry
  
   ClassDef(GSimpleNtpAux,1)
  };


  class GSimpleNtpMeta;
  ostream & operator << (ostream & stream, const GSimpleNtpMeta & info);

/// GSimpleNtpMeta
/// =========================
/// A small persistable C-struct -like class that holds metadata 
/// about the the SimpleNtpFlux ntple.
///
  class GSimpleNtpMeta: public TObject {
  public:
    GSimpleNtpMeta();
    /* allow default copy constructor ... for now nothing special
       GSimpleNtpMeta(const GSimpleNtpMeta & info);
    */
    virtual ~GSimpleNtpMeta();

    void Reset();
    void AddFlavor(Int_t nupdg);
    void Print(const Option_t* opt = "") const;
    friend ostream & operator << (ostream & stream, const GSimpleNtpMeta & info);
    
    std::vector<Int_t>  pdglist; ///< list of neutrino flavors
   
    Double_t maxEnergy;   ///< maximum energy
    Double_t minWgt;      ///< minimum weight
    Double_t maxWgt;      ///< maximum weight
    Double_t protons;     ///< represented number of protons-on-target

    Double_t windowBase[3]; ///< x,y,z position of window base point
    Double_t windowDir1[3]; ///< dx,dy,dz of window direction 1
    Double_t windowDir2[3]; ///< dx,dy,dz of window direction 2
    
    std::vector<std::string>    auxintname;  ///< tagname of aux ints associated w/ entry
    std::vector<std::string>    auxdblname;  ///< tagname of aux doubles associated w/ entry
    std::vector<std::string>    infiles; ///< list of input files
    
    Int_t    seed;     ///< random seed used in generation
    UInt_t   metakey;  ///< index key to tie to individual entries

    static UInt_t mxfileprint;  ///< allow user to limit # of files to print

    ClassDef(GSimpleNtpMeta,1)
  };


/// GSimpleNtpFlux:
/// ==========
/// An implementation of the GFluxI interface that provides NuMI flux
///
class GSimpleNtpFlux 
  : public genie::GFluxI
  , public genie::flux::GFluxExposureI
  , public genie::flux::GFluxFileConfigI 
{

public :
  GSimpleNtpFlux();
 ~GSimpleNtpFlux();

  // Methods implementing the GENIE GFluxI interface, required for integrating
  // the NuMI neutrino flux simulations with the GENIE event generation drivers

  const PDGCodeList &    FluxParticles (void) { return *fPdgCList;            }
  double                 MaxEnergy     (void) { return  fMaxEv;               }
  bool                   GenerateNext  (void);
  int                    PdgCode       (void) { return  fCurEntry->pdg;       }
  double                 Weight        (void) { return  fWeight;              }
  const TLorentzVector & Momentum      (void) { return  fP4;  }
  const TLorentzVector & Position      (void) { return  fX4;  }
  bool                   End           (void) { return  fEnd;                 }
  long int               Index         (void) { return  fIEntry;              }
  void                   Clear            (Option_t * opt);
  void                   GenerateWeighted (bool gen_weighted);

  // Methods specific to the NuMI flux driver,
  // for configuration/initialization of the flux & event generation drivers 
  // and and for passing-through flux information (e.g. neutrino parent decay
  // kinematics) not used by the generator but required by analyses/processing 
  // further downstream

  //
  // information about or actions on current entry
  //
  const genie::flux::GSimpleNtpEntry *
    GetCurrentEntry(void) { return fCurEntry; } ///< GSimpleNtpEntry
  const genie::flux::GSimpleNtpNuMI *
    GetCurrentNuMI(void)  { return fCurNuMI; }  ///< GSimpleNtpNuMI
  const genie::flux::GSimpleNtpAux *
    GetCurrentAux(void)   { return fCurAux; }   ///< GSimpleNtpAux
  const genie::flux::GSimpleNtpMeta *
    GetCurrentMeta(void)  { return fCurMeta; }  ///< GSimpleNtpMeta

  // allow access to main tree so we can call Branch() to retrieve extra stuff
  TChain*
    GetFluxTChain(void) { return fNuFluxTree; } ///< 

  double    GetDecayDist() const; ///< dist (user units) from dk to current pos
  void      MoveToZ0(double z0);  ///< move ray origin to user coord Z0

  //
  // information about the current state
  //
  virtual double    GetTotalExposure() const;  ///< GFluxExposureI interface
  virtual long int  NFluxNeutrinos() const;    ///< # of rays generated

  double    UsedPOTs(void) const;       ///< # of protons-on-target used

  long int  NEntriesUsed(void) const { return fNEntriesUsed; } ///< number of entries read from files
  double    SumWeight(void) const { return fSumWeight;  } ///< integrated weight for flux neutrinos looped so far

  void      PrintCurrent(void);         ///< print current entry from leaves
  void      PrintConfig();              ///< print the current configuration

  std::vector<std::string> GetFileList();  ///< list of files currently part of chain

  // 
  // GFluxFileConfigI interface
  //
  virtual void  LoadBeamSimData(const std::vector<string>& filenames,
                                const std::string&         det_loc);
  using GFluxFileConfigI::LoadBeamSimData; // inherit the rest
  virtual void  GetBranchInfo(std::vector<std::string>& branchNames,
                              std::vector<std::string>& branchClassNames,
                              std::vector<void**>&      branchObjPointers);
  virtual TTree* GetMetaDataTree();

  //
  // configuration of GSimpleNtpFlux
  //

  void      SetRequestedBranchList(string blist="entry,numi,aux") { fNuFluxBranchRequest = blist; }

  void      SetMaxEnergy(double Ev);                              ///< specify maximum flx neutrino energy

  void      SetGenWeighted(bool genwgt=false) { fGenWeighted = genwgt; } ///< toggle whether GenerateNext() returns weight=1 flux (initial default false)

  void      SetEntryReuse(long int nuse=1);                       ///<  # of times to use entry before moving to next

  void      ProcessMeta(void);  ///< scan for max flux energy, weight

  void      GetFluxWindow(TVector3& p1, TVector3& p2, TVector3& p3) const; ///< 3 points define a plane in beam coordinate 

private:

  // Private methods
  //
  bool GenerateNext_weighted (void);
  void Initialize            (void);
  void SetDefaults           (void);
  void CleanUp               (void);
  void ResetCurrent          (void);
  void AddFile               (TTree* fluxtree, TTree* metatree, string fname);
  bool OptionalAttachBranch  (std::string bname);
  void CalcEffPOTsPerNu      (void);
  void ScanMeta              (void);

  // Private data members
  //
  double         fMaxEv;          ///< maximum energy
  bool           fEnd;            ///< end condition reached

  std::vector<string> fNuFluxFilePatterns;  ///< (potentially wildcarded) path(s)
  string    fNuFluxBranchRequest; ///< list of requested branches "entry,numi,au"
  TChain*   fNuFluxTree;          ///< TTree // REF ONLY
  TChain*   fNuMetaTree;          ///< TTree // REF ONLY

  int       fNFiles;              ///< number of files in chain
  Long64_t  fNEntries;            ///< number of flux ntuple entries
  Long64_t  fIEntry;              ///< current flux ntuple entry
  Int_t     fIFileNumber;         ///< which file for the current entry

  Double_t  fFilePOTs;            ///< # of protons-on-target represented by all files

  double    fWeight;              ///< current neutrino weight
  double    fMaxWeight;           ///< max flux neutrino weight in input file

  long int  fNUse;                ///< how often to use same entry in a row
  long int  fIUse;                ///< current # of times an entry has been used

  double    fSumWeight;           ///< sum of weights for nus thrown so far
  long int  fNNeutrinos;          ///< number of flux neutrinos thrown so far
  long int  fNEntriesUsed;        ///< number of entries read from files
  double    fEffPOTsPerNu;        ///< what a entry is worth ...
  double    fAccumPOTs;           ///< POTs used so far

  bool      fGenWeighted;         ///< does GenerateNext() give weights?
  bool      fAlreadyUnwgt;        ///< are input files already unweighted
                                  // i.e. are all entry "wgt" values = 1
  bool      fAllFilesMeta;        ///< do all files in chain have meta data

  GSimpleNtpEntry* fCurEntry;  ///< current entry
  GSimpleNtpNuMI*  fCurNuMI;   ///< current "numi" branch extra info
  GSimpleNtpAux*   fCurAux;    ///< current "aux" branch extra info
  TLorentzVector   fP4;        ///< reconstituted p4 vector
  TLorentzVector   fX4;        ///< reconstituted position vector
  GSimpleNtpMeta*  fCurMeta;   ///< current meta data 

  GSimpleNtpEntry* fCurEntryCopy;  ///< current entry
  GSimpleNtpNuMI*  fCurNuMICopy;   ///< current "numi" branch extra info
  GSimpleNtpAux*   fCurAuxCopy;    ///< current "aux" branch extra info

};

} // flux namespace
} // genie namespace

#endif // _SIMPLE_NTP_FLUX_H_
//____________________________________________________________________________
/*!

\class   genie::flux::GFLUKAAtmoFlux

\brief   A flux driver for the FLUKA 3-D Atmospheric Neutrino Flux

\ref     Astrop.Phys.19 (2003) p.269; hep-ph/0207035; hep-ph/9907408
         Alfredo.Ferrari     <Alfredo.Ferrari@cern.ch>
         Paola.Sala          <Paola.Sala@cern.ch>
         Giuseppe Battistoni <Giuseppe.Battistoni@mi.infn.it>
         Teresa Montaruli    <Teresa.Montaruli@ba.infn.it>

         To be able to use this flux driver you will need to download the
         flux data from:  http://pcbat1.mi.infn.it/~battist/neutrino.html

         Please note that this class expects to read flux files formatted as 
         described in the above FLUKA flux page.
         Each file contains 3 columns:
	 - neutrino energy (GeV) at bin centre
	 - neutrino cos(zenith angle) at bin centre
         - neutrino flux (#neutrinos /GeV /m^2 /sec /sr)
         The flux is given in 40 bins of cos(zenith angle) from -1.0 to 1.0 
         (bin width = 0.05) and 61 equally log-spaced energy bins (20 bins per 
         decade), with Emin = 0.100 GeV.

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created July 3, 2005 

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GENIE_FLUKA_ATMO_FLUX_H_
#define _GENIE_FLUKA_ATMO_FLUX_H_

#include "Tools/Flux/GAtmoFlux.h"

namespace genie {
namespace flux  {

// Number of cos(zenith) and energy bins in flux simulation
const unsigned int kGFlk3DNumCosThetaBins       = 40;
const double       kGFlk3DCosThetaMin           = -1.0;
const double       kGFlk3DCosThetaMax           =  1.0;
const unsigned int kGFlk3DNumLogEvBins          = 61;
const unsigned int kGFlk3DNumLogEvBinsPerDecade = 20;
const double       kGFlk3DEvMin                 = 0.100; // GeV

class GFLUKAAtmoFlux: public GAtmoFlux {

public :
  GFLUKAAtmoFlux();
 ~GFLUKAAtmoFlux();

  //
  // Most implementation is derived from the base GAtmoFlux
  // The concrete driver is only required to implement a function for
  // loading the input data files
  //

private:

  void SetBinSizes   (void);
  bool FillFluxHisto (int nu_pdg, string filename);
};

} // flux namespace
} // genie namespace

#endif // _GFLUKA_ATMO_3D_FLUX_I_H_
//____________________________________________________________________________
/*!

\class    genie::flux::GMonoEnergeticFlux

\brief    A simple GENIE flux driver for monoenergetic neutrinos along the
          z direction. Can handle a mix of neutrinos with their corresponding
          weight. This trivial flux driver was added in so that single energy 
          neutrinos can be easily used with the event generation driver that 
          can handle a target mix or detailed geometries.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 08, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _G_MONOENERGETIC_FLUX_H_
#define _G_MONOENERGETIC_FLUX_H_

#include <string>
#include <map>

#include <TLorentzVector.h>

#include "Framework/EventGen/GFluxI.h"

using std::string;
using std::map;

namespace genie {
namespace flux  {

class GMonoEnergeticFlux: public GFluxI {

public :
  GMonoEnergeticFlux();
  GMonoEnergeticFlux(double Ev, int pdg);
  GMonoEnergeticFlux(double Ev, const map<int,double> & numap /* pdg -> weight*/);
 ~GMonoEnergeticFlux();

  // methods implementing the GENIE GFluxI interface
  const PDGCodeList &    FluxParticles (void) { return *fPdgCList; }
  double                 MaxEnergy     (void) { return  fMaxEv;    }
  bool                   GenerateNext  (void);
  int                    PdgCode       (void) { return  fgPdgC;    }
  double                 Weight        (void) { return  1.0;       }
  const TLorentzVector & Momentum      (void) { return  fgP4;      }
  const TLorentzVector & Position      (void) { return  fgX4;      }
  bool                   End           (void) { return  false;     }
  long int               Index         (void) { return -1;         }
  void                   Clear            (Option_t * opt);
  void                   GenerateWeighted (bool gen_weighted);

  // special setters for this class
  void                   SetDirectionCos (double dx, double dy, double dz);
  void                   SetRayOrigin    (double x,  double y,  double z);
  // setters consistent w/ GCylindTH1Flux naming
  void                   SetNuDirection  (const TVector3 & direction);
  void                   SetBeamSpot     (const TVector3 & spot);

  // allow re-initialization, and/or initialization after default ctor
  void   Initialize (double Ev, int pdg);
  void   Initialize (double Ev, const map<int,double> & numap);

private:

  // private methods
  void   CleanUp    (void);

  // private data members
  double           fMaxEv;       ///< maximum energy
  PDGCodeList *    fPdgCList;    ///< list of neutrino pdg-codes
  int              fgPdgC;       ///< running generated nu pdg-code
  TLorentzVector   fgP4;         ///< running generated nu 4-momentum
  TLorentzVector   fgX4;         ///< running generated nu 4-position
  map<int, double> fProb;
  double           fProbMax;
};

} // flux namespace
} // genie namespace

#endif // _G_MONOENERGETIC_FLUX_H_
////////////////////////////////////////////////////////////////////////
/// \file  GFluxFileConfigI.h
/// \class genie::flux::GFluxFileConfigI
/// \brief GENIE interface for uniform flux exposure iterface
///
///        Unified flux exposure interface to be used by flux drivers
///        that can support such.
///
/// \author  Robert Hatcher <rhatcher \at fnal.gov>
///          Fermi National Accelerator Laboratory
///
/// \created 2015-03-17  initial version
/// \version $Id: $
////////////////////////////////////////////////////////////////////////

#ifndef GENIE_FLUX_GFLUXFILECONFIGI_H
#define GENIE_FLUX_GFLUXFILECONFIGI_H

#include <string>
#include <vector>
#include <set>

#include "Framework/ParticleData/PDGCodeList.h"
class TTree;

namespace genie {
namespace flux {

  class GFluxFileConfigI {
    
  public:
  
    GFluxFileConfigI();
    virtual ~GFluxFileConfigI();

    //
    // define the GFluxFileConfigI interface:
    //

    /// first is primary method for loading root flux ntuple files and config
    /// others are alternatives that can be overloaded but have
    /// sensible defaults to fall back to calling the vector version

    virtual void  LoadBeamSimData(const std::vector<std::string>& filenames,
                                  const std::string&              det_loc) = 0;

    virtual void  LoadBeamSimData(const std::set<std::string>&    filenames,
                                  const std::string&              det_loc);

    virtual void  LoadBeamSimData(const std::string&              filename, 
                                  const std::string&              det_loc);

    virtual void         SetXMLFileBase(std::string xmlbasename="");
    virtual std::string  GetXMLFileBase() const { return fXMLbasename; }

    /// allow caller to copy current status / ntuple entry info
    /// in the output file by providing copies of internal info
    ///
    /// Assumes that branch object pointers will not change
    /// which may require either a copy be made or, if using the class
    /// directly for reading the branch, one must force ROOT to
    /// not autodelete: 
    ///   myns::MyClassType* fCurrMyClass = new myns::MyClassType;
    ///   myTree->SetBranchAddress("bname",&fCurMyClass);
    ///   //? TBranch* b = myTree->GetBranch("bname");
    ///   //? b->SetAutoDelete(false);
    ///
    /// ensure vectors are sized sufficiently (or use .push_back())
    ///  branchNames[i]       = "bname"
    ///  branchClassNames[i]  = "myns::MyClassType"
    ///  branchObjPointers[i] = (void**)&fCurMyClass;

    virtual void  GetBranchInfo(std::vector<std::string>& branchNames,
                                std::vector<std::string>& branchClassNames,
                                std::vector<void**>&      branchObjPointers);

    virtual TTree* GetMetaDataTree(); //

    /// print the current configuration
    virtual void         PrintConfig() = 0;

    /// specify list of flux neutrino species
    virtual void         SetFluxParticles(const PDGCodeList & particles);

    /// set flux neutrino initial z position (upstream of the detector)
    /// pushed back from the normal flux window
    virtual void         SetUpstreamZ(double z0);

    /// limit cycling through input files
    virtual void         SetNumOfCycles(long int ncycle);

  protected:  // visible to derived classes

    PDGCodeList * fPdgCList;     ///< list of neutrino pdg-codes to generate  
    PDGCodeList * fPdgCListRej;  ///< list of nu pdg-codes seen but rejected
    std::string   fXMLbasename;  ///< XML file that might hold config param_sets
    long int      fNCycles;      ///< # times to cycle through the ntuple(s)
    long int      fICycle;       ///< current file cycle
                                 ///< default 0 = infinitely
    double        fZ0;           ///< configurable starting z position for 
                                 ///< each flux neutrino (in detector coord system)
  };

} // namespace flux
} // namespace genie

#endif //GENIE_FLUX_GFLUXFILECONFIGI_H
////////////////////////////////////////////////////////////////////////
/// \file  GFluxDriverFactory.h
/// \brief A class for generating concrete GFluxI derived classes
///        based on the factory pattern.  This code supplies a CPP
///        macro which allows the classes to self-register and thus
///        no modification of this class is needed in order to expand
///        the list of classes it knows about.
///
///        Implemented as a singleton holding a map between names and
///        pointers-to-functions (that call a class default constructor).
///        The functions pointers must return GFluxI*.
///
/// \version 
/// \author  Robert Hatcher <rhatcher \at fnal.gov>
///          Fermi National Accelerator Laboratory
///
////////////////////////////////////////////////////////////////////////
#ifndef GENIE_FLUX_GFLUXDRIVERFACTORY_H
#define GENIE_FLUX_GFLUXDRIVERFACTORY_H

#include <string>
#include <vector>
#include <map>

#include "Framework/EventGen/GFluxI.h"

namespace genie {
namespace flux {

// while most drivers are defined genie::flux::MySpecificDriver
// the base interface is only genie::GFluxI

// define a type for the pointer to a function that returns a 
//    genie::GFluxI* 
// i.e. calls the (typically default) ctor for the class.
typedef genie::GFluxI* (*GFluxICtorFuncPtr_t)();

class GFluxDriverFactory
{
public:
  static GFluxDriverFactory& Instance();
  // no public ctor for singleton, all user access is through Instance()

  genie::GFluxI* GetFluxDriver(const std::string&);
  // instantiate a GFluxI driver by name

  bool IsKnownFluxDriver(const std::string&);
  // check if the name is in the list of names

  const std::vector<std::string>& AvailableFluxDrivers() const;
  // return a list of available names

  bool RegisterCreator(std::string name, 
                       GFluxICtorFuncPtr_t ctorptr, bool* ptr);
  // register a new GFluxI type by passing pointer to creator function

  void PrintConfig() const;

private:
  static GFluxDriverFactory* fgTheInstance;
  // the one and only instance

  std::map<std::string, GFluxICtorFuncPtr_t> fFunctionMap;
  // mapping between known class names and a registered ctor function

  std::map<std::string, bool*> fBoolPtrMap;

  mutable std::vector<std::string> listnames;
  // copy of list of names, used solely due to AvailableFluxDrivers() 
  // method returning a const reference rather than a vector object.
  // mutable because AvailableFluxDrivers() is const, but list might 
  // need recreation if new entries have been registered.

private:
  GFluxDriverFactory();
  // private ctor, users access class via Instance()

  virtual ~GFluxDriverFactory();

  GFluxDriverFactory(const GFluxDriverFactory&);
  // method private and not implement, declared to prevent copying

  void operator=(const GFluxDriverFactory&);
  // method private and not implement, declared to prevent assignment

  // sub-class Cleaner struct is used to clean up singleton at the end of job.
  struct Cleaner {
     void UseMe() { }  // Dummy method to quiet compiler
    ~Cleaner() {
       if (GFluxDriverFactory::fgTheInstance != 0) {
         delete GFluxDriverFactory::fgTheInstance;
         GFluxDriverFactory::fgTheInstance = 0;
  } } };
  friend struct Cleaner; 

};

} // namespace flux
} // namespcae genie

// Define macro to create a function to call the class' ctor
// and then registers this function with the factory instance for later use
// Users should have in their  MyFluxClass.cc two lines that look like:
//     #include "GFluxDriverFactory.h"
//     FLUXDRIVERREG(MyFluxClass)  // no semicolon
// where "MyFluxClass" is the name of the class (assuming no special namespace)
// If the class is defined in a namespace (or two) use:
//     #include "GFluxDriverFactory.h"
//     FLUXDRIVERREG3(myspace,myAltFlux,myspace::myAltFlux) // no semicolon
//     FLUXDRIVERREG4(genie,flux,YAFlux,genie::flux::YAFlux) // no semicolon
// and either can then be retrieved from the factory using:
//     genie::flux::GFluxDriverFactory& factory =
//         genie::flux::GFluxDriverFactory::Instance();
//     genie::GFluxI* p = 0;
//     p = factory.GetFluxDriver("MyFluxClass");
//     p = factory.GetFluxDriver("myspace::myAltFlux");
//     p = factory.GetFluxDriver("genie::flux::YAFlux");
//
// The expanded code looks like:
//   genie::GFluxI* MyFluxClass_ctor_function () { return new MyFluxClass; }
//   static bool MyFluxClass_creator_registered = 
//     GFluxDriverFactory::Instance().RegisterCreator("MyFluxClass",
//                                               & MyFluxClass_ctor_function );
//   namespace myspace {
//     genie::GFluxI* myAltAltFlux_ctor_function () { return new myspace::myAltAltFlux; }
//     static bool myAltFlux_creator_registered = 
//       GFluxDriverFactory::Instance().RegisterCreator("myspace::myAltAltFlux",
//                                                 & myspace::myAltAltFlux_ctor_function ); }

#define FLUXDRIVERREG( _name ) \
  genie::GFluxI* _name ## _ctor_function () { return new _name; } \
  static bool _name ## _creator_registered =                            \
    genie::flux::GFluxDriverFactory::Instance().RegisterCreator(# _name, \
                                        & _name ## _ctor_function,        \
                                        & _name ## _creator_registered ); 

#define FLUXDRIVERREG3( _ns, _name, _fqname ) \
namespace _ns { \
  genie::GFluxI* _name ## _ctor_function () { return new _fqname; }   \
  static bool _name ## _creator_registered =                                \
    genie::flux::GFluxDriverFactory::Instance().RegisterCreator(# _fqname, \
                                        & _fqname ## _ctor_function,          \
                                        & _fqname ## _creator_registered );}

#define FLUXDRIVERREG4( _nsa, _nsb, _name, _fqname )  \
namespace _nsa { \
 namespace _nsb { \
  genie::GFluxI* _name ## _ctor_function () { return new _fqname; }   \
  static bool _name ## _creator_registered =                                \
    genie::flux::GFluxDriverFactory::Instance().RegisterCreator(# _fqname, \
                                        & _fqname ## _ctor_function,          \
                                        & _fqname ## _creator_registered );}}
#endif
//____________________________________________________________________________
/*!

\class    genie::flux::GAtmoFlux

\brief    A base class for the FLUKA, BGLRS and ATMNC atmo. nu. flux drivers.
          The driver depends on data files provided by the atmospheric neutrino
          flux simulation authors in order to determine the angular and energy
          dependence for each neutrino species.
          The position of each flux neutrino [going towards a detector centered 
          at (0,0,0)] is generated uniformly on a plane that is perpendicular 
          to a sphere of radius Rl at the point that is determined by the 
          generated neutrino direction (theta,phi). The size of the area of 
          that plane, where flux neutrinos are generated, is determined by the 
          transverse radius Rt. You can tweak Rl, Rt to match the size of your 
          detector. 
          Initially, neutrino coordinates are generated in a default detector 
          coordinate system (Topocentric Horizontal Coordinate -THZ-):
             +z: Points towards the local zenith.
             +x: On same plane as local meridian, pointing south.
             +y: As needed to make a right-handed coordinate system.
             origin: detector centre
          Alternative user-defined topocentric systems can
          be defined by specifying the appropriate rotation from THZ.
          The driver allows minimum and maximum energy cuts.
          Also it provides the options to generate wither unweighted or weighted 
          flux neutrinos (the latter giving smoother distributions at the tails).

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  January 26, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GATMO_FLUX_H_
#define _GATMO_FLUX_H_

#include <string>
#include <map>
#include <vector>

#include <TLorentzVector.h>
#include <TRotation.h>

#include "Framework/EventGen/GFluxI.h"

class TH3D;

using std::string;
using std::map;
using std::vector;

namespace genie {
namespace flux  {

class GAtmoFlux: public GFluxI {

public :
  virtual ~GAtmoFlux();

  // methods implementing the GENIE GFluxI interface
  virtual const PDGCodeList &    FluxParticles (void) { return *fPdgCList; }
  virtual double                 MaxEnergy     (void);
  virtual bool                   GenerateNext  (void);
  virtual int                    PdgCode       (void) { return fgPdgC;     }
  virtual double                 Weight        (void) { return fWeight;    }
  virtual const TLorentzVector & Momentum      (void) { return fgP4;       }
  virtual const TLorentzVector & Position      (void) { return fgX4;       }
  virtual bool                   End           (void) { return false;      }
  virtual long int               Index         (void) { return -1;         }
  virtual void                   Clear            (Option_t * opt);
  virtual void                   GenerateWeighted (bool gen_weighted);

  // get neutrino energy/direction of generated events
  double Enu        (void) { return fgP4.Energy(); }
  double Energy     (void) { return fgP4.Energy(); }
  double CosTheta   (void) { return -fgP4.Pz()/fgP4.Energy(); }
  double CosZenith  (void) { return -fgP4.Pz()/fgP4.Energy(); }

  // methods specific to the atmospheric flux drivers
  long int NFluxNeutrinos     (void) const; ///< Number of flux nu's generated. Not the same as the number of nu's thrown towards the geometry (if there are cuts).
  void     ForceMinEnergy     (double emin);
  void     ForceMaxEnergy     (double emax);
  void     SetSpectralIndex   (double index); 
  void     SetRadii           (double Rlongitudinal, double Rtransverse);
  void     SetUserCoordSystem (TRotation & rotation); ///< Rotation: Topocentric Horizontal -> User-defined Topocentric Coord System.
  void     AddFluxFile        (int neutrino_pdg, string filename);
  void     AddFluxFile        (string filename);
  bool     LoadFluxData       (void);

  TH3D*    GetFluxHistogram   (int flavour);
  double   GetFlux            (int flavour);
  double   GetFlux            (int flavour, double energy);
  double   GetFlux            (int flavour, double energy, double costh);
  double   GetFlux            (int flavour, double energy, double costh, double phi);

protected:

  // abstract class, ctor hidden
  GAtmoFlux();

  // protected methods
  bool    GenerateNext_1try (void);
  void    Initialize        (void);
  void    CleanUp           (void);
  void    ResetSelection    (void);
  double  MinEnergy         (void) { return fMinEvCut; }
  TH3D *  CreateFluxHisto   (string name, string title);
  void    ZeroFluxHisto     (TH3D * hist);
  void    AddAllFluxes      (void);
  int     SelectNeutrino    (double Ev, double costheta, double phi); 
  TH3D*   CreateNormalisedFluxHisto ( TH3D* hist);  // normalise flux files

  // pure virtual methods; to be implemented by concrete flux drivers
  virtual bool FillFluxHisto (int nu_pdg, string filename) = 0;

  // protected data members
  double           fMaxEv;              ///< maximum energy (in input flux files)
  PDGCodeList *    fPdgCList;           ///< input list of neutrino pdg-codes
  int              fgPdgC;              ///< current generated nu pdg-code
  TLorentzVector   fgP4;                ///< current generated nu 4-momentum
  TLorentzVector   fgX4;                ///< current generated nu 4-position
  double           fWeight;             ///< current generated nu weight
  long int         fNNeutrinos;         ///< number of flux neutrinos thrown so far
  double           fMaxEvCut;           ///< user-defined cut: maximum energy 
  double           fMinEvCut;           ///< user-defined cut: minimum energy  
  double           fRl;                 ///< defining flux neutrino generation surface: longitudinal radius
  double           fRt;                 ///< defining flux neutrino generation surface: transverse radius
  TRotation        fRotTHz2User;        ///< coord. system rotation: THZ -> Topocentric user-defined
  unsigned int     fNumPhiBins;         ///< number of phi bins in input flux data files
  unsigned int     fNumCosThetaBins;    ///< number of cos(theta) bins in input flux data files
  unsigned int     fNumEnergyBins;      ///< number of energy bins in input flux data files
  double *         fPhiBins;            ///< phi bins in input flux data files
  double *         fCosThetaBins;       ///< cos(theta) bins in input flux data files
  double *         fEnergyBins;         ///< energy bins in input flux data files
  bool             fGenWeighted;        ///< generate a weighted or unweighted flux?
  double           fSpectralIndex;      ///< power law function used for weighted flux
  bool             fInitialized;        ///< flag to check that initialization is run
  TH3D *           fTotalFluxHisto;     ///< flux = f(Ev,cos8,phi) summed over neutrino species
  double           fTotalFluxHistoIntg; ///< fFluxSum2D integral 
  map<int, TH3D*>  fFluxHistoMap;       ///< flux = f(Ev,cos8,phi) for each neutrino species
  map<int, TH3D*>  fRawFluxHistoMap;    ///< flux = f(Ev,cos8,phi) for each neutrino species
  vector<int>      fFluxFlavour;        ///< input flux file for each neutrino species
  vector<string>   fFluxFile;           ///< input flux file for each neutrino species
};

} // flux namespace
} // genie namespace

#endif // _GATMO_FLUX_H_

////////////////////////////////////////////////////////////////////////
/// \file  GFlavorMixerFactory.h
/// \brief A class for generating concrete GFlavorMixerI derived classes
///        based on the factory pattern.  This code supplies a CPP
///        macro which allows the classes to self-register and thus
///        no modification of this class is needed in order to expand
///        the list of classes it knows about.
///
///        Implemented as a singleton holding a map between names and
///        pointers-to-functions (that call a class default constructor).
///        The functions pointers must return GFlavorMixerI*.
///
/// \version 
/// \author  Robert Hatcher <rhatcher \at fnal.gov>
///          Fermi National Accelerator Laboratory
///
////////////////////////////////////////////////////////////////////////
#ifndef GENIE_FLUX_GFLAVORMIXERFACTORY_H
#define GENIE_FLUX_GFLAVORMIXERFACTORY_H

#include <string>
#include <vector>
#include <map>

#include "Tools/Flux/GFlavorMixerI.h"

namespace genie {
namespace flux {

// define a type for the pointer to a function that returns a 
//    genie::flux::GFlavorMixerI* 
// i.e. calls the (typically default) ctor for the class.
typedef genie::flux::GFlavorMixerI* (*GFlavorMixerICtorFuncPtr_t)();

class GFlavorMixerFactory
{
public:
  static GFlavorMixerFactory& Instance();
  // no public ctor for singleton, all user access is through Instance()

  genie::flux::GFlavorMixerI* GetFlavorMixer(const std::string&);
  // instantiate a PhysProc by name

  bool IsKnownFlavorMixer(const std::string&);
  // check if the name is in the list of names

  const std::vector<std::string>& AvailableFlavorMixers() const;
  // return a list of available names

  bool RegisterCreator(std::string name, 
                       GFlavorMixerICtorFuncPtr_t ctorptr, bool* ptr);
  // register a new GFlavorMixerI type by passing pointer to creator function

private:
  static GFlavorMixerFactory* fgTheInstance;
  // the one and only instance

  std::map<std::string, GFlavorMixerICtorFuncPtr_t> fFunctionMap;
  // mapping between known class names and a registered ctor function

  std::map<std::string, bool*> fBoolPtrMap;

  mutable std::vector<std::string> listnames;
  // copy of list of names, used solely due to AvailableFlavorMixers() 
  // method returning a const reference rather than a vector object.
  // mutable because AvailableFlavorMixers() is const, but list might 
  // need recreation if new entries have been registered.

private:
  GFlavorMixerFactory();
  // private ctor, users access class via Instance()

  virtual ~GFlavorMixerFactory();

  GFlavorMixerFactory(const GFlavorMixerFactory&);
  // method private and not implement, declared to prevent copying

  void operator=(const GFlavorMixerFactory&);
  // method private and not implement, declared to prevent assignment

  // sub-class Cleaner struct is used to clean up singleton at the end of job.
  struct Cleaner {
     void UseMe() { }  // Dummy method to quiet compiler
    ~Cleaner() {
       if (GFlavorMixerFactory::fgTheInstance != 0) {
         delete GFlavorMixerFactory::fgTheInstance;
         GFlavorMixerFactory::fgTheInstance = 0;
  } } };
  friend struct Cleaner; 

};

} // namespace flux
} // namespcae genie

// Define macro to create a function to call the class' ctor
// and then registers this function with the factory instance for later use
// Users should have in their  myPhyList.cc two lines that look like:
//     #include "GFlavorMixerFactory.h"
//     FLAVORMIXREG(MyMixerClass)  // no semicolon
// where "MyMixerClass" is the name of the class (assuming no special namespace)
// If the class is defined in a namespace (or two) use:
//     #include "GFlavorMixerFactory.h"
//     FLAVORMIXREG3(myspace,myAltMixer,myspace::myAltMixer) // no semicolon
//     FLAVORMIXREG4(genie,flux,YAMixer,genie::flux::YAMixer) // no semicolon
// and either can then be retrieved from the factory using:
//     GFlavorMixerFactory& factory =
//         GFlavorMixerFactory::Instance();
//     genie::flux::GFlavorMixerI* p = 0;
//     p = factory.GetFlavorMixer("MyMixerClass");
//     p = factory.GetFlavorMixer("myspace::myAltMixer");
//     p = factory.GetFlavorMixer("genie::flux::YAMixer");
//
// The expanded code looks like:
//   genie::flux::GFlavorMixerI* MyMixerClass_ctor_function () { return new MyMixerClass; }
//   static bool MyMixerClass_creator_registered = 
//     GFlavorMixerFactory::Instance().RegisterCreator("MyMixerClass",
//                                               & MyMixerClass_ctor_function );
//   namespace myspace {
//     genie::flux::GFlavorMixerI* myAltAltMixer_ctor_function () { return new myspace::myAltAltMixer; }
//     static bool myAltMixer_creator_registered = 
//       GFlavorMixerFactory::Instance().RegisterCreator("myspace::myAltAltMixer",
//                                                 & myspace::myAltAltMixer_ctor_function ); }

#define FLAVORMIXREG( _name ) \
  genie::flux::GFlavorMixerI* _name ## _ctor_function () { return new _name; } \
  static bool _name ## _creator_registered =                            \
    genie::flux::GFlavorMixerFactory::Instance().RegisterCreator(# _name, \
                                        & _name ## _ctor_function,        \
                                        & _name ## _creator_registered ); 

#define FLAVORMIXREG3( _ns, _name, _fqname ) \
namespace _ns { \
  genie::flux::GFlavorMixerI* _name ## _ctor_function () { return new _fqname; }   \
  static bool _name ## _creator_registered =                                \
    genie::flux::GFlavorMixerFactory::Instance().RegisterCreator(# _fqname, \
                                        & _fqname ## _ctor_function,          \
                                        & _fqname ## _creator_registered );}

#define FLAVORMIXREG4( _nsa, _nsb, _name, _fqname )  \
namespace _nsa { \
 namespace _nsb { \
  genie::flux::GFlavorMixerI* _name ## _ctor_function () { return new _fqname; }   \
  static bool _name ## _creator_registered =                                \
    genie::flux::GFlavorMixerFactory::Instance().RegisterCreator(# _fqname, \
                                        & _fqname ## _ctor_function,          \
                                        & _fqname ## _creator_registered );}}
#endif
//____________________________________________________________________________
/*!

\class    genie::flux::GAstroFlux

\brief    A base class for the concrete astrophysical neutrino flux drivers.


          <<<< NOTE: CODE UNDER DEVELOPMENT >>>>


          COORDINATE SYSTEMS / NEUTRINO GENERATION & PROPAGATION :

          Neutrinos are generated on a sphere with radius R_{earth}. 
          Especially,
          - For diffuse fluxes: 
            Neutrinos can be generated anywhere on that surface. 
          - For point sources: 
            Neutrinos are generated at fixed right ascension and declination. 
            Then time is randomized, to account for Earth's rotation, and the 
            Equatorial Coordinates are converted to GEF. So, neutrinos from each
            point source are generated on circles parallel to the Earth's Equator.

          Initially, neutrino coordinates are generated in the Geocentric Earth-
          Fixed (GEF) Coordinate System (later to be converted to the appropriate
          detector coordinate system - See further below).

          * Definition: 
            Geocentric Earth-Fixed (GEF) Coordinate System
              +z: Points to North Pole.
              xy: Equatorial plane.
              +x: Points to the Prime Meridian.
              +y: As needed to make a right-handed coordinate system.

          Neutrinos are then propagated towards the detector.
          The Earth opaqueness to ultra high energy neutrinos is taken into
          account. The Earth density profile is modelled using the PREM 
          (Preliminary Earth Model, The Encyclopedia of Solid Earth Geophysics,
          David E. James, ed., Van Nostrand Reinhold, New York, 1989, p.331).

          The detector position is determined in the Spherical/Geographic System 
          by its geographic latitude (angle relative to Equator), its geographic 
          longitude (angle relative to Prime Meridian) and its depth from the 
          surface.

          The generated flux neutrinos, propagated through the Earth towards the
          detector) are then positioned on the surface of a sphere with radius Rd 
          which should fully enclose the neutrino detector. The centre of that
          sphere is taken to be the origin of the detector coordinate system.
          The transverse coords are appropriately randomized so that neutrinos 
          from any given direction bath the entire sphere enclosing the detector. 

          The final flux neutrino coordinates are given in the detector coordinate 
          system. The default detector coordinate system is the Topocentric Horizontal
          (THZ) Coordinate System. Alternative user-defined topocentric systems can
          be defined by specifying the appropriate rotation from THZ.

          * Definition: 
            Topocentric Horizontal (THZ) Coordinate System 
            (default detector coordinate system)
                +z: Points towards the local zenith.
                +x: On same plane as local meridian, pointing south.
                +y: As needed to make a right-handed coordinate system.
		origin: detector centre

          WEIGHTING SCHEMES:

          For a detector with geometrical cross section ~ 1km^2, the solid
          angle acceptance changes by ~10 orders of magnitude across the 
          surface of the Earth.

          The driver supports both weighted and un-weighted flux generation
          schemes. However, because of the enormous changes in solid angle
          acceptance and energy, only the weighted scheme is practical.

          PHYSICS:

          The relative neutrino population needs to be set by the user using
          the SetRelNuPopulations() method.
          If run without arguments, the following relative populations are set:
          nue:numu:nutau:nuebar:numubar:nutaubar = 1:2:0:1:2:0

          The energy spectrum is follows a power law. The user needs to 
          specify the power-law index by calling SetEnergyPowLawIdx().

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 27, 2010

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GASTRO_FLUX_H_
#define _GASTRO_FLUX_H_

#include <string>
#include <map>

#include <TLorentzVector.h>
#include <TVector3.h>
#include <TRotation.h>

#include "Framework/Conventions/Units.h"
#include "Framework/EventGen/GFluxI.h"

class TH1D;
class TH2D;

using std::string;
using std::map;

namespace genie {
namespace flux  {

const double kAstroDefMaxEv      = 1E+20 * units::GeV; ///< 
const double kAstroDefMinEv      = 1E-3  * units::GeV; ///< 
const int    kAstroNlog10EvBins  = 1000;               ///<
const int    kAstroNCosThetaBins = 500;                ///<
const int    kAstroNPhiBins      = 500;                ///<

//
//
//

class GAstroFlux: public GFluxI {

public :
  virtual ~GAstroFlux();

  //
  // methods implementing the GENIE GFluxI interface
  //
  virtual const PDGCodeList &    FluxParticles (void) { return *fPdgCList; }
  virtual double                 MaxEnergy     (void);
  virtual bool                   GenerateNext  (void);
  virtual int                    PdgCode       (void) { return fgPdgC;     }
  virtual double                 Weight        (void) { return fgWeight;   }
  virtual const TLorentzVector & Momentum      (void) { return fgP4;       }
  virtual const TLorentzVector & Position      (void) { return fgX4;       }
  virtual bool                   End           (void) { return false;      }
  virtual long int               Index         (void) { return -1;         }
  virtual void                   Clear            (Option_t * opt);
  virtual void                   GenerateWeighted (bool gen_weighted);

  //
  // configuration methods specific to all astrophysical neutrino flux drivers
  //
  void ForceMinEnergy      (double emin);
  void ForceMaxEnergy      (double emax);
  void SetDetectorPosition (double latitude, double longitude, double depth, double size);
  void SetRelNuPopulations (double nnue=1, double nnumu=2, double nnutau=0, double nnuebar=1, double nnumubar=2, double nnutaubar=0);
  void SetEnergyPowLawIdx  (double n);
  void SetUserCoordSystem  (TRotation & rotation); ///< rotation Topocentric Horizontal -> User-defined Topocentric Coord System

protected:

  class NuGenerator;
  class NuPropagator;

  // abstract class, ctor hidden
  GAstroFlux();

  // protected methods
  void Initialize               (void);
  void CleanUp                  (void);
  void ResetSelection           (void);

  //
  // protected data members
  //

  PDGCodeList *    fPdgCList;             ///< declared list of neutrino pdg-codes that can be thrown by current instance
  int              fgPdgC;                ///< (current) generated nu pdg-code
  TLorentzVector   fgP4;                  ///< (current) generated nu 4-momentum
  TLorentzVector   fgX4;                  ///< (current) generated nu 4-position
  double           fgWeight;              ///< (current) generated nu weight
  // configuration properties set by the user
  double           fMaxEvCut;             ///< (config) user-defined maximum energy cut
  double           fMinEvCut;             ///< (config) user-defined minimum energy cut
  bool             fGenWeighted;          ///< (config) generate a weighted or unweighted flux?
  double           fDetGeoLatitude;       ///< (config) detector: geographic latitude
  double           fDetGeoLongitude;      ///< (config) detector: geographic longitude
  double           fDetGeoDepth;          ///< (config) detector: depth from surface
  double           fDetSize;              ///< (config) detector: size (detector should be enclosed in sphere of this radius)
  map<int,double>  fRelNuPopulations;     ///< (config) relative neutrino populations
  TRotation        fRotGEF2THz;         ///< (config) coord. system rotation: GEF translated to detector centre -> THZ
  TRotation        fRotTHz2User;         ///< (config) coord. system rotation: THZ -> Topocentric user-defined 
  // internal flags and utility objects
  TVector3         fDetCenter;            ///<
  TH1D *           fEnergySpectrum;       ///<
  TH2D *           fSolidAngleAcceptance; ///<
  NuGenerator *    fNuGen;                ///<
  NuPropagator *   fNuPropg;              ///<

  //
  // utility classes
  //
  class NuGenerator {
  public:
    NuGenerator() {}
   ~NuGenerator() {}
    bool SelectNuPdg (bool weighted, const map<int,double> & nupdgpdf, int & nupdg, double & wght);
    bool SelectEnergy(bool weighted, TH1D & log10epdf, double log10emin, double log10emax, double & log10e, double & wght);
    bool SelectOrigin(bool weighted, TH2D & opdf, double & phi, double & costheta, double & wght);
  };
  class NuPropagator {
  public:
    NuPropagator(double stepsz) : fStepSize(stepsz/units::km) { }
   ~NuPropagator() { }
    bool Go(double phi_start, double costheta_start, const TVector3 & detector_centre, double detector_sz, int nu_pdg, double Ev);
    int        NuPdgAtDetVolBoundary (void) { return fNuPdg; }
    TVector3 & X3AtDetVolBoundary    (void) { return fX3;    }
    TVector3 & P3AtDetVolBoundary    (void) { return fP3;    }
  private:
    double   fStepSize;
    int      fNuPdg;
    TVector3 fX3;
    TVector3 fP3;
  };

};


//
// Concrete astrophysical flux drivers
//

//............................................................................
// GENIE diffuse astrophysical neutrino flux driver 
//
class GDiffuseAstroFlux: public GAstroFlux {
public :
  GDiffuseAstroFlux();
 ~GDiffuseAstroFlux();

  //
  //
}; 

//............................................................................
// GENIE concrete flux driver for astrophysical point neutrino sources
//
class GPointSourceAstroFlux: public GAstroFlux {
public :
  GPointSourceAstroFlux();
 ~GPointSourceAstroFlux();

  //
  bool GenerateNext (void);

  //
  void AddPointSource(string name, double ra, double dec, double rel_intensity);

private:

  bool SelectSource(void);

  map<int, string> fPntSrcName;  ///< point source name
  map<int, double> fPntSrcRA;    ///< right ascension
  map<int, double> fPntSrcDec;   ///< declination
  map<int, double> fPntSrcRelI;  ///< relative intensity
  double           fPntSrcTotI;  ///< sum of all relative intensities

  unsigned int fSelSourceId;
}; 
//............................................................................

} // flux namespace
} // genie namespace

#endif // _GASTRO_FLUX_H_

//____________________________________________________________________________
/*!

\class   genie::flux::GBGLRSAtmoFlux

\brief   A flux driver for the Bartol Atmospheric Neutrino Flux

\ref     G. Barr, T.K. Gaisser, P. Lipari, S. Robbins and T. Stanev,
         astro-ph/0403630

         To be able to use this flux driver you will need to download the
         flux data from:  http://www-pnp.physics.ox.ac.uk/~barr/fluxfiles/

         Please note that this class expects to read flux files formatted as 
         described in the above BGLRS flux page.
         Each file contains 5 columns:
         - neutrino energy (GeV) at bin centre
         - neutrino cos(zenith angle) at bin centre
         - neutrino flux dN/dlnE (#neutrinos /m^2 /sec /sr)
         - MC statistical error on the flux (not used here)
         - Number of unweighted events entering in the bin (not used here)
         The flux is given in 20 bins of cos(zenith angle) from -1.0 to 1.0 
         (bin width = 0.1) and 30 equally log-spaced energy bins (10 bins per 
         decade), with Emin = 10.00 GeV.

         Note that in the BGLRS input files the flux is defined as dN/dlnE, 
         while in the FLUKA files the flux is defined as dN/dE.
         We compensate for logarithmic units (dlnE = dE/E) as we read-in the
         BGLRS files.

\author  Christopher Backhouse <c.backhouse1@physics.ox.ac.uk>
         Oxford University

\created January 26, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GENIE_BGLRS_ATMO_FLUX_H_
#define _GENIE_BGLRS_ATMO_FLUX_H_

#include "Tools/Flux/GAtmoFlux.h"

namespace genie {
namespace flux  {

// Number of cos(zenith) and energy bins in flux simulation
const unsigned int kBGLRS3DNumCosThetaBins           = 20;
const double       kBGLRS3DCosThetaMin               = -1.0;
const double       kBGLRS3DCosThetaMax               =  1.0;
const unsigned int kBGLRS3DNumLogEvBinsLow           = 40;
const unsigned int kBGLRS3DNumLogEvBinsPerDecadeLow  = 20;
const unsigned int kBGLRS3DNumLogEvBinsHigh          = 30;
const unsigned int kBGLRS3DNumLogEvBinsPerDecadeHigh = 10;
const double       kBGLRS3DEvMin                     = 0.1; // GeV

class GBGLRSAtmoFlux: public GAtmoFlux {

public :
  GBGLRSAtmoFlux();
 ~GBGLRSAtmoFlux();

  //     
  // Most implementation is derived from the base GAtmoFlux
  // The concrete driver is only required to implement a function for
  // loading the input data files
  //

private:

  void SetBinSizes   (void);
  bool FillFluxHisto (int nu_pdg, string filename);
};

} // flux namespace
} // genie namespace

#endif // _GBARTOL_ATMO_FLUX_I_H_

//____________________________________________________________________________
/*!

\class   genie::flux::GCylindTH1Flux

\brief   A generic GENIE flux driver. 
         Generates a 'cylindrical' neutrino beam along the input direction, 
         with the input transverse radius and centered at the input position.
         The energies are generated from the input energy spectrum (TH1D).
         Multiple neutrino species can be generated (you will need to supply
         an energy spectrum for each).

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created July 4, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _G_TH1_CYLICDRICAL_FLUX_H_
#define _G_TH1_CYLICDRICAL_FLUX_H_

#include <string>
#include <vector>

#include <TLorentzVector.h>

#include "Framework/EventGen/GFluxI.h"

class TH1D;
class TF1;
class TVector3;

using std::string;
using std::vector;

namespace genie {
namespace flux  {

class GCylindTH1Flux: public GFluxI {

public :
  GCylindTH1Flux();
 ~GCylindTH1Flux();

  // methods specific to this flux object
  void SetNuDirection      (const TVector3 & direction);
  void SetBeamSpot         (const TVector3 & spot);
  void SetTransverseRadius (double Rt);
  void AddEnergySpectrum   (int nu_pdgc, TH1D * spectrum);
  void SetRtDependence     (string rdep);

  // methods implementing the GENIE GFluxI interface
  const PDGCodeList &    FluxParticles (void) { return *fPdgCList; }
  double                 MaxEnergy     (void) { return  fMaxEv;    }
  bool                   GenerateNext  (void);
  int                    PdgCode       (void) { return  fgPdgC;    }
  double                 Weight        (void) { return  1.0;       }
  const TLorentzVector & Momentum      (void) { return  fgP4;      }
  const TLorentzVector & Position      (void) { return  fgX4;      }
  bool                   End           (void) { return  false;     }
  long int               Index         (void) { return -1;         }
  void                   Clear            (Option_t * opt);
  void                   GenerateWeighted (bool gen_weighted);

private:

  // private methods
  void   Initialize        (void);
  void   CleanUp           (void);
  void   ResetSelection    (void);
  void   AddAllFluxes      (void);
  int    SelectNeutrino    (double Ev);
  double GeneratePhi       (void) const;
  double GenerateRt        (void) const;

  // private data members
  double         fMaxEv;       ///< maximum energy
  PDGCodeList *  fPdgCList;    ///< list of neutrino pdg-codes
  int            fgPdgC;       ///< running generated nu pdg-code
  TLorentzVector fgP4;         ///< running generated nu 4-momentum
  TLorentzVector fgX4;         ///< running generated nu 4-position
  vector<TH1D *> fSpectrum;    ///< flux = f(Ev), 1/neutrino species
  TH1D *         fTotSpectrum; ///< combined flux = f(Ev)
  TVector3 *     fDirVec;      ///< neutrino direction
  TVector3 *     fBeamSpot;    ///< beam spot position
  double         fRt;          ///< transverse size of neutrino beam
  TF1 *          fRtDep;       ///< transverse radius dependence
};

} // flux namespace
} // genie namespace

#endif // _G_TH1_CYLICDRICAL_FLUX_H_
////////////////////////////////////////////////////////////////////////
/// \file  GFluxExposureI.h
/// \class genie::flux::GFluxExposureI
/// \brief GENIE interface for uniform flux exposure iterface
///
///        Unified flux exposure interface to be used by flux drivers
///        that can support such.
///
/// \author  Robert Hatcher <rhatcher \at fnal.gov>
///          Fermi National Accelerator Laboratory
///
/// \created 2015-03-17  initial version
/// \version $Id: $
////////////////////////////////////////////////////////////////////////

#ifndef GENIE_FLUX_GFLUXEXPOSUREI_H
#define GENIE_FLUX_GFLUXEXPOSUREI_H

#include <string>
#include <ctype.h>

namespace genie {
namespace flux {

  typedef enum EExposure {
    kUnknown   = 0,
    kPOTs      = 1,  // particles (protons) on target
    kSeconds   = 2,  // exposure duration
    kNExposureTypes  //
  } Exposure_t;

  class GFluxExposureI {
    
  public:
  
    GFluxExposureI(genie::flux::Exposure_t etype);
    virtual ~GFluxExposureI();

    /// what units are returned by GetTotalExposure?
    const char*             GetExposureUnits() const;
    genie::flux::Exposure_t GetExposureType() const;

    //
    // define the GFluxExposureI interface:
    //
    virtual double    GetTotalExposure() const = 0;

    /// # of rays generated
    virtual long int  NFluxNeutrinos() const = 0;


    // string conversions for the associated enum
    static const char*              AsString(genie::flux::Exposure_t etype);
    static genie::flux::Exposure_t  StringToEnum(const char* chars, int maxChar=0);

  private:
    genie::flux::Exposure_t fEType; 

  };

} // namespace flux
} // namespace genie

#endif //GENIE_FLUX_GFLUXEXPOSUREI_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::flux::EExposure", payloadCode, "@",
"genie::flux::GAstroFlux", payloadCode, "@",
"genie::flux::GAtmoFlux", payloadCode, "@",
"genie::flux::GBGLRSAtmoFlux", payloadCode, "@",
"genie::flux::GCylindTH1Flux", payloadCode, "@",
"genie::flux::GDiffuseAstroFlux", payloadCode, "@",
"genie::flux::GFLUKAAtmoFlux", payloadCode, "@",
"genie::flux::GFlavorMap", payloadCode, "@",
"genie::flux::GFlavorMixerFactory", payloadCode, "@",
"genie::flux::GFlavorMixerI", payloadCode, "@",
"genie::flux::GFluxBlender", payloadCode, "@",
"genie::flux::GFluxDriverFactory", payloadCode, "@",
"genie::flux::GFluxExposureI", payloadCode, "@",
"genie::flux::GFluxFileConfigI", payloadCode, "@",
"genie::flux::GHAKKMAtmoFlux", payloadCode, "@",
"genie::flux::GJPARCNuFlux", payloadCode, "@",
"genie::flux::GJPARCNuFluxPassThroughInfo", payloadCode, "@",
"genie::flux::GMonoEnergeticFlux", payloadCode, "@",
"genie::flux::GNuMIFlux", payloadCode, "@",
"genie::flux::GNuMIFlux::EStdFluxWindow", payloadCode, "@",
"genie::flux::GNuMIFluxPassThroughInfo", payloadCode, "@",
"genie::flux::GPointSourceAstroFlux", payloadCode, "@",
"genie::flux::GSimpleNtpAux", payloadCode, "@",
"genie::flux::GSimpleNtpEntry", payloadCode, "@",
"genie::flux::GSimpleNtpFlux", payloadCode, "@",
"genie::flux::GSimpleNtpMeta", payloadCode, "@",
"genie::flux::GSimpleNtpNuMI", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGTlFlx",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGTlFlx_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGTlFlx_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGTlFlx() {
  TriggerDictionaryInitialization_libGTlFlx_Impl();
}
