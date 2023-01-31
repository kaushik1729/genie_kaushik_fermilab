// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhMEL

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
#include "BetheBlochModel.h"
#include "MuELossI.h"
#include "BezrukovBugaevModel.h"
#include "PetrukhinShestakovModel.h"
#include "KokoulinPetrukhinModel.h"

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
   namespace mueloss {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLmueloss_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::mueloss", 0 /*version*/, "MuELMaterial.h", 27,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLmueloss_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLmueloss_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLMuELossI_Dictionary();
   static void geniecLcLmuelosscLcLMuELossI_TClassManip(TClass*);
   static void delete_geniecLcLmuelosscLcLMuELossI(void *p);
   static void deleteArray_geniecLcLmuelosscLcLMuELossI(void *p);
   static void destruct_geniecLcLmuelosscLcLMuELossI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::MuELossI*)
   {
      ::genie::mueloss::MuELossI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::MuELossI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::MuELossI", "MuELossI.h", 31,
                  typeid(::genie::mueloss::MuELossI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLMuELossI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::MuELossI) );
      instance.SetDelete(&delete_geniecLcLmuelosscLcLMuELossI);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLMuELossI);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLMuELossI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::MuELossI*)
   {
      return GenerateInitInstanceLocal((::genie::mueloss::MuELossI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::mueloss::MuELossI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLMuELossI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::mueloss::MuELossI*)0x0)->GetClass();
      geniecLcLmuelosscLcLMuELossI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLMuELossI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLBetheBlochModel_Dictionary();
   static void geniecLcLmuelosscLcLBetheBlochModel_TClassManip(TClass*);
   static void *new_geniecLcLmuelosscLcLBetheBlochModel(void *p = 0);
   static void *newArray_geniecLcLmuelosscLcLBetheBlochModel(Long_t size, void *p);
   static void delete_geniecLcLmuelosscLcLBetheBlochModel(void *p);
   static void deleteArray_geniecLcLmuelosscLcLBetheBlochModel(void *p);
   static void destruct_geniecLcLmuelosscLcLBetheBlochModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::BetheBlochModel*)
   {
      ::genie::mueloss::BetheBlochModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::BetheBlochModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::BetheBlochModel", "", 36,
                  typeid(::genie::mueloss::BetheBlochModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLBetheBlochModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::BetheBlochModel) );
      instance.SetNew(&new_geniecLcLmuelosscLcLBetheBlochModel);
      instance.SetNewArray(&newArray_geniecLcLmuelosscLcLBetheBlochModel);
      instance.SetDelete(&delete_geniecLcLmuelosscLcLBetheBlochModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLBetheBlochModel);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLBetheBlochModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::BetheBlochModel*)
   {
      return GenerateInitInstanceLocal((::genie::mueloss::BetheBlochModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::mueloss::BetheBlochModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLBetheBlochModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::mueloss::BetheBlochModel*)0x0)->GetClass();
      geniecLcLmuelosscLcLBetheBlochModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLBetheBlochModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLBezrukovBugaevModel_Dictionary();
   static void geniecLcLmuelosscLcLBezrukovBugaevModel_TClassManip(TClass*);
   static void *new_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p = 0);
   static void *newArray_geniecLcLmuelosscLcLBezrukovBugaevModel(Long_t size, void *p);
   static void delete_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p);
   static void deleteArray_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p);
   static void destruct_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::BezrukovBugaevModel*)
   {
      ::genie::mueloss::BezrukovBugaevModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::BezrukovBugaevModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::BezrukovBugaevModel", "", 138,
                  typeid(::genie::mueloss::BezrukovBugaevModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLBezrukovBugaevModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::BezrukovBugaevModel) );
      instance.SetNew(&new_geniecLcLmuelosscLcLBezrukovBugaevModel);
      instance.SetNewArray(&newArray_geniecLcLmuelosscLcLBezrukovBugaevModel);
      instance.SetDelete(&delete_geniecLcLmuelosscLcLBezrukovBugaevModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLBezrukovBugaevModel);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLBezrukovBugaevModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::BezrukovBugaevModel*)
   {
      return GenerateInitInstanceLocal((::genie::mueloss::BezrukovBugaevModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::mueloss::BezrukovBugaevModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLBezrukovBugaevModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::mueloss::BezrukovBugaevModel*)0x0)->GetClass();
      geniecLcLmuelosscLcLBezrukovBugaevModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLBezrukovBugaevModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLPetrukhinShestakovModel_Dictionary();
   static void geniecLcLmuelosscLcLPetrukhinShestakovModel_TClassManip(TClass*);
   static void *new_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p = 0);
   static void *newArray_geniecLcLmuelosscLcLPetrukhinShestakovModel(Long_t size, void *p);
   static void delete_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p);
   static void deleteArray_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p);
   static void destruct_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::PetrukhinShestakovModel*)
   {
      ::genie::mueloss::PetrukhinShestakovModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::PetrukhinShestakovModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::PetrukhinShestakovModel", "", 238,
                  typeid(::genie::mueloss::PetrukhinShestakovModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLPetrukhinShestakovModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::PetrukhinShestakovModel) );
      instance.SetNew(&new_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      instance.SetNewArray(&newArray_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      instance.SetDelete(&delete_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLPetrukhinShestakovModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::PetrukhinShestakovModel*)
   {
      return GenerateInitInstanceLocal((::genie::mueloss::PetrukhinShestakovModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::mueloss::PetrukhinShestakovModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLPetrukhinShestakovModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::mueloss::PetrukhinShestakovModel*)0x0)->GetClass();
      geniecLcLmuelosscLcLPetrukhinShestakovModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLPetrukhinShestakovModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLmuelosscLcLKokoulinPetrukhinModel_Dictionary();
   static void geniecLcLmuelosscLcLKokoulinPetrukhinModel_TClassManip(TClass*);
   static void *new_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p = 0);
   static void *newArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel(Long_t size, void *p);
   static void delete_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p);
   static void deleteArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p);
   static void destruct_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::mueloss::KokoulinPetrukhinModel*)
   {
      ::genie::mueloss::KokoulinPetrukhinModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::mueloss::KokoulinPetrukhinModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::mueloss::KokoulinPetrukhinModel", "", 337,
                  typeid(::genie::mueloss::KokoulinPetrukhinModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLmuelosscLcLKokoulinPetrukhinModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::mueloss::KokoulinPetrukhinModel) );
      instance.SetNew(&new_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      instance.SetNewArray(&newArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      instance.SetDelete(&delete_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      instance.SetDestructor(&destruct_geniecLcLmuelosscLcLKokoulinPetrukhinModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::mueloss::KokoulinPetrukhinModel*)
   {
      return GenerateInitInstanceLocal((::genie::mueloss::KokoulinPetrukhinModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::mueloss::KokoulinPetrukhinModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLmuelosscLcLKokoulinPetrukhinModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::mueloss::KokoulinPetrukhinModel*)0x0)->GetClass();
      geniecLcLmuelosscLcLKokoulinPetrukhinModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLmuelosscLcLKokoulinPetrukhinModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLMuELossI(void *p) {
      delete ((::genie::mueloss::MuELossI*)p);
   }
   static void deleteArray_geniecLcLmuelosscLcLMuELossI(void *p) {
      delete [] ((::genie::mueloss::MuELossI*)p);
   }
   static void destruct_geniecLcLmuelosscLcLMuELossI(void *p) {
      typedef ::genie::mueloss::MuELossI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::MuELossI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLmuelosscLcLBetheBlochModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::mueloss::BetheBlochModel : new ::genie::mueloss::BetheBlochModel;
   }
   static void *newArray_geniecLcLmuelosscLcLBetheBlochModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::mueloss::BetheBlochModel[nElements] : new ::genie::mueloss::BetheBlochModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLBetheBlochModel(void *p) {
      delete ((::genie::mueloss::BetheBlochModel*)p);
   }
   static void deleteArray_geniecLcLmuelosscLcLBetheBlochModel(void *p) {
      delete [] ((::genie::mueloss::BetheBlochModel*)p);
   }
   static void destruct_geniecLcLmuelosscLcLBetheBlochModel(void *p) {
      typedef ::genie::mueloss::BetheBlochModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::BetheBlochModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::mueloss::BezrukovBugaevModel : new ::genie::mueloss::BezrukovBugaevModel;
   }
   static void *newArray_geniecLcLmuelosscLcLBezrukovBugaevModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::mueloss::BezrukovBugaevModel[nElements] : new ::genie::mueloss::BezrukovBugaevModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p) {
      delete ((::genie::mueloss::BezrukovBugaevModel*)p);
   }
   static void deleteArray_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p) {
      delete [] ((::genie::mueloss::BezrukovBugaevModel*)p);
   }
   static void destruct_geniecLcLmuelosscLcLBezrukovBugaevModel(void *p) {
      typedef ::genie::mueloss::BezrukovBugaevModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::BezrukovBugaevModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::mueloss::PetrukhinShestakovModel : new ::genie::mueloss::PetrukhinShestakovModel;
   }
   static void *newArray_geniecLcLmuelosscLcLPetrukhinShestakovModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::mueloss::PetrukhinShestakovModel[nElements] : new ::genie::mueloss::PetrukhinShestakovModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p) {
      delete ((::genie::mueloss::PetrukhinShestakovModel*)p);
   }
   static void deleteArray_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p) {
      delete [] ((::genie::mueloss::PetrukhinShestakovModel*)p);
   }
   static void destruct_geniecLcLmuelosscLcLPetrukhinShestakovModel(void *p) {
      typedef ::genie::mueloss::PetrukhinShestakovModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::PetrukhinShestakovModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::mueloss::KokoulinPetrukhinModel : new ::genie::mueloss::KokoulinPetrukhinModel;
   }
   static void *newArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::mueloss::KokoulinPetrukhinModel[nElements] : new ::genie::mueloss::KokoulinPetrukhinModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p) {
      delete ((::genie::mueloss::KokoulinPetrukhinModel*)p);
   }
   static void deleteArray_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p) {
      delete [] ((::genie::mueloss::KokoulinPetrukhinModel*)p);
   }
   static void destruct_geniecLcLmuelosscLcLKokoulinPetrukhinModel(void *p) {
      typedef ::genie::mueloss::KokoulinPetrukhinModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::mueloss::KokoulinPetrukhinModel

namespace {
  void TriggerDictionaryInitialization_libGPhMEL_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/MuonEnergyLoss",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/MuonEnergyLoss",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/MuonEnergyLoss",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/MuonEnergyLoss/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhMEL dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{namespace mueloss{class __attribute__((annotate("$clingAutoload$Physics/MuonEnergyLoss/MuELossI.h")))  MuELossI;}}
namespace genie{namespace mueloss{class BetheBlochModel;}}
namespace genie{namespace mueloss{class BezrukovBugaevModel;}}
namespace genie{namespace mueloss{class PetrukhinShestakovModel;}}
namespace genie{namespace mueloss{class KokoulinPetrukhinModel;}}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhMEL dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::mueloss::BetheBlochModel

\brief    Bethe-Bloch model for muon energy loss due to Ionization
          Concrete implementation of the MuELossI interface.

\ref      W.Lohmann, R.Kopp and R.Voss,
          Energy Loss of Muons in the Energy Range 1-10000 GeV, CERN 85-03

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 10, 2003

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BETHE_BLOCH_MODEL_H_
#define _BETHE_BLOCH_MODEL_H_

#include "Physics/MuonEnergyLoss/MuELossI.h"

namespace genie   {
namespace mueloss {

class BetheBlochModel : public MuELossI
{
public:
  BetheBlochModel();
  BetheBlochModel(string config);
  virtual ~BetheBlochModel();

  //! implement the MuELossI interface
  double        dE_dx   (double E, MuELMaterial_t material) const;
  MuELProcess_t Process (void) const { return eMupIonization; }
};

}      // mueloss namespace
}      // genie   namespace
#endif // _BETHE_BLOCH_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::MuELossI

\brief    Cross Section Calculation Interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 10, 2003

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MUELOSS_I_H_
#define _MUELOSS_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Physics/MuonEnergyLoss/MuELMaterial.h"
#include "Physics/MuonEnergyLoss/MuELProcess.h"

namespace genie   {
namespace mueloss {

const double kMaxMuE = 10000; // 10 TeV

class MuELossI : public Algorithm {

public:
  virtual ~MuELossI();

  virtual double        dE_dx   (double E, MuELMaterial_t m) const = 0;
  virtual MuELProcess_t Process (void) const = 0;

protected:
  MuELossI();
  MuELossI(string name);
  MuELossI(string name, string config);
};

}       // mueloss namespace
}       // genie   namespace

#endif  // _MUELOSS_I_H_
//____________________________________________________________________________
/*!

\class    genie::mueloss::BezrukovBugaevModel

\brief    Bezrukov-Bugaev model for the energy loss of high energy muons due
          to photonuclear interactions.
          Concrete implementation of the MuELossI interface.

\ref      W.Lohmann, R.Kopp and R.Voss,
          Energy Loss of Muons in the Energy Range 1-10000 GeV, CERN 85-03

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 10, 2003

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BEZRUKOV_BUGAEV_MODEL_H_
#define _BEZRUKOV_BUGAEV_MODEL_H_

#include <Math/IFunction.h>

#include "Physics/MuonEnergyLoss/MuELossI.h"
///////#include "Numerical/GSFunc.h"

namespace genie {

/////class IntegratorI;

namespace mueloss {

class BezrukovBugaevModel : public MuELossI
{
public:
  BezrukovBugaevModel();
  BezrukovBugaevModel(string config);
  virtual ~BezrukovBugaevModel();

  //! Implement the MuELossI interface
  double       dE_dx    (double E, MuELMaterial_t material) const;
  MuELProcess_t Process (void) const { return eMupNuclearInteraction; }

//  //! Overload the Algorithm::Configure() methods to load private data
//  //! members from configuration options
//  void Configure(const Registry & config);
//  void Configure(string config);

private:
//  void LoadConfig (void);
/////  const IntegratorI * fIntegrator;
};

} // mueloss namespace
} // genie   namespace

//____________________________________________________________________________
/*!
\class    genie::mueloss::BezrukovBugaevIntegrand

\brief    Auxiliary scalar function for the internal integration in Bezrukov
          Bugaev model

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 10, 2003
*/
//____________________________________________________________________________

namespace genie {
 namespace mueloss {
   namespace gsl {

    class BezrukovBugaevIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
       BezrukovBugaevIntegrand(double E, double A);
      ~BezrukovBugaevIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double xin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       double fE;
       double fA;
     };

  }  // gsl namespace
 }  // mueloss namespace
}  // genie   namespace

#endif // _BEZRUKOV_BUGAEV_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::mueloss::PetrukhinShestakovModel

\brief    Bethe-Heitler, Petrukhin-Shestakov model for the energy loss of muons
          due to bremsstrahlung.
          Concrete implementation of the MuELossI interface.

\ref      W.Lohmann, R.Kopp and R.Voss,
          Energy Loss of Muons in the Energy Range 1-10000 GeV, CERN 85-03

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 10, 2003

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE

*/
//____________________________________________________________________________

#ifndef _PETRUKHIN_SHESTAKOV_MODEL_H_
#define _PETRUKHIN_SHESTAKOV_MODEL_H_

#include <Math/IFunction.h>

#include "Physics/MuonEnergyLoss/MuELossI.h"
///#include "Numerical/GSFunc.h"

namespace genie {

////class IntegratorI;

namespace mueloss {

class PetrukhinShestakovModel : public MuELossI
{
public:
  PetrukhinShestakovModel();
  PetrukhinShestakovModel(string config);
  virtual ~PetrukhinShestakovModel();

  //! Implement the MuELossI interface
  double        dE_dx   (double E, MuELMaterial_t material) const;
  MuELProcess_t Process (void) const { return eMupBremsstrahlung; }

//  //! Overload the Algorithm::Configure() methods to load private data
//  //! members from configuration options
//  void Configure(const Registry & config);
//  void Configure(string config);
//
//private:
//  void LoadConfig (void);
//  //const IntegratorI * fIntegrator;
};

} // mueloss namespace
} // genie   namespace

//____________________________________________________________________________
/*!
\class    genie::mueloss::PetrukhinShestakovIntegrand

\brief    Auxiliary scalar function for the internal integration in Petrukhin
          Shestakov model

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 10, 2003
*/
//____________________________________________________________________________

namespace genie {
 namespace mueloss {
   namespace gsl {
          
    class PetrukhinShestakovIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
       PetrukhinShestakovIntegrand(double E, double Z);
      ~PetrukhinShestakovIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double xin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       double fE;
       double fZ;
     };

  }  // gsl namespace  
 }  // mueloss namespace
}  // genie   namespace

#endif // _PETRUKHIN_SHESTAKOV_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::mueloss::KokoulinPetrukhinModel

\brief    Kokoulin-Petrukhin model for the energy loss of muons due to direct
          e+e- pair production.
          Concrete implementation of the MuELossI interface.

\ref      W.Lohmann, R.Kopp and R.Voss,
          Energy Loss of Muons in the Energy Range 1-10000 GeV, CERN 85-03

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 10, 2003

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _KOKOULIN_PETRUKHIN_MODEL_H_
#define _KOKOULIN_PETRUKHIN_MODEL_H_

#include <Math/IFunction.h>

#include "Physics/MuonEnergyLoss/MuELossI.h"
//#include "Numerical/GSFunc.h"

namespace genie {

//class IntegratorI;

namespace mueloss {

class KokoulinPetrukhinModel : public MuELossI
{
public:

  KokoulinPetrukhinModel();
  KokoulinPetrukhinModel(string config);
  virtual ~KokoulinPetrukhinModel();

  //! Implement the MuELossI interface
  double        dE_dx   (double E, MuELMaterial_t material) const;
  MuELProcess_t Process (void) const { return eMupPairProduction; }

//  //! overload the Algorithm::Configure() methods to load private data
//  //! members from configuration options
//  void Configure(const Registry & config);
//  void Configure(string config);
//
//private:
//  void LoadConfig (void);
// // const IntegratorI * fIntegrator;
};

} // mueloss namespace
} // genie   namespace

//____________________________________________________________________________
/*!
\class    genie::mueloss::KokoulinPetrukhinIntegrand

\brief    Auxiliary scalar function for the internal integration in Kokulin
          Petrukhin model

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 10, 2003
*/
//____________________________________________________________________________

namespace genie {
 namespace mueloss {
   namespace gsl {

    class KokoulinPetrukhinIntegrand : public ROOT::Math::IBaseFunctionMultiDim
    {
     public:
       KokoulinPetrukhinIntegrand(double E, double Z);
      ~KokoulinPetrukhinIntegrand();
       // ROOT::Math::IBaseFunctionMultiDim interface
       unsigned int                        NDim   (void)               const;
       double                              DoEval (const double * xin) const;
       ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
     private:
       double fE;
       double fZ;
     };

  }  // gsl namespace  
 }  // mueloss namespace
}  // genie   namespace

#endif  // _KOKOULIN_PETRUKHIN_MODEL_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::mueloss::BetheBlochModel", payloadCode, "@",
"genie::mueloss::BezrukovBugaevModel", payloadCode, "@",
"genie::mueloss::KokoulinPetrukhinModel", payloadCode, "@",
"genie::mueloss::MuELossI", payloadCode, "@",
"genie::mueloss::PetrukhinShestakovModel", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhMEL",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhMEL_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhMEL_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhMEL() {
  TriggerDictionaryInitialization_libGPhMEL_Impl();
}
