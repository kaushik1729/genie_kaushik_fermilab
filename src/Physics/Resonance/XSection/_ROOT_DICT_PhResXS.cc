// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhResXS

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
#include "ReinSehgalRESPXSec.h"
#include "RSHelicityAmplModelEMp.h"
#include "GiBUURESFormFactor.h"
#include "BSKLNBaseRESPXSec2014.h"
#include "RSHelicityAmplModelNCp.h"
#include "BergerSehgalRESPXSec2014.h"
#include "RSHelicityAmplModelI.h"
#include "ReinSehgalRESXSecWithCacheFast.h"
#include "ReinSehgalRESXSec.h"
#include "P33PaschosLalakulichPXSec.h"
#include "RSHelicityAmpl.h"
#include "ReinSehgalSPPPXSec.h"
#include "ReinSehgalRESXSecFast.h"
#include "KuzminLyubushkinNaumovRESPXSec2014.h"
#include "RESXSec.h"
#include "RSHelicityAmplModelCC.h"
#include "FKR.h"
#include "ReinSehgalSPPXSec.h"
#include "RSHelicityAmplModelNCn.h"
#include "RSHelicityAmplModelEMn.h"
#include "ReinSehgalRESXSecWithCache.h"

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

namespace genie {
   namespace utils {
      namespace gsl {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLgsl_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::gsl", 0 /*version*/, "", 645,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLutilscLcLgsl_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLgsl_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESPXSec_Dictionary();
   static void geniecLcLReinSehgalRESPXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalRESPXSec(void *p = 0);
   static void *newArray_geniecLcLReinSehgalRESPXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalRESPXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalRESPXSec(void *p);
   static void destruct_geniecLcLReinSehgalRESPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESPXSec*)
   {
      ::genie::ReinSehgalRESPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESPXSec", "", 49,
                  typeid(::genie::ReinSehgalRESPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESPXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalRESPXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalRESPXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalRESPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalRESPXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalRESPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::ReinSehgalRESPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ReinSehgalRESPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ReinSehgalRESPXSec*)0x0)->GetClass();
      geniecLcLReinSehgalRESPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmpl_Dictionary();
   static void geniecLcLRSHelicityAmpl_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmpl(void *p = 0);
   static void *newArray_geniecLcLRSHelicityAmpl(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmpl(void *p);
   static void deleteArray_geniecLcLRSHelicityAmpl(void *p);
   static void destruct_geniecLcLRSHelicityAmpl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmpl*)
   {
      ::genie::RSHelicityAmpl *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmpl));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmpl", "RSHelicityAmpl.h", 41,
                  typeid(::genie::RSHelicityAmpl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmpl_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmpl) );
      instance.SetNew(&new_geniecLcLRSHelicityAmpl);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmpl);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmpl);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmpl);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmpl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmpl*)
   {
      return GenerateInitInstanceLocal((::genie::RSHelicityAmpl*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSHelicityAmpl*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmpl_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSHelicityAmpl*)0x0)->GetClass();
      geniecLcLRSHelicityAmpl_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmpl_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelI_Dictionary();
   static void geniecLcLRSHelicityAmplModelI_TClassManip(TClass*);
   static void delete_geniecLcLRSHelicityAmplModelI(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelI(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelI*)
   {
      ::genie::RSHelicityAmplModelI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelI", "RSHelicityAmplModelI.h", 28,
                  typeid(::genie::RSHelicityAmplModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelI) );
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelI);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelI*)
   {
      return GenerateInitInstanceLocal((::genie::RSHelicityAmplModelI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelI*)0x0)->GetClass();
      geniecLcLRSHelicityAmplModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelEMp_Dictionary();
   static void geniecLcLRSHelicityAmplModelEMp_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelEMp(void *p = 0);
   static void *newArray_geniecLcLRSHelicityAmplModelEMp(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelEMp(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelEMp(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelEMp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelEMp*)
   {
      ::genie::RSHelicityAmplModelEMp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelEMp));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelEMp", "", 137,
                  typeid(::genie::RSHelicityAmplModelEMp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelEMp_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelEMp) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelEMp);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelEMp);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelEMp);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelEMp);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelEMp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelEMp*)
   {
      return GenerateInitInstanceLocal((::genie::RSHelicityAmplModelEMp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelEMp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelEMp_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelEMp*)0x0)->GetClass();
      geniecLcLRSHelicityAmplModelEMp_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelEMp_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBSKLNBaseRESPXSec2014_Dictionary();
   static void geniecLcLBSKLNBaseRESPXSec2014_TClassManip(TClass*);
   static void delete_geniecLcLBSKLNBaseRESPXSec2014(void *p);
   static void deleteArray_geniecLcLBSKLNBaseRESPXSec2014(void *p);
   static void destruct_geniecLcLBSKLNBaseRESPXSec2014(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BSKLNBaseRESPXSec2014*)
   {
      ::genie::BSKLNBaseRESPXSec2014 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BSKLNBaseRESPXSec2014));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BSKLNBaseRESPXSec2014", "", 351,
                  typeid(::genie::BSKLNBaseRESPXSec2014), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBSKLNBaseRESPXSec2014_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BSKLNBaseRESPXSec2014) );
      instance.SetDelete(&delete_geniecLcLBSKLNBaseRESPXSec2014);
      instance.SetDeleteArray(&deleteArray_geniecLcLBSKLNBaseRESPXSec2014);
      instance.SetDestructor(&destruct_geniecLcLBSKLNBaseRESPXSec2014);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BSKLNBaseRESPXSec2014*)
   {
      return GenerateInitInstanceLocal((::genie::BSKLNBaseRESPXSec2014*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BSKLNBaseRESPXSec2014*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBSKLNBaseRESPXSec2014_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BSKLNBaseRESPXSec2014*)0x0)->GetClass();
      geniecLcLBSKLNBaseRESPXSec2014_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBSKLNBaseRESPXSec2014_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelNCp_Dictionary();
   static void geniecLcLRSHelicityAmplModelNCp_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelNCp(void *p = 0);
   static void *newArray_geniecLcLRSHelicityAmplModelNCp(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelNCp(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelNCp(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelNCp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelNCp*)
   {
      ::genie::RSHelicityAmplModelNCp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelNCp));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelNCp", "", 444,
                  typeid(::genie::RSHelicityAmplModelNCp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelNCp_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelNCp) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelNCp);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelNCp);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelNCp);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelNCp);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelNCp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelNCp*)
   {
      return GenerateInitInstanceLocal((::genie::RSHelicityAmplModelNCp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelNCp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelNCp_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelNCp*)0x0)->GetClass();
      geniecLcLRSHelicityAmplModelNCp_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelNCp_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBergerSehgalRESPXSec2014_Dictionary();
   static void geniecLcLBergerSehgalRESPXSec2014_TClassManip(TClass*);
   static void *new_geniecLcLBergerSehgalRESPXSec2014(void *p = 0);
   static void *newArray_geniecLcLBergerSehgalRESPXSec2014(Long_t size, void *p);
   static void delete_geniecLcLBergerSehgalRESPXSec2014(void *p);
   static void deleteArray_geniecLcLBergerSehgalRESPXSec2014(void *p);
   static void destruct_geniecLcLBergerSehgalRESPXSec2014(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BergerSehgalRESPXSec2014*)
   {
      ::genie::BergerSehgalRESPXSec2014 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BergerSehgalRESPXSec2014));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BergerSehgalRESPXSec2014", "", 518,
                  typeid(::genie::BergerSehgalRESPXSec2014), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBergerSehgalRESPXSec2014_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BergerSehgalRESPXSec2014) );
      instance.SetNew(&new_geniecLcLBergerSehgalRESPXSec2014);
      instance.SetNewArray(&newArray_geniecLcLBergerSehgalRESPXSec2014);
      instance.SetDelete(&delete_geniecLcLBergerSehgalRESPXSec2014);
      instance.SetDeleteArray(&deleteArray_geniecLcLBergerSehgalRESPXSec2014);
      instance.SetDestructor(&destruct_geniecLcLBergerSehgalRESPXSec2014);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BergerSehgalRESPXSec2014*)
   {
      return GenerateInitInstanceLocal((::genie::BergerSehgalRESPXSec2014*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BergerSehgalRESPXSec2014*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBergerSehgalRESPXSec2014_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BergerSehgalRESPXSec2014*)0x0)->GetClass();
      geniecLcLBergerSehgalRESPXSec2014_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBergerSehgalRESPXSec2014_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESXSecWithCacheFast_Dictionary();
   static void geniecLcLReinSehgalRESXSecWithCacheFast_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESXSecWithCacheFast*)
   {
      ::genie::ReinSehgalRESXSecWithCacheFast *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESXSecWithCacheFast));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESXSecWithCacheFast", "", 619,
                  typeid(::genie::ReinSehgalRESXSecWithCacheFast), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESXSecWithCacheFast_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESXSecWithCacheFast) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESXSecWithCacheFast*)
   {
      return GenerateInitInstanceLocal((::genie::ReinSehgalRESXSecWithCacheFast*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ReinSehgalRESXSecWithCacheFast*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESXSecWithCacheFast_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ReinSehgalRESXSecWithCacheFast*)0x0)->GetClass();
      geniecLcLReinSehgalRESXSecWithCacheFast_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESXSecWithCacheFast_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)
   {
      ::genie::utils::gsl::d2XSecRESFast_dWQ2_E *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSecRESFast_dWQ2_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSecRESFast_dWQ2_E", "", 654,
                  typeid(::genie::utils::gsl::d2XSecRESFast_dWQ2_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSecRESFast_dWQ2_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESXSecWithCache_Dictionary();
   static void geniecLcLReinSehgalRESXSecWithCache_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESXSecWithCache*)
   {
      ::genie::ReinSehgalRESXSecWithCache *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESXSecWithCache));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESXSecWithCache", "ReinSehgalRESXSecWithCache.h", 35,
                  typeid(::genie::ReinSehgalRESXSecWithCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESXSecWithCache_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESXSecWithCache) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESXSecWithCache*)
   {
      return GenerateInitInstanceLocal((::genie::ReinSehgalRESXSecWithCache*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ReinSehgalRESXSecWithCache*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESXSecWithCache_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ReinSehgalRESXSecWithCache*)0x0)->GetClass();
      geniecLcLReinSehgalRESXSecWithCache_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESXSecWithCache_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESXSec_Dictionary();
   static void geniecLcLReinSehgalRESXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalRESXSec(void *p = 0);
   static void *newArray_geniecLcLReinSehgalRESXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalRESXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalRESXSec(void *p);
   static void destruct_geniecLcLReinSehgalRESXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESXSec*)
   {
      ::genie::ReinSehgalRESXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESXSec", "", 723,
                  typeid(::genie::ReinSehgalRESXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalRESXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalRESXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalRESXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalRESXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalRESXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESXSec*)
   {
      return GenerateInitInstanceLocal((::genie::ReinSehgalRESXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ReinSehgalRESXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ReinSehgalRESXSec*)0x0)->GetClass();
      geniecLcLReinSehgalRESXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLP33PaschosLalakulichPXSec_Dictionary();
   static void geniecLcLP33PaschosLalakulichPXSec_TClassManip(TClass*);
   static void *new_geniecLcLP33PaschosLalakulichPXSec(void *p = 0);
   static void *newArray_geniecLcLP33PaschosLalakulichPXSec(Long_t size, void *p);
   static void delete_geniecLcLP33PaschosLalakulichPXSec(void *p);
   static void deleteArray_geniecLcLP33PaschosLalakulichPXSec(void *p);
   static void destruct_geniecLcLP33PaschosLalakulichPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::P33PaschosLalakulichPXSec*)
   {
      ::genie::P33PaschosLalakulichPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::P33PaschosLalakulichPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::P33PaschosLalakulichPXSec", "", 782,
                  typeid(::genie::P33PaschosLalakulichPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLP33PaschosLalakulichPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::P33PaschosLalakulichPXSec) );
      instance.SetNew(&new_geniecLcLP33PaschosLalakulichPXSec);
      instance.SetNewArray(&newArray_geniecLcLP33PaschosLalakulichPXSec);
      instance.SetDelete(&delete_geniecLcLP33PaschosLalakulichPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLP33PaschosLalakulichPXSec);
      instance.SetDestructor(&destruct_geniecLcLP33PaschosLalakulichPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::P33PaschosLalakulichPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::P33PaschosLalakulichPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::P33PaschosLalakulichPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLP33PaschosLalakulichPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::P33PaschosLalakulichPXSec*)0x0)->GetClass();
      geniecLcLP33PaschosLalakulichPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLP33PaschosLalakulichPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalSPPPXSec_Dictionary();
   static void geniecLcLReinSehgalSPPPXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalSPPPXSec(void *p = 0);
   static void *newArray_geniecLcLReinSehgalSPPPXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalSPPPXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalSPPPXSec(void *p);
   static void destruct_geniecLcLReinSehgalSPPPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalSPPPXSec*)
   {
      ::genie::ReinSehgalSPPPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalSPPPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalSPPPXSec", "", 966,
                  typeid(::genie::ReinSehgalSPPPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalSPPPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalSPPPXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalSPPPXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalSPPPXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalSPPPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalSPPPXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalSPPPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalSPPPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::ReinSehgalSPPPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ReinSehgalSPPPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalSPPPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ReinSehgalSPPPXSec*)0x0)->GetClass();
      geniecLcLReinSehgalSPPPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalSPPPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalRESXSecFast_Dictionary();
   static void geniecLcLReinSehgalRESXSecFast_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalRESXSecFast(void *p = 0);
   static void *newArray_geniecLcLReinSehgalRESXSecFast(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalRESXSecFast(void *p);
   static void deleteArray_geniecLcLReinSehgalRESXSecFast(void *p);
   static void destruct_geniecLcLReinSehgalRESXSecFast(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalRESXSecFast*)
   {
      ::genie::ReinSehgalRESXSecFast *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalRESXSecFast));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalRESXSecFast", "", 1044,
                  typeid(::genie::ReinSehgalRESXSecFast), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalRESXSecFast_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalRESXSecFast) );
      instance.SetNew(&new_geniecLcLReinSehgalRESXSecFast);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalRESXSecFast);
      instance.SetDelete(&delete_geniecLcLReinSehgalRESXSecFast);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalRESXSecFast);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalRESXSecFast);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalRESXSecFast*)
   {
      return GenerateInitInstanceLocal((::genie::ReinSehgalRESXSecFast*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ReinSehgalRESXSecFast*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalRESXSecFast_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ReinSehgalRESXSecFast*)0x0)->GetClass();
      geniecLcLReinSehgalRESXSecFast_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalRESXSecFast_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLKuzminLyubushkinNaumovRESPXSec2014_Dictionary();
   static void geniecLcLKuzminLyubushkinNaumovRESPXSec2014_TClassManip(TClass*);
   static void *new_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p = 0);
   static void *newArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(Long_t size, void *p);
   static void delete_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p);
   static void deleteArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p);
   static void destruct_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KuzminLyubushkinNaumovRESPXSec2014*)
   {
      ::genie::KuzminLyubushkinNaumovRESPXSec2014 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::KuzminLyubushkinNaumovRESPXSec2014));
      static ::ROOT::TGenericClassInfo 
         instance("genie::KuzminLyubushkinNaumovRESPXSec2014", "", 1117,
                  typeid(::genie::KuzminLyubushkinNaumovRESPXSec2014), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLKuzminLyubushkinNaumovRESPXSec2014_Dictionary, isa_proxy, 0,
                  sizeof(::genie::KuzminLyubushkinNaumovRESPXSec2014) );
      instance.SetNew(&new_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      instance.SetNewArray(&newArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      instance.SetDelete(&delete_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      instance.SetDeleteArray(&deleteArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      instance.SetDestructor(&destruct_geniecLcLKuzminLyubushkinNaumovRESPXSec2014);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KuzminLyubushkinNaumovRESPXSec2014*)
   {
      return GenerateInitInstanceLocal((::genie::KuzminLyubushkinNaumovRESPXSec2014*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::KuzminLyubushkinNaumovRESPXSec2014*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLKuzminLyubushkinNaumovRESPXSec2014_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::KuzminLyubushkinNaumovRESPXSec2014*)0x0)->GetClass();
      geniecLcLKuzminLyubushkinNaumovRESPXSec2014_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLKuzminLyubushkinNaumovRESPXSec2014_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRESXSec_Dictionary();
   static void geniecLcLRESXSec_TClassManip(TClass*);
   static void *new_geniecLcLRESXSec(void *p = 0);
   static void *newArray_geniecLcLRESXSec(Long_t size, void *p);
   static void delete_geniecLcLRESXSec(void *p);
   static void deleteArray_geniecLcLRESXSec(void *p);
   static void destruct_geniecLcLRESXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESXSec*)
   {
      ::genie::RESXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESXSec", "", 1155,
                  typeid(::genie::RESXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESXSec) );
      instance.SetNew(&new_geniecLcLRESXSec);
      instance.SetNewArray(&newArray_geniecLcLRESXSec);
      instance.SetDelete(&delete_geniecLcLRESXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESXSec);
      instance.SetDestructor(&destruct_geniecLcLRESXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESXSec*)
   {
      return GenerateInitInstanceLocal((::genie::RESXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RESXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RESXSec*)0x0)->GetClass();
      geniecLcLRESXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelCC_Dictionary();
   static void geniecLcLRSHelicityAmplModelCC_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelCC(void *p = 0);
   static void *newArray_geniecLcLRSHelicityAmplModelCC(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelCC(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelCC(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelCC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelCC*)
   {
      ::genie::RSHelicityAmplModelCC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelCC));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelCC", "", 1205,
                  typeid(::genie::RSHelicityAmplModelCC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelCC_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelCC) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelCC);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelCC);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelCC);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelCC);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelCC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelCC*)
   {
      return GenerateInitInstanceLocal((::genie::RSHelicityAmplModelCC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelCC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelCC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelCC*)0x0)->GetClass();
      geniecLcLRSHelicityAmplModelCC_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelCC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLReinSehgalSPPXSec_Dictionary();
   static void geniecLcLReinSehgalSPPXSec_TClassManip(TClass*);
   static void *new_geniecLcLReinSehgalSPPXSec(void *p = 0);
   static void *newArray_geniecLcLReinSehgalSPPXSec(Long_t size, void *p);
   static void delete_geniecLcLReinSehgalSPPXSec(void *p);
   static void deleteArray_geniecLcLReinSehgalSPPXSec(void *p);
   static void destruct_geniecLcLReinSehgalSPPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ReinSehgalSPPXSec*)
   {
      ::genie::ReinSehgalSPPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ReinSehgalSPPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ReinSehgalSPPXSec", "", 1332,
                  typeid(::genie::ReinSehgalSPPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLReinSehgalSPPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ReinSehgalSPPXSec) );
      instance.SetNew(&new_geniecLcLReinSehgalSPPXSec);
      instance.SetNewArray(&newArray_geniecLcLReinSehgalSPPXSec);
      instance.SetDelete(&delete_geniecLcLReinSehgalSPPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLReinSehgalSPPXSec);
      instance.SetDestructor(&destruct_geniecLcLReinSehgalSPPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ReinSehgalSPPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::ReinSehgalSPPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ReinSehgalSPPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLReinSehgalSPPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ReinSehgalSPPXSec*)0x0)->GetClass();
      geniecLcLReinSehgalSPPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLReinSehgalSPPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelNCn_Dictionary();
   static void geniecLcLRSHelicityAmplModelNCn_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelNCn(void *p = 0);
   static void *newArray_geniecLcLRSHelicityAmplModelNCn(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelNCn(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelNCn(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelNCn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelNCn*)
   {
      ::genie::RSHelicityAmplModelNCn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelNCn));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelNCn", "", 1383,
                  typeid(::genie::RSHelicityAmplModelNCn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelNCn_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelNCn) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelNCn);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelNCn);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelNCn);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelNCn);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelNCn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelNCn*)
   {
      return GenerateInitInstanceLocal((::genie::RSHelicityAmplModelNCn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelNCn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelNCn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelNCn*)0x0)->GetClass();
      geniecLcLRSHelicityAmplModelNCn_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelNCn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSHelicityAmplModelEMn_Dictionary();
   static void geniecLcLRSHelicityAmplModelEMn_TClassManip(TClass*);
   static void *new_geniecLcLRSHelicityAmplModelEMn(void *p = 0);
   static void *newArray_geniecLcLRSHelicityAmplModelEMn(Long_t size, void *p);
   static void delete_geniecLcLRSHelicityAmplModelEMn(void *p);
   static void deleteArray_geniecLcLRSHelicityAmplModelEMn(void *p);
   static void destruct_geniecLcLRSHelicityAmplModelEMn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSHelicityAmplModelEMn*)
   {
      ::genie::RSHelicityAmplModelEMn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSHelicityAmplModelEMn));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSHelicityAmplModelEMn", "", 1437,
                  typeid(::genie::RSHelicityAmplModelEMn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSHelicityAmplModelEMn_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSHelicityAmplModelEMn) );
      instance.SetNew(&new_geniecLcLRSHelicityAmplModelEMn);
      instance.SetNewArray(&newArray_geniecLcLRSHelicityAmplModelEMn);
      instance.SetDelete(&delete_geniecLcLRSHelicityAmplModelEMn);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSHelicityAmplModelEMn);
      instance.SetDestructor(&destruct_geniecLcLRSHelicityAmplModelEMn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSHelicityAmplModelEMn*)
   {
      return GenerateInitInstanceLocal((::genie::RSHelicityAmplModelEMn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelEMn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSHelicityAmplModelEMn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSHelicityAmplModelEMn*)0x0)->GetClass();
      geniecLcLRSHelicityAmplModelEMn_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSHelicityAmplModelEMn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalRESPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalRESPXSec : new ::genie::ReinSehgalRESPXSec;
   }
   static void *newArray_geniecLcLReinSehgalRESPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalRESPXSec[nElements] : new ::genie::ReinSehgalRESPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalRESPXSec(void *p) {
      delete ((::genie::ReinSehgalRESPXSec*)p);
   }
   static void deleteArray_geniecLcLReinSehgalRESPXSec(void *p) {
      delete [] ((::genie::ReinSehgalRESPXSec*)p);
   }
   static void destruct_geniecLcLReinSehgalRESPXSec(void *p) {
      typedef ::genie::ReinSehgalRESPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalRESPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmpl(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmpl : new ::genie::RSHelicityAmpl;
   }
   static void *newArray_geniecLcLRSHelicityAmpl(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmpl[nElements] : new ::genie::RSHelicityAmpl[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmpl(void *p) {
      delete ((::genie::RSHelicityAmpl*)p);
   }
   static void deleteArray_geniecLcLRSHelicityAmpl(void *p) {
      delete [] ((::genie::RSHelicityAmpl*)p);
   }
   static void destruct_geniecLcLRSHelicityAmpl(void *p) {
      typedef ::genie::RSHelicityAmpl current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmpl

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelI(void *p) {
      delete ((::genie::RSHelicityAmplModelI*)p);
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelI(void *p) {
      delete [] ((::genie::RSHelicityAmplModelI*)p);
   }
   static void destruct_geniecLcLRSHelicityAmplModelI(void *p) {
      typedef ::genie::RSHelicityAmplModelI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelEMp(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelEMp : new ::genie::RSHelicityAmplModelEMp;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelEMp(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelEMp[nElements] : new ::genie::RSHelicityAmplModelEMp[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelEMp(void *p) {
      delete ((::genie::RSHelicityAmplModelEMp*)p);
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelEMp(void *p) {
      delete [] ((::genie::RSHelicityAmplModelEMp*)p);
   }
   static void destruct_geniecLcLRSHelicityAmplModelEMp(void *p) {
      typedef ::genie::RSHelicityAmplModelEMp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelEMp

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLBSKLNBaseRESPXSec2014(void *p) {
      delete ((::genie::BSKLNBaseRESPXSec2014*)p);
   }
   static void deleteArray_geniecLcLBSKLNBaseRESPXSec2014(void *p) {
      delete [] ((::genie::BSKLNBaseRESPXSec2014*)p);
   }
   static void destruct_geniecLcLBSKLNBaseRESPXSec2014(void *p) {
      typedef ::genie::BSKLNBaseRESPXSec2014 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BSKLNBaseRESPXSec2014

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelNCp(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelNCp : new ::genie::RSHelicityAmplModelNCp;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelNCp(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelNCp[nElements] : new ::genie::RSHelicityAmplModelNCp[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelNCp(void *p) {
      delete ((::genie::RSHelicityAmplModelNCp*)p);
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelNCp(void *p) {
      delete [] ((::genie::RSHelicityAmplModelNCp*)p);
   }
   static void destruct_geniecLcLRSHelicityAmplModelNCp(void *p) {
      typedef ::genie::RSHelicityAmplModelNCp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelNCp

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBergerSehgalRESPXSec2014(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BergerSehgalRESPXSec2014 : new ::genie::BergerSehgalRESPXSec2014;
   }
   static void *newArray_geniecLcLBergerSehgalRESPXSec2014(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BergerSehgalRESPXSec2014[nElements] : new ::genie::BergerSehgalRESPXSec2014[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBergerSehgalRESPXSec2014(void *p) {
      delete ((::genie::BergerSehgalRESPXSec2014*)p);
   }
   static void deleteArray_geniecLcLBergerSehgalRESPXSec2014(void *p) {
      delete [] ((::genie::BergerSehgalRESPXSec2014*)p);
   }
   static void destruct_geniecLcLBergerSehgalRESPXSec2014(void *p) {
      typedef ::genie::BergerSehgalRESPXSec2014 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BergerSehgalRESPXSec2014

namespace ROOT {
} // end of namespace ROOT for class ::genie::ReinSehgalRESXSecWithCacheFast

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p) {
      delete ((::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p) {
      delete [] ((::genie::utils::gsl::d2XSecRESFast_dWQ2_E*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSecRESFast_dWQ2_E(void *p) {
      typedef ::genie::utils::gsl::d2XSecRESFast_dWQ2_E current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSecRESFast_dWQ2_E

namespace ROOT {
} // end of namespace ROOT for class ::genie::ReinSehgalRESXSecWithCache

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalRESXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalRESXSec : new ::genie::ReinSehgalRESXSec;
   }
   static void *newArray_geniecLcLReinSehgalRESXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalRESXSec[nElements] : new ::genie::ReinSehgalRESXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalRESXSec(void *p) {
      delete ((::genie::ReinSehgalRESXSec*)p);
   }
   static void deleteArray_geniecLcLReinSehgalRESXSec(void *p) {
      delete [] ((::genie::ReinSehgalRESXSec*)p);
   }
   static void destruct_geniecLcLReinSehgalRESXSec(void *p) {
      typedef ::genie::ReinSehgalRESXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalRESXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLP33PaschosLalakulichPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::P33PaschosLalakulichPXSec : new ::genie::P33PaschosLalakulichPXSec;
   }
   static void *newArray_geniecLcLP33PaschosLalakulichPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::P33PaschosLalakulichPXSec[nElements] : new ::genie::P33PaschosLalakulichPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLP33PaschosLalakulichPXSec(void *p) {
      delete ((::genie::P33PaschosLalakulichPXSec*)p);
   }
   static void deleteArray_geniecLcLP33PaschosLalakulichPXSec(void *p) {
      delete [] ((::genie::P33PaschosLalakulichPXSec*)p);
   }
   static void destruct_geniecLcLP33PaschosLalakulichPXSec(void *p) {
      typedef ::genie::P33PaschosLalakulichPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::P33PaschosLalakulichPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalSPPPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalSPPPXSec : new ::genie::ReinSehgalSPPPXSec;
   }
   static void *newArray_geniecLcLReinSehgalSPPPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalSPPPXSec[nElements] : new ::genie::ReinSehgalSPPPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalSPPPXSec(void *p) {
      delete ((::genie::ReinSehgalSPPPXSec*)p);
   }
   static void deleteArray_geniecLcLReinSehgalSPPPXSec(void *p) {
      delete [] ((::genie::ReinSehgalSPPPXSec*)p);
   }
   static void destruct_geniecLcLReinSehgalSPPPXSec(void *p) {
      typedef ::genie::ReinSehgalSPPPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalSPPPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalRESXSecFast(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalRESXSecFast : new ::genie::ReinSehgalRESXSecFast;
   }
   static void *newArray_geniecLcLReinSehgalRESXSecFast(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalRESXSecFast[nElements] : new ::genie::ReinSehgalRESXSecFast[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalRESXSecFast(void *p) {
      delete ((::genie::ReinSehgalRESXSecFast*)p);
   }
   static void deleteArray_geniecLcLReinSehgalRESXSecFast(void *p) {
      delete [] ((::genie::ReinSehgalRESXSecFast*)p);
   }
   static void destruct_geniecLcLReinSehgalRESXSecFast(void *p) {
      typedef ::genie::ReinSehgalRESXSecFast current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalRESXSecFast

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KuzminLyubushkinNaumovRESPXSec2014 : new ::genie::KuzminLyubushkinNaumovRESPXSec2014;
   }
   static void *newArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KuzminLyubushkinNaumovRESPXSec2014[nElements] : new ::genie::KuzminLyubushkinNaumovRESPXSec2014[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p) {
      delete ((::genie::KuzminLyubushkinNaumovRESPXSec2014*)p);
   }
   static void deleteArray_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p) {
      delete [] ((::genie::KuzminLyubushkinNaumovRESPXSec2014*)p);
   }
   static void destruct_geniecLcLKuzminLyubushkinNaumovRESPXSec2014(void *p) {
      typedef ::genie::KuzminLyubushkinNaumovRESPXSec2014 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::KuzminLyubushkinNaumovRESPXSec2014

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESXSec : new ::genie::RESXSec;
   }
   static void *newArray_geniecLcLRESXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESXSec[nElements] : new ::genie::RESXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESXSec(void *p) {
      delete ((::genie::RESXSec*)p);
   }
   static void deleteArray_geniecLcLRESXSec(void *p) {
      delete [] ((::genie::RESXSec*)p);
   }
   static void destruct_geniecLcLRESXSec(void *p) {
      typedef ::genie::RESXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelCC(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelCC : new ::genie::RSHelicityAmplModelCC;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelCC(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelCC[nElements] : new ::genie::RSHelicityAmplModelCC[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelCC(void *p) {
      delete ((::genie::RSHelicityAmplModelCC*)p);
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelCC(void *p) {
      delete [] ((::genie::RSHelicityAmplModelCC*)p);
   }
   static void destruct_geniecLcLRSHelicityAmplModelCC(void *p) {
      typedef ::genie::RSHelicityAmplModelCC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelCC

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLReinSehgalSPPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalSPPXSec : new ::genie::ReinSehgalSPPXSec;
   }
   static void *newArray_geniecLcLReinSehgalSPPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ReinSehgalSPPXSec[nElements] : new ::genie::ReinSehgalSPPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLReinSehgalSPPXSec(void *p) {
      delete ((::genie::ReinSehgalSPPXSec*)p);
   }
   static void deleteArray_geniecLcLReinSehgalSPPXSec(void *p) {
      delete [] ((::genie::ReinSehgalSPPXSec*)p);
   }
   static void destruct_geniecLcLReinSehgalSPPXSec(void *p) {
      typedef ::genie::ReinSehgalSPPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ReinSehgalSPPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelNCn(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelNCn : new ::genie::RSHelicityAmplModelNCn;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelNCn(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelNCn[nElements] : new ::genie::RSHelicityAmplModelNCn[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelNCn(void *p) {
      delete ((::genie::RSHelicityAmplModelNCn*)p);
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelNCn(void *p) {
      delete [] ((::genie::RSHelicityAmplModelNCn*)p);
   }
   static void destruct_geniecLcLRSHelicityAmplModelNCn(void *p) {
      typedef ::genie::RSHelicityAmplModelNCn current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelNCn

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSHelicityAmplModelEMn(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelEMn : new ::genie::RSHelicityAmplModelEMn;
   }
   static void *newArray_geniecLcLRSHelicityAmplModelEMn(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSHelicityAmplModelEMn[nElements] : new ::genie::RSHelicityAmplModelEMn[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSHelicityAmplModelEMn(void *p) {
      delete ((::genie::RSHelicityAmplModelEMn*)p);
   }
   static void deleteArray_geniecLcLRSHelicityAmplModelEMn(void *p) {
      delete [] ((::genie::RSHelicityAmplModelEMn*)p);
   }
   static void destruct_geniecLcLRSHelicityAmplModelEMn(void *p) {
      typedef ::genie::RSHelicityAmplModelEMn current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSHelicityAmplModelEMn

namespace {
  void TriggerDictionaryInitialization_libGPhResXS_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Resonance/XSection",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Resonance/XSection",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Resonance/XSection",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Resonance/XSection/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhResXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class ReinSehgalRESPXSec;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/RSHelicityAmpl.h")))  __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/RSHelicityAmplModelI.h")))  RSHelicityAmpl;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/RSHelicityAmplModelI.h")))  RSHelicityAmplModelI;}
namespace genie{class RSHelicityAmplModelEMp;}
namespace genie{class BSKLNBaseRESPXSec2014;}
namespace genie{class RSHelicityAmplModelNCp;}
namespace genie{class BergerSehgalRESPXSec2014;}
namespace genie{class ReinSehgalRESXSecWithCacheFast;}
namespace genie{namespace utils{namespace gsl{class d2XSecRESFast_dWQ2_E;}}}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/Resonance/XSection/ReinSehgalRESXSecWithCache.h")))  ReinSehgalRESXSecWithCache;}
namespace genie{class ReinSehgalRESXSec;}
namespace genie{class P33PaschosLalakulichPXSec;}
namespace genie{class ReinSehgalSPPPXSec;}
namespace genie{class ReinSehgalRESXSecFast;}
namespace genie{class KuzminLyubushkinNaumovRESPXSec2014;}
namespace genie{class RESXSec;}
namespace genie{class RSHelicityAmplModelCC;}
namespace genie{class ReinSehgalSPPXSec;}
namespace genie{class RSHelicityAmplModelNCn;}
namespace genie{class RSHelicityAmplModelEMn;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhResXS dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESPXSec

\brief    Computes the double differential cross section for resonance 
          electro- or neutrino-production according to the Rein-Sehgal model.

          The computed cross section is the d^2 xsec/ dQ^2 dW \n

          where \n
            \li \c Q^2 : momentum transfer ^ 2
            \li \c W   : invariant mass of the final state hadronic system

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 05, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_PXSEC_H_
#define _REIN_SEHGAL_RES_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Physics/Resonance/XSection/FKR.h"

namespace genie {

class RSHelicityAmplModelI;
class Spline;
class XSecIntegratorI;

class ReinSehgalRESPXSec : public XSecAlgorithmI {

public:
  ReinSehgalRESPXSec();
  ReinSehgalRESPXSec(string config);
  virtual ~ReinSehgalRESPXSec();

  // implement the XSecAlgorithmI interface 
  double XSec         (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral     (const Interaction * i) const;
  bool   ValidProcess (const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig (void);

  mutable FKR fFKR;

  const RSHelicityAmplModelI * fHAmplModelCC;
  const RSHelicityAmplModelI * fHAmplModelNCp;
  const RSHelicityAmplModelI * fHAmplModelNCn;
  const RSHelicityAmplModelI * fHAmplModelEMp;
  const RSHelicityAmplModelI * fHAmplModelEMn;

  // configuration data
  bool     fWghtBW;            ///< weight with resonance breit-wigner?
  bool     fNormBW;            ///< normalize resonance breit-wigner to 1?
  double   fZeta;              ///< FKR parameter Zeta
  double   fOmega;             ///< FKR parameter Omega
  double   fMa2;               ///< (axial mass)^2
  double   fMv2;               ///< (vector mass)^2
  double   fSin48w;            ///< sin^4(Weingberg angle)
  double   fVud2;              ///< |Vud|^2(square of magnitude ud-element of CKM-matrix)
  bool     fUsingDisResJoin;   ///< use a DIS/RES joining scheme?
  bool     fUsingNuTauScaling; ///< use NeuGEN nutau xsec reduction factors?
  double   fWcut;              ///< apply DIS/RES joining scheme < Wcut
  double   fN2ResMaxNWidths;   ///< limits allowed phase space for n=2 res
  double   fN0ResMaxNWidths;   ///< limits allowed phase space for n=0 res
  double   fGnResMaxNWidths;   ///< limits allowed phase space for other res
  string fKFTable;             ///< table of Fermi momentum (kF) constants for various nuclei
  bool fUseRFGParametrization; ///< use parametrization for fermi momentum insted of table?
  bool fUsePauliBlocking;      ///< account for Pauli blocking?
  Spline * fNuTauRdSpl;        ///< xsec reduction spline for nu_tau
  Spline * fNuTauBarRdSpl;     ///< xsec reduction spline for nu_tau_bar
  double   fXSecScaleCC;       ///< external CC xsec scaling factor
  double   fXSecScaleNC;       ///< external NC xsec scaling factor

  const XSecIntegratorI * fXSecIntegrator;
};

}       // genie namespace

#endif  // _REIN_SEHGAL_RES_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelEMp

\brief    The Helicity Amplitudes, for all baryon resonances, for Electro-
          Magnetic (EM) interactions on free protons, as computed in the
          Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 30, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_EM_P_H_
#define _HELICITY_AMPL_MODEL_EM_P_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelEMp : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelEMp();
  RSHelicityAmplModelEMp(string config);
  virtual ~RSHelicityAmplModelEMp();

  // RSHelicityAmplModelI interface implementation
  const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

private:
  mutable RSHelicityAmpl fAmpl;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_EM_N_H_
//____________________________________________________________________________
/*!

\class    genie::GiBUURESFormFactor

\brief    Singleton to load and serve data tables provided by the GiBUU group

\ref      http://gibuu.physik.uni-giessen.de/GiBUU
          Specific references for each piece of data included in given below.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 30, 2009

*/
//____________________________________________________________________________

#ifndef _GIBUU_RES_FORM_FACTOR_H_
#define _GIBUU_RES_FORM_FACTOR_H_

#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/Interaction/InteractionType.h"

namespace genie {

class Spline;

class GiBUURESFormFactor
{
public:

  class FormFactors;

  // access GiBUURESFormFactor singleton instance
  static GiBUURESFormFactor * Instance (void);

  // access form factor data
  const FormFactors & FF(void) const;

  //
  // Resonance form factors. 
  // Details given in Phys. Rev. C 79, 034601 (2009).
  //
  class FormFactors {

   public:

     FormFactors();
    ~FormFactors();

     // the following is non-zero for I=1/2 (N) resonances
     double C3V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
     double C4V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 
     double C5V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 
     double C6V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 
     double C3A (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 
     double C4A (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 
     double C5A (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 
     double C6A (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;
  
     // the following is non-zero for I=3/2 (Delta) resonances
     double F1V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 
     double F2V (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 
     double FA  (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const;  
     double FP  (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it) const; 

     double Q2min (void) const { return fMinQ2; }
     double Q2max (void) const { return fMaxQ2; }

   private:

     static double fMinQ2; ///< min Q2 for which resonance f/f data are given
     static double fMaxQ2; ///< max Q2 for which resonance f/f data are given

     // The first array index is the resonance id. 
     // Tina provided GiBUU form factor data for 13 resonances given below along with
     // the corresponding GENIE resonance ids
     //                 GENIE Resonance_t   as integer
     //   P33(1232) ->  kP33_1232            0
     //   S11(1535) ->  kS11_1535            1
     //   D13(1520) ->  kD13_1520            2
     //   S11(1650) ->  kS11_1650            3
     //   D15(1675) ->  kD15_1675            5
     //   S31(1620) ->  kS31_1620            6
     //   D33(1700) ->  kD33_1700            7
     //   P11(1440) ->  kP11_1440            8
     //   P13(1720) ->  kP13_1720           10
     //   F15(1680) ->  kF15_1680           11
     //   P31(1910) ->  kP31_1910           12
     //   F35(1905) ->  kF35_1905           14
     //   F37(1950) ->  kF37_1950           15
     // The remaining 3 array indices are:
     //     0  1  2  0 1    0   1  2  3   4   5   6   7   8   9  10  11
     //   [CC,NC,EM][n,p][F1V,F2V,FA,FP,C3V,C4V,C5V,C6V,C3A,C4A,C5A,C6A]
     //                  |-------------|                                  for I=1/2 resonances
     //                                |-------------------------------|  for I=3/2 resonances

     static const int kNRes    = 18;
     static const int kNCurr   =  3;
     static const int kNHitNuc =  2;
     static const int kNFFRes  = 12;

     //! actual form factor data = f(Q2)
     Spline * fFFRes [kNRes][kNCurr][kNHitNuc][kNFFRes];   

     //! func to retrieve interpolated form factor values
     double FFRes (double Q2, Resonance_t res, int nucleon_pdg, InteractionType_t it, int ffid) const;

     //! load all form factor data tables
     void LoadTables(void); 

     friend class GiBUURESFormFactor;

  }; // FormFactors nested class

private:
  GiBUURESFormFactor();
  GiBUURESFormFactor(const GiBUURESFormFactor & gibuu_data);
 ~GiBUURESFormFactor();

  // load all data tables
  void LoadTables(void); 

  // singleton 'self'
  static GiBUURESFormFactor * fInstance;

  // form factor data
  FormFactors * fFormFactors;

  // singleton cleaner
  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (GiBUURESFormFactor::fInstance !=0) {
            delete GiBUURESFormFactor::fInstance;
            GiBUURESFormFactor::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;

}; // GiBUURESFormFactor class

}      // genie namespace

#endif // _GIBUU_RES_FORM_FACTOR_H_ 

//____________________________________________________________________________
/*!

\class    genie::BSKLNBaseRESPXSec2014

\brief    Base class for the Berger-Sehgal and the Kuzmin, Lyubushkin, Naumov
          resonance models, implemented as modifications to the Rein-Sehgal model.

\ref      Berger, Sehgal Phys. Rev. D76, 113004 (2007) \n
          Kuzmin, Lyubushkin, Naumov Mod. Phys. Lett. A19 (2004) 2815 \n
	  D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981) \n

          Modifications based on a MiniBooNE tune courtesy of J. Nowak, S.Dytman

\author   Steve Dytman
          University of Pittsburgh

          Jarek Nowak
          University of Lancaster

          Gabe Perdue
          Fermilab

          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Sep 15, 2015

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BSKLN_BASE_RES_PXSEC_2014_H_
#define _BSKLN_BASE_RES_PXSEC_2014_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Physics/Resonance/XSection/FKR.h"

namespace genie {

  class RSHelicityAmplModelI;
  class Spline;
  class XSecIntegratorI;

  class BSKLNBaseRESPXSec2014: public XSecAlgorithmI {

    public:
      virtual ~BSKLNBaseRESPXSec2014();

      // implement the XSecAlgorithmI interface 
      double XSec         (const Interaction * i, KinePhaseSpace_t k) const;
      double Integral     (const Interaction * i) const;
      bool   ValidProcess (const Interaction * i) const;

      // overload the Algorithm::Configure() methods to load private data
      // members from configuration options
      void Configure(const Registry & config);
      void Configure(string config);

    protected:

      BSKLNBaseRESPXSec2014(string name);
      BSKLNBaseRESPXSec2014(string name, string config);

      void LoadConfig (void);

      mutable FKR fFKR;

      const RSHelicityAmplModelI * fHAmplModelCC;
      const RSHelicityAmplModelI * fHAmplModelNCp;
      const RSHelicityAmplModelI * fHAmplModelNCn;
      const RSHelicityAmplModelI * fHAmplModelEMp;
      const RSHelicityAmplModelI * fHAmplModelEMn;

      // configuration data
      bool     fWghtBW;            ///< weight with resonance breit-wigner?
      bool     fNormBW;            ///< normalize resonance breit-wigner to 1?
      double   fZeta;              ///< FKR parameter Zeta
      double   fOmega;             ///< FKR parameter Omega
      double   fMa2;               ///< (axial mass)^2
      double   fMv2;               ///< (vector mass)^2
      double   fSin48w;            ///< sin^4(Weingberg angle)
      double   fVud2;              ///< |Vud|^2(square of magnitude ud-element of CKM-matrix)
      bool     fUsingDisResJoin;   ///< use a DIS/RES joining scheme?
      bool     fUsingNuTauScaling; ///< use NeuGEN nutau xsec reduction factors?
      double   fWcut;              ///< apply DIS/RES joining scheme < Wcut
      double   fN2ResMaxNWidths;   ///< limits allowed phase space for n=2 res
      double   fN0ResMaxNWidths;   ///< limits allowed phase space for n=0 res
      double   fGnResMaxNWidths;   ///< limits allowed phase space for other res
      string fKFTable;             ///< table of Fermi momentum (kF) constants for various nuclei
      bool fUseRFGParametrization; ///< use parametrization for fermi momentum insted of table?
      bool fUsePauliBlocking;      ///< account for Pauli blocking?
     
      double   fXSecScaleCC;       ///< external CC xsec scaling factor
      double   fXSecScaleNC;       ///< external NC xsec scaling factor

      bool fKLN;
      bool fBRS;

      bool fGA;
      bool fGV;

      const XSecIntegratorI * fXSecIntegrator;
  };

}       // genie namespace

#endif  // _BSKLN_BASE_RES_PXSEC_2014_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelNCp

\brief    The Helicity Amplitudes, for all baryon resonances, for NC neutrino
          interactions on free protons, as computed in the Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_NC_P_H_
#define _HELICITY_AMPL_MODEL_NC_P_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelNCp : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelNCp();
  RSHelicityAmplModelNCp(string config);
  virtual ~RSHelicityAmplModelNCp();

  // RSHelicityAmplModelI interface implementation
  const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);

  mutable RSHelicityAmpl fAmpl;

  double fSin28w;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_NC_P_H_
//____________________________________________________________________________
/*!

\class    genie::BergerSehgalRESPXSec2014

\brief    Computes the double differential cross section for resonance 
          electro- or neutrino-production according to the Berger Sehgal model.

          The computed cross section is the d^2 xsec/ dQ^2 dW \n
          where \n
            \li \c Q^2 : momentum transfer ^ 2
            \li \c W   : invariant mass of the final state hadronic system

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      Berger, Sehgal Phys. Rev. D76, 113004 (2007)

          Modifications within original format of 
	  D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

          Modifications based on a MiniBooNE tune courtesy of J. Nowak
          and S. Dytman.

\author   Steve Dytman
          University of Pittsburgh

          Jarek Nowak 
          University of Lancaster

	  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Sep 15, 2015

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BERGER_SEHGAL_RES_PXSEC_2014_H_
#define _BERGER_SEHGAL_RES_PXSEC_2014_H_

#include "Physics/Resonance/XSection/BSKLNBaseRESPXSec2014.h"

namespace genie {

 class BergerSehgalRESPXSec2014: public BSKLNBaseRESPXSec2014
 {
   public:
     BergerSehgalRESPXSec2014();
     BergerSehgalRESPXSec2014(string config);
     virtual ~BergerSehgalRESPXSec2014();
 };

}       // genie namespace

#endif  // _BERGER_SEHGAL_RES_PXSEC_2014_H_
//____________________________________________________________________________
/*!
\class    genie::RSHelicityAmplModelI

\brief    Pure abstract base class. Defines the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  July 10, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_HELICITY_AMPL_MODEL_I_H_
#define _REIN_SEHGAL_HELICITY_AMPL_MODEL_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Physics/Resonance/XSection/FKR.h"
#include "Physics/Resonance/XSection/RSHelicityAmpl.h"

namespace genie {

class RSHelicityAmplModelI : public Algorithm
{
public:
  virtual ~RSHelicityAmplModelI();

  // define the RSHelicityAmplModelI interface
  virtual const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const = 0;

protected:
  RSHelicityAmplModelI();
  RSHelicityAmplModelI(string name);
  RSHelicityAmplModelI(string name, string config);
};

}        // namespace

#endif   // _REIN_SEHGAL_HELICITY_AMPL_MODEL_I_H_



//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESXSecWithCacheFast

\brief    Class that caches resonance neutrinoproduction cross sections on free 
          nucleons according to the Rein-Sehgal model. This significantly speeds 
          the cross section calculation for multiple nuclear targets (eg at the
          spline construction phase). This class integrates cross sections faster,
          than ReinSehgalRESXSecWithCache because of integration area transformation. 

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research - March 01, 2017 \n
          based on code of Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 01, 2017

\cpright  Copyright (c) 2003-2017, GENIE Neutrino MC Generator Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_XSEC_WITH_CACHE_FAST_H_
#define _REIN_SEHGAL_RES_XSEC_WITH_CACHE_FAST_H_

#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>

#include "Physics/XSectionIntegration/XSecIntegratorI.h"
#include "Framework/ParticleData//BaryonResList.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/Utils/Range1.h"
#include "Framework/Interaction/KPhaseSpace.h"

namespace genie {

class ReinSehgalRESXSecWithCacheFast : public XSecIntegratorI {

protected:
  ReinSehgalRESXSecWithCacheFast();
  ReinSehgalRESXSecWithCacheFast(string name);
  ReinSehgalRESXSecWithCacheFast(string name, string config);
  virtual ~ReinSehgalRESXSecWithCacheFast();

  // Don't implement the XSecIntegratorI interface - leave it for the concrete
  // subclasses. Just define utility methods and data
  void   CacheResExcitationXSec (const Interaction * interaction) const;
  string CacheBranchName(Resonance_t r, InteractionType_t it, int nu, int nuc) const;

  bool   fUsingDisResJoin;
  double fWcut;
  double fEMax;

  mutable const XSecAlgorithmI * fSingleResXSecModel;
  BaryonResList fResList;
};


class XSecAlgorithmI;
class Interaction;

namespace utils {
namespace gsl   {



//.....................................................................................
//
// genie::utils::gsl::d2XSecRESFast_dWQ2_E
// A 2-D cross section function: d2xsec/dWdQ2 = f(W,Q2)|(fixed E)
//
class d2XSecRESFast_dWQ2_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSecRESFast_dWQ2_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSecRESFast_dWQ2_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double fWmin;
  double fWmax;
  bool isfWcutLessfWmin;
  KPhaseSpace * kps;
};

} // gsl   namespace
} // utils namespace
} // genie namespace

#endif  // _REIN_SEHGAL_RES_XSEC_WITH_CACHE_H_



//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESXSec

\brief    Computes the cross section for an exclusive 1pi reaction through
          resonance neutrinoproduction according to the Rein-Sehgal model.

          This algorithm produces in principle what you could also get from 
          the genie::RESXSec algorithm (RES cross section integrator) by 
          specifying the genie::ReinSehgalRESPXSec as the differential 
          cross section model. However, ReinSehgalRESXSec offers a faster 
          alternative. Before computing any RES cross section this algorithm 
          computes and caches splines for resonance neutrino-production cross 
          sections. This improves the speed of the GENIE spline construction 
          phase if splines for multiple nuclear targets are to be computed.

          Is a concrete implementation of the XSecAlgorithmI interface.\n

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 09, 2006

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration   
          For the full text of the license visit http://copyright.genie-mc.org                         
          or see $GENIE/LICENSE 
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_XSEC_H_
#define _REIN_SEHGAL_RES_XSEC_H_

#include "Physics/Resonance/XSection/ReinSehgalRESXSecWithCache.h"

namespace genie {

class ReinSehgalRESXSec : public ReinSehgalRESXSecWithCache {

public:
  ReinSehgalRESXSec();
  ReinSehgalRESXSec(string param_set);
  virtual ~ReinSehgalRESXSec();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);
  
  bool fUsePauliBlocking;      ///< account for Pauli blocking?
};

}       // genie namespace
#endif  // _REIN_SEHGAL_RES_XSEC_H_

//____________________________________________________________________________
/*!

\class    genie::P33PaschosLalakulichPXSec

\brief    Double differential resonance cross section for P33 according to the 
          Paschos, Lalakulich model.

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      O.Lalakulich and E.A.Paschos, Resonance Production by Neutrinos:
          I. J=3/2 Resonances, hep-ph/0501109

\author   This class is based on code written by the model authors (Olga
          Lalakulich, 17.02.2005). The code was modified to fit into the
          GENIE framework by Costas Andreopoulos.

\created  February 22, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _P33_PASCHOS_LALAKULICH_PARTIAL_XSEC_H_
#define _P33_PASCHOS_LALAKULICH_PARTIAL_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class P33PaschosLalakulichPXSec : public XSecAlgorithmI {

public:
  P33PaschosLalakulichPXSec();
  P33PaschosLalakulichPXSec(string name);
  virtual ~P33PaschosLalakulichPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);

  double Pauli   (double Q2, double W, double MN) const; ///< Pauli suppression for D2
  double Nu      (double Q2, double W, double MN) const; ///< kinematic variables
  double NuStar  (double Q2, double W, double MN) const; ///< ...
  double PPiStar (double W, double MN) const; ///< ...

  const XSecIntegratorI *   fXSecIntegrator;

  bool   fTurnOnPauliCorrection;
  double fMa;
  double fMv;
  double fCos28c;
};

}       // genie namespace
#endif  // _P33_PASCHOS_LALAKULICH_PARTIAL_XSEC_H_

//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmpl

\brief    A class holding the Rein-Sehgal's helicity amplitudes.

          This class is using the \b Strategy Pattern. \n
          It can accept requests to calculate itself, for a given interaction,
          that it then delegates to the algorithmic object, implementing the
          RSHelicityAmplModelI interface, that it finds attached to itself.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RS_HELICITY_AMPL_H_
#define _RS_HELICITY_AMPL_H_

#include <iostream>

#include <TMath.h>

#include "Framework/Interaction/Interaction.h"
#include "Physics/Resonance/XSection/FKR.h"

using std::ostream;

namespace genie {

class RSHelicityAmpl;
ostream & operator<< (ostream & stream, const RSHelicityAmpl & hamp);

class RSHelicityAmpl {

friend class RSHelicityAmplModelCC;
friend class RSHelicityAmplModelNCp;
friend class RSHelicityAmplModelNCn;
friend class RSHelicityAmplModelEMp;
friend class RSHelicityAmplModelEMn;

public:

  RSHelicityAmpl();
  RSHelicityAmpl(const RSHelicityAmpl & hamp);
  ~RSHelicityAmpl() { }

  //! return helicity amplitude
  double AmpMinus1 (void) const  { return fMinus1; } /* f(-1) */
  double AmpPlus1  (void) const  { return fPlus1;  } /* f(+1) */
  double AmpMinus3 (void) const  { return fMinus3; } /* f(-3) */
  double AmpPlus3  (void) const  { return fPlus3;  } /* f(+3) */
  double Amp0Minus (void) const  { return f0Minus; } /* f(0-) */
  double Amp0Plus  (void) const  { return f0Plus;  } /* f(0+) */

  //! return |helicity amplitude|^2
  double Amp2Minus1 (void) const { return TMath::Power(fMinus1, 2.); } /* |f(-1)|^2 */
  double Amp2Plus1  (void) const { return TMath::Power(fPlus1,  2.); } /* |f(+1)|^2 */
  double Amp2Minus3 (void) const { return TMath::Power(fMinus3, 2.); } /* |f(-3)|^2 */
  double Amp2Plus3  (void) const { return TMath::Power(fPlus3,  2.); } /* |f(+3)|^2 */
  double Amp20Minus (void) const { return TMath::Power(f0Minus, 2.); } /* |f(0-)|^2 */
  double Amp20Plus  (void) const { return TMath::Power(f0Plus,  2.); } /* |f(0+)|^2 */

  friend ostream & operator<< (ostream & stream, const RSHelicityAmpl & hamp);

  void Print(ostream & stream) const;

private:

  void   Init(void);

  double fMinus1;
  double fPlus1;
  double fMinus3;
  double fPlus3;
  double f0Minus;
  double f0Plus;
};

}        // genie namespace

#endif   // _RS_HELICITY_AMPL_H_


//____________________________________________________________________________
/*!

\class    genie::ReinSehgalSPPPXSec

\brief    Computes the differential cross section for an exclusive 1-pion 
          reaction through resonance neutrinoproduction according to the 
          Rein-Sehgal model.

          The cross section is computed for an input list of resonances
          as the sum of the Rein-Sehgal single resonance cross sections
          weighted:

          \li With the value of their Breit-Wigner distributions at the given
              W,Q^2 (The code for BW weighting is included in the single
              resonance cross section algorithm. The user needs to make sure
              that he does not run the single resonance cross section code with
              a configuration that inhibits weighting).

          \li With the isospin Glebsch-Gordon coefficient determining the
              contribution of each resonance to the exclusive final state.

          \li With the BR for the produced resonance to decay into the given
              exclusive final state.

          In this algorithm we follow the non-coherent approach: we sum
          the weighted resonance production cross sections rather than the
          resonance production amplitudes.

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 22, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_EXCLUSIVE_SPP_PXSEC_H_
#define _REIN_SEHGAL_EXCLUSIVE_SPP_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/ParticleData/BaryonResList.h"

namespace genie {

class XSecIntegratorI;

class ReinSehgalSPPPXSec : public XSecAlgorithmI {

public:
  ReinSehgalSPPPXSec();
  ReinSehgalSPPPXSec(string config);
  virtual ~ReinSehgalSPPPXSec();

  //-- XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;
	
  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  //-- load algorithm configuration when Algorithm::Configure() 
  void LoadConfig (void);

  double XSecNRES(const Interaction * i, KinePhaseSpace_t k) const;
  double XSec1RES(const Interaction * i, KinePhaseSpace_t k) const;

  //-- private data members
  BaryonResList           fResList;
  const XSecAlgorithmI *  fSingleResXSecModel;
  const XSecIntegratorI * fXSecIntegrator;
};

}       // genie namespace
#endif  // _REIN_SEHGAL_EXCLUSIVE_SPP_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESXSecFast

\brief    Computes the cross section for an exclusive 1pi reaction through
          resonance neutrinoproduction according to the Rein-Sehgal model.

          This algorithm produces in principle what you could also get from 
          the genie::RESXSec algorithm (RES cross section integrator) by 
          specifying the genie::ReinSehgalRESPXSec as the differential 
          cross section model. However, ReinSehgalRESXSecFast offers a faster 
          alternative. Before computing any RES cross section this algorithm 
          computes and caches splines for resonance neutrino-production cross 
          sections. This improves the speed of the GENIE spline construction 
          phase if splines for multiple nuclear targets are to be computed.
          Also this class integrates cross sections faster, than 
          ReinSehgalRESXSec because of integration area transformation.

          Is a concrete implementation of the XSecAlgorithmI interface.\n

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Igor Kakorin <kakorin@jinr.ru>
          Joint Institute for Nuclear Research - March 01, 2017 \n
          based on code of Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 01, 2017

\cpright  Copyright (c) 2003-2017, GENIE Neutrino MC Generator Collaboration   
          For the full text of the license visit http://copyright.genie-mc.org                         
          or see $GENIE/LICENSE 
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_XSEC_FAST_H_
#define _REIN_SEHGAL_RES_XSEC_FAST_H_

#include "Physics/Resonance/XSection/ReinSehgalRESXSecWithCacheFast.h"

namespace genie {

class ReinSehgalRESXSecFast : public ReinSehgalRESXSecWithCacheFast {

public:
  ReinSehgalRESXSecFast();
  ReinSehgalRESXSecFast(string param_set);
  virtual ~ReinSehgalRESXSecFast();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);
  
  bool fUsePauliBlocking;      ///< account for Pauli blocking?
};

}       // genie namespace
#endif  // _REIN_SEHGAL_RES_XSEC_H_

//____________________________________________________________________________
/*!

\class    genie::KuzminLyubushkinNaumovRESPXSec2014

\brief    Computes the double differential cross section for resonance
          electro- or neutrino-production according to the Berger Sehgal model.

          The computed cross section is the d^2 xsec/ dQ^2 dW \n
          where \n
            \li \c Q^2 : momentum transfer ^ 2
            \li \c W   : invariant mass of the final state hadronic system

          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      Kuzmin, Lyubushkin, Naumov Mod. Phys. Lett. A19 (2004) 2815

          Modifications within original format of
          D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

          Modifications based on a MiniBooNE tune courtesy of J. Nowak
          and S. Dytman.

\author   Steve Dytman
          University of Pittsburgh

          Jarek Nowak
          University of Lancaster

          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Sep 15, 2015

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _KUZMIN_LYUBUSHKIN_NAUMOV_RES_PXSEC_2014_H_
#define _KUZMIN_LYUBUSHKIN_NAUMOV_RES_PXSEC_2014_H_

#include "Physics/Resonance/XSection/BSKLNBaseRESPXSec2014.h"

namespace genie {

 class KuzminLyubushkinNaumovRESPXSec2014: public BSKLNBaseRESPXSec2014
 {
   public:
     KuzminLyubushkinNaumovRESPXSec2014();
     KuzminLyubushkinNaumovRESPXSec2014(string config);
     virtual ~KuzminLyubushkinNaumovRESPXSec2014();
 };

}       // genie namespace

#endif  // _KUZMIN_LYUBUSHKIN_NAUMOV_RES_PXSEC_2014_H_
//____________________________________________________________________________
/*!

\class    genie::RESXSec

\brief    Computes the RES Cross Section.\n
          Is a concrete implementation of the XSecIntegratorI interface.\n

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 04, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RES_XSEC_H_
#define _RES_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class RESXSec : public XSecIntegratorI {

public:
  RESXSec();
  RESXSec(string param_set);
  virtual ~RESXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig (void);
};

}       // genie namespace
#endif  // _RES_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelCC

\brief    The Helicity Amplitudes, for all baryon resonances, for CC neutrino
          interactions on free nucleons, as computed in the Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_CC_H_
#define _HELICITY_AMPL_MODEL_CC_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelCC : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelCC();
  RSHelicityAmplModelCC(string config);
  virtual ~RSHelicityAmplModelCC();

  // RSHelicityAmplModelI interface implementation
 const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

private:
  mutable RSHelicityAmpl fAmpl; 
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_CC_H_


//____________________________________________________________________________
/*!

\class    genie::FKR

\brief    Simple struct-like class holding the Feynmann-Kislinger-Ravndall 
          (FKR) baryon excitation model parameters.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _FKR_H_
#define _FKR_H_

#include <iostream>

using std::ostream;

namespace genie {

class FKR;
ostream & operator<< (ostream & stream, const FKR & parameters);

class FKR {

public:

  friend ostream & operator<< (ostream & stream, const FKR & parameters);

  double Lamda;
  double Tv;
  double Rv;
  double S;
  double Ta;
  double Ra;
  double B;
  double C;
  double R;
  double T;
  double Tplus;
  double Tminus;
  double Rplus;
  double Rminus;

  void Reset (void);
  void Print (ostream & stream) const;

  FKR();
  ~FKR();
};

}        // genie namespace

#endif   // _FKR_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalSPPXSec

\brief    Computes the cross section for an exclusive 1pi reaction through
          resonance neutrinoproduction according to the Rein-Sehgal model.

          This algorithm produces in principle what you could also get from 
          the genie::RESXSec algorithm (RES cross section integrator) by 
          specifying the genie::ReinSehgalSPPPXSec as the differential 
          cross section model. However, ReinSehgalSPPXSec offers a faster 
          alternative. Before computing any SPP cross section this algorithm 
          computes and caches splines for resonance neutrino-production cross 
          sections. This improves the speed since it is reducing the number of 
          calculations (the generic algorithm needs to recompute resonance 
          production xsec for every exclusive channel).

          In this algorithm we follow the non-coherent approach: we sum
          the weighted resonance production cross sections rather than the
          resonance production amplitudes.

          Is a concrete implementation of the XSecAlgorithmI interface.\n

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 09, 2006

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_SPP_XSEC_H_
#define _REIN_SEHGAL_SPP_XSEC_H_

#include "Physics/Resonance/XSection/ReinSehgalRESXSecWithCache.h"

namespace genie {

class ReinSehgalSPPXSec : public ReinSehgalRESXSecWithCache {

public:
  ReinSehgalSPPXSec();
  ReinSehgalSPPXSec(string param_set);
  virtual ~ReinSehgalSPPXSec();

  // XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);
};

}       // genie namespace
#endif  // _REIN_SEHGAL_SPP_XSEC_H_

//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelNCn

\brief    The Helicity Amplitudes, for all baryon resonances, for NC neutrino
          interactions on free neutrons, as computed in the Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_NC_N_H_
#define _HELICITY_AMPL_MODEL_NC_N_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelNCn : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelNCn();
  RSHelicityAmplModelNCn(string config);
  virtual ~RSHelicityAmplModelNCn();

  // RSHelicityAmplModelI interface implementation
  const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void LoadConfig(void);

  mutable RSHelicityAmpl fAmpl;
  double fSin28w;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_NC_N_H_
//____________________________________________________________________________
/*!

\class    genie::RSHelicityAmplModelEMn

\brief    The Helicity Amplitudes, for all baryon resonances, for Electro-
          Magnetic (EM) interactions on free neutrons, as computed in the
          Rein-Sehgal's paper.

          Concrete implementation of the RSHelicityAmplModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 30, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HELICITY_AMPL_MODEL_EM_N_H_
#define _HELICITY_AMPL_MODEL_EM_N_H_

#include "Physics/Resonance/XSection/RSHelicityAmplModelI.h"

namespace genie {

class RSHelicityAmplModelEMn : public RSHelicityAmplModelI {

public:
  RSHelicityAmplModelEMn();
  RSHelicityAmplModelEMn(string config);
  virtual ~RSHelicityAmplModelEMn();

  // RSHelicityAmplModelI interface implementation
  const RSHelicityAmpl & Compute(Resonance_t res, const FKR & fkr) const;

private:
  mutable RSHelicityAmpl fAmpl;
};

}        // genie namespace
#endif   // _HELICITY_AMPL_MODEL_EM_N_H_
//____________________________________________________________________________
/*!

\class    genie::ReinSehgalRESXSecWithCache

\brief    An ABC that caches resonance neutrinoproduction cross sections on free 
          nucleons according to the Rein-Sehgal model. This significantly speeds 
          the cross section calculation for multiple nuclear targets (eg at the
          spline construction phase)

\ref      D.Rein and L.M.Sehgal, Neutrino Excitation of Baryon Resonances
          and Single Pion Production, Ann.Phys.133, 79 (1981)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  March 09, 2006

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _REIN_SEHGAL_RES_XSEC_WITH_CACHE_H_
#define _REIN_SEHGAL_RES_XSEC_WITH_CACHE_H_

#include "Framework/ParticleData/BaryonResList.h"
#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/Utils/Range1.h"
#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class ReinSehgalRESXSecWithCache : public XSecIntegratorI {

protected:
  ReinSehgalRESXSecWithCache();
  ReinSehgalRESXSecWithCache(string name);
  ReinSehgalRESXSecWithCache(string name, string config);
  virtual ~ReinSehgalRESXSecWithCache();

  // Don't implement the XSecIntegratorI interface - leave it for the concrete
  // subclasses. Just define utility methods and data
  void   CacheResExcitationXSec (const Interaction * interaction) const;
  string CacheBranchName(Resonance_t r, InteractionType_t it, int nu, int nuc) const;

  bool   fUsingDisResJoin;
  double fWcut;
  double fEMax;

  mutable const XSecAlgorithmI * fSingleResXSecModel;
  BaryonResList fResList;
};

}       // genie namespace
#endif  // _REIN_SEHGAL_RES_XSEC_WITH_CACHE_H_


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::BSKLNBaseRESPXSec2014", payloadCode, "@",
"genie::BergerSehgalRESPXSec2014", payloadCode, "@",
"genie::KuzminLyubushkinNaumovRESPXSec2014", payloadCode, "@",
"genie::P33PaschosLalakulichPXSec", payloadCode, "@",
"genie::RESXSec", payloadCode, "@",
"genie::RSHelicityAmpl", payloadCode, "@",
"genie::RSHelicityAmplModelCC", payloadCode, "@",
"genie::RSHelicityAmplModelEMn", payloadCode, "@",
"genie::RSHelicityAmplModelEMp", payloadCode, "@",
"genie::RSHelicityAmplModelI", payloadCode, "@",
"genie::RSHelicityAmplModelNCn", payloadCode, "@",
"genie::RSHelicityAmplModelNCp", payloadCode, "@",
"genie::ReinSehgalRESPXSec", payloadCode, "@",
"genie::ReinSehgalRESXSec", payloadCode, "@",
"genie::ReinSehgalRESXSecFast", payloadCode, "@",
"genie::ReinSehgalRESXSecWithCache", payloadCode, "@",
"genie::ReinSehgalRESXSecWithCacheFast", payloadCode, "@",
"genie::ReinSehgalSPPPXSec", payloadCode, "@",
"genie::ReinSehgalSPPXSec", payloadCode, "@",
"genie::utils::gsl::d2XSecRESFast_dWQ2_E", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhResXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhResXS_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhResXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhResXS() {
  TriggerDictionaryInitialization_libGPhResXS_Impl();
}
