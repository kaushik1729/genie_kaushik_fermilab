// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhQELXS

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
#include "NewQELXSec.h"
#include "TransverseEnhancementFFModel.h"
#include "LwlynSmithFFDeltaS.h"
#include "ELFormFactors.h"
#include "ZExpELFormFactorModel.h"
#include "DipoleELFormFactorsModel.h"
#include "LwlynSmithFF.h"
#include "ELFormFactorsModelI.h"
#include "LwlynSmithQELCCPXSec.h"
#include "DipoleAxialFormFactorModel.h"
#include "BBA05ELFormFactorsModel.h"
#include "QELXSec.h"
#include "SmithMonizQELCCXSec.h"
#include "SmithMonizQELCCPXSec.h"
#include "BBA07ELFormFactorsModel.h"
#include "NievesQELException.h"
#include "NievesQELCCPXSec.h"
#include "QELUtils.h"
#include "AxialFormFactor.h"
#include "LwlynSmithFFCC.h"
#include "RosenbluthPXSec.h"
#include "AxialFormFactorModelI.h"
#include "AhrensNCELPXSec.h"
#include "KuzminNaumov2016AxialFormFactorModel.h"
#include "QELFormFactors.h"
#include "BBA03ELFormFactorsModel.h"
#include "SmithMonizUtils.h"
#include "ZExpAxialFormFactorModel.h"
#include "QELFormFactorsModelI.h"
#include "LwlynSmithFFNC.h"

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
   static TClass *geniecLcLNewQELXSec_Dictionary();
   static void geniecLcLNewQELXSec_TClassManip(TClass*);
   static void *new_geniecLcLNewQELXSec(void *p = 0);
   static void *newArray_geniecLcLNewQELXSec(Long_t size, void *p);
   static void delete_geniecLcLNewQELXSec(void *p);
   static void deleteArray_geniecLcLNewQELXSec(void *p);
   static void destruct_geniecLcLNewQELXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NewQELXSec*)
   {
      ::genie::NewQELXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NewQELXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NewQELXSec", "", 69,
                  typeid(::genie::NewQELXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNewQELXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NewQELXSec) );
      instance.SetNew(&new_geniecLcLNewQELXSec);
      instance.SetNewArray(&newArray_geniecLcLNewQELXSec);
      instance.SetDelete(&delete_geniecLcLNewQELXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLNewQELXSec);
      instance.SetDestructor(&destruct_geniecLcLNewQELXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NewQELXSec*)
   {
      return GenerateInitInstanceLocal((::genie::NewQELXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NewQELXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNewQELXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NewQELXSec*)0x0)->GetClass();
      geniecLcLNewQELXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNewQELXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLELFormFactorsModelI_Dictionary();
   static void geniecLcLELFormFactorsModelI_TClassManip(TClass*);
   static void delete_geniecLcLELFormFactorsModelI(void *p);
   static void deleteArray_geniecLcLELFormFactorsModelI(void *p);
   static void destruct_geniecLcLELFormFactorsModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ELFormFactorsModelI*)
   {
      ::genie::ELFormFactorsModelI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ELFormFactorsModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ELFormFactorsModelI", "ELFormFactorsModelI.h", 30,
                  typeid(::genie::ELFormFactorsModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLELFormFactorsModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ELFormFactorsModelI) );
      instance.SetDelete(&delete_geniecLcLELFormFactorsModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLELFormFactorsModelI);
      instance.SetDestructor(&destruct_geniecLcLELFormFactorsModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ELFormFactorsModelI*)
   {
      return GenerateInitInstanceLocal((::genie::ELFormFactorsModelI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ELFormFactorsModelI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLELFormFactorsModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ELFormFactorsModelI*)0x0)->GetClass();
      geniecLcLELFormFactorsModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLELFormFactorsModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLTransverseEnhancementFFModel_Dictionary();
   static void geniecLcLTransverseEnhancementFFModel_TClassManip(TClass*);
   static void *new_geniecLcLTransverseEnhancementFFModel(void *p = 0);
   static void *newArray_geniecLcLTransverseEnhancementFFModel(Long_t size, void *p);
   static void delete_geniecLcLTransverseEnhancementFFModel(void *p);
   static void deleteArray_geniecLcLTransverseEnhancementFFModel(void *p);
   static void destruct_geniecLcLTransverseEnhancementFFModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::TransverseEnhancementFFModel*)
   {
      ::genie::TransverseEnhancementFFModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::TransverseEnhancementFFModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::TransverseEnhancementFFModel", "", 138,
                  typeid(::genie::TransverseEnhancementFFModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLTransverseEnhancementFFModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::TransverseEnhancementFFModel) );
      instance.SetNew(&new_geniecLcLTransverseEnhancementFFModel);
      instance.SetNewArray(&newArray_geniecLcLTransverseEnhancementFFModel);
      instance.SetDelete(&delete_geniecLcLTransverseEnhancementFFModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLTransverseEnhancementFFModel);
      instance.SetDestructor(&destruct_geniecLcLTransverseEnhancementFFModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::TransverseEnhancementFFModel*)
   {
      return GenerateInitInstanceLocal((::genie::TransverseEnhancementFFModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::TransverseEnhancementFFModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLTransverseEnhancementFFModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::TransverseEnhancementFFModel*)0x0)->GetClass();
      geniecLcLTransverseEnhancementFFModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLTransverseEnhancementFFModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQELFormFactorsModelI_Dictionary();
   static void geniecLcLQELFormFactorsModelI_TClassManip(TClass*);
   static void delete_geniecLcLQELFormFactorsModelI(void *p);
   static void deleteArray_geniecLcLQELFormFactorsModelI(void *p);
   static void destruct_geniecLcLQELFormFactorsModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELFormFactorsModelI*)
   {
      ::genie::QELFormFactorsModelI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELFormFactorsModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELFormFactorsModelI", "QELFormFactorsModelI.h", 29,
                  typeid(::genie::QELFormFactorsModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELFormFactorsModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELFormFactorsModelI) );
      instance.SetDelete(&delete_geniecLcLQELFormFactorsModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELFormFactorsModelI);
      instance.SetDestructor(&destruct_geniecLcLQELFormFactorsModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELFormFactorsModelI*)
   {
      return GenerateInitInstanceLocal((::genie::QELFormFactorsModelI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELFormFactorsModelI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELFormFactorsModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELFormFactorsModelI*)0x0)->GetClass();
      geniecLcLQELFormFactorsModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELFormFactorsModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLELFormFactors_Dictionary();
   static void geniecLcLELFormFactors_TClassManip(TClass*);
   static void *new_geniecLcLELFormFactors(void *p = 0);
   static void *newArray_geniecLcLELFormFactors(Long_t size, void *p);
   static void delete_geniecLcLELFormFactors(void *p);
   static void deleteArray_geniecLcLELFormFactors(void *p);
   static void destruct_geniecLcLELFormFactors(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ELFormFactors*)
   {
      ::genie::ELFormFactors *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ELFormFactors));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ELFormFactors", "ELFormFactors.h", 37,
                  typeid(::genie::ELFormFactors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLELFormFactors_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ELFormFactors) );
      instance.SetNew(&new_geniecLcLELFormFactors);
      instance.SetNewArray(&newArray_geniecLcLELFormFactors);
      instance.SetDelete(&delete_geniecLcLELFormFactors);
      instance.SetDeleteArray(&deleteArray_geniecLcLELFormFactors);
      instance.SetDestructor(&destruct_geniecLcLELFormFactors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ELFormFactors*)
   {
      return GenerateInitInstanceLocal((::genie::ELFormFactors*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ELFormFactors*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLELFormFactors_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ELFormFactors*)0x0)->GetClass();
      geniecLcLELFormFactors_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLELFormFactors_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAxialFormFactorModelI_Dictionary();
   static void geniecLcLAxialFormFactorModelI_TClassManip(TClass*);
   static void delete_geniecLcLAxialFormFactorModelI(void *p);
   static void deleteArray_geniecLcLAxialFormFactorModelI(void *p);
   static void destruct_geniecLcLAxialFormFactorModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AxialFormFactorModelI*)
   {
      ::genie::AxialFormFactorModelI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AxialFormFactorModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AxialFormFactorModelI", "AxialFormFactorModelI.h", 32,
                  typeid(::genie::AxialFormFactorModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAxialFormFactorModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AxialFormFactorModelI) );
      instance.SetDelete(&delete_geniecLcLAxialFormFactorModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLAxialFormFactorModelI);
      instance.SetDestructor(&destruct_geniecLcLAxialFormFactorModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AxialFormFactorModelI*)
   {
      return GenerateInitInstanceLocal((::genie::AxialFormFactorModelI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::AxialFormFactorModelI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAxialFormFactorModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::AxialFormFactorModelI*)0x0)->GetClass();
      geniecLcLAxialFormFactorModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAxialFormFactorModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAxialFormFactor_Dictionary();
   static void geniecLcLAxialFormFactor_TClassManip(TClass*);
   static void *new_geniecLcLAxialFormFactor(void *p = 0);
   static void *newArray_geniecLcLAxialFormFactor(Long_t size, void *p);
   static void delete_geniecLcLAxialFormFactor(void *p);
   static void deleteArray_geniecLcLAxialFormFactor(void *p);
   static void destruct_geniecLcLAxialFormFactor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AxialFormFactor*)
   {
      ::genie::AxialFormFactor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AxialFormFactor));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AxialFormFactor", "AxialFormFactor.h", 38,
                  typeid(::genie::AxialFormFactor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAxialFormFactor_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AxialFormFactor) );
      instance.SetNew(&new_geniecLcLAxialFormFactor);
      instance.SetNewArray(&newArray_geniecLcLAxialFormFactor);
      instance.SetDelete(&delete_geniecLcLAxialFormFactor);
      instance.SetDeleteArray(&deleteArray_geniecLcLAxialFormFactor);
      instance.SetDestructor(&destruct_geniecLcLAxialFormFactor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AxialFormFactor*)
   {
      return GenerateInitInstanceLocal((::genie::AxialFormFactor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::AxialFormFactor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAxialFormFactor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::AxialFormFactor*)0x0)->GetClass();
      geniecLcLAxialFormFactor_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAxialFormFactor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLwlynSmithFF_Dictionary();
   static void geniecLcLLwlynSmithFF_TClassManip(TClass*);
   static void delete_geniecLcLLwlynSmithFF(void *p);
   static void deleteArray_geniecLcLLwlynSmithFF(void *p);
   static void destruct_geniecLcLLwlynSmithFF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LwlynSmithFF*)
   {
      ::genie::LwlynSmithFF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LwlynSmithFF));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LwlynSmithFF", "LwlynSmithFF.h", 40,
                  typeid(::genie::LwlynSmithFF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLwlynSmithFF_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LwlynSmithFF) );
      instance.SetDelete(&delete_geniecLcLLwlynSmithFF);
      instance.SetDeleteArray(&deleteArray_geniecLcLLwlynSmithFF);
      instance.SetDestructor(&destruct_geniecLcLLwlynSmithFF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LwlynSmithFF*)
   {
      return GenerateInitInstanceLocal((::genie::LwlynSmithFF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::LwlynSmithFF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLwlynSmithFF_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::LwlynSmithFF*)0x0)->GetClass();
      geniecLcLLwlynSmithFF_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLwlynSmithFF_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLwlynSmithFFDeltaS_Dictionary();
   static void geniecLcLLwlynSmithFFDeltaS_TClassManip(TClass*);
   static void *new_geniecLcLLwlynSmithFFDeltaS(void *p = 0);
   static void *newArray_geniecLcLLwlynSmithFFDeltaS(Long_t size, void *p);
   static void delete_geniecLcLLwlynSmithFFDeltaS(void *p);
   static void deleteArray_geniecLcLLwlynSmithFFDeltaS(void *p);
   static void destruct_geniecLcLLwlynSmithFFDeltaS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LwlynSmithFFDeltaS*)
   {
      ::genie::LwlynSmithFFDeltaS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LwlynSmithFFDeltaS));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LwlynSmithFFDeltaS", "", 207,
                  typeid(::genie::LwlynSmithFFDeltaS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLwlynSmithFFDeltaS_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LwlynSmithFFDeltaS) );
      instance.SetNew(&new_geniecLcLLwlynSmithFFDeltaS);
      instance.SetNewArray(&newArray_geniecLcLLwlynSmithFFDeltaS);
      instance.SetDelete(&delete_geniecLcLLwlynSmithFFDeltaS);
      instance.SetDeleteArray(&deleteArray_geniecLcLLwlynSmithFFDeltaS);
      instance.SetDestructor(&destruct_geniecLcLLwlynSmithFFDeltaS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LwlynSmithFFDeltaS*)
   {
      return GenerateInitInstanceLocal((::genie::LwlynSmithFFDeltaS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::LwlynSmithFFDeltaS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLwlynSmithFFDeltaS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::LwlynSmithFFDeltaS*)0x0)->GetClass();
      geniecLcLLwlynSmithFFDeltaS_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLwlynSmithFFDeltaS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLZExpELFormFactorModel_Dictionary();
   static void geniecLcLZExpELFormFactorModel_TClassManip(TClass*);
   static void *new_geniecLcLZExpELFormFactorModel(void *p = 0);
   static void *newArray_geniecLcLZExpELFormFactorModel(Long_t size, void *p);
   static void delete_geniecLcLZExpELFormFactorModel(void *p);
   static void deleteArray_geniecLcLZExpELFormFactorModel(void *p);
   static void destruct_geniecLcLZExpELFormFactorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ZExpELFormFactorModel*)
   {
      ::genie::ZExpELFormFactorModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ZExpELFormFactorModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ZExpELFormFactorModel", "", 346,
                  typeid(::genie::ZExpELFormFactorModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLZExpELFormFactorModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ZExpELFormFactorModel) );
      instance.SetNew(&new_geniecLcLZExpELFormFactorModel);
      instance.SetNewArray(&newArray_geniecLcLZExpELFormFactorModel);
      instance.SetDelete(&delete_geniecLcLZExpELFormFactorModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLZExpELFormFactorModel);
      instance.SetDestructor(&destruct_geniecLcLZExpELFormFactorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ZExpELFormFactorModel*)
   {
      return GenerateInitInstanceLocal((::genie::ZExpELFormFactorModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ZExpELFormFactorModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLZExpELFormFactorModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ZExpELFormFactorModel*)0x0)->GetClass();
      geniecLcLZExpELFormFactorModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLZExpELFormFactorModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDipoleELFormFactorsModel_Dictionary();
   static void geniecLcLDipoleELFormFactorsModel_TClassManip(TClass*);
   static void *new_geniecLcLDipoleELFormFactorsModel(void *p = 0);
   static void *newArray_geniecLcLDipoleELFormFactorsModel(Long_t size, void *p);
   static void delete_geniecLcLDipoleELFormFactorsModel(void *p);
   static void deleteArray_geniecLcLDipoleELFormFactorsModel(void *p);
   static void destruct_geniecLcLDipoleELFormFactorsModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DipoleELFormFactorsModel*)
   {
      ::genie::DipoleELFormFactorsModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DipoleELFormFactorsModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DipoleELFormFactorsModel", "", 418,
                  typeid(::genie::DipoleELFormFactorsModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDipoleELFormFactorsModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DipoleELFormFactorsModel) );
      instance.SetNew(&new_geniecLcLDipoleELFormFactorsModel);
      instance.SetNewArray(&newArray_geniecLcLDipoleELFormFactorsModel);
      instance.SetDelete(&delete_geniecLcLDipoleELFormFactorsModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLDipoleELFormFactorsModel);
      instance.SetDestructor(&destruct_geniecLcLDipoleELFormFactorsModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DipoleELFormFactorsModel*)
   {
      return GenerateInitInstanceLocal((::genie::DipoleELFormFactorsModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DipoleELFormFactorsModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDipoleELFormFactorsModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DipoleELFormFactorsModel*)0x0)->GetClass();
      geniecLcLDipoleELFormFactorsModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDipoleELFormFactorsModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQELFormFactors_Dictionary();
   static void geniecLcLQELFormFactors_TClassManip(TClass*);
   static void *new_geniecLcLQELFormFactors(void *p = 0);
   static void *newArray_geniecLcLQELFormFactors(Long_t size, void *p);
   static void delete_geniecLcLQELFormFactors(void *p);
   static void deleteArray_geniecLcLQELFormFactors(void *p);
   static void destruct_geniecLcLQELFormFactors(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELFormFactors*)
   {
      ::genie::QELFormFactors *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELFormFactors));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELFormFactors", "QELFormFactors.h", 39,
                  typeid(::genie::QELFormFactors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELFormFactors_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELFormFactors) );
      instance.SetNew(&new_geniecLcLQELFormFactors);
      instance.SetNewArray(&newArray_geniecLcLQELFormFactors);
      instance.SetDelete(&delete_geniecLcLQELFormFactors);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELFormFactors);
      instance.SetDestructor(&destruct_geniecLcLQELFormFactors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELFormFactors*)
   {
      return GenerateInitInstanceLocal((::genie::QELFormFactors*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELFormFactors*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELFormFactors_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELFormFactors*)0x0)->GetClass();
      geniecLcLQELFormFactors_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELFormFactors_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLwlynSmithQELCCPXSec_Dictionary();
   static void geniecLcLLwlynSmithQELCCPXSec_TClassManip(TClass*);
   static void *new_geniecLcLLwlynSmithQELCCPXSec(void *p = 0);
   static void *newArray_geniecLcLLwlynSmithQELCCPXSec(Long_t size, void *p);
   static void delete_geniecLcLLwlynSmithQELCCPXSec(void *p);
   static void deleteArray_geniecLcLLwlynSmithQELCCPXSec(void *p);
   static void destruct_geniecLcLLwlynSmithQELCCPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LwlynSmithQELCCPXSec*)
   {
      ::genie::LwlynSmithQELCCPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LwlynSmithQELCCPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LwlynSmithQELCCPXSec", "", 635,
                  typeid(::genie::LwlynSmithQELCCPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLwlynSmithQELCCPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LwlynSmithQELCCPXSec) );
      instance.SetNew(&new_geniecLcLLwlynSmithQELCCPXSec);
      instance.SetNewArray(&newArray_geniecLcLLwlynSmithQELCCPXSec);
      instance.SetDelete(&delete_geniecLcLLwlynSmithQELCCPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLLwlynSmithQELCCPXSec);
      instance.SetDestructor(&destruct_geniecLcLLwlynSmithQELCCPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LwlynSmithQELCCPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::LwlynSmithQELCCPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::LwlynSmithQELCCPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLwlynSmithQELCCPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::LwlynSmithQELCCPXSec*)0x0)->GetClass();
      geniecLcLLwlynSmithQELCCPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLwlynSmithQELCCPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDipoleAxialFormFactorModel_Dictionary();
   static void geniecLcLDipoleAxialFormFactorModel_TClassManip(TClass*);
   static void *new_geniecLcLDipoleAxialFormFactorModel(void *p = 0);
   static void *newArray_geniecLcLDipoleAxialFormFactorModel(Long_t size, void *p);
   static void delete_geniecLcLDipoleAxialFormFactorModel(void *p);
   static void deleteArray_geniecLcLDipoleAxialFormFactorModel(void *p);
   static void destruct_geniecLcLDipoleAxialFormFactorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DipoleAxialFormFactorModel*)
   {
      ::genie::DipoleAxialFormFactorModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DipoleAxialFormFactorModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DipoleAxialFormFactorModel", "", 714,
                  typeid(::genie::DipoleAxialFormFactorModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDipoleAxialFormFactorModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DipoleAxialFormFactorModel) );
      instance.SetNew(&new_geniecLcLDipoleAxialFormFactorModel);
      instance.SetNewArray(&newArray_geniecLcLDipoleAxialFormFactorModel);
      instance.SetDelete(&delete_geniecLcLDipoleAxialFormFactorModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLDipoleAxialFormFactorModel);
      instance.SetDestructor(&destruct_geniecLcLDipoleAxialFormFactorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DipoleAxialFormFactorModel*)
   {
      return GenerateInitInstanceLocal((::genie::DipoleAxialFormFactorModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DipoleAxialFormFactorModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDipoleAxialFormFactorModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DipoleAxialFormFactorModel*)0x0)->GetClass();
      geniecLcLDipoleAxialFormFactorModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDipoleAxialFormFactorModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBBA05ELFormFactorsModel_Dictionary();
   static void geniecLcLBBA05ELFormFactorsModel_TClassManip(TClass*);
   static void *new_geniecLcLBBA05ELFormFactorsModel(void *p = 0);
   static void *newArray_geniecLcLBBA05ELFormFactorsModel(Long_t size, void *p);
   static void delete_geniecLcLBBA05ELFormFactorsModel(void *p);
   static void deleteArray_geniecLcLBBA05ELFormFactorsModel(void *p);
   static void destruct_geniecLcLBBA05ELFormFactorsModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BBA05ELFormFactorsModel*)
   {
      ::genie::BBA05ELFormFactorsModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BBA05ELFormFactorsModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BBA05ELFormFactorsModel", "", 775,
                  typeid(::genie::BBA05ELFormFactorsModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBBA05ELFormFactorsModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BBA05ELFormFactorsModel) );
      instance.SetNew(&new_geniecLcLBBA05ELFormFactorsModel);
      instance.SetNewArray(&newArray_geniecLcLBBA05ELFormFactorsModel);
      instance.SetDelete(&delete_geniecLcLBBA05ELFormFactorsModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLBBA05ELFormFactorsModel);
      instance.SetDestructor(&destruct_geniecLcLBBA05ELFormFactorsModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BBA05ELFormFactorsModel*)
   {
      return GenerateInitInstanceLocal((::genie::BBA05ELFormFactorsModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BBA05ELFormFactorsModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBBA05ELFormFactorsModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BBA05ELFormFactorsModel*)0x0)->GetClass();
      geniecLcLBBA05ELFormFactorsModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBBA05ELFormFactorsModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQELXSec_Dictionary();
   static void geniecLcLQELXSec_TClassManip(TClass*);
   static void *new_geniecLcLQELXSec(void *p = 0);
   static void *newArray_geniecLcLQELXSec(Long_t size, void *p);
   static void delete_geniecLcLQELXSec(void *p);
   static void deleteArray_geniecLcLQELXSec(void *p);
   static void destruct_geniecLcLQELXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QELXSec*)
   {
      ::genie::QELXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QELXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QELXSec", "", 843,
                  typeid(::genie::QELXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQELXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QELXSec) );
      instance.SetNew(&new_geniecLcLQELXSec);
      instance.SetNewArray(&newArray_geniecLcLQELXSec);
      instance.SetDelete(&delete_geniecLcLQELXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLQELXSec);
      instance.SetDestructor(&destruct_geniecLcLQELXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QELXSec*)
   {
      return GenerateInitInstanceLocal((::genie::QELXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QELXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQELXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QELXSec*)0x0)->GetClass();
      geniecLcLQELXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQELXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSmithMonizUtils_Dictionary();
   static void geniecLcLSmithMonizUtils_TClassManip(TClass*);
   static void *new_geniecLcLSmithMonizUtils(void *p = 0);
   static void *newArray_geniecLcLSmithMonizUtils(Long_t size, void *p);
   static void delete_geniecLcLSmithMonizUtils(void *p);
   static void deleteArray_geniecLcLSmithMonizUtils(void *p);
   static void destruct_geniecLcLSmithMonizUtils(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SmithMonizUtils*)
   {
      ::genie::SmithMonizUtils *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SmithMonizUtils));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SmithMonizUtils", "SmithMonizUtils.h", 45,
                  typeid(::genie::SmithMonizUtils), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSmithMonizUtils_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SmithMonizUtils) );
      instance.SetNew(&new_geniecLcLSmithMonizUtils);
      instance.SetNewArray(&newArray_geniecLcLSmithMonizUtils);
      instance.SetDelete(&delete_geniecLcLSmithMonizUtils);
      instance.SetDeleteArray(&deleteArray_geniecLcLSmithMonizUtils);
      instance.SetDestructor(&destruct_geniecLcLSmithMonizUtils);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SmithMonizUtils*)
   {
      return GenerateInitInstanceLocal((::genie::SmithMonizUtils*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::SmithMonizUtils*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSmithMonizUtils_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::SmithMonizUtils*)0x0)->GetClass();
      geniecLcLSmithMonizUtils_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSmithMonizUtils_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSmithMonizQELCCXSec_Dictionary();
   static void geniecLcLSmithMonizQELCCXSec_TClassManip(TClass*);
   static void *new_geniecLcLSmithMonizQELCCXSec(void *p = 0);
   static void *newArray_geniecLcLSmithMonizQELCCXSec(Long_t size, void *p);
   static void delete_geniecLcLSmithMonizQELCCXSec(void *p);
   static void deleteArray_geniecLcLSmithMonizQELCCXSec(void *p);
   static void destruct_geniecLcLSmithMonizQELCCXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SmithMonizQELCCXSec*)
   {
      ::genie::SmithMonizQELCCXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SmithMonizQELCCXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SmithMonizQELCCXSec", "", 906,
                  typeid(::genie::SmithMonizQELCCXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSmithMonizQELCCXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SmithMonizQELCCXSec) );
      instance.SetNew(&new_geniecLcLSmithMonizQELCCXSec);
      instance.SetNewArray(&newArray_geniecLcLSmithMonizQELCCXSec);
      instance.SetDelete(&delete_geniecLcLSmithMonizQELCCXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLSmithMonizQELCCXSec);
      instance.SetDestructor(&destruct_geniecLcLSmithMonizQELCCXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SmithMonizQELCCXSec*)
   {
      return GenerateInitInstanceLocal((::genie::SmithMonizQELCCXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::SmithMonizQELCCXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSmithMonizQELCCXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::SmithMonizQELCCXSec*)0x0)->GetClass();
      geniecLcLSmithMonizQELCCXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSmithMonizQELCCXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLSmithMonizQELCCPXSec_Dictionary();
   static void geniecLcLSmithMonizQELCCPXSec_TClassManip(TClass*);
   static void *new_geniecLcLSmithMonizQELCCPXSec(void *p = 0);
   static void *newArray_geniecLcLSmithMonizQELCCPXSec(Long_t size, void *p);
   static void delete_geniecLcLSmithMonizQELCCPXSec(void *p);
   static void deleteArray_geniecLcLSmithMonizQELCCPXSec(void *p);
   static void destruct_geniecLcLSmithMonizQELCCPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::SmithMonizQELCCPXSec*)
   {
      ::genie::SmithMonizQELCCPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::SmithMonizQELCCPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::SmithMonizQELCCPXSec", "", 1007,
                  typeid(::genie::SmithMonizQELCCPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLSmithMonizQELCCPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::SmithMonizQELCCPXSec) );
      instance.SetNew(&new_geniecLcLSmithMonizQELCCPXSec);
      instance.SetNewArray(&newArray_geniecLcLSmithMonizQELCCPXSec);
      instance.SetDelete(&delete_geniecLcLSmithMonizQELCCPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLSmithMonizQELCCPXSec);
      instance.SetDestructor(&destruct_geniecLcLSmithMonizQELCCPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::SmithMonizQELCCPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::SmithMonizQELCCPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::SmithMonizQELCCPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLSmithMonizQELCCPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::SmithMonizQELCCPXSec*)0x0)->GetClass();
      geniecLcLSmithMonizQELCCPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLSmithMonizQELCCPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBBA07ELFormFactorsModel_Dictionary();
   static void geniecLcLBBA07ELFormFactorsModel_TClassManip(TClass*);
   static void *new_geniecLcLBBA07ELFormFactorsModel(void *p = 0);
   static void *newArray_geniecLcLBBA07ELFormFactorsModel(Long_t size, void *p);
   static void delete_geniecLcLBBA07ELFormFactorsModel(void *p);
   static void deleteArray_geniecLcLBBA07ELFormFactorsModel(void *p);
   static void destruct_geniecLcLBBA07ELFormFactorsModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BBA07ELFormFactorsModel*)
   {
      ::genie::BBA07ELFormFactorsModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BBA07ELFormFactorsModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BBA07ELFormFactorsModel", "", 1117,
                  typeid(::genie::BBA07ELFormFactorsModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBBA07ELFormFactorsModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BBA07ELFormFactorsModel) );
      instance.SetNew(&new_geniecLcLBBA07ELFormFactorsModel);
      instance.SetNewArray(&newArray_geniecLcLBBA07ELFormFactorsModel);
      instance.SetDelete(&delete_geniecLcLBBA07ELFormFactorsModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLBBA07ELFormFactorsModel);
      instance.SetDestructor(&destruct_geniecLcLBBA07ELFormFactorsModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BBA07ELFormFactorsModel*)
   {
      return GenerateInitInstanceLocal((::genie::BBA07ELFormFactorsModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BBA07ELFormFactorsModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBBA07ELFormFactorsModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BBA07ELFormFactorsModel*)0x0)->GetClass();
      geniecLcLBBA07ELFormFactorsModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBBA07ELFormFactorsModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNievesQELCCPXSec_Dictionary();
   static void geniecLcLNievesQELCCPXSec_TClassManip(TClass*);
   static void *new_geniecLcLNievesQELCCPXSec(void *p = 0);
   static void *newArray_geniecLcLNievesQELCCPXSec(Long_t size, void *p);
   static void delete_geniecLcLNievesQELCCPXSec(void *p);
   static void deleteArray_geniecLcLNievesQELCCPXSec(void *p);
   static void destruct_geniecLcLNievesQELCCPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NievesQELCCPXSec*)
   {
      ::genie::NievesQELCCPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NievesQELCCPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NievesQELCCPXSec", "", 1272,
                  typeid(::genie::NievesQELCCPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNievesQELCCPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NievesQELCCPXSec) );
      instance.SetNew(&new_geniecLcLNievesQELCCPXSec);
      instance.SetNewArray(&newArray_geniecLcLNievesQELCCPXSec);
      instance.SetDelete(&delete_geniecLcLNievesQELCCPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLNievesQELCCPXSec);
      instance.SetDestructor(&destruct_geniecLcLNievesQELCCPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NievesQELCCPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::NievesQELCCPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NievesQELCCPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNievesQELCCPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NievesQELCCPXSec*)0x0)->GetClass();
      geniecLcLNievesQELCCPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNievesQELCCPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLwlynSmithFFCC_Dictionary();
   static void geniecLcLLwlynSmithFFCC_TClassManip(TClass*);
   static void *new_geniecLcLLwlynSmithFFCC(void *p = 0);
   static void *newArray_geniecLcLLwlynSmithFFCC(Long_t size, void *p);
   static void delete_geniecLcLLwlynSmithFFCC(void *p);
   static void deleteArray_geniecLcLLwlynSmithFFCC(void *p);
   static void destruct_geniecLcLLwlynSmithFFCC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LwlynSmithFFCC*)
   {
      ::genie::LwlynSmithFFCC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LwlynSmithFFCC));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LwlynSmithFFCC", "", 1579,
                  typeid(::genie::LwlynSmithFFCC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLwlynSmithFFCC_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LwlynSmithFFCC) );
      instance.SetNew(&new_geniecLcLLwlynSmithFFCC);
      instance.SetNewArray(&newArray_geniecLcLLwlynSmithFFCC);
      instance.SetDelete(&delete_geniecLcLLwlynSmithFFCC);
      instance.SetDeleteArray(&deleteArray_geniecLcLLwlynSmithFFCC);
      instance.SetDestructor(&destruct_geniecLcLLwlynSmithFFCC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LwlynSmithFFCC*)
   {
      return GenerateInitInstanceLocal((::genie::LwlynSmithFFCC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::LwlynSmithFFCC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLwlynSmithFFCC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::LwlynSmithFFCC*)0x0)->GetClass();
      geniecLcLLwlynSmithFFCC_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLwlynSmithFFCC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRosenbluthPXSec_Dictionary();
   static void geniecLcLRosenbluthPXSec_TClassManip(TClass*);
   static void *new_geniecLcLRosenbluthPXSec(void *p = 0);
   static void *newArray_geniecLcLRosenbluthPXSec(Long_t size, void *p);
   static void delete_geniecLcLRosenbluthPXSec(void *p);
   static void deleteArray_geniecLcLRosenbluthPXSec(void *p);
   static void destruct_geniecLcLRosenbluthPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RosenbluthPXSec*)
   {
      ::genie::RosenbluthPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RosenbluthPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RosenbluthPXSec", "", 1630,
                  typeid(::genie::RosenbluthPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRosenbluthPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RosenbluthPXSec) );
      instance.SetNew(&new_geniecLcLRosenbluthPXSec);
      instance.SetNewArray(&newArray_geniecLcLRosenbluthPXSec);
      instance.SetDelete(&delete_geniecLcLRosenbluthPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLRosenbluthPXSec);
      instance.SetDestructor(&destruct_geniecLcLRosenbluthPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RosenbluthPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::RosenbluthPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RosenbluthPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRosenbluthPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RosenbluthPXSec*)0x0)->GetClass();
      geniecLcLRosenbluthPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRosenbluthPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLAhrensNCELPXSec_Dictionary();
   static void geniecLcLAhrensNCELPXSec_TClassManip(TClass*);
   static void *new_geniecLcLAhrensNCELPXSec(void *p = 0);
   static void *newArray_geniecLcLAhrensNCELPXSec(Long_t size, void *p);
   static void delete_geniecLcLAhrensNCELPXSec(void *p);
   static void deleteArray_geniecLcLAhrensNCELPXSec(void *p);
   static void destruct_geniecLcLAhrensNCELPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::AhrensNCELPXSec*)
   {
      ::genie::AhrensNCELPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::AhrensNCELPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::AhrensNCELPXSec", "", 1740,
                  typeid(::genie::AhrensNCELPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLAhrensNCELPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::AhrensNCELPXSec) );
      instance.SetNew(&new_geniecLcLAhrensNCELPXSec);
      instance.SetNewArray(&newArray_geniecLcLAhrensNCELPXSec);
      instance.SetDelete(&delete_geniecLcLAhrensNCELPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLAhrensNCELPXSec);
      instance.SetDestructor(&destruct_geniecLcLAhrensNCELPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::AhrensNCELPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::AhrensNCELPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::AhrensNCELPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLAhrensNCELPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::AhrensNCELPXSec*)0x0)->GetClass();
      geniecLcLAhrensNCELPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLAhrensNCELPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLKuzminNaumov2016AxialFormFactorModel_Dictionary();
   static void geniecLcLKuzminNaumov2016AxialFormFactorModel_TClassManip(TClass*);
   static void *new_geniecLcLKuzminNaumov2016AxialFormFactorModel(void *p = 0);
   static void *newArray_geniecLcLKuzminNaumov2016AxialFormFactorModel(Long_t size, void *p);
   static void delete_geniecLcLKuzminNaumov2016AxialFormFactorModel(void *p);
   static void deleteArray_geniecLcLKuzminNaumov2016AxialFormFactorModel(void *p);
   static void destruct_geniecLcLKuzminNaumov2016AxialFormFactorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KuzminNaumov2016AxialFormFactorModel*)
   {
      ::genie::KuzminNaumov2016AxialFormFactorModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::KuzminNaumov2016AxialFormFactorModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::KuzminNaumov2016AxialFormFactorModel", "", 1808,
                  typeid(::genie::KuzminNaumov2016AxialFormFactorModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLKuzminNaumov2016AxialFormFactorModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::KuzminNaumov2016AxialFormFactorModel) );
      instance.SetNew(&new_geniecLcLKuzminNaumov2016AxialFormFactorModel);
      instance.SetNewArray(&newArray_geniecLcLKuzminNaumov2016AxialFormFactorModel);
      instance.SetDelete(&delete_geniecLcLKuzminNaumov2016AxialFormFactorModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLKuzminNaumov2016AxialFormFactorModel);
      instance.SetDestructor(&destruct_geniecLcLKuzminNaumov2016AxialFormFactorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KuzminNaumov2016AxialFormFactorModel*)
   {
      return GenerateInitInstanceLocal((::genie::KuzminNaumov2016AxialFormFactorModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::KuzminNaumov2016AxialFormFactorModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLKuzminNaumov2016AxialFormFactorModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::KuzminNaumov2016AxialFormFactorModel*)0x0)->GetClass();
      geniecLcLKuzminNaumov2016AxialFormFactorModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLKuzminNaumov2016AxialFormFactorModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBBA03ELFormFactorsModel_Dictionary();
   static void geniecLcLBBA03ELFormFactorsModel_TClassManip(TClass*);
   static void *new_geniecLcLBBA03ELFormFactorsModel(void *p = 0);
   static void *newArray_geniecLcLBBA03ELFormFactorsModel(Long_t size, void *p);
   static void delete_geniecLcLBBA03ELFormFactorsModel(void *p);
   static void deleteArray_geniecLcLBBA03ELFormFactorsModel(void *p);
   static void destruct_geniecLcLBBA03ELFormFactorsModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BBA03ELFormFactorsModel*)
   {
      ::genie::BBA03ELFormFactorsModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BBA03ELFormFactorsModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BBA03ELFormFactorsModel", "", 1960,
                  typeid(::genie::BBA03ELFormFactorsModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBBA03ELFormFactorsModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BBA03ELFormFactorsModel) );
      instance.SetNew(&new_geniecLcLBBA03ELFormFactorsModel);
      instance.SetNewArray(&newArray_geniecLcLBBA03ELFormFactorsModel);
      instance.SetDelete(&delete_geniecLcLBBA03ELFormFactorsModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLBBA03ELFormFactorsModel);
      instance.SetDestructor(&destruct_geniecLcLBBA03ELFormFactorsModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BBA03ELFormFactorsModel*)
   {
      return GenerateInitInstanceLocal((::genie::BBA03ELFormFactorsModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BBA03ELFormFactorsModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBBA03ELFormFactorsModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BBA03ELFormFactorsModel*)0x0)->GetClass();
      geniecLcLBBA03ELFormFactorsModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBBA03ELFormFactorsModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLZExpAxialFormFactorModel_Dictionary();
   static void geniecLcLZExpAxialFormFactorModel_TClassManip(TClass*);
   static void *new_geniecLcLZExpAxialFormFactorModel(void *p = 0);
   static void *newArray_geniecLcLZExpAxialFormFactorModel(Long_t size, void *p);
   static void delete_geniecLcLZExpAxialFormFactorModel(void *p);
   static void deleteArray_geniecLcLZExpAxialFormFactorModel(void *p);
   static void destruct_geniecLcLZExpAxialFormFactorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::ZExpAxialFormFactorModel*)
   {
      ::genie::ZExpAxialFormFactorModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::ZExpAxialFormFactorModel));
      static ::ROOT::TGenericClassInfo 
         instance("genie::ZExpAxialFormFactorModel", "", 2157,
                  typeid(::genie::ZExpAxialFormFactorModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLZExpAxialFormFactorModel_Dictionary, isa_proxy, 0,
                  sizeof(::genie::ZExpAxialFormFactorModel) );
      instance.SetNew(&new_geniecLcLZExpAxialFormFactorModel);
      instance.SetNewArray(&newArray_geniecLcLZExpAxialFormFactorModel);
      instance.SetDelete(&delete_geniecLcLZExpAxialFormFactorModel);
      instance.SetDeleteArray(&deleteArray_geniecLcLZExpAxialFormFactorModel);
      instance.SetDestructor(&destruct_geniecLcLZExpAxialFormFactorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::ZExpAxialFormFactorModel*)
   {
      return GenerateInitInstanceLocal((::genie::ZExpAxialFormFactorModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::ZExpAxialFormFactorModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLZExpAxialFormFactorModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::ZExpAxialFormFactorModel*)0x0)->GetClass();
      geniecLcLZExpAxialFormFactorModel_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLZExpAxialFormFactorModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLLwlynSmithFFNC_Dictionary();
   static void geniecLcLLwlynSmithFFNC_TClassManip(TClass*);
   static void *new_geniecLcLLwlynSmithFFNC(void *p = 0);
   static void *newArray_geniecLcLLwlynSmithFFNC(Long_t size, void *p);
   static void delete_geniecLcLLwlynSmithFFNC(void *p);
   static void deleteArray_geniecLcLLwlynSmithFFNC(void *p);
   static void destruct_geniecLcLLwlynSmithFFNC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::LwlynSmithFFNC*)
   {
      ::genie::LwlynSmithFFNC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::LwlynSmithFFNC));
      static ::ROOT::TGenericClassInfo 
         instance("genie::LwlynSmithFFNC", "", 2276,
                  typeid(::genie::LwlynSmithFFNC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLLwlynSmithFFNC_Dictionary, isa_proxy, 0,
                  sizeof(::genie::LwlynSmithFFNC) );
      instance.SetNew(&new_geniecLcLLwlynSmithFFNC);
      instance.SetNewArray(&newArray_geniecLcLLwlynSmithFFNC);
      instance.SetDelete(&delete_geniecLcLLwlynSmithFFNC);
      instance.SetDeleteArray(&deleteArray_geniecLcLLwlynSmithFFNC);
      instance.SetDestructor(&destruct_geniecLcLLwlynSmithFFNC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::LwlynSmithFFNC*)
   {
      return GenerateInitInstanceLocal((::genie::LwlynSmithFFNC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::LwlynSmithFFNC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLLwlynSmithFFNC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::LwlynSmithFFNC*)0x0)->GetClass();
      geniecLcLLwlynSmithFFNC_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLLwlynSmithFFNC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNewQELXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NewQELXSec : new ::genie::NewQELXSec;
   }
   static void *newArray_geniecLcLNewQELXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NewQELXSec[nElements] : new ::genie::NewQELXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNewQELXSec(void *p) {
      delete ((::genie::NewQELXSec*)p);
   }
   static void deleteArray_geniecLcLNewQELXSec(void *p) {
      delete [] ((::genie::NewQELXSec*)p);
   }
   static void destruct_geniecLcLNewQELXSec(void *p) {
      typedef ::genie::NewQELXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NewQELXSec

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLELFormFactorsModelI(void *p) {
      delete ((::genie::ELFormFactorsModelI*)p);
   }
   static void deleteArray_geniecLcLELFormFactorsModelI(void *p) {
      delete [] ((::genie::ELFormFactorsModelI*)p);
   }
   static void destruct_geniecLcLELFormFactorsModelI(void *p) {
      typedef ::genie::ELFormFactorsModelI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ELFormFactorsModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLTransverseEnhancementFFModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::TransverseEnhancementFFModel : new ::genie::TransverseEnhancementFFModel;
   }
   static void *newArray_geniecLcLTransverseEnhancementFFModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::TransverseEnhancementFFModel[nElements] : new ::genie::TransverseEnhancementFFModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLTransverseEnhancementFFModel(void *p) {
      delete ((::genie::TransverseEnhancementFFModel*)p);
   }
   static void deleteArray_geniecLcLTransverseEnhancementFFModel(void *p) {
      delete [] ((::genie::TransverseEnhancementFFModel*)p);
   }
   static void destruct_geniecLcLTransverseEnhancementFFModel(void *p) {
      typedef ::genie::TransverseEnhancementFFModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::TransverseEnhancementFFModel

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLQELFormFactorsModelI(void *p) {
      delete ((::genie::QELFormFactorsModelI*)p);
   }
   static void deleteArray_geniecLcLQELFormFactorsModelI(void *p) {
      delete [] ((::genie::QELFormFactorsModelI*)p);
   }
   static void destruct_geniecLcLQELFormFactorsModelI(void *p) {
      typedef ::genie::QELFormFactorsModelI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELFormFactorsModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLELFormFactors(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ELFormFactors : new ::genie::ELFormFactors;
   }
   static void *newArray_geniecLcLELFormFactors(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ELFormFactors[nElements] : new ::genie::ELFormFactors[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLELFormFactors(void *p) {
      delete ((::genie::ELFormFactors*)p);
   }
   static void deleteArray_geniecLcLELFormFactors(void *p) {
      delete [] ((::genie::ELFormFactors*)p);
   }
   static void destruct_geniecLcLELFormFactors(void *p) {
      typedef ::genie::ELFormFactors current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ELFormFactors

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLAxialFormFactorModelI(void *p) {
      delete ((::genie::AxialFormFactorModelI*)p);
   }
   static void deleteArray_geniecLcLAxialFormFactorModelI(void *p) {
      delete [] ((::genie::AxialFormFactorModelI*)p);
   }
   static void destruct_geniecLcLAxialFormFactorModelI(void *p) {
      typedef ::genie::AxialFormFactorModelI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::AxialFormFactorModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAxialFormFactor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::AxialFormFactor : new ::genie::AxialFormFactor;
   }
   static void *newArray_geniecLcLAxialFormFactor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::AxialFormFactor[nElements] : new ::genie::AxialFormFactor[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAxialFormFactor(void *p) {
      delete ((::genie::AxialFormFactor*)p);
   }
   static void deleteArray_geniecLcLAxialFormFactor(void *p) {
      delete [] ((::genie::AxialFormFactor*)p);
   }
   static void destruct_geniecLcLAxialFormFactor(void *p) {
      typedef ::genie::AxialFormFactor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::AxialFormFactor

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLLwlynSmithFF(void *p) {
      delete ((::genie::LwlynSmithFF*)p);
   }
   static void deleteArray_geniecLcLLwlynSmithFF(void *p) {
      delete [] ((::genie::LwlynSmithFF*)p);
   }
   static void destruct_geniecLcLLwlynSmithFF(void *p) {
      typedef ::genie::LwlynSmithFF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::LwlynSmithFF

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLwlynSmithFFDeltaS(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LwlynSmithFFDeltaS : new ::genie::LwlynSmithFFDeltaS;
   }
   static void *newArray_geniecLcLLwlynSmithFFDeltaS(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LwlynSmithFFDeltaS[nElements] : new ::genie::LwlynSmithFFDeltaS[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLwlynSmithFFDeltaS(void *p) {
      delete ((::genie::LwlynSmithFFDeltaS*)p);
   }
   static void deleteArray_geniecLcLLwlynSmithFFDeltaS(void *p) {
      delete [] ((::genie::LwlynSmithFFDeltaS*)p);
   }
   static void destruct_geniecLcLLwlynSmithFFDeltaS(void *p) {
      typedef ::genie::LwlynSmithFFDeltaS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::LwlynSmithFFDeltaS

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLZExpELFormFactorModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ZExpELFormFactorModel : new ::genie::ZExpELFormFactorModel;
   }
   static void *newArray_geniecLcLZExpELFormFactorModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ZExpELFormFactorModel[nElements] : new ::genie::ZExpELFormFactorModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLZExpELFormFactorModel(void *p) {
      delete ((::genie::ZExpELFormFactorModel*)p);
   }
   static void deleteArray_geniecLcLZExpELFormFactorModel(void *p) {
      delete [] ((::genie::ZExpELFormFactorModel*)p);
   }
   static void destruct_geniecLcLZExpELFormFactorModel(void *p) {
      typedef ::genie::ZExpELFormFactorModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ZExpELFormFactorModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDipoleELFormFactorsModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DipoleELFormFactorsModel : new ::genie::DipoleELFormFactorsModel;
   }
   static void *newArray_geniecLcLDipoleELFormFactorsModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DipoleELFormFactorsModel[nElements] : new ::genie::DipoleELFormFactorsModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDipoleELFormFactorsModel(void *p) {
      delete ((::genie::DipoleELFormFactorsModel*)p);
   }
   static void deleteArray_geniecLcLDipoleELFormFactorsModel(void *p) {
      delete [] ((::genie::DipoleELFormFactorsModel*)p);
   }
   static void destruct_geniecLcLDipoleELFormFactorsModel(void *p) {
      typedef ::genie::DipoleELFormFactorsModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DipoleELFormFactorsModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQELFormFactors(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELFormFactors : new ::genie::QELFormFactors;
   }
   static void *newArray_geniecLcLQELFormFactors(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELFormFactors[nElements] : new ::genie::QELFormFactors[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQELFormFactors(void *p) {
      delete ((::genie::QELFormFactors*)p);
   }
   static void deleteArray_geniecLcLQELFormFactors(void *p) {
      delete [] ((::genie::QELFormFactors*)p);
   }
   static void destruct_geniecLcLQELFormFactors(void *p) {
      typedef ::genie::QELFormFactors current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELFormFactors

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLwlynSmithQELCCPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LwlynSmithQELCCPXSec : new ::genie::LwlynSmithQELCCPXSec;
   }
   static void *newArray_geniecLcLLwlynSmithQELCCPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LwlynSmithQELCCPXSec[nElements] : new ::genie::LwlynSmithQELCCPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLwlynSmithQELCCPXSec(void *p) {
      delete ((::genie::LwlynSmithQELCCPXSec*)p);
   }
   static void deleteArray_geniecLcLLwlynSmithQELCCPXSec(void *p) {
      delete [] ((::genie::LwlynSmithQELCCPXSec*)p);
   }
   static void destruct_geniecLcLLwlynSmithQELCCPXSec(void *p) {
      typedef ::genie::LwlynSmithQELCCPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::LwlynSmithQELCCPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDipoleAxialFormFactorModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DipoleAxialFormFactorModel : new ::genie::DipoleAxialFormFactorModel;
   }
   static void *newArray_geniecLcLDipoleAxialFormFactorModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DipoleAxialFormFactorModel[nElements] : new ::genie::DipoleAxialFormFactorModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDipoleAxialFormFactorModel(void *p) {
      delete ((::genie::DipoleAxialFormFactorModel*)p);
   }
   static void deleteArray_geniecLcLDipoleAxialFormFactorModel(void *p) {
      delete [] ((::genie::DipoleAxialFormFactorModel*)p);
   }
   static void destruct_geniecLcLDipoleAxialFormFactorModel(void *p) {
      typedef ::genie::DipoleAxialFormFactorModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DipoleAxialFormFactorModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBBA05ELFormFactorsModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BBA05ELFormFactorsModel : new ::genie::BBA05ELFormFactorsModel;
   }
   static void *newArray_geniecLcLBBA05ELFormFactorsModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BBA05ELFormFactorsModel[nElements] : new ::genie::BBA05ELFormFactorsModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBBA05ELFormFactorsModel(void *p) {
      delete ((::genie::BBA05ELFormFactorsModel*)p);
   }
   static void deleteArray_geniecLcLBBA05ELFormFactorsModel(void *p) {
      delete [] ((::genie::BBA05ELFormFactorsModel*)p);
   }
   static void destruct_geniecLcLBBA05ELFormFactorsModel(void *p) {
      typedef ::genie::BBA05ELFormFactorsModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BBA05ELFormFactorsModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQELXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELXSec : new ::genie::QELXSec;
   }
   static void *newArray_geniecLcLQELXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QELXSec[nElements] : new ::genie::QELXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQELXSec(void *p) {
      delete ((::genie::QELXSec*)p);
   }
   static void deleteArray_geniecLcLQELXSec(void *p) {
      delete [] ((::genie::QELXSec*)p);
   }
   static void destruct_geniecLcLQELXSec(void *p) {
      typedef ::genie::QELXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QELXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSmithMonizUtils(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SmithMonizUtils : new ::genie::SmithMonizUtils;
   }
   static void *newArray_geniecLcLSmithMonizUtils(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SmithMonizUtils[nElements] : new ::genie::SmithMonizUtils[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSmithMonizUtils(void *p) {
      delete ((::genie::SmithMonizUtils*)p);
   }
   static void deleteArray_geniecLcLSmithMonizUtils(void *p) {
      delete [] ((::genie::SmithMonizUtils*)p);
   }
   static void destruct_geniecLcLSmithMonizUtils(void *p) {
      typedef ::genie::SmithMonizUtils current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::SmithMonizUtils

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSmithMonizQELCCXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SmithMonizQELCCXSec : new ::genie::SmithMonizQELCCXSec;
   }
   static void *newArray_geniecLcLSmithMonizQELCCXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SmithMonizQELCCXSec[nElements] : new ::genie::SmithMonizQELCCXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSmithMonizQELCCXSec(void *p) {
      delete ((::genie::SmithMonizQELCCXSec*)p);
   }
   static void deleteArray_geniecLcLSmithMonizQELCCXSec(void *p) {
      delete [] ((::genie::SmithMonizQELCCXSec*)p);
   }
   static void destruct_geniecLcLSmithMonizQELCCXSec(void *p) {
      typedef ::genie::SmithMonizQELCCXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::SmithMonizQELCCXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLSmithMonizQELCCPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SmithMonizQELCCPXSec : new ::genie::SmithMonizQELCCPXSec;
   }
   static void *newArray_geniecLcLSmithMonizQELCCPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::SmithMonizQELCCPXSec[nElements] : new ::genie::SmithMonizQELCCPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLSmithMonizQELCCPXSec(void *p) {
      delete ((::genie::SmithMonizQELCCPXSec*)p);
   }
   static void deleteArray_geniecLcLSmithMonizQELCCPXSec(void *p) {
      delete [] ((::genie::SmithMonizQELCCPXSec*)p);
   }
   static void destruct_geniecLcLSmithMonizQELCCPXSec(void *p) {
      typedef ::genie::SmithMonizQELCCPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::SmithMonizQELCCPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBBA07ELFormFactorsModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BBA07ELFormFactorsModel : new ::genie::BBA07ELFormFactorsModel;
   }
   static void *newArray_geniecLcLBBA07ELFormFactorsModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BBA07ELFormFactorsModel[nElements] : new ::genie::BBA07ELFormFactorsModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBBA07ELFormFactorsModel(void *p) {
      delete ((::genie::BBA07ELFormFactorsModel*)p);
   }
   static void deleteArray_geniecLcLBBA07ELFormFactorsModel(void *p) {
      delete [] ((::genie::BBA07ELFormFactorsModel*)p);
   }
   static void destruct_geniecLcLBBA07ELFormFactorsModel(void *p) {
      typedef ::genie::BBA07ELFormFactorsModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BBA07ELFormFactorsModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNievesQELCCPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NievesQELCCPXSec : new ::genie::NievesQELCCPXSec;
   }
   static void *newArray_geniecLcLNievesQELCCPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NievesQELCCPXSec[nElements] : new ::genie::NievesQELCCPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNievesQELCCPXSec(void *p) {
      delete ((::genie::NievesQELCCPXSec*)p);
   }
   static void deleteArray_geniecLcLNievesQELCCPXSec(void *p) {
      delete [] ((::genie::NievesQELCCPXSec*)p);
   }
   static void destruct_geniecLcLNievesQELCCPXSec(void *p) {
      typedef ::genie::NievesQELCCPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NievesQELCCPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLwlynSmithFFCC(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LwlynSmithFFCC : new ::genie::LwlynSmithFFCC;
   }
   static void *newArray_geniecLcLLwlynSmithFFCC(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LwlynSmithFFCC[nElements] : new ::genie::LwlynSmithFFCC[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLwlynSmithFFCC(void *p) {
      delete ((::genie::LwlynSmithFFCC*)p);
   }
   static void deleteArray_geniecLcLLwlynSmithFFCC(void *p) {
      delete [] ((::genie::LwlynSmithFFCC*)p);
   }
   static void destruct_geniecLcLLwlynSmithFFCC(void *p) {
      typedef ::genie::LwlynSmithFFCC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::LwlynSmithFFCC

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRosenbluthPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RosenbluthPXSec : new ::genie::RosenbluthPXSec;
   }
   static void *newArray_geniecLcLRosenbluthPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RosenbluthPXSec[nElements] : new ::genie::RosenbluthPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRosenbluthPXSec(void *p) {
      delete ((::genie::RosenbluthPXSec*)p);
   }
   static void deleteArray_geniecLcLRosenbluthPXSec(void *p) {
      delete [] ((::genie::RosenbluthPXSec*)p);
   }
   static void destruct_geniecLcLRosenbluthPXSec(void *p) {
      typedef ::genie::RosenbluthPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RosenbluthPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLAhrensNCELPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::AhrensNCELPXSec : new ::genie::AhrensNCELPXSec;
   }
   static void *newArray_geniecLcLAhrensNCELPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::AhrensNCELPXSec[nElements] : new ::genie::AhrensNCELPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLAhrensNCELPXSec(void *p) {
      delete ((::genie::AhrensNCELPXSec*)p);
   }
   static void deleteArray_geniecLcLAhrensNCELPXSec(void *p) {
      delete [] ((::genie::AhrensNCELPXSec*)p);
   }
   static void destruct_geniecLcLAhrensNCELPXSec(void *p) {
      typedef ::genie::AhrensNCELPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::AhrensNCELPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLKuzminNaumov2016AxialFormFactorModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KuzminNaumov2016AxialFormFactorModel : new ::genie::KuzminNaumov2016AxialFormFactorModel;
   }
   static void *newArray_geniecLcLKuzminNaumov2016AxialFormFactorModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KuzminNaumov2016AxialFormFactorModel[nElements] : new ::genie::KuzminNaumov2016AxialFormFactorModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLKuzminNaumov2016AxialFormFactorModel(void *p) {
      delete ((::genie::KuzminNaumov2016AxialFormFactorModel*)p);
   }
   static void deleteArray_geniecLcLKuzminNaumov2016AxialFormFactorModel(void *p) {
      delete [] ((::genie::KuzminNaumov2016AxialFormFactorModel*)p);
   }
   static void destruct_geniecLcLKuzminNaumov2016AxialFormFactorModel(void *p) {
      typedef ::genie::KuzminNaumov2016AxialFormFactorModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::KuzminNaumov2016AxialFormFactorModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBBA03ELFormFactorsModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BBA03ELFormFactorsModel : new ::genie::BBA03ELFormFactorsModel;
   }
   static void *newArray_geniecLcLBBA03ELFormFactorsModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BBA03ELFormFactorsModel[nElements] : new ::genie::BBA03ELFormFactorsModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBBA03ELFormFactorsModel(void *p) {
      delete ((::genie::BBA03ELFormFactorsModel*)p);
   }
   static void deleteArray_geniecLcLBBA03ELFormFactorsModel(void *p) {
      delete [] ((::genie::BBA03ELFormFactorsModel*)p);
   }
   static void destruct_geniecLcLBBA03ELFormFactorsModel(void *p) {
      typedef ::genie::BBA03ELFormFactorsModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BBA03ELFormFactorsModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLZExpAxialFormFactorModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ZExpAxialFormFactorModel : new ::genie::ZExpAxialFormFactorModel;
   }
   static void *newArray_geniecLcLZExpAxialFormFactorModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::ZExpAxialFormFactorModel[nElements] : new ::genie::ZExpAxialFormFactorModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLZExpAxialFormFactorModel(void *p) {
      delete ((::genie::ZExpAxialFormFactorModel*)p);
   }
   static void deleteArray_geniecLcLZExpAxialFormFactorModel(void *p) {
      delete [] ((::genie::ZExpAxialFormFactorModel*)p);
   }
   static void destruct_geniecLcLZExpAxialFormFactorModel(void *p) {
      typedef ::genie::ZExpAxialFormFactorModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::ZExpAxialFormFactorModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLLwlynSmithFFNC(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LwlynSmithFFNC : new ::genie::LwlynSmithFFNC;
   }
   static void *newArray_geniecLcLLwlynSmithFFNC(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::LwlynSmithFFNC[nElements] : new ::genie::LwlynSmithFFNC[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLLwlynSmithFFNC(void *p) {
      delete ((::genie::LwlynSmithFFNC*)p);
   }
   static void deleteArray_geniecLcLLwlynSmithFFNC(void *p) {
      delete [] ((::genie::LwlynSmithFFNC*)p);
   }
   static void destruct_geniecLcLLwlynSmithFFNC(void *p) {
      typedef ::genie::LwlynSmithFFNC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::LwlynSmithFFNC

namespace {
  void TriggerDictionaryInitialization_libGPhQELXS_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/QuasiElastic/XSection",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/QuasiElastic/XSection",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/QuasiElastic/XSection",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/QuasiElastic/XSection/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhQELXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class NewQELXSec;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/ELFormFactorsModelI.h")))  ELFormFactorsModelI;}
namespace genie{class TransverseEnhancementFFModel;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/QELFormFactorsModelI.h")))  __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/LwlynSmithFF.h")))  QELFormFactorsModelI;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/ELFormFactors.h")))  __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/LwlynSmithFF.h")))  ELFormFactors;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/AxialFormFactorModelI.h")))  __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/LwlynSmithFF.h")))  AxialFormFactorModelI;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/AxialFormFactor.h")))  __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/LwlynSmithFF.h")))  AxialFormFactor;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/LwlynSmithFF.h")))  LwlynSmithFF;}
namespace genie{class LwlynSmithFFDeltaS;}
namespace genie{class ZExpELFormFactorModel;}
namespace genie{class DipoleELFormFactorsModel;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/QELFormFactors.h")))  QELFormFactors;}
namespace genie{class LwlynSmithQELCCPXSec;}
namespace genie{class DipoleAxialFormFactorModel;}
namespace genie{class BBA05ELFormFactorsModel;}
namespace genie{class QELXSec;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/QuasiElastic/XSection/SmithMonizUtils.h")))  SmithMonizUtils;}
namespace genie{class SmithMonizQELCCXSec;}
namespace genie{class SmithMonizQELCCPXSec;}
namespace genie{class BBA07ELFormFactorsModel;}
namespace genie{class NievesQELCCPXSec;}
namespace genie{class LwlynSmithFFCC;}
namespace genie{class RosenbluthPXSec;}
namespace genie{class AhrensNCELPXSec;}
namespace genie{class KuzminNaumov2016AxialFormFactorModel;}
namespace genie{class BBA03ELFormFactorsModel;}
namespace genie{class ZExpAxialFormFactorModel;}
namespace genie{class LwlynSmithFFNC;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhQELXS dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::NewQELXSec

\brief    Computes the Quasi Elastic (QEL) total cross section. \n
          Is a concrete implementation of the XSecIntegratorI interface. \n

\author   Steven Gardiner <gardiner \at fnal.gov>
          Fermi National Accelerator Laboratory

\created  February 26, 2019

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NEW_QEL_XSEC_H_
#define _NEW_QEL_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"
#include "Physics/QuasiElastic/XSection/QELUtils.h"

#include "TMath.h"
#include "Math/IFunction.h"
#include "Math/Integrator.h"

namespace genie {

class NuclearModelI;
class VertexGenerator;

namespace utils {
  namespace gsl   {

    class FullQELdXSec : public ROOT::Math::IBaseFunctionMultiDim
    {
     public:
       FullQELdXSec(const XSecAlgorithmI* xsec_model, const Interaction* interaction,
         QELEvGen_BindingMode_t binding_mode, double min_angle_EM);
       virtual ~FullQELdXSec();

       // ROOT::Math::IBaseFunctionMultiDim interface
       unsigned int NDim(void) const;
       double DoEval(const double* xin) const;
       ROOT::Math::IBaseFunctionMultiDim* Clone(void) const;

       Interaction* GetInteractionPtr();
       const Interaction& GetInteraction() const;

     private:
       const XSecAlgorithmI* fXSecModel;
       const NuclearModelI* fNuclModel;
       Interaction* fInteraction;
       QELEvGen_BindingMode_t fHitNucleonBindingMode;
       double fMinAngleEM;
    };

  } // gsl   namespace
} // utils namespace

class NewQELXSec : public XSecIntegratorI {

public:

  NewQELXSec(void);
  NewQELXSec(std::string config);

  /// XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI* model, const Interaction* i) const;

  /// Overload the Algorithm::Configure() methods to load private data
  /// members from configuration options
  void Configure(const Registry& config);
  void Configure(std::string config);


private:

  void LoadConfig (void);

  // Configuration obtained from cross section model
  QELEvGen_BindingMode_t fBindingMode;

  // XML configuration parameters
  std::string fGSLIntgType;
  double fGSLRelTol;
  unsigned int fGSLMaxEval;
  AlgId fVertexGenID;
  int fNumNucleonThrows;
  double fMinAngleEM;
};


} // genie namespace

#endif  // _NEW_QEL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::TransverseEnhancementFFModel

\brief    Modification of magnetic form factors to match observed enhancement
          in transverse cross section of the quasi-elastic peak.
          Implements ElFormFactorsModelI.  Requires another subclass of
          ElFormFactorsModelI to calculate original form factors, which
          are then enhances.

\ref      http://arxiv.org/pdf/1106.0340
          http://arxiv.org/abs/1405.0583

\author   Brian Coopersmith, University of Rochester

\created  10/22/2014

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _TRANSVERSE_ENHANCEMENT_FF_MODEL_H_
#define _TRANSVERSE_ENHANCEMENT_FF_MODEL_H_

#include "Physics/QuasiElastic/XSection/ELFormFactorsModelI.h"

namespace genie {
class Target;

class TransverseEnhancementFFModel : public ELFormFactorsModelI {

public:
  TransverseEnhancementFFModel();
  TransverseEnhancementFFModel(string config);
  virtual ~TransverseEnhancementFFModel();

  // implement the ELFormFactorsModelI interface
  double Gep (const Interaction * interaction) const;
  double Gmp (const Interaction * interaction) const;
  double Gen (const Interaction * interaction) const;
  double Gmn (const Interaction * interaction) const;
  
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);
  
  void SetElFFBaseModel(const ELFormFactorsModelI* ffBase) const {
    fElFormFactorsBase = ffBase;
  }

private:

  void GetTransEnhParams(const Target& target, double* transEnhA,
                         double* transEnhB) const;
  void LoadConfig(void);
  double GetTransEnhMagFF(
      double magFF, const Interaction * interaction) const;
 
  mutable ELFormFactorsModelI const* fElFormFactorsBase;
  map<int, double> fNucMagFF_RT_A;
  map<int, double> fNucMagFF_RT_B;
  
  map<pair<int, int>, double> fRangeMagFF_RT_A;
  map<pair<int, int>, double> fRangeMagFF_RT_B;
};

}         // genie namespace
#endif    // _TRANSVERSE_ENHANCEMENT_FF_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::LwlynSmithFFDeltaS.h

\brief    Is a concrete implementation of the QELFormFactorsModelI:
          Form Factors for Quasi Elastic CC vN Delta S=1 scattering.

\ref      Equations for the strange form factors are taken from Cabibbo 
          and Chilton, Phys.Rev. 137 (1965) B1628-B1634 and 
          Alam et al., J.Phys. G42 (2015) no.5, 055107.

\author   Hugh Gallagher <Hugh.Gallagher \at tufts.edu>
          Tufts University 

\created  April 10, 2016

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _LLEWELLYN_SMITH_DELTAS_FORM_FACTOR_MODEL_H_
#define _LLEWELLYN_SMITH_DELTAS_FORM_FACTOR_MODEL_H_

#include "Physics/QuasiElastic/XSection/LwlynSmithFF.h"

namespace genie {

class LwlynSmithFFDeltaS : public LwlynSmithFF {

public:
  LwlynSmithFFDeltaS();
  LwlynSmithFFDeltaS(string config);
  virtual ~LwlynSmithFFDeltaS();

  // QELFormFactorModelI interface implementation
  double F1V    (const Interaction * interaction) const;
  double xiF2V  (const Interaction * interaction) const;
  double FA     (const Interaction * interaction) const;
  double Fp     (const Interaction * interaction) const;
};

}      // genie namespace

#endif

//____________________________________________________________________________
/*!

\class    genie::ELFormFactors

\brief    A class holding the Elastic Form Factors Ge,Gm

          This class is using the \b Strategy Pattern. \n

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Apr 20, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _EL_FORM_FACTORS_H_
#define _EL_FORM_FACTORS_H_

#include <iostream>

#include "Physics/QuasiElastic/XSection/ELFormFactorsModelI.h"

using std::ostream;

namespace genie {

class ELFormFactors;
class Interaction;

ostream & operator << (ostream & stream, const ELFormFactors & ff);

class ELFormFactors {

public:
  ELFormFactors();
  ELFormFactors(const ELFormFactors & form_factors);
  virtual ~ELFormFactors() { }

  //! Attach an algorithm
  void   SetModel  (const ELFormFactorsModelI * model);

  //! Calculate the form factors for the input interaction using the attached algorithm
  void   Calculate (const Interaction * interaction);

  //! Get the computed form factor Gep
  double Gep (void) const { return fGep; }

  //! Get the computed form factor Gmp
  double Gmp (void) const { return fGmp; }

  //! Get the computed form factor Gen
  double Gen (void) const { return fGen; }

  //! Get the computed form factor Gmn
  double Gmn (void) const { return fGmn; }

  //! Get the attached model
  const ELFormFactorsModelI * Model (void) const {return fModel;}

  void   Reset    (Option_t * opt="");
  void   Copy     (const ELFormFactors & ff);
  bool   Compare  (const ELFormFactors & ff) const;
  void   Print    (ostream & stream) const;

  bool             operator == (const ELFormFactors & ff) const;
  ELFormFactors &  operator =  (const ELFormFactors & ff);
  friend ostream & operator << (ostream & stream, const ELFormFactors & ff);

private:

  double fGep;
  double fGmp;
  double fGen;
  double fGmn;

  const ELFormFactorsModelI * fModel;
};

}        // genie namespace

#endif   // _QEL_FORM_FACTORS_H_
//____________________________________________________________________________
/*!

\class    genie::ZExpELFormFactorModel

\brief    Concrete implementation of the ELFormFactorModelI interface.
          Computes the EL form factor using the model-independent
          z-expansion technique

\ref      Hill et al.
          arXiv:1008.4619
          DOI: 10.1103/PhysRevD.82.113005

\author   Aaron Meyer <asmeyer2012 \at uchicago.edu>
          based off DipoleELFormFactorsModel by
          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          STFC, Rutherford Appleton Laboratory

\created  August 16, 2013

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _Z_EXPANSION_EL_FORM_FACTOR_MODEL_H_
#define _Z_EXPANSION_EL_FORM_FACTOR_MODEL_H_

#include "Physics/QuasiElastic/XSection/ELFormFactorsModelI.h"

namespace genie {

class ZExpELFormFactorModel : public ELFormFactorsModelI {

public:
  ZExpELFormFactorModel();
  ZExpELFormFactorModel(string config);
  virtual ~ZExpELFormFactorModel();

  // implement the ELFormFactorModelI interface
  double Gep (const Interaction * interaction) const;
  double Gen (const Interaction * interaction) const;
  double Gmp (const Interaction * interaction) const;
  double Gmn (const Interaction * interaction) const;

  // overload Algorithm's Configure() 
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

private:

  // calculate z parameter used in expansion
  double CalculateZ(double q2) const;
  void FixCoeffs (void);
  void FixEL0     (void);
  void FixQ4Limit(void);
  void LoadConfig(void);

  bool   fQ4limit;
  int    fKmax;
  double fT0;
  double fTcut;
  double fGep0;
  double fGmp0;
  double fGen0;
  double fGmn0;
  //double fZ_An[11];
  double* fZ_APn;
  double* fZ_BPn;
  double* fZ_ANn;
  double* fZ_BNn;
};

}         // genie namespace

#endif    // _Z_EXPANSION_EL_FORM_FACTOR_MODEL_H_

//____________________________________________________________________________
/*!

\class    genie::DipoleELFormFactorsModel

\brief    Concrete implementation of the ELFormFactorsModelI interface.
          Computes dipole elastic form factors.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Oct 19, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIPOLE_EL_FORM_FACTORS_MODEL_H_
#define _DIPOLE_EL_FORM_FACTORS_MODEL_H_

#include "Physics/QuasiElastic/XSection/ELFormFactorsModelI.h"

namespace genie {

class DipoleELFormFactorsModel : public ELFormFactorsModelI {

public:
  DipoleELFormFactorsModel();
  DipoleELFormFactorsModel(string config);
  virtual ~DipoleELFormFactorsModel();

  // implement the ELFormFactorsModelI interface
  double Gep (const Interaction * interaction) const;
  double Gmp (const Interaction * interaction) const;
  double Gen (const Interaction * interaction) const;
  double Gmn (const Interaction * interaction) const;

  // overload Algorithm's Configure() 
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

private:

  void LoadConfig(void);

  double fMv;
  double fMv2;
  double fMuP;
  double fMuN;
};

}         // genie namespace

#endif    // _DIPOLE_EL_FORM_FACTORS_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::LwlynSmithFF

\brief    Abstract Base Class:
          implements the QELFormFactorsModelI interface but can not be
          instantiated.

          Its sole purpose of existence is to transmit common implementation
          (related to the Llewellyn-Smith model for QEL vN scattering) to its
          concrete subclasses: LwlynSmithFFCC, LwlynSmithFFNC.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004


\update   AM - Changed axial form factor calculation to an algorithm with a
          configurable model
\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _LLEWELLYN_SMITH_FORM_FACTOR_MODEL_H_
#define _LLEWELLYN_SMITH_FORM_FACTOR_MODEL_H_

#include "Physics/QuasiElastic/XSection/QELFormFactorsModelI.h"
#include "Physics/QuasiElastic/XSection/ELFormFactors.h"
#include "Physics/QuasiElastic/XSection/AxialFormFactor.h"

namespace genie {

class ELFormFactorsModelI;
class AxialFormFactorModelI;

class LwlynSmithFF : public QELFormFactorsModelI {

public:

  virtual ~LwlynSmithFF();

  // QELFormFactorModelI interface implementation
  virtual double F1V     (const Interaction * interaction) const;
  virtual double xiF2V   (const Interaction * interaction) const;
  virtual double FA      (const Interaction * interaction) const;
  virtual double Fp      (const Interaction * interaction) const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  virtual void Configure(const Registry & config);
  virtual void Configure(string config);

protected:

  LwlynSmithFF();
  LwlynSmithFF(string name);
  LwlynSmithFF(string name, string config);

  virtual void LoadConfig (void);

  virtual double tau    (const Interaction * interaction) const;
  virtual double GVE    (const Interaction * interaction) const;
  virtual double GVM    (const Interaction * interaction) const;

  virtual double F1P    (const Interaction * interaction) const;  
  virtual double F2P    (const Interaction * interaction) const;  
  virtual double F1N    (const Interaction * interaction) const;  
  virtual double F2N    (const Interaction * interaction) const;  
 
  virtual double StrangeF1V   (const Interaction * interaction) const;
  virtual double StrangexiF2V (const Interaction * interaction) const;
  virtual double StrangeFA    (const Interaction * interaction) const;
  
  const ELFormFactorsModelI   * fElFFModel;
  const AxialFormFactorModelI * fAxFFModel;

  mutable ELFormFactors   fELFF;
  mutable AxialFormFactor fAxFF;

  double fMuP;
  double fMuN;
  double fSin28w;
  double fFDratio;   
  bool fCleanUpfElFFModel;
};

}       // genie namespace

#endif  

//____________________________________________________________________________
/*!

\class    genie::ELFormFactorsModelI

\brief    Pure abstract base class. Defines the ELFormFactorsModelI interface
          to be implemented by any algorithmic class computing Elastic Form
          Factors.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _EL_FORM_FACTORS_MODEL_I_H_
#define _EL_FORM_FACTORS_MODEL_I_H_

#include "Framework/Algorithm/Algorithm.h"

namespace genie {

class Interaction;

class ELFormFactorsModelI : public Algorithm {

public:
  virtual ~ELFormFactorsModelI();

  //! Compute the elastic form factor G_{ep} for the input interaction
  virtual double Gep (const Interaction * interaction) const = 0;

  //! Compute the elastic form factor G_{mp} for the input interaction
  virtual double Gmp (const Interaction * interaction) const = 0;

  //! Compute the elastic form factor G_{en} for the input interaction
  virtual double Gen (const Interaction * interaction) const = 0;

  //! Compute the elastic form factor G_{mn} for the input interaction
  virtual double Gmn (const Interaction * interaction) const = 0;

protected:
  ELFormFactorsModelI();
  ELFormFactorsModelI(string name);
  ELFormFactorsModelI(string name, string config);
};

}         // genie namespace
#endif    // _EL_FORM_FACTORS_MODEL_I_H_
//____________________________________________________________________________
/*!

\class    genie::LwlynSmithQELCCPXSec

\brief    Computes neutrino-nucleon(nucleus) QELCC differential cross section
          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      C.H.Llewellyn Smith, Physics Reports (Sect. C of Physics Letters) 3,
          No. 5  (1972) 261-379

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 05, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _LLEWELLYN_SMITH_QELCC_CROSS_SECTION_H_
#define _LLEWELLYN_SMITH_QELCC_CROSS_SECTION_H_

#include "Physics/NuclearState/NuclearModelI.h"
#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/QuasiElastic/XSection/QELFormFactors.h"
#include "Physics/QuasiElastic/XSection/QELUtils.h"
#include "Physics/NuclearState/PauliBlocker.h"

namespace genie {

class QELFormFactorsModelI;
class XSecIntegratorI;

class LwlynSmithQELCCPXSec : public XSecAlgorithmI {

public:
  LwlynSmithQELCCPXSec();
  LwlynSmithQELCCPXSec(string config);
  virtual ~LwlynSmithQELCCPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  double FullDifferentialXSec(const Interaction * i) const;

  void LoadConfig (void);

  mutable QELFormFactors       fFormFactors;      ///<
  const QELFormFactorsModelI * fFormFactorsModel; ///<
  const XSecIntegratorI *      fXSecIntegrator;   ///<
  double                       fCos8c2;           ///< cos^2(cabibbo angle)

  double                       fXSecScale;        ///< external xsec scaling factor

  // Variables for integrating
  const NuclearModelI *        fNuclModel;
  bool   fLFG;                         ///< If the nuclear model is lfg alway average over nucleons
  bool   fDoAvgOverNucleonMomentum;    ///< Average cross section over hit nucleon monentum?
  double fEnergyCutOff;                ///< Average only for energies below this cutoff defining
                                       ///< the region where nuclear modeling details do matter

  /// Enum specifying the method to use when calculating the binding energy of
  /// the initial hit nucleon during spline generation
  QELEvGen_BindingMode_t fIntegralNucleonBindingMode;

  /// Whether to apply Pauli blocking in FullDifferentialXSec
  bool fDoPauliBlocking;
  /// The PauliBlocker instance to use to apply that correction
  const genie::PauliBlocker* fPauliBlocker;
};

}       // genie namespace

#endif
//____________________________________________________________________________
/*!

\class    genie::DipoleAxialFormFactorModel

\brief    Concrete implementation of the AxialFormFactorModelI interface.
          Computes the axial form factor using the dipole form factor
          approximation.

\author   Aaron Meyer <asmeyer2012 \at uchicago.edu>
          based off DipoleELFormFactorsModel by
          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          STFC, Rutherford Appleton Laboratory

\created  August 16, 2013

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIPOLE_AXIAL_FORM_FACTOR_MODEL_H_
#define _DIPOLE_AXIAL_FORM_FACTOR_MODEL_H_

#include "Physics/QuasiElastic/XSection/AxialFormFactorModelI.h"

namespace genie {

class DipoleAxialFormFactorModel : public AxialFormFactorModelI {

public:
  DipoleAxialFormFactorModel();
  DipoleAxialFormFactorModel(string config);
  virtual ~DipoleAxialFormFactorModel();

  // implement the AxialFormFactorModelI interface
  double FA (const Interaction * interaction) const;

  // overload Algorithm's Configure() 
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

private:

  void LoadConfig(void);

  double fMa;  ///< axial mass
  double fMa2;
  double fFA0; ///< FA(q2=0)
};

}         // genie namespace

#endif    // _DIPOLE_AXIAL_FORM_FACTOR_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::BBA05ELFormFactorsModel

\brief    Concrete implementation of the ELFormFactorsModelI interface.
          Computes elastic form factors using the BBA2005 parameterization.

\ref      R.Bradford, A.Bodek, H.Budd and J.Arrington, hep-ex/0602017

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Oct 19, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BBA2005_EL_FORM_FACTORS_MODEL_H_
#define _BBA2005_EL_FORM_FACTORS_MODEL_H_

#include "Physics/QuasiElastic/XSection/ELFormFactorsModelI.h"

namespace genie {

typedef struct SBBA2005Fit
{
  double a0, a1, a2, b1, b2, b3, b4;
}
BBA2005Fit_t;

class BBA05ELFormFactorsModel : public ELFormFactorsModelI {

public:
  BBA05ELFormFactorsModel();
  BBA05ELFormFactorsModel(string config);
  virtual ~BBA05ELFormFactorsModel();

  // implement the ELFormFactorsModelI interface
  double Gep (const Interaction * interaction) const;
  double Gmp (const Interaction * interaction) const;
  double Gen (const Interaction * interaction) const;
  double Gmn (const Interaction * interaction) const;

  // overload Algorithm's Configure() to load the BBA2005Fit_t
  // structs from the configuration Registry
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

private:

  // fill data members from the configuration Registry
  void LoadConfig(void);

  // the actual BBA2005 fit function
  double BBA05Fit (double tau, const BBA2005Fit_t & fp) const;
  double tau      (const Interaction * interaction) const;

  // model parameters.
  BBA2005Fit_t fGep;   ///< BBA2005 fit coefficients for Gep
  BBA2005Fit_t fGen;   ///< BBA2005 fit coefficients for Gen
  BBA2005Fit_t fGmp;   ///< BBA2005 fit coefficients for Gmp
  BBA2005Fit_t fGmn;   ///< BBA2005 fit coefficients for Gmn
  double       fMuP;   ///< Anomalous proton magnetic moment
  double       fMuN;   ///< Anomalous neutron magnetic moment
};

}         // genie namespace

#endif    // _BBA2005_EL_FORM_FACTORS_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::QELXSec

\brief    Computes the Quasi Elastic (QEL) cross section. \n
          Is a concrete implementation of the XSecIntegratorI interface. \n

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 04, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QEL_XSEC_H_
#define _QEL_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class NuclearModelI;

class QELXSec : public XSecIntegratorI {

public:
  QELXSec();
  QELXSec(string config);
  virtual ~QELXSec();

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
#endif  // _QEL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::SmithMonizQELCCXSec

\brief    Computes the Quasi Elastic (QEL) cross section by Smith Moniz model. \n
          Is a concrete implementation of the XSecIntegratorI interface. \n

\author   Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          adapted from  fortran code provided by 
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

#ifndef _SMITH_MONIZ_QEL_XSEC_H_
#define _SMITH_MONIZ_QEL_XSEC_H_

#include <Math/IFunction.h>

#include "Physics/XSectionIntegration/XSecIntegratorI.h"
#include "Physics/QuasiElastic/XSection/SmithMonizUtils.h"

namespace genie {



class SmithMonizQELCCXSec : public XSecIntegratorI {

public:
  SmithMonizQELCCXSec();
  SmithMonizQELCCXSec(string config);
  virtual ~SmithMonizQELCCXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);
  
protected:
  string fGSLIntgType2D;  ///< name of GSL 2D numerical integrator 
  double fGSLRelTol2D;    ///< required relative tolerance (error) for 2D integrator

private:
  mutable SmithMonizUtils * sm_utils;
  
  void LoadConfig (void);
  
};

//_____________________________________________________________________________________
// 
// GSL wrappers 
//
//_____________________________________________________________________________________

 namespace utils {
  namespace gsl   {

   class d2Xsec_dQ2dv: public ROOT::Math::IBaseFunctionMultiDim
   {
    public:
      d2Xsec_dQ2dv(const XSecAlgorithmI * m, const Interaction * i);
     ~d2Xsec_dQ2dv();
      // ROOT::Math::IBaseFunctionMultiDim interface
      unsigned int                        NDim   (void)               const;
      double                              DoEval (const double * xin) const;
      ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
    
    private:
	  const XSecAlgorithmI * fModel;
      const Interaction *    fInteraction;
	  mutable SmithMonizUtils * sm_utils;
   };
   

  } // gsl   namespace
 } // utils namespace
 
}       // genie namespace
#endif  // _SMITH_MONIZ_QEL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::SmithMonizQELCCPXSec

\brief    Computes neutrino-nucleon(nucleus) QELCC differential cross section.
          Is a concrete implementation of the XSecAlgorithmI interface. 

\ref      [1] R.A.Smith and E.J.Moniz, Nuclear Physics  B43, (1972) 605-622 \n
          [2] K.S. Kuzmin, V.V. Lyubushkin, V.A.Naumov Eur. Phys. J. C54, (2008) 517-538

\author   Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          adapted from  fortran code provided by 
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

#ifndef _SMITH_MONITZ_QELCC_CROSS_SECTION_H_
#define _SMITH_MONITZ_QELCC_CROSS_SECTION_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/QuasiElastic/XSection/QELFormFactors.h"
#include "Physics/QuasiElastic/XSection/SmithMonizUtils.h"


namespace genie {

class QELFormFactorsModelI;
class XSecIntegratorI;

class SmithMonizQELCCPXSec : public XSecAlgorithmI {

public:
  SmithMonizQELCCPXSec();
  SmithMonizQELCCPXSec(string config);
  virtual ~SmithMonizQELCCPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t kps) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  mutable SmithMonizUtils * sm_utils;
  
  void   LoadConfig (void);
  double d3sQES_dQ2dvdkF_SM (const Interaction * interaction) const;
  double dsQES_dQ2_SM(const Interaction * interaction) const;
  double d2sQES_dQ2dv_SM(const Interaction * i) const;
  
  double                       fXSecScale;        ///< external xsec scaling factor
  mutable QELFormFactors       fFormFactors;      
  const QELFormFactorsModelI * fFormFactorsModel; 
  const XSecIntegratorI *      fXSecIntegrator;   
  double                       fVud2;             ///< |Vud|^2(square of magnitude ud-element of CKM-matrix)
  mutable int                          fn_NT;
  mutable double                       fQ2;
  mutable double                       fv;
  mutable double                       fE_nu;
  mutable double                       fE_lep;
  mutable double                       fmm_ini;
  mutable double                       fmm_fin;
  mutable double                       fm_tar;
  mutable double                       fmm_tar;
  mutable double                       fk1;
  mutable double                       fk2;
  mutable double                       fk7;
  mutable double                       fqv;
  mutable double                       fqqv;
  mutable double                       fcosT_k;
  mutable double                       fF_V;
  mutable double                       fF_M;
  mutable double                       fF_A;
  mutable double                       fF_P;
  mutable double                       fFF_V;
  mutable double                       fFF_M;
  mutable double                       fFF_A;
  mutable double                       fW_1;
  mutable double                       fW_2;
  mutable double                       fW_3;
  mutable double                       fW_4;
  mutable double                       fW_5;
   
  
};


} // genie namespace

#endif  //_SMITH_MONITZ_QELCC_CROSS_SECTION_H_

//____________________________________________________________________________
/*!

\class    genie::BBA07ELFormFactorsModel

\brief    Computes elastic form factors using the BBA2007 parameterization.
          Concrete implementation of the ELFormFactorsModelI interface.

\ref      A.Bodek, R.Bradford, H.Budd and S.Avvakumov, 
          Euro.Phys.J.C53 (2008);[arXiv:0708.1946 [hep-ex]]

\author   Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          adapted from  fortran code provided by 
          Konstantin Kuzmin <kkuzmin@theor.jinr.ru>, \n
          Joint Institute for Nuclear Research,  Institute for Theoretical and Experimental Physics \n
          Vladimir Lyubushkin, \n
          Joint Institute for Nuclear Research \n
          Vadim Naumov <vnaumov@theor.jinr.ru>, \n
          Joint Institute for Nuclear Research  \n
          based on code of Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk> \n
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Dec 01, 2017

\cpright  Copyright (c) 2003-2017, GENIE Neutrino MC Generator Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BBA2007_EL_FORM_FACTORS_MODEL_H_
#define _BBA2007_EL_FORM_FACTORS_MODEL_H_

#include "Physics/QuasiElastic/XSection/ELFormFactorsModelI.h"

namespace genie {

typedef struct SBBA2007Fit
{
  double a1, b1, b2, b3, p1, p2, p3, p4, p5, p6, p7;
}
BBA2007Fit_t;

class BBA07ELFormFactorsModel : public ELFormFactorsModelI {

public:
  BBA07ELFormFactorsModel();
  BBA07ELFormFactorsModel(string config);
  virtual ~BBA07ELFormFactorsModel();

  // implement the ELFormFactorsModelI interface
  double Gep (const Interaction * interaction) const;
  double Gmp (const Interaction * interaction) const;
  double Gen (const Interaction * interaction) const;
  double Gmn (const Interaction * interaction) const;

  // overload Algorithm's Configure() to load the BBA2007Fit_t
  // structs from the configuration Registry
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

private:

  // fill data members from the configuration Registry
  void LoadConfig(void);

  
  double AN (double x,double c1, double c2, double c3,double c4,double c5, double c6, double c7) const;
  
  

  // model parameters.
  BBA2007Fit_t fGep;   ///< BBA2007 fit coefficients for Gep
  BBA2007Fit_t fGen;   ///< BBA2007 fit coefficients for Gen
  BBA2007Fit_t fGmp;   ///< BBA2007 fit coefficients for Gmp
  BBA2007Fit_t fGmn;   ///< BBA2007 fit coefficients for Gmn
  double       fMuP;   ///< Anomalous proton magnetic moment
  double       fMuN;   ///< Anomalous neutron magnetic moment
};

}         // genie namespace

#endif    // _BBA2007_EL_FORM_FACTORS_MODEL_H_
//____________________________________________________________________________
/*!

\class   genie::exceptions::NievesQELException

\brief   An exception thrown by NievesQELCCPXSec for kinematics problems.
         When failure occurs, set xsec = 0.

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         STFC, Rutherford Appleton Laboratory

         Steve Dytman <dytman \at pitt.edu>
	 Univ. of Pittsburgh         
	 
	 Joe Johnston <jpj13 \at pitt.edu>
	 Univ. of Pittsburgh

\created June 2015

\cpright Copyright (c) 2003-2019, The GENIE Collaboration
         For the full text of the license visit http://copyright.genie-mc.org
         or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NIEVES_QEL_EXCEPTION_H_
#define _NIEVES_QEL_EXCEPTION_H_

#include <string>
#include <ostream>

#include <TMath.h>

using std::string;
using std::ostream;

namespace genie {
namespace exceptions {

class NievesQELException {

public :
  NievesQELException();
  NievesQELException(const NievesQELException & exception);
 ~NievesQELException();

  void SetReason(string reason) { fReason = reason; }

  string ShowReason(void) const { return fReason; }

  void Init  (void);
  void Copy  (const NievesQELException & exception);
  void Print (ostream & stream) const;

  friend ostream & operator << (
             ostream & stream, const NievesQELException & exception);

private:

  string fReason;
};

}      // exceptions namespace
}      // genie namespace

#endif // _NIEVES_QEL_EXCEPTION_H_
//____________________________________________________________________________
/*!

\class    genie::NievesQELCCPXSec

\brief    Computes neutrino-nucleon(nucleus) QELCC differential cross section
          with RPA corrections
          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      Physical Review C 70, 055503 (2004)

\author   Joe Johnston, University of Pittsburgh
          Steven Dytman, University of Pittsburgh

\created  April 2016

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NIEVES_QELCC_CROSS_SECTION_H_
#define _NIEVES_QELCC_CROSS_SECTION_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/QuasiElastic/XSection/QELFormFactors.h"
#include "Physics/NuclearState/FermiMomentumTable.h"
#include <complex>
#include <Math/IFunction.h>
#include "Physics/NuclearState/NuclearModelI.h"
#include "Physics/NuclearState/PauliBlocker.h"
#include "Physics/QuasiElastic/XSection/QELUtils.h"

namespace genie {

typedef enum EQELRmax {
  // Use the same maximum radius as VertexGenerator (3*R0*A^(1/3))
  kMatchVertexGeneratorRmax,

  // Use the method for calculting Rmax from Nieves' Fortran code
  kMatchNieves
} Nieves_Coulomb_Rmax_t;

class QELFormFactorsModelI;
class XSecIntegratorI;

class NievesQELCCPXSec : public XSecAlgorithmI {

public:
  NievesQELCCPXSec();
  NievesQELCCPXSec(string config);
  virtual ~NievesQELCCPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void LoadConfig (void);

  mutable QELFormFactors       fFormFactors;      ///<
  const QELFormFactorsModelI * fFormFactorsModel; ///<
  const XSecIntegratorI *      fXSecIntegrator;   ///<
  double                       fCos8c2;           ///< cos^2(cabibbo angle)

  double                       fXSecScale;        ///< external xsec scaling factor

  double                       fhbarc;            ///< hbar*c in GeV*fm

  // mutable for testing purposes only!
  mutable bool                         fRPA;              ///< use RPA corrections
  bool                         fCoulomb;          ///< use Coulomb corrections

  const NuclearModelI*         fNuclModel;        ///< Nuclear Model for integration
  // Detect whether the nuclear model is local Fermi gas, and store
  // the relativistic Fermi momentum table if not
  bool                         fLFG;
  const FermiMomentumTable *   fKFTable;
  string                       fKFTableName;

  /// Enum specifying the method to use when calculating the binding energy of
  /// the initial hit nucleon during spline generation
  QELEvGen_BindingMode_t fIntegralNucleonBindingMode;

  /// Cutoff lab-frame probe energy above which the effects of Fermi motion and
  /// binding energy are ignored when computing the total cross section
  double fEnergyCutOff;

  /// Whether to apply Pauli blocking in XSec()
  bool fDoPauliBlocking;
  /// The PauliBlocker instance to use to apply that correction
  const genie::PauliBlocker* fPauliBlocker;

  /// Nuclear radius parameter r = R0*A^(1/3) used to compute the
  /// maximum radius for integration of the Coulomb potential
  /// when matching the VertexGenerator method
  double fR0;

  /// Enum variable describing which method of computing Rmax should be used
  /// for integrating the Coulomb potential
  Nieves_Coulomb_Rmax_t fCoulombRmaxMode;

  //Functions needed to calculate XSec:

  // Calculates values of CN, CT, CL, and imU, and stores them in the provided
  // variables. If target is not a nucleus, then CN, CN, and CL are all 1.0.
  // r must be in units of fm.
  void CNCTCLimUcalc(TLorentzVector qTildeP4, double M, double r,
    bool is_neutrino, bool tgtIsNucleus, int tgt_pdgc, int A, int Z, int N,
    bool hitNucIsProton, double & CN, double & CT, double & CL, double & imU,
    double & t0, double & r00, bool assumeFreeNucleon) const;

  //Equations to calculate the relativistic Lindhard function for Amunu
  std::complex<double> relLindhardIm(double q0gev, double dqgev,
				     double kFngev, double kFpgev,
				     double M, bool isNeutrino,
				     double & t0, double & r00) const;
  std::complex<double> relLindhard(double q0gev, double dqgev,
				   double kFgev, double M,
				   bool isNeutrino,
				   std::complex<double> relLindIm) const;
  std::complex<double> ruLinRelX(double q0, double qm,
				 double kf, double m) const;
  std::complex<double> deltaLindhard(double q0gev, double dqgev,
				     double rho, double kFgev) const;

  // Potential for coulomb correction
  double vcr(const Target * target, double r) const;

  //input must be length 4. Returns 1 if input is an even permutation of 0123,
  //-1 if input is an odd permutation of 0123, and 0 if any two elements
  //are equal
  int leviCivita(int input[]) const;

  double LmunuAnumu(const TLorentzVector neutrinoMom,
    const TLorentzVector inNucleonMom, const TLorentzVector leptonMom,
    const TLorentzVector outNucleonMom, double M, bool is_neutrino,
    const Target& target, bool assumeFreeNucleon) const;

  // NOTE: THE FOLLOWING CODE IS FOR TESTING PURPOSES ONLY
  // Used to print tensor elements and various inputs for comparison to Nieves'
  // fortran code
  mutable bool                 fCompareNievesTensors;     ///< print tensors
  mutable TString              fTensorsOutFile;   ///< file to print tensors to
  mutable double               fVc,fCoulombFactor;
  void CompareNievesTensors(const Interaction* i) const;
  // END TESTING CODE
};
}       // genie namespace

//____________________________________________________________________________
/*!
\class    genie::utils::gsl::wrap::NievesQELIntegrand

\brief    Auxiliary scalar function for integration over the nuclear density
          when calculaing the Coulomb correction in the Nieves QEL xsec model

\author   Joe Johnston, University of Pittsburgh
          Steven Dytman, University of Pittsburgh

\created  June 03, 2016
*/
//____________________________________________________________________________

namespace genie {
 namespace utils {
  namespace gsl   {
   namespace wrap   {

    class NievesQELvcrIntegrand : public ROOT::Math::IBaseFunctionOneDim
    {
     public:
      NievesQELvcrIntegrand(double Rcurr, int A, int Z);
      ~NievesQELvcrIntegrand();
       // ROOT::Math::IBaseFunctionOneDim interface
       unsigned int                      NDim   (void)       const;
       double                            DoEval (double rin) const;
       ROOT::Math::IBaseFunctionOneDim * Clone  (void)       const;
     private:
       double fRcurr;
       double fA;
       double fZ;
    };

   } // wrap namespace
  } // gsl namespace
 } // utils namespace
} // genie namespace


#endif
#ifndef _QEL_UTILS_H_
#define _QEL_UTILS_H_

#include "Framework/Interaction/Interaction.h"
#include "Physics/NuclearState/NuclearModelI.h"
#include "Framework/EventGen/XSecAlgorithmI.h"

#include "TLorentzVector.h"
#include "TVector3.h"

#include <string>

namespace genie {

  // Enumerated type used to specify the method for determining the off-shell energy
  // of the hit nucleon for quasielastic events
  typedef enum EQELEvGenBindingMode {

    // Use removal energy from the nuclear model
    kUseNuclearModel,

    // Calculate binding energy assuming that the remnant nucleus is left in its
    // ground state
    kUseGroundStateRemnant,

    // Leave the struck nucleon on shell, effectively ignoring its binding energy
    kOnShell
  } QELEvGen_BindingMode_t;

  namespace utils {

    double EnergyDeltaFunctionSolutionQEL(const Interaction& inter);

    QELEvGen_BindingMode_t StringToQELBindingMode( const std::string& mode_str );

    double ComputeFullQELPXSec(Interaction* interaction,
      const NuclearModelI* nucl_model, const XSecAlgorithmI* xsec_model,
      double cos_theta_0, double phi_0, double& Eb,
      QELEvGen_BindingMode_t hitNucleonBindingMode, double min_angle_EM = 0.,
      bool bind_nucleon = true);

    double CosTheta0Max(const genie::Interaction& interaction);

    void BindHitNucleon(Interaction& interaction, const NuclearModelI& nucl_model,
      double& Eb, QELEvGen_BindingMode_t hitNucleonBindingMode);
  }
}

#endif
//____________________________________________________________________________
/*!

\class    genie::AxialFormFactor

\brief    A class holding the Axial Form Factor

          This class is using the \b Strategy Pattern. \n

\author   Aaron Meyer <asmeyer2012 \at uchicago.edu>
          based off AxialFormFactorModelI by
          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          STFC, Rutherford Appleton Laboratory

\created  August 19, 2013

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _AXIAL_FORM_FACTOR_H_
#define _AXIAL_FORM_FACTOR_H_

#include <iostream>

#include "Physics/QuasiElastic/XSection/AxialFormFactorModelI.h"

using std::ostream;

namespace genie {

class Interaction;
class AxialFormFactor;
ostream & operator << (ostream & stream, const AxialFormFactor & ff);

class AxialFormFactor {

public:
  AxialFormFactor();
  AxialFormFactor(const AxialFormFactor & form_factors);
  virtual ~AxialFormFactor() { }

  //! Attach an algorithm
  void   SetModel  (const AxialFormFactorModelI * model);

  //! Calculate the form factors for the input interaction using the attached algorithm
  void   Calculate (const Interaction * interaction);

  //! Get the computed axial form factor
  double FA (void) const { return fFA; }

  //! Get the attached model
  const AxialFormFactorModelI * Model (void) const {return fModel;}

  void   Reset    (Option_t * opt="");
  void   Copy     (const AxialFormFactor & ff);
  bool   Compare  (const AxialFormFactor & ff) const;
  void   Print    (ostream & stream) const;

  bool              operator == (const AxialFormFactor & ff) const;
  AxialFormFactor & operator =  (const AxialFormFactor & ff);
  friend ostream  & operator << (ostream & stream, const AxialFormFactor & ff);

private:

  double fFA;

  const AxialFormFactorModelI * fModel;
};

}        // genie namespace

#endif   // _AXIAL_FORM_FACTOR_H_
//____________________________________________________________________________
/*!

\class    genie::LwlynSmithFFCC

\brief    Is a concrete implementation of the QELFormFactorsModelI:
          Form Factors for Quasi Elastic CC vN scattering according to
          Llewellyn-Smith model.

\ref      H.Budd, A.Bodek, J.Arrington, NuINT02 proceedings

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _LLEWELLYN_SMITH_CC_FORM_FACTOR_MODEL_H_
#define _LLEWELLYN_SMITH_CC_FORM_FACTOR_MODEL_H_

#include "Physics/QuasiElastic/XSection/LwlynSmithFF.h"

namespace genie {

class LwlynSmithFFCC : public LwlynSmithFF {

public:
  LwlynSmithFFCC();
  LwlynSmithFFCC(string config);
  virtual ~LwlynSmithFFCC();

  // QELFormFactorModelI interface implementation
  double F1V    (const Interaction * interaction) const;
  double xiF2V  (const Interaction * interaction) const;
  double FA     (const Interaction * interaction) const;
  double Fp     (const Interaction * interaction) const;
};

}      // genie namespace

#endif

//____________________________________________________________________________
/*!

\class    genie::RosenbluthPXSec

\brief    Differential cross section for charged lepton elastic scattering. \n
          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      See for example: 
          R.Bradford, A.Bodek, H.Budd, J.Arrington, Nucl.Phys.B159 (2006) 127
          
\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Sep 15, 2009

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _ROSENBLUTH_CROSS_SECTION_H_
#define _ROSENBLUTH_CROSS_SECTION_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/QuasiElastic/XSection/ELFormFactors.h"

namespace genie {

class XSecIntegratorI;

class RosenbluthPXSec : public XSecAlgorithmI {

public:
  RosenbluthPXSec();
  RosenbluthPXSec(string config);
  virtual ~RosenbluthPXSec();

  // XSecAlgorithmI interface implementation
  double XSec         (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral     (const Interaction * i) const;
  bool   ValidProcess (const Interaction * i) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  void LoadConfig(void);

  const   XSecIntegratorI *     fXSecIntegrator;
  const   ELFormFactorsModelI * fElFFModel;
  mutable ELFormFactors         fELFF;
  bool fCleanUpfElFFModel;
};

}       // genie namespace

#endif  
//____________________________________________________________________________
/*!

\class    genie::AxialFormFactorModelI

\brief    Pure abstract base class. Defines the AxialFormFactorModelI interface
          to be implemented by LlewellynSmith Algorithm for calculating the 
          Axial Form Factor.

\author   Aaron Meyer <asmeyer2012 \at uchicago.edu>
          based off ELFormFactorsModelI by
          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          STFC, Rutherford Appleton Laboratory

\created  August 16, 2013

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _AXIAL_FORM_FACTOR_MODEL_I_H_
#define _AXIAL_FORM_FACTOR_MODEL_I_H_

#include "Framework/Algorithm/Algorithm.h"

namespace genie {

class Interaction;

class AxialFormFactorModelI : public Algorithm {

public:
  virtual ~AxialFormFactorModelI();

  //! Compute the axial form factor
  virtual double FA (const Interaction * interaction) const = 0;

protected:
  AxialFormFactorModelI();
  AxialFormFactorModelI(string name);
  AxialFormFactorModelI(string name, string config);
};

}         // genie namespace
#endif    // _AXIAL_FORM_FACTOR_MODEL_I_H_
//____________________________________________________________________________
/*!

\class    genie::AhrensNCELPXSec

\brief    Differential cross section for v+N / vbar+N elastic scattering. \n
          Is a concrete implementation of the XSecAlgorithmI interface. \n

\ref      R.E.Hendrick and L.Li, Phys.Rev.D 19:779 (1979)
          L.A.Ahrens et al., Phys.Rev.D 35:785 (1987)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Fabruary 15, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _AHRENS_NCEL_CROSS_SECTION_H_
#define _AHRENS_NCEL_CROSS_SECTION_H_

#include "Framework/EventGen/XSecAlgorithmI.h"

namespace genie {

class XSecIntegratorI;

class AhrensNCELPXSec : public XSecAlgorithmI {

public:
  AhrensNCELPXSec();
  AhrensNCELPXSec(string config);
  virtual ~AhrensNCELPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // Override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void LoadConfig(void);

  const XSecIntegratorI * fXSecIntegrator;

  double fkAlpha;
  double fkGamma; 
  double fEta;
  double fFa0;
  double fMa2;
  double fMv2;
  double fMuP;
  double fMuN;
};

}       // genie namespace

#endif  
//____________________________________________________________________________
/*!

\class    genie::KuzminNaumov2016AxialFormFactorModel

\brief    Concrete implementation of the AxialFormFactorModelI interface.
          Computes the axial form factor using a running MA 

\ref      Konstantin S. Kuzmin and Vadim A. Naumov. 
          Running axial-vector mass of the nucleon for a precise evaluation of the 
          quasielastic (anti)neutrino–nucleus cross sectionsent. 2016 (in preparation).

\author   Hugh Gallagher <hugh.gallagher \at tufts.edu>
          From code provided by: 
          Igor Kakorin <idkakorin \at gmail.com>
          Joint Institute for Nuclear Research, Dubna

\created  August 1, 2016

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _KUZMIN_NAUMOV_2016_AXIAL_FORM_FACTOR_MODEL_H_
#define _KUZMIN_NAUMOV_2016_AXIAL_FORM_FACTOR_MODEL_H_

#include "Physics/QuasiElastic/XSection/AxialFormFactorModelI.h"

namespace genie {

class KuzminNaumov2016AxialFormFactorModel : public AxialFormFactorModelI {

public:
  KuzminNaumov2016AxialFormFactorModel();
  KuzminNaumov2016AxialFormFactorModel(string config);
  virtual ~KuzminNaumov2016AxialFormFactorModel();

  // implement the AxialFormFactorModelI interface
  double FA (const Interaction * interaction) const;

  // overload Algorithm's Configure() 
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

private:

  void LoadConfig(void);

  double fMa;  ///< axial mass
  double fMa2;
  double fFA0; ///< FA(q2=0)
  double fE0; ///< E0 for calculating running axial mass: Ma*(1+E0/Enu)
};

}         // genie namespace

#endif    // _KUZMIN_NAUMOV_2016_AXIAL_FORM_FACTOR_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::QELFormFactors

\brief    A class holding Quasi Elastic (QEL) Form Factors.

          This class is using the \b Strategy Pattern. \n
          It can accept requests to calculate itself, for a given interaction,
          that it then delegates to the algorithmic object, implementing the
          QELFormFactorsModelI interface, that it finds attached to itself.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  April 20, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QEL_FORM_FACTORS_H_
#define _QEL_FORM_FACTORS_H_

#include <iostream>

#include "Physics/QuasiElastic/XSection/QELFormFactorsModelI.h"
#include "Framework/Interaction/Interaction.h"

using std::ostream;

namespace genie {

class QELFormFactors;
ostream & operator << (ostream & stream, const QELFormFactors & ff);

class QELFormFactors {

public:

  QELFormFactors();
  QELFormFactors(const QELFormFactors & form_factors);
  virtual ~QELFormFactors() { }

  //! Attach an algorithm
  void   SetModel  (const QELFormFactorsModelI * model);

  //! Compute the form factors for the input interaction using the attached model
  void   Calculate (const Interaction * interaction);

  //! Get the computed form factor F1V
  double F1V    (void) const { return fF1V;   }

  //! Get the computed form factor xi*F2V
  double xiF2V  (void) const { return fxiF2V; }

  //! Get the computed form factor FA
  double FA     (void) const { return fFA;    }

  //! Get the computed form factor Fp
  double Fp     (void) const { return fFp;    }

  //! Get the attached model
  const QELFormFactorsModelI * Model (void) const {return fModel;}

  void   Reset    (Option_t * opt="");
  void   Copy     (const QELFormFactors & ff);
  bool   Compare  (const QELFormFactors & ff) const;
  void   Print    (ostream & stream) const;

  bool             operator == (const QELFormFactors & ff) const;
  QELFormFactors & operator =  (const QELFormFactors & ff);
  friend ostream & operator << (ostream & stream, const QELFormFactors & ff);

private:

  double fF1V;
  double fxiF2V;
  double fFA;
  double fFp;

  const QELFormFactorsModelI * fModel;
};

}        // genie namespace

#endif   // _QEL_FORM_FACTORS_H_
//____________________________________________________________________________
/*!

\class    genie::BBA03ELFormFactorsModel

\brief    Concrete implementation of the ELFormFactorsModelI interface.
          Computes elastic form factors using the BBA2003 parameterization.

\ref      H.Budd, NuINT-02 proceedings

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Oct 19, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _BBA2003_EL_FORM_FACTORS_MODEL_H_
#define _BBA2003_EL_FORM_FACTORS_MODEL_H_

#include "Physics/QuasiElastic/XSection/ELFormFactorsModelI.h"

namespace genie {

typedef struct SBBA2003Fit
{
  double a2, a4, a6, a8, a10, a12;
}
BBA2003Fit_t;

class BBA03ELFormFactorsModel : public ELFormFactorsModelI {

public:
  BBA03ELFormFactorsModel();
  BBA03ELFormFactorsModel(string config);
  virtual ~BBA03ELFormFactorsModel();

  // implement the ELFormFactorsModelI interface
  double Gep (const Interaction * interaction) const;
  double Gmp (const Interaction * interaction) const;
  double Gen (const Interaction * interaction) const;
  double Gmn (const Interaction * interaction) const;

  // overload Algorithm's Configure() to load the BBA2003Fit_t
  // structs from the configuration Registry
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

private:

  // fill data members from the configuration Registry
  void LoadConfig(void);

  // the actual BBA2003 inverse polynomial fit function
  double BBA03Fit(double q2, double g0, const BBA2003Fit_t & fp) const;

  // model parameters.
  BBA2003Fit_t fGep;   ///< BBA2003 fit coefficients for Gep
  BBA2003Fit_t fGmp;   ///< BBA2003 fit coefficients for Gmp
  BBA2003Fit_t fGmn;   ///< BBA2003 fit coefficients for Gmn
  double       fGenA;  ///< Krutov parameterization for Gen
  double       fGenB;  ///< Krutov parameterization for Gen
  double       fQ2Max; ///< Gep/Gmp assummed const for Q2 > Q2Max
  double       fMv;    ///< Elactic vector mass 
  double       fMv2;   ///< Elactic vector mass 
  double       fMuP;   ///< Anomalous proton magnetic moment
  double       fMuN;   ///< Anomalous neutron magnetic moment
};

}         // genie namespace

#endif    // _BBA2003_EL_FORM_FACTORS_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::SmithMonizUtils

\brief    Contains auxiliary functions for Smith-Moniz model. \n
          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      [1] R.A.Smith and E.J.Moniz, Nuclear Physics  B43, (1972) 605-622 \n
          [2] K.S. Kuzmin, V.V. Lyubushkin, V.A.Naumov Eur. Phys. J. C54, (2008) 517-538

\author   Igor Kakorin <kakorin@jinr.ru>, Joint Institute for Nuclear Research \n
          adapted from  fortran code provided by 
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

#ifndef _SMITH_MONIZ_UTILS_H_
#define _SMITH_MONIZ_UTILS_H_

#include <TLorentzVector.h>

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/Interaction/Interaction.h"
#include "Framework/Utils/Range1.h"
#include "Framework/Utils/KineUtils.h"

namespace genie {



class SmithMonizUtils : public Algorithm {

public:
		SmithMonizUtils();
		SmithMonizUtils(string config);
		virtual ~SmithMonizUtils();
		void SetInteraction(const Interaction * i);
		double GetBindingEnergy(void) const;
		double GetFermiMomentum(void) const;
		double GetTheta_k(double v, double qv) const;
		double GetTheta_p(double pv, double v, double qv, double &E_p) const;
		double E_nu_thr_SM(void) const;
		Range1D_t Q2QES_SM_lim(void) const;
		Range1D_t vQES_SM_lim(double Q2) const;
		Range1D_t kFQES_SM_lim(double nu, double Q2) const;
		static double rho(double P_Fermi, double T_Fermi, double p);
		double PhaseSpaceVolume(KinePhaseSpace_t ps) const;
		
		//! methods overloading the Algorithm() interface implementation
		//! to build the fragmentation function from configuration data
		void Configure(const Registry & config);
		void Configure(string config);
	
private:
		template <class C>
		class Func1D
		{
			public: 
				Func1D(const C &obj, double (C::*f)(double) const):obj_(obj), f_(f){}
				~Func1D(){}
				double operator()(double d) {return (obj_.*f_)( d);}
			private:
				const C &obj_;
				double (C::*f_)(double) const;
		};
		
		void   LoadConfig (void);
		double QEL_EnuMin_SM(double E_nu) const;
		double Q2lim1_SM(double Q2) const;
		double Q2lim2_SM(double Q2) const;
		double LambdaFUNCTION(double a, double b, double c) const;
		void DMINFC(Func1D<SmithMonizUtils> &F, double A,double B, double EPS, double DELTA, double &X, double &Y, bool &LLM) const;
		double vQES_SM_low_bound  (double Q2) const;
		double vQES_SM_upper_bound(double Q2) const;
		
		map<int, double> fNucRmvE;
		string fKFTable;
		bool fUseParametrization;
		
		const Interaction *  fInteraction;
		
		// Some often used variables of class.
		// To not calculate them again and again and for speed increase
		// they are initialized at once for multiple use
		double                       E_nu;              ///<  Neutrino energy (GeV)
		double                       m_lep;             ///<  Mass of final charged lepton (GeV)
		double                       mm_lep;            ///<  Squared mass of final charged lepton (GeV)
		double                       m_ini;             ///<  Mass of initial hadron or hadron system (GeV)
		double                       mm_ini;            ///<  Sqared mass of initial hadron or hadron system (GeV)
		double                       m_fin;             ///<  Mass of final hadron or hadron system (GeV)
		double                       mm_fin;            ///<  Squared mass of final hadron or hadron system (GeV)
		double                       m_tar;             ///<  Mass of target nucleus (GeV)
		double                       mm_tar;            ///<  Squared mass of target nucleus (GeV)
		double                       m_rnu;             ///<  Mass of residual nucleus (GeV)
		double                       mm_rnu;            ///<  Squared mass of residual nucleus (GeV)
		double					     P_Fermi;           ///<  Maximum value of Fermi momentum of target nucleon (GeV)
		double                       E_BIN;             ///<  Binding energy (GeV)
mutable	double                       Enu_in;            ///<  Running neutrino energy (GeV)
		
     
};
  

}       // genie namespace
#endif  // _SMITH_MONIZ_UTILS_H_

//____________________________________________________________________________
/*!

\class    genie::ZExpAxialFormFactorModel

\brief    Concrete implementation of the AxialFormFactorModelI interface.
          Computes the axial form factor using the model-independent
          z-expansion technique

\ref      Hill et al.
          arXiv:1008.4619
          DOI: 10.1103/PhysRevD.82.113005

\author   Aaron Meyer <asmeyer2012 \at uchicago.edu>
          based off DipoleELFormFactorsModel by
          Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          STFC, Rutherford Appleton Laboratory

\created  August 16, 2013

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _Z_EXPANSION_AXIAL_FORM_FACTOR_MODEL_H_
#define _Z_EXPANSION_AXIAL_FORM_FACTOR_MODEL_H_

#include "Physics/QuasiElastic/XSection/AxialFormFactorModelI.h"

namespace genie {

class ZExpAxialFormFactorModel : public AxialFormFactorModelI {

public:
  ZExpAxialFormFactorModel();
  ZExpAxialFormFactorModel(string config);
  virtual ~ZExpAxialFormFactorModel();

  // implement the AxialFormFactorModelI interface
  double FA (const Interaction * interaction) const;

  // overload Algorithm's Configure() 
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

private:

  // calculate z parameter used in expansion
  double CalculateZ(double q2) const;
  void FixCoeffs (void);
  void FixA0     (void);
  void FixQ4Limit(void);
  void LoadConfig(void);

  bool   fQ4limit;
  int    fKmax;
  double fT0;
  double fTcut;
  double fFA0;
  //double fZ_An[11];
  double* fZ_An;
};

}         // genie namespace

#endif    // _Z_EXPANSION_AXIAL_FORM_FACTOR_MODEL_H_
//____________________________________________________________________________
/*!

\class    genie::QELFormFactorsModelI

\brief    Pure abstract base class. Defines the QELFormFactorsModelI interface
          to be implemented by any algorithmic class computing Quasi-Elastic
          Form Factors.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QEL_FORM_FACTORS_MODEL_I_H_
#define _QEL_FORM_FACTORS_MODEL_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {

class QELFormFactorsModelI : public Algorithm {

public:
  virtual ~QELFormFactorsModelI();

  //! Compute the form factor F1V for the input interaction
  virtual double F1V   (const Interaction * interaction) const = 0;

  //! Compute the form factor xi*F2V for the input interaction
  virtual double xiF2V (const Interaction * interaction) const = 0;

  //! Compute the form factor FA for the input interaction
  virtual double FA    (const Interaction * interaction) const = 0;

  //! Compute the form factor Fp for the input interaction
  virtual double Fp    (const Interaction * interaction) const = 0;

protected:
  QELFormFactorsModelI();
  QELFormFactorsModelI(string name);
  QELFormFactorsModelI(string name, string config);
};

}         // genie namespace 
#endif    // _QEL_FORM_FACTORS_MODEL_I_H_
//____________________________________________________________________________
/*!

\class    genie::LwlynSmithFFNC

\brief    Concrete implementation of the QELFormFactorsModelI :
          Form Factors for Quasi Elastic NC vN scattering according to
          Llewellyn-Smith model.

\ref      E.A.Paschos and J.Y.Yu, hep-ph/0107261

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _LLEWELLYN_SMITH_NC_FORM_FACTOR_MODEL_H_
#define _LLEWELLYN_SMITH_NC_FORM_FACTOR_MODEL_H_

#include "Physics/QuasiElastic/XSection/LwlynSmithFF.h"

namespace genie {

class LwlynSmithFFNC : public LwlynSmithFF {

public:
  LwlynSmithFFNC();
  LwlynSmithFFNC(string config);
  virtual ~LwlynSmithFFNC();

  // QELFormFactorModelI interface implementation
  double F1V     (const Interaction * interaction) const;
  double xiF2V   (const Interaction * interaction) const;
  double FA      (const Interaction * interaction) const;
  double Fp      (const Interaction * interaction) const;
};

}       // genie namespace

#endif  


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::AhrensNCELPXSec", payloadCode, "@",
"genie::AxialFormFactor", payloadCode, "@",
"genie::AxialFormFactorModelI", payloadCode, "@",
"genie::BBA03ELFormFactorsModel", payloadCode, "@",
"genie::BBA05ELFormFactorsModel", payloadCode, "@",
"genie::BBA07ELFormFactorsModel", payloadCode, "@",
"genie::DipoleAxialFormFactorModel", payloadCode, "@",
"genie::DipoleELFormFactorsModel", payloadCode, "@",
"genie::ELFormFactors", payloadCode, "@",
"genie::ELFormFactorsModelI", payloadCode, "@",
"genie::KuzminNaumov2016AxialFormFactorModel", payloadCode, "@",
"genie::LwlynSmithFF", payloadCode, "@",
"genie::LwlynSmithFFCC", payloadCode, "@",
"genie::LwlynSmithFFDeltaS", payloadCode, "@",
"genie::LwlynSmithFFNC", payloadCode, "@",
"genie::LwlynSmithQELCCPXSec", payloadCode, "@",
"genie::NewQELXSec", payloadCode, "@",
"genie::NievesQELCCPXSec", payloadCode, "@",
"genie::QELFormFactors", payloadCode, "@",
"genie::QELFormFactorsModelI", payloadCode, "@",
"genie::QELXSec", payloadCode, "@",
"genie::RosenbluthPXSec", payloadCode, "@",
"genie::SmithMonizQELCCPXSec", payloadCode, "@",
"genie::SmithMonizQELCCXSec", payloadCode, "@",
"genie::SmithMonizUtils", payloadCode, "@",
"genie::TransverseEnhancementFFModel", payloadCode, "@",
"genie::ZExpAxialFormFactorModel", payloadCode, "@",
"genie::ZExpELFormFactorModel", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhQELXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhQELXS_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhQELXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhQELXS() {
  TriggerDictionaryInitialization_libGPhQELXS_Impl();
}
