// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhCohEG

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
#include "COHHadronicSystemGenerator.h"
#include "COHKinematicsGenerator.h"
#include "COHElHadronicSystemGenerator.h"
#include "COHElKinematicsGenerator.h"
#include "COHPrimaryLeptonGenerator.h"
#include "COHInteractionListGenerator.h"

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
   static TClass *geniecLcLCOHHadronicSystemGenerator_Dictionary();
   static void geniecLcLCOHHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHHadronicSystemGenerator(void *p = 0);
   static void *newArray_geniecLcLCOHHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLCOHHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLCOHHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHHadronicSystemGenerator*)
   {
      ::genie::COHHadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHHadronicSystemGenerator", "", 34,
                  typeid(::genie::COHHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLCOHHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLCOHHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::COHHadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::COHHadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::COHHadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLCOHHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHKinematicsGenerator_Dictionary();
   static void geniecLcLCOHKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHKinematicsGenerator(void *p = 0);
   static void *newArray_geniecLcLCOHKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLCOHKinematicsGenerator(void *p);
   static void destruct_geniecLcLCOHKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHKinematicsGenerator*)
   {
      ::genie::COHKinematicsGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHKinematicsGenerator", "", 86,
                  typeid(::genie::COHKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLCOHKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLCOHKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::COHKinematicsGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::COHKinematicsGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::COHKinematicsGenerator*)0x0)->GetClass();
      geniecLcLCOHKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHElHadronicSystemGenerator_Dictionary();
   static void geniecLcLCOHElHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHElHadronicSystemGenerator(void *p = 0);
   static void *newArray_geniecLcLCOHElHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHElHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLCOHElHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLCOHElHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHElHadronicSystemGenerator*)
   {
      ::genie::COHElHadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHElHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHElHadronicSystemGenerator", "", 168,
                  typeid(::genie::COHElHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHElHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHElHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLCOHElHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHElHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLCOHElHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHElHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHElHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHElHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::COHElHadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::COHElHadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHElHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::COHElHadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLCOHElHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHElHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHElKinematicsGenerator_Dictionary();
   static void geniecLcLCOHElKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHElKinematicsGenerator(void *p = 0);
   static void *newArray_geniecLcLCOHElKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHElKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLCOHElKinematicsGenerator(void *p);
   static void destruct_geniecLcLCOHElKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHElKinematicsGenerator*)
   {
      ::genie::COHElKinematicsGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHElKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHElKinematicsGenerator", "", 211,
                  typeid(::genie::COHElKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHElKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHElKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLCOHElKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHElKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLCOHElKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHElKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHElKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHElKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::COHElKinematicsGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::COHElKinematicsGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHElKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::COHElKinematicsGenerator*)0x0)->GetClass();
      geniecLcLCOHElKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHElKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLCOHPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHPrimaryLeptonGenerator(void *p = 0);
   static void *newArray_geniecLcLCOHPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLCOHPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLCOHPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHPrimaryLeptonGenerator*)
   {
      ::genie::COHPrimaryLeptonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHPrimaryLeptonGenerator", "", 266,
                  typeid(::genie::COHPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLCOHPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLCOHPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::COHPrimaryLeptonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::COHPrimaryLeptonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::COHPrimaryLeptonGenerator*)0x0)->GetClass();
      geniecLcLCOHPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCOHInteractionListGenerator_Dictionary();
   static void geniecLcLCOHInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLCOHInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLCOHInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLCOHInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLCOHInteractionListGenerator(void *p);
   static void destruct_geniecLcLCOHInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::COHInteractionListGenerator*)
   {
      ::genie::COHInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::COHInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::COHInteractionListGenerator", "", 315,
                  typeid(::genie::COHInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCOHInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::COHInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLCOHInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLCOHInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLCOHInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLCOHInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLCOHInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::COHInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::COHInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::COHInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCOHInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::COHInteractionListGenerator*)0x0)->GetClass();
      geniecLcLCOHInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCOHInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHHadronicSystemGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHHadronicSystemGenerator : new ::genie::COHHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLCOHHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHHadronicSystemGenerator[nElements] : new ::genie::COHHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHHadronicSystemGenerator(void *p) {
      delete ((::genie::COHHadronicSystemGenerator*)p);
   }
   static void deleteArray_geniecLcLCOHHadronicSystemGenerator(void *p) {
      delete [] ((::genie::COHHadronicSystemGenerator*)p);
   }
   static void destruct_geniecLcLCOHHadronicSystemGenerator(void *p) {
      typedef ::genie::COHHadronicSystemGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHKinematicsGenerator : new ::genie::COHKinematicsGenerator;
   }
   static void *newArray_geniecLcLCOHKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHKinematicsGenerator[nElements] : new ::genie::COHKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHKinematicsGenerator(void *p) {
      delete ((::genie::COHKinematicsGenerator*)p);
   }
   static void deleteArray_geniecLcLCOHKinematicsGenerator(void *p) {
      delete [] ((::genie::COHKinematicsGenerator*)p);
   }
   static void destruct_geniecLcLCOHKinematicsGenerator(void *p) {
      typedef ::genie::COHKinematicsGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHElHadronicSystemGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHElHadronicSystemGenerator : new ::genie::COHElHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLCOHElHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHElHadronicSystemGenerator[nElements] : new ::genie::COHElHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHElHadronicSystemGenerator(void *p) {
      delete ((::genie::COHElHadronicSystemGenerator*)p);
   }
   static void deleteArray_geniecLcLCOHElHadronicSystemGenerator(void *p) {
      delete [] ((::genie::COHElHadronicSystemGenerator*)p);
   }
   static void destruct_geniecLcLCOHElHadronicSystemGenerator(void *p) {
      typedef ::genie::COHElHadronicSystemGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHElHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHElKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHElKinematicsGenerator : new ::genie::COHElKinematicsGenerator;
   }
   static void *newArray_geniecLcLCOHElKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHElKinematicsGenerator[nElements] : new ::genie::COHElKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHElKinematicsGenerator(void *p) {
      delete ((::genie::COHElKinematicsGenerator*)p);
   }
   static void deleteArray_geniecLcLCOHElKinematicsGenerator(void *p) {
      delete [] ((::genie::COHElKinematicsGenerator*)p);
   }
   static void destruct_geniecLcLCOHElKinematicsGenerator(void *p) {
      typedef ::genie::COHElKinematicsGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHElKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHPrimaryLeptonGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHPrimaryLeptonGenerator : new ::genie::COHPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLCOHPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHPrimaryLeptonGenerator[nElements] : new ::genie::COHPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHPrimaryLeptonGenerator(void *p) {
      delete ((::genie::COHPrimaryLeptonGenerator*)p);
   }
   static void deleteArray_geniecLcLCOHPrimaryLeptonGenerator(void *p) {
      delete [] ((::genie::COHPrimaryLeptonGenerator*)p);
   }
   static void destruct_geniecLcLCOHPrimaryLeptonGenerator(void *p) {
      typedef ::genie::COHPrimaryLeptonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHPrimaryLeptonGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCOHInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHInteractionListGenerator : new ::genie::COHInteractionListGenerator;
   }
   static void *newArray_geniecLcLCOHInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::COHInteractionListGenerator[nElements] : new ::genie::COHInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCOHInteractionListGenerator(void *p) {
      delete ((::genie::COHInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLCOHInteractionListGenerator(void *p) {
      delete [] ((::genie::COHInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLCOHInteractionListGenerator(void *p) {
      typedef ::genie::COHInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::COHInteractionListGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhCohEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Coherent/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Coherent/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Coherent/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Coherent/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhCohEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class COHHadronicSystemGenerator;}
namespace genie{class COHKinematicsGenerator;}
namespace genie{class COHElHadronicSystemGenerator;}
namespace genie{class COHElKinematicsGenerator;}
namespace genie{class COHPrimaryLeptonGenerator;}
namespace genie{class COHInteractionListGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhCohEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::COHHadronicSystemGenerator

\brief    Generates the f/s hadronic system in v COH pi production interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _COH_HADRONIC_SYSTEM_GENERATOR_H_
#define _COH_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

  class XclsTag;

  class COHHadronicSystemGenerator : public HadronicSystemGenerator {

  public :
    COHHadronicSystemGenerator();
    COHHadronicSystemGenerator(string config);
    ~COHHadronicSystemGenerator();

    // implement the EventRecordVisitorI interface
    void ProcessEventRecord(GHepRecord * event_rec) const;
    void CalculateHadronicSystem_ReinSehgal(GHepRecord * event_rec) const;
    void CalculateHadronicSystem_BergerSehgal(GHepRecord * event_rec) const;
    void CalculateHadronicSystem_BergerSehgalFM(GHepRecord * event_rec) const;
    void CalculateHadronicSystem_AlvarezRuso(GHepRecord * event_rec) const;

  private:
    int getPionPDGCodeFromXclTag(const XclsTag& xcls_tag) const;
  };

}      // genie namespace
#endif // _COH_HADRONIC_SYSTEM_GENERATOR_H_

//____________________________________________________________________________
/*!

\class    genie::COHKinematicsGenerator

\brief    Generates values for the kinematic variables describing coherent 
          neutrino-nucleus pion production events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _COH_KINEMATICS_GENERATOR_H_
#define _COH_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

class TF2;

namespace genie {

  class COHKinematicsGenerator : public KineGeneratorWithCache {

  public :
    COHKinematicsGenerator();
    COHKinematicsGenerator(string config);
    ~COHKinematicsGenerator();

    // implement the EventRecordVisitorI interface
    void ProcessEventRecord(GHepRecord * event_rec) const;

    // overload the Algorithm::Configure() methods to load private data
    // members from configuration options
    void Configure(const Registry & config);
    void Configure(string config);

    // methods to load sub-algorithms and config data from the Registry
    void LoadConfig (void);

    // different kinematics calculators for different models
    void   CalculateKin_ReinSehgal(GHepRecord * event_rec) const;
    void   CalculateKin_BergerSehgal(GHepRecord * event_rec) const;
    void   CalculateKin_BergerSehgalFM(GHepRecord * event_rec) const;
    void   CalculateKin_AlvarezRuso(GHepRecord * event_rec) const;
    void SetKinematics(const double E_l, const double theta_l, const double phi_l, 
                       const double theta_pi, const double phi_pi, 
                       const     Interaction* interaction, Kinematics* kinematics) const;
    bool CheckKinematics(const double E_l, const double theta_l, 
                         const double phi_l, const double theta_pi, 
                         const double phi_pi, const Interaction* interaction) const;

    // overload KineGeneratorWithCache method to compute max xsec
    double ComputeMaxXSec (const Interaction * in) const;
    double MaxXSec_ReinSehgal (const Interaction * in) const;
    double MaxXSec_BergerSehgal (const Interaction * in) const;
    double MaxXSec_BergerSehgalFM (const Interaction * in) const;
    double MaxXSec_AlvarezRuso (const Interaction * in) const;

    // overload KineGeneratorWithCache method to get energy
    double Energy         (const Interaction * in) const;

    // TODO: should fEnvelope and fRo be public? They look like they should be private
    mutable TF2 * fEnvelope; ///< 2-D envelope used for importance sampling
    double fRo;              ///< nuclear scale parameter

  private:
    double pionMass(const Interaction* in) const;
    void   throwOnTooManyIterations(unsigned int iters, GHepRecord* evrec) const;

    double fQ2Min;  ///< lower bound of integration for Q^2 in Berger-Sehgal Model
    double fQ2Max;  ///< upper bound of integration for Q^2 in Berger-Sehgal Model
    double fTMax;   ///< upper bound for t = (q - p_pi)^2
  };

}      // genie namespace
#endif // _COH_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::COHPiHadronicSystemGenerator

\brief    Generates the f/s hadronic system in v COH elastic interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 29, 2007

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _COHEL_HADRONIC_SYSTEM_GENERATOR_H_
#define _COHEL_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class COHElHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  COHElHadronicSystemGenerator();
  COHElHadronicSystemGenerator(string config);
 ~COHElHadronicSystemGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _COHEL_HADRONIC_SYSTEM_GENERATOR_H_

//____________________________________________________________________________
/*!

\class    genie::COHElKinematicsGenerator

\brief    Generates values for the kinematic variables describing coherent 
          neutrino-nucleus elastic scattering events.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 22, 2007

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _COHEL_KINEMATICS_GENERATOR_H_
#define _COHEL_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"
#include "Framework/Utils/Range1.h"

namespace genie {

class COHElKinematicsGenerator : public KineGeneratorWithCache {

public :
  COHElKinematicsGenerator();
  COHElKinematicsGenerator(string config);
 ~COHElKinematicsGenerator();

  //-- implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //-- members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

public:
  //-- methods to load sub-algorithms and config data from the Registry
  void LoadConfig (void);

  //-- overload KineGeneratorWithCache method to compute max xsec
  double ComputeMaxXSec (const Interaction * in) const;

  //-- overload KineGeneratorWithCache method to get energy
  double Energy         (const Interaction * in) const;
};

}      // genie namespace
#endif // _COHEL_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::COHPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in v COH NC interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  September 26, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _COH_PRIMARY_LEPTON_GENERATOR_H_
#define _COH_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

  class COHPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

  public :

    COHPrimaryLeptonGenerator();
    COHPrimaryLeptonGenerator(string config);
    ~COHPrimaryLeptonGenerator();

    //-- implement the EventRecordVisitorI interface

    void ProcessEventRecord(GHepRecord * event_rec) const;

  private :
    
    void CalculatePrimaryLepton_AlvarezRuso(GHepRecord * event_rec) const;

  };

}      // genie namespace

#endif // _COH_PRIMARY_LEPTON_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::COHInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the Interaction (= event summary) objects that
          can be generated by the COH EventGenerator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 19, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _COH_INTERACTION_LIST_GENERATOR_H_
#define _COH_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class COHInteractionListGenerator : public InteractionListGeneratorI {

public :

  COHInteractionListGenerator();
  COHInteractionListGenerator(string config);
  ~COHInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool fIsCC;
  bool fIsNC;
};

}      // genie namespace

#endif // _COH_INTERACTION_LIST_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::COHElHadronicSystemGenerator", payloadCode, "@",
"genie::COHElKinematicsGenerator", payloadCode, "@",
"genie::COHHadronicSystemGenerator", payloadCode, "@",
"genie::COHInteractionListGenerator", payloadCode, "@",
"genie::COHKinematicsGenerator", payloadCode, "@",
"genie::COHPrimaryLeptonGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhCohEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhCohEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhCohEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhCohEG() {
  TriggerDictionaryInitialization_libGPhCohEG_Impl();
}
