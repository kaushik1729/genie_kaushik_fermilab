// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhQELEG

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
#include "QELKinematicsGenerator.h"
#include "QELHadronicSystemGenerator.h"
#include "QELEventGeneratorSM.h"
#include "QELEventGenerator.h"
#include "QELInteractionListGenerator.h"
#include "QELPrimaryLeptonGenerator.h"

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
   static TClass *geniecLcLQELKinematicsGenerator_Dictionary();
   static void geniecLcLQELKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLQELKinematicsGenerator(void *p = 0);
   static void *newArray_geniecLcLQELKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLQELKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLQELKinematicsGenerator(void *p);
   static void destruct_geniecLcLQELKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELKinematicsGenerator*)
   {
      ::genie::QELKinematicsGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELKinematicsGenerator", "", 34,
                  typeid(::genie::QELKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLQELKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLQELKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLQELKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLQELKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::QELKinematicsGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELKinematicsGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELKinematicsGenerator*)0x0)->GetClass();
      geniecLcLQELKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQELHadronicSystemGenerator_Dictionary();
   static void geniecLcLQELHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLQELHadronicSystemGenerator(void *p = 0);
   static void *newArray_geniecLcLQELHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLQELHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLQELHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLQELHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELHadronicSystemGenerator*)
   {
      ::genie::QELHadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELHadronicSystemGenerator", "", 86,
                  typeid(::genie::QELHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLQELHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLQELHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLQELHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLQELHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::QELHadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELHadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELHadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLQELHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQELEventGeneratorSM_Dictionary();
   static void geniecLcLQELEventGeneratorSM_TClassManip(TClass*);
   static void *new_geniecLcLQELEventGeneratorSM(void *p = 0);
   static void *newArray_geniecLcLQELEventGeneratorSM(Long_t size, void *p);
   static void delete_geniecLcLQELEventGeneratorSM(void *p);
   static void deleteArray_geniecLcLQELEventGeneratorSM(void *p);
   static void destruct_geniecLcLQELEventGeneratorSM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELEventGeneratorSM*)
   {
      ::genie::QELEventGeneratorSM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELEventGeneratorSM));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELEventGeneratorSM", "", 146,
                  typeid(::genie::QELEventGeneratorSM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELEventGeneratorSM_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELEventGeneratorSM) );
      instance.SetNew(&new_geniecLcLQELEventGeneratorSM);
      instance.SetNewArray(&newArray_geniecLcLQELEventGeneratorSM);
      instance.SetDelete(&delete_geniecLcLQELEventGeneratorSM);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELEventGeneratorSM);
      instance.SetDestructor(&destruct_geniecLcLQELEventGeneratorSM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELEventGeneratorSM*)
   {
      return GenerateInitInstanceLocal((::genie::QELEventGeneratorSM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELEventGeneratorSM*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELEventGeneratorSM_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELEventGeneratorSM*)0x0)->GetClass();
      geniecLcLQELEventGeneratorSM_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELEventGeneratorSM_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQELEventGenerator_Dictionary();
   static void geniecLcLQELEventGenerator_TClassManip(TClass*);
   static void *new_geniecLcLQELEventGenerator(void *p = 0);
   static void *newArray_geniecLcLQELEventGenerator(Long_t size, void *p);
   static void delete_geniecLcLQELEventGenerator(void *p);
   static void deleteArray_geniecLcLQELEventGenerator(void *p);
   static void destruct_geniecLcLQELEventGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELEventGenerator*)
   {
      ::genie::QELEventGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELEventGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELEventGenerator", "", 228,
                  typeid(::genie::QELEventGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELEventGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELEventGenerator) );
      instance.SetNew(&new_geniecLcLQELEventGenerator);
      instance.SetNewArray(&newArray_geniecLcLQELEventGenerator);
      instance.SetDelete(&delete_geniecLcLQELEventGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELEventGenerator);
      instance.SetDestructor(&destruct_geniecLcLQELEventGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELEventGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::QELEventGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELEventGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELEventGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELEventGenerator*)0x0)->GetClass();
      geniecLcLQELEventGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELEventGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQELInteractionListGenerator_Dictionary();
   static void geniecLcLQELInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLQELInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLQELInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLQELInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLQELInteractionListGenerator(void *p);
   static void destruct_geniecLcLQELInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELInteractionListGenerator*)
   {
      ::genie::QELInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELInteractionListGenerator", "", 297,
                  typeid(::genie::QELInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLQELInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLQELInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLQELInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLQELInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::QELInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELInteractionListGenerator*)0x0)->GetClass();
      geniecLcLQELInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQELPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLQELPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLQELPrimaryLeptonGenerator(void *p = 0);
   static void *newArray_geniecLcLQELPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLQELPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLQELPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLQELPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELPrimaryLeptonGenerator*)
   {
      ::genie::QELPrimaryLeptonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELPrimaryLeptonGenerator", "", 359,
                  typeid(::genie::QELPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLQELPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLQELPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLQELPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLQELPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::QELPrimaryLeptonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELPrimaryLeptonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELPrimaryLeptonGenerator*)0x0)->GetClass();
      geniecLcLQELPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQELKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELKinematicsGenerator : new ::genie::QELKinematicsGenerator;
   }
   static void *newArray_geniecLcLQELKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELKinematicsGenerator[nElements] : new ::genie::QELKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQELKinematicsGenerator(void *p) {
      delete ((::genie::QELKinematicsGenerator*)p);
   }
   static void deleteArray_geniecLcLQELKinematicsGenerator(void *p) {
      delete [] ((::genie::QELKinematicsGenerator*)p);
   }
   static void destruct_geniecLcLQELKinematicsGenerator(void *p) {
      typedef ::genie::QELKinematicsGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQELHadronicSystemGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELHadronicSystemGenerator : new ::genie::QELHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLQELHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELHadronicSystemGenerator[nElements] : new ::genie::QELHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQELHadronicSystemGenerator(void *p) {
      delete ((::genie::QELHadronicSystemGenerator*)p);
   }
   static void deleteArray_geniecLcLQELHadronicSystemGenerator(void *p) {
      delete [] ((::genie::QELHadronicSystemGenerator*)p);
   }
   static void destruct_geniecLcLQELHadronicSystemGenerator(void *p) {
      typedef ::genie::QELHadronicSystemGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQELEventGeneratorSM(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELEventGeneratorSM : new ::genie::QELEventGeneratorSM;
   }
   static void *newArray_geniecLcLQELEventGeneratorSM(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELEventGeneratorSM[nElements] : new ::genie::QELEventGeneratorSM[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQELEventGeneratorSM(void *p) {
      delete ((::genie::QELEventGeneratorSM*)p);
   }
   static void deleteArray_geniecLcLQELEventGeneratorSM(void *p) {
      delete [] ((::genie::QELEventGeneratorSM*)p);
   }
   static void destruct_geniecLcLQELEventGeneratorSM(void *p) {
      typedef ::genie::QELEventGeneratorSM current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELEventGeneratorSM

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQELEventGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELEventGenerator : new ::genie::QELEventGenerator;
   }
   static void *newArray_geniecLcLQELEventGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELEventGenerator[nElements] : new ::genie::QELEventGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQELEventGenerator(void *p) {
      delete ((::genie::QELEventGenerator*)p);
   }
   static void deleteArray_geniecLcLQELEventGenerator(void *p) {
      delete [] ((::genie::QELEventGenerator*)p);
   }
   static void destruct_geniecLcLQELEventGenerator(void *p) {
      typedef ::genie::QELEventGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELEventGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQELInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELInteractionListGenerator : new ::genie::QELInteractionListGenerator;
   }
   static void *newArray_geniecLcLQELInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELInteractionListGenerator[nElements] : new ::genie::QELInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQELInteractionListGenerator(void *p) {
      delete ((::genie::QELInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLQELInteractionListGenerator(void *p) {
      delete [] ((::genie::QELInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLQELInteractionListGenerator(void *p) {
      typedef ::genie::QELInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQELPrimaryLeptonGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELPrimaryLeptonGenerator : new ::genie::QELPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLQELPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELPrimaryLeptonGenerator[nElements] : new ::genie::QELPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQELPrimaryLeptonGenerator(void *p) {
      delete ((::genie::QELPrimaryLeptonGenerator*)p);
   }
   static void deleteArray_geniecLcLQELPrimaryLeptonGenerator(void *p) {
      delete [] ((::genie::QELPrimaryLeptonGenerator*)p);
   }
   static void destruct_geniecLcLQELPrimaryLeptonGenerator(void *p) {
      typedef ::genie::QELPrimaryLeptonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELPrimaryLeptonGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhQELEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/QuasiElastic/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/QuasiElastic/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/QuasiElastic/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/QuasiElastic/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhQELEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class QELKinematicsGenerator;}
namespace genie{class QELHadronicSystemGenerator;}
namespace genie{class QELEventGeneratorSM;}
namespace genie{class QELEventGenerator;}
namespace genie{class QELInteractionListGenerator;}
namespace genie{class QELPrimaryLeptonGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhQELEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::QELKinematicsGenerator

\brief    Generates values for the kinematic variables describing QEL neutrino
          interaction events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QEL_KINEMATICS_GENERATOR_H_
#define _QEL_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class QELKinematicsGenerator : public KineGeneratorWithCache {

public :
  QELKinematicsGenerator();
  QELKinematicsGenerator(string config);
 ~QELKinematicsGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void SpectralFuncExperimentalCode(GHepRecord * event_rec) const;

  void   LoadConfig     (void);
  double ComputeMaxXSec (const Interaction * in) const;
};

}      // genie namespace
#endif // _QEL_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::QELHadronicSystemGenerator

\brief    Generates the final state hadronic system in v QEL interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QEL_HADRONIC_SYSTEM_GENERATOR_H_
#define _QEL_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class QELHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  QELHadronicSystemGenerator();
  QELHadronicSystemGenerator(string config);
 ~QELHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event_rec) const;

private:
  void AddRecoilBaryon    (GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _QEL_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::QELEventGeneratorSM

\brief    Generates values for the kinematic variables describing QEL neutrino
          interaction events for Smith-Moniz model.
          Is a concrete implementation of the EventRecordVisitorI interface.

\ref      [1] R.A.Smith and E.J.Moniz, Nuclear Physics  B43, (1972) 605-622 \n
          [2] K.S. Kuzmin, V.V. Lyubushkin, V.A.Naumov Eur. Phys. J. C54, (2008) 517-538

\author   Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          adopted from  fortran code provided by
          Konstantin Kuzmin <kkuzmin@theor.jinr.ru>, \n
          Joint Institute for Nuclear Research,  Institute for Theoretical and Experimental Physics \n
          Vladimir Lyubushkin, \n
          Joint Institute for Nuclear Research \n
          Vadim Naumov <vnaumov@theor.jinr.ru>, \n
          Joint Institute for Nuclear Research  \n
          based on code of Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk> \n
          University of Liverpool & STFC Rutherford Appleton Lab


\created  May 05, 2017

\cpright  Copyright (c) 2003-2017, GENIE Neutrino MC Generator Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________


#ifndef _QEL_EVENT_GENERATORSM_H_
#define _QEL_EVENT_GENERATORSM_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Conventions/Controls.h"
#include "Physics/QuasiElastic/XSection/SmithMonizUtils.h"


namespace genie {

class QELEventGeneratorSM: public KineGeneratorWithCache {

public :
  QELEventGeneratorSM();
  QELEventGeneratorSM(string config);
 ~QELEventGeneratorSM();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  mutable SmithMonizUtils * sm_utils;

  void   LoadConfig     (void);
  double ComputeMaxXSec(const Interaction * in) const;
  void AddTargetNucleusRemnant (GHepRecord * evrec) const; ///< add a recoiled nucleus remnant

  double ComputeMaxXSec2 (const Interaction * in) const;
  double MaxXSec2        (GHepRecord * evrec) const;
  double FindMaxXSec2    (const Interaction * in) const;
  void   CacheMaxXSec2   (const Interaction * in, double xsec) const;
  CacheBranchFx * AccessCacheBranch2 (const Interaction * in) const;

  double ComputeMaxDiffv (const Interaction * in) const;
  double MaxDiffv        (GHepRecord * evrec) const;
  double FindMaxDiffv    (const Interaction * in) const;
  void   CacheMaxDiffv   (const Interaction * in, double xsec) const;
  CacheBranchFx * AccessCacheBranchDiffv (const Interaction * in) const;

  mutable KinePhaseSpace_t fkps;

  bool fGenerateNucleonInNucleus;           ///< generate struck nucleon in nucleus
  double fQ2Min;                            ///< Q2-threshold for seeking the second maximum

  double fSafetyFacor_nu;


}; // class definition

} // genie namespace

#endif // _QEL_EVENT_GENERATORSM_H_
//____________________________________________________________________________
/*!

\class    genie::QELEventGenerator

\brief    Generates values for the kinematic variables describing QEL neutrino
          interaction events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Andrew Furmanski

\created  August 04, 2014

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________


#ifndef _QEL_EVENT_GENERATOR_H_
#define _QEL_EVENT_GENERATOR_H_


#include "Physics/NuclearState/NuclearModelI.h"
#include "Physics/Common/KineGeneratorWithCache.h"
#include "Physics/QuasiElastic/XSection/QELUtils.h"
#include "Framework/Utils/Range1.h"
#include "Framework/Conventions/Controls.h"


namespace genie {

class QELEventGenerator: public KineGeneratorWithCache {

public :
  QELEventGenerator();
  QELEventGenerator(string config);
 ~QELEventGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  mutable double fEb; // Binding energy

  void   LoadConfig     (void);
  double ComputeMaxXSec(const Interaction* in) const;

  void AddTargetNucleusRemnant (GHepRecord * evrec) const; ///< add a recoiled nucleus remnant

  const NuclearModelI *  fNuclModel;   ///< nuclear model

  mutable double fMinAngleEM;

  /// Enum that indicates which approach should be used to handle the binding
  /// energy of the struck nucleon
  QELEvGen_BindingMode_t fHitNucleonBindingMode;

  /// The number of nucleons to sample from the nuclear model when choosing a maximum
  /// momentum to use in ComputeMaxXSec()
  int fMaxXSecNucleonThrows;

}; // class definition

} // genie namespace

#endif // _QEL_EVENT_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::QELInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the Interaction (= event summary) objects that
          can be generated by the QEL EventGenerator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 13, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QEL_INTERACTION_GENERATOR_H_
#define _QEL_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class QELInteractionListGenerator : public InteractionListGeneratorI {

public :
  QELInteractionListGenerator();
  QELInteractionListGenerator(string config);
 ~QELInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  InteractionList * CreateInteractionListCC        (const InitialState & init) const;
  InteractionList * CreateInteractionListNC        (const InitialState & init) const;
  InteractionList * CreateInteractionListEM        (const InitialState & init) const;
  InteractionList * CreateInteractionListCharmCC   (const InitialState & init) const;
  InteractionList * CreateInteractionListStrangeCC (const InitialState & init) const;

  bool fIsCC;
  bool fIsNC;
  bool fIsEM;
  bool fIsCharm;
  bool fIsStrange;
};

}      // genie namespace

#endif // _QEL_INTERACTION_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::QELPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in v QEL interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QEL_PRIMARY_LEPTON_GENERATOR_H_
#define _QEL_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class QELPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  QELPrimaryLeptonGenerator();
  QELPrimaryLeptonGenerator(string config);
 ~QELPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _QEL_PRIMARY_LEPTON_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::QELEventGenerator", payloadCode, "@",
"genie::QELEventGeneratorSM", payloadCode, "@",
"genie::QELHadronicSystemGenerator", payloadCode, "@",
"genie::QELInteractionListGenerator", payloadCode, "@",
"genie::QELKinematicsGenerator", payloadCode, "@",
"genie::QELPrimaryLeptonGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhQELEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhQELEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhQELEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhQELEG() {
  TriggerDictionaryInitialization_libGPhQELEG_Impl();
}
