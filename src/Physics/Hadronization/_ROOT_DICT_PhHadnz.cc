// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhHadnz

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
#include "PythiaHadronization.h"
#include "PetersonFragm.h"
#include "HadronizationModelBase.h"
#include "KNOPythiaHadronization.h"
#include "CollinsSpillerFragm.h"
#include "FragmentationFunctionI.h"
#include "CharmHadronization.h"
#include "FragmentationFunctions.h"
#include "FragmRecUtils.h"
#include "KNOHadronization.h"
#include "HadronizationModelI.h"

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
      namespace frgmfunc {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLfrgmfunc_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::frgmfunc", 0 /*version*/, "", 495,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLutilscLcLfrgmfunc_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLfrgmfunc_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace genie {
   namespace utils {
      namespace fragmrec {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutilscLcLfragmrec_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils::fragmrec", 0 /*version*/, "", 544,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLutilscLcLfragmrec_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutilscLcLfragmrec_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *geniecLcLHadronizationModelI_Dictionary();
   static void geniecLcLHadronizationModelI_TClassManip(TClass*);
   static void delete_geniecLcLHadronizationModelI(void *p);
   static void deleteArray_geniecLcLHadronizationModelI(void *p);
   static void destruct_geniecLcLHadronizationModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HadronizationModelI*)
   {
      ::genie::HadronizationModelI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HadronizationModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HadronizationModelI", "HadronizationModelI.h", 34,
                  typeid(::genie::HadronizationModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHadronizationModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HadronizationModelI) );
      instance.SetDelete(&delete_geniecLcLHadronizationModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLHadronizationModelI);
      instance.SetDestructor(&destruct_geniecLcLHadronizationModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HadronizationModelI*)
   {
      return GenerateInitInstanceLocal((::genie::HadronizationModelI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::HadronizationModelI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHadronizationModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::HadronizationModelI*)0x0)->GetClass();
      geniecLcLHadronizationModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHadronizationModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHadronizationModelBase_Dictionary();
   static void geniecLcLHadronizationModelBase_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HadronizationModelBase*)
   {
      ::genie::HadronizationModelBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HadronizationModelBase));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HadronizationModelBase", "HadronizationModelBase.h", 28,
                  typeid(::genie::HadronizationModelBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHadronizationModelBase_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HadronizationModelBase) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HadronizationModelBase*)
   {
      return GenerateInitInstanceLocal((::genie::HadronizationModelBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::HadronizationModelBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHadronizationModelBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::HadronizationModelBase*)0x0)->GetClass();
      geniecLcLHadronizationModelBase_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHadronizationModelBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPythiaHadronization_Dictionary();
   static void geniecLcLPythiaHadronization_TClassManip(TClass*);
   static void *new_geniecLcLPythiaHadronization(void *p = 0);
   static void *newArray_geniecLcLPythiaHadronization(Long_t size, void *p);
   static void delete_geniecLcLPythiaHadronization(void *p);
   static void deleteArray_geniecLcLPythiaHadronization(void *p);
   static void destruct_geniecLcLPythiaHadronization(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PythiaHadronization*)
   {
      ::genie::PythiaHadronization *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PythiaHadronization));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PythiaHadronization", "", 35,
                  typeid(::genie::PythiaHadronization), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPythiaHadronization_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PythiaHadronization) );
      instance.SetNew(&new_geniecLcLPythiaHadronization);
      instance.SetNewArray(&newArray_geniecLcLPythiaHadronization);
      instance.SetDelete(&delete_geniecLcLPythiaHadronization);
      instance.SetDeleteArray(&deleteArray_geniecLcLPythiaHadronization);
      instance.SetDestructor(&destruct_geniecLcLPythiaHadronization);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PythiaHadronization*)
   {
      return GenerateInitInstanceLocal((::genie::PythiaHadronization*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::PythiaHadronization*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPythiaHadronization_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::PythiaHadronization*)0x0)->GetClass();
      geniecLcLPythiaHadronization_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPythiaHadronization_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLFragmentationFunctionI_Dictionary();
   static void geniecLcLFragmentationFunctionI_TClassManip(TClass*);
   static void delete_geniecLcLFragmentationFunctionI(void *p);
   static void deleteArray_geniecLcLFragmentationFunctionI(void *p);
   static void destruct_geniecLcLFragmentationFunctionI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::FragmentationFunctionI*)
   {
      ::genie::FragmentationFunctionI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::FragmentationFunctionI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::FragmentationFunctionI", "FragmentationFunctionI.h", 28,
                  typeid(::genie::FragmentationFunctionI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLFragmentationFunctionI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::FragmentationFunctionI) );
      instance.SetDelete(&delete_geniecLcLFragmentationFunctionI);
      instance.SetDeleteArray(&deleteArray_geniecLcLFragmentationFunctionI);
      instance.SetDestructor(&destruct_geniecLcLFragmentationFunctionI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::FragmentationFunctionI*)
   {
      return GenerateInitInstanceLocal((::genie::FragmentationFunctionI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::FragmentationFunctionI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLFragmentationFunctionI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::FragmentationFunctionI*)0x0)->GetClass();
      geniecLcLFragmentationFunctionI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLFragmentationFunctionI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLPetersonFragm_Dictionary();
   static void geniecLcLPetersonFragm_TClassManip(TClass*);
   static void *new_geniecLcLPetersonFragm(void *p = 0);
   static void *newArray_geniecLcLPetersonFragm(Long_t size, void *p);
   static void delete_geniecLcLPetersonFragm(void *p);
   static void deleteArray_geniecLcLPetersonFragm(void *p);
   static void destruct_geniecLcLPetersonFragm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::PetersonFragm*)
   {
      ::genie::PetersonFragm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::PetersonFragm));
      static ::ROOT::TGenericClassInfo 
         instance("genie::PetersonFragm", "", 110,
                  typeid(::genie::PetersonFragm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLPetersonFragm_Dictionary, isa_proxy, 0,
                  sizeof(::genie::PetersonFragm) );
      instance.SetNew(&new_geniecLcLPetersonFragm);
      instance.SetNewArray(&newArray_geniecLcLPetersonFragm);
      instance.SetDelete(&delete_geniecLcLPetersonFragm);
      instance.SetDeleteArray(&deleteArray_geniecLcLPetersonFragm);
      instance.SetDestructor(&destruct_geniecLcLPetersonFragm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::PetersonFragm*)
   {
      return GenerateInitInstanceLocal((::genie::PetersonFragm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::PetersonFragm*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLPetersonFragm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::PetersonFragm*)0x0)->GetClass();
      geniecLcLPetersonFragm_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLPetersonFragm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLKNOPythiaHadronization_Dictionary();
   static void geniecLcLKNOPythiaHadronization_TClassManip(TClass*);
   static void *new_geniecLcLKNOPythiaHadronization(void *p = 0);
   static void *newArray_geniecLcLKNOPythiaHadronization(Long_t size, void *p);
   static void delete_geniecLcLKNOPythiaHadronization(void *p);
   static void deleteArray_geniecLcLKNOPythiaHadronization(void *p);
   static void destruct_geniecLcLKNOPythiaHadronization(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KNOPythiaHadronization*)
   {
      ::genie::KNOPythiaHadronization *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::KNOPythiaHadronization));
      static ::ROOT::TGenericClassInfo 
         instance("genie::KNOPythiaHadronization", "", 241,
                  typeid(::genie::KNOPythiaHadronization), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLKNOPythiaHadronization_Dictionary, isa_proxy, 0,
                  sizeof(::genie::KNOPythiaHadronization) );
      instance.SetNew(&new_geniecLcLKNOPythiaHadronization);
      instance.SetNewArray(&newArray_geniecLcLKNOPythiaHadronization);
      instance.SetDelete(&delete_geniecLcLKNOPythiaHadronization);
      instance.SetDeleteArray(&deleteArray_geniecLcLKNOPythiaHadronization);
      instance.SetDestructor(&destruct_geniecLcLKNOPythiaHadronization);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KNOPythiaHadronization*)
   {
      return GenerateInitInstanceLocal((::genie::KNOPythiaHadronization*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::KNOPythiaHadronization*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLKNOPythiaHadronization_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::KNOPythiaHadronization*)0x0)->GetClass();
      geniecLcLKNOPythiaHadronization_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLKNOPythiaHadronization_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCollinsSpillerFragm_Dictionary();
   static void geniecLcLCollinsSpillerFragm_TClassManip(TClass*);
   static void *new_geniecLcLCollinsSpillerFragm(void *p = 0);
   static void *newArray_geniecLcLCollinsSpillerFragm(Long_t size, void *p);
   static void delete_geniecLcLCollinsSpillerFragm(void *p);
   static void deleteArray_geniecLcLCollinsSpillerFragm(void *p);
   static void destruct_geniecLcLCollinsSpillerFragm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CollinsSpillerFragm*)
   {
      ::genie::CollinsSpillerFragm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::CollinsSpillerFragm));
      static ::ROOT::TGenericClassInfo 
         instance("genie::CollinsSpillerFragm", "", 315,
                  typeid(::genie::CollinsSpillerFragm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCollinsSpillerFragm_Dictionary, isa_proxy, 0,
                  sizeof(::genie::CollinsSpillerFragm) );
      instance.SetNew(&new_geniecLcLCollinsSpillerFragm);
      instance.SetNewArray(&newArray_geniecLcLCollinsSpillerFragm);
      instance.SetDelete(&delete_geniecLcLCollinsSpillerFragm);
      instance.SetDeleteArray(&deleteArray_geniecLcLCollinsSpillerFragm);
      instance.SetDestructor(&destruct_geniecLcLCollinsSpillerFragm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CollinsSpillerFragm*)
   {
      return GenerateInitInstanceLocal((::genie::CollinsSpillerFragm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::CollinsSpillerFragm*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCollinsSpillerFragm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::CollinsSpillerFragm*)0x0)->GetClass();
      geniecLcLCollinsSpillerFragm_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCollinsSpillerFragm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLCharmHadronization_Dictionary();
   static void geniecLcLCharmHadronization_TClassManip(TClass*);
   static void *new_geniecLcLCharmHadronization(void *p = 0);
   static void *newArray_geniecLcLCharmHadronization(Long_t size, void *p);
   static void delete_geniecLcLCharmHadronization(void *p);
   static void deleteArray_geniecLcLCharmHadronization(void *p);
   static void destruct_geniecLcLCharmHadronization(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::CharmHadronization*)
   {
      ::genie::CharmHadronization *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::CharmHadronization));
      static ::ROOT::TGenericClassInfo 
         instance("genie::CharmHadronization", "", 426,
                  typeid(::genie::CharmHadronization), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLCharmHadronization_Dictionary, isa_proxy, 0,
                  sizeof(::genie::CharmHadronization) );
      instance.SetNew(&new_geniecLcLCharmHadronization);
      instance.SetNewArray(&newArray_geniecLcLCharmHadronization);
      instance.SetDelete(&delete_geniecLcLCharmHadronization);
      instance.SetDeleteArray(&deleteArray_geniecLcLCharmHadronization);
      instance.SetDestructor(&destruct_geniecLcLCharmHadronization);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::CharmHadronization*)
   {
      return GenerateInitInstanceLocal((::genie::CharmHadronization*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::CharmHadronization*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLCharmHadronization_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::CharmHadronization*)0x0)->GetClass();
      geniecLcLCharmHadronization_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLCharmHadronization_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLKNOHadronization_Dictionary();
   static void geniecLcLKNOHadronization_TClassManip(TClass*);
   static void *new_geniecLcLKNOHadronization(void *p = 0);
   static void *newArray_geniecLcLKNOHadronization(Long_t size, void *p);
   static void delete_geniecLcLKNOHadronization(void *p);
   static void deleteArray_geniecLcLKNOHadronization(void *p);
   static void destruct_geniecLcLKNOHadronization(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::KNOHadronization*)
   {
      ::genie::KNOHadronization *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::KNOHadronization));
      static ::ROOT::TGenericClassInfo 
         instance("genie::KNOHadronization", "", 613,
                  typeid(::genie::KNOHadronization), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLKNOHadronization_Dictionary, isa_proxy, 0,
                  sizeof(::genie::KNOHadronization) );
      instance.SetNew(&new_geniecLcLKNOHadronization);
      instance.SetNewArray(&newArray_geniecLcLKNOHadronization);
      instance.SetDelete(&delete_geniecLcLKNOHadronization);
      instance.SetDeleteArray(&deleteArray_geniecLcLKNOHadronization);
      instance.SetDestructor(&destruct_geniecLcLKNOHadronization);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::KNOHadronization*)
   {
      return GenerateInitInstanceLocal((::genie::KNOHadronization*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::KNOHadronization*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLKNOHadronization_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::KNOHadronization*)0x0)->GetClass();
      geniecLcLKNOHadronization_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLKNOHadronization_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLHadronizationModelI(void *p) {
      delete ((::genie::HadronizationModelI*)p);
   }
   static void deleteArray_geniecLcLHadronizationModelI(void *p) {
      delete [] ((::genie::HadronizationModelI*)p);
   }
   static void destruct_geniecLcLHadronizationModelI(void *p) {
      typedef ::genie::HadronizationModelI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::HadronizationModelI

namespace ROOT {
} // end of namespace ROOT for class ::genie::HadronizationModelBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPythiaHadronization(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::PythiaHadronization : new ::genie::PythiaHadronization;
   }
   static void *newArray_geniecLcLPythiaHadronization(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::PythiaHadronization[nElements] : new ::genie::PythiaHadronization[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPythiaHadronization(void *p) {
      delete ((::genie::PythiaHadronization*)p);
   }
   static void deleteArray_geniecLcLPythiaHadronization(void *p) {
      delete [] ((::genie::PythiaHadronization*)p);
   }
   static void destruct_geniecLcLPythiaHadronization(void *p) {
      typedef ::genie::PythiaHadronization current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::PythiaHadronization

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLFragmentationFunctionI(void *p) {
      delete ((::genie::FragmentationFunctionI*)p);
   }
   static void deleteArray_geniecLcLFragmentationFunctionI(void *p) {
      delete [] ((::genie::FragmentationFunctionI*)p);
   }
   static void destruct_geniecLcLFragmentationFunctionI(void *p) {
      typedef ::genie::FragmentationFunctionI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::FragmentationFunctionI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLPetersonFragm(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::PetersonFragm : new ::genie::PetersonFragm;
   }
   static void *newArray_geniecLcLPetersonFragm(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::PetersonFragm[nElements] : new ::genie::PetersonFragm[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLPetersonFragm(void *p) {
      delete ((::genie::PetersonFragm*)p);
   }
   static void deleteArray_geniecLcLPetersonFragm(void *p) {
      delete [] ((::genie::PetersonFragm*)p);
   }
   static void destruct_geniecLcLPetersonFragm(void *p) {
      typedef ::genie::PetersonFragm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::PetersonFragm

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLKNOPythiaHadronization(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KNOPythiaHadronization : new ::genie::KNOPythiaHadronization;
   }
   static void *newArray_geniecLcLKNOPythiaHadronization(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KNOPythiaHadronization[nElements] : new ::genie::KNOPythiaHadronization[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLKNOPythiaHadronization(void *p) {
      delete ((::genie::KNOPythiaHadronization*)p);
   }
   static void deleteArray_geniecLcLKNOPythiaHadronization(void *p) {
      delete [] ((::genie::KNOPythiaHadronization*)p);
   }
   static void destruct_geniecLcLKNOPythiaHadronization(void *p) {
      typedef ::genie::KNOPythiaHadronization current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::KNOPythiaHadronization

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCollinsSpillerFragm(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::CollinsSpillerFragm : new ::genie::CollinsSpillerFragm;
   }
   static void *newArray_geniecLcLCollinsSpillerFragm(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::CollinsSpillerFragm[nElements] : new ::genie::CollinsSpillerFragm[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCollinsSpillerFragm(void *p) {
      delete ((::genie::CollinsSpillerFragm*)p);
   }
   static void deleteArray_geniecLcLCollinsSpillerFragm(void *p) {
      delete [] ((::genie::CollinsSpillerFragm*)p);
   }
   static void destruct_geniecLcLCollinsSpillerFragm(void *p) {
      typedef ::genie::CollinsSpillerFragm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::CollinsSpillerFragm

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLCharmHadronization(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::CharmHadronization : new ::genie::CharmHadronization;
   }
   static void *newArray_geniecLcLCharmHadronization(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::CharmHadronization[nElements] : new ::genie::CharmHadronization[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLCharmHadronization(void *p) {
      delete ((::genie::CharmHadronization*)p);
   }
   static void deleteArray_geniecLcLCharmHadronization(void *p) {
      delete [] ((::genie::CharmHadronization*)p);
   }
   static void destruct_geniecLcLCharmHadronization(void *p) {
      typedef ::genie::CharmHadronization current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::CharmHadronization

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLKNOHadronization(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KNOHadronization : new ::genie::KNOHadronization;
   }
   static void *newArray_geniecLcLKNOHadronization(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::KNOHadronization[nElements] : new ::genie::KNOHadronization[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLKNOHadronization(void *p) {
      delete ((::genie::KNOHadronization*)p);
   }
   static void deleteArray_geniecLcLKNOHadronization(void *p) {
      delete [] ((::genie::KNOHadronization*)p);
   }
   static void destruct_geniecLcLKNOHadronization(void *p) {
      typedef ::genie::KNOHadronization current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::KNOHadronization

namespace {
  void TriggerDictionaryInitialization_libGPhHadnz_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Hadronization",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Hadronization",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Hadronization",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Hadronization/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhHadnz dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/Hadronization/HadronizationModelI.h")))  __attribute__((annotate("$clingAutoload$Physics/Hadronization/HadronizationModelBase.h")))  HadronizationModelI;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/Hadronization/HadronizationModelBase.h")))  HadronizationModelBase;}
namespace genie{class PythiaHadronization;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/Hadronization/FragmentationFunctionI.h")))  FragmentationFunctionI;}
namespace genie{class PetersonFragm;}
namespace genie{class KNOPythiaHadronization;}
namespace genie{class CollinsSpillerFragm;}
namespace genie{class CharmHadronization;}
namespace genie{class KNOHadronization;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhHadnz dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::PythiaHadronization

\brief    Provides access to the PYTHIA hadronization models. \n
          Is a concrete implementation of the HadronizationModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  August 17, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PYTHIA_HADRONIZATION_H_
#define _PYTHIA_HADRONIZATION_H_

#include <TPythia6.h>

#include "Physics/Hadronization/HadronizationModelBase.h"

namespace genie {

class DecayModelI;
class PythiaHadronization : public HadronizationModelBase {

public:
  PythiaHadronization();
  PythiaHadronization(string config);
  virtual ~PythiaHadronization();

  //-- implement the HadronizationModelI interface
  void           Initialize       (void)                                  const;
  TClonesArray * Hadronize        (const Interaction*)                    const;
  double         Weight           (void)                                  const;
  PDGCodeList *  SelectParticles  (const Interaction*)                    const;
  TH1D *         MultiplicityProb (const Interaction*, Option_t* opt="")  const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig     (void);
  bool AssertValidity (const Interaction * i) const;
/*
  void SwitchDecays   (int pdgc, bool on_off) const;
  void HandleDecays   (TClonesArray * plist) const;
*/
  mutable TPythia6 * fPythia;   ///< PYTHIA6 wrapper class

  const DecayModelI * fDecayer;

  //-- configuration parameters
  //   Note: additional configuration parameters common to all hadronizers 
  //   (Wcut,Rijk,...) are declared one layer down in the inheritance tree
  double fSSBarSuppression;   ///< ssbar suppression
  double fGaussianPt2;        ///< gaussian pt2 distribution width
  double fNonGaussianPt2Tail; ///< non gaussian pt2 tail parameterization
  double fRemainingECutoff;   ///< remaining E cutoff for stopping fragmentation
};

}         // genie namespace

#endif    // _PYTHIA_HADRONIZATION__H_

//____________________________________________________________________________
/*!

\class    genie::PetersonFragm

\brief    The Peterson fragmentation function.
          Is a concrete implementation of the FragmentationFunctionI interface.

\ref      C.Peterson et al., Phys.Rev.D23, 56 (1981)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 15, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PETERSON_FRAGM_H_
#define _PETERSON_FRAGM_H_

#include <TF1.h>

#include "Physics/Hadronization/FragmentationFunctionI.h"

namespace genie {

class PetersonFragm : public FragmentationFunctionI {

public:
  PetersonFragm();
  PetersonFragm(string config);
  ~PetersonFragm();

  //! implement the FragmentationFunctionI interface
  double Value     (double z) const;
  double GenerateZ (void)     const;

  //! methods overloading the Algorithm() interface implementation
  //! to build the fragmentation function from configuration data
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void BuildFunction (void);
  TF1 * fFunc;
};

}      // genie namespace

#endif // _PETERSON_FRAGM_H_
//____________________________________________________________________________
/*!

\class    genie::HadronizationModelBase

\brief    An abstract class. It avoids implementing the HadronizationModelI
          interface, leaving it for the concrete subclasses (KNO, Pythia,...).
          It propagates some common methods to the concrete subclasses.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  August 17, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HADRONIZATION_MODEL_BASE_H_
#define _HADRONIZATION_MODEL_BASE_H_

#include "Physics/Hadronization/HadronizationModelI.h"

namespace genie {

class HadronizationModelBase : public HadronizationModelI {

public:

  //! Don't implement the HadronizationModelI interface
  //! Leave it for the concrete implementations (KNO, Pythia,...)

  virtual void           Initialize       (void)                                 const = 0;
  virtual TClonesArray * Hadronize        (const Interaction * )                 const = 0;
  virtual double         Weight           (void)                                 const = 0;
  virtual PDGCodeList *  SelectParticles  (const Interaction*)                   const = 0;
  virtual TH1D *         MultiplicityProb (const Interaction*, Option_t* opt="") const = 0;

protected:
  HadronizationModelBase();
  HadronizationModelBase(string name);
  HadronizationModelBase(string name, string config);
  virtual ~HadronizationModelBase();

  //! Various utility methods common to hadronization models

  double Wmin               (void) const;
  double MaxMult            (const Interaction * i) const;
  void   ApplyRijk          (const Interaction * i, bool norm, TH1D * mp) const;
  TH1D * CreateMultProbHist (double maxmult) const;

  //! configuration data common to all hadronizers
  double   fWcut;        ///< neugen's Rijk applied for W<Wcut (see DIS/RES join scheme)
  double   fRvpCCm2;     ///< neugen's Rijk: vp,  CC, multiplicity = 2
  double   fRvpCCm3;     ///< neugen's Rijk: vp,  CC, multiplicity = 3
  double   fRvpNCm2;     ///< neugen's Rijk: vp,  NC, multiplicity = 2
  double   fRvpNCm3;     ///< neugen's Rijk: vp,  NC, multiplicity = 3
  double   fRvnCCm2;     ///< neugen's Rijk: vn,  CC, multiplicity = 2
  double   fRvnCCm3;     ///< neugen's Rijk: vn,  CC, multiplicity = 3
  double   fRvnNCm2;     ///< neugen's Rijk: vn,  NC, multiplicity = 2
  double   fRvnNCm3;     ///< neugen's Rijk: vn,  NC, multiplicity = 3
  double   fRvbpCCm2;    ///< neugen's Rijk: vbp, CC, multiplicity = 2
  double   fRvbpCCm3;    ///< neugen's Rijk: vbp, CC, multiplicity = 3
  double   fRvbpNCm2;    ///< neugen's Rijk: vbp, NC, multiplicity = 2
  double   fRvbpNCm3;    ///< neugen's Rijk: vbp, NC, multiplicity = 3
  double   fRvbnCCm2;    ///< neugen's Rijk: vbn, CC, multiplicity = 2
  double   fRvbnCCm3;    ///< neugen's Rijk: vbn, CC, multiplicity = 3
  double   fRvbnNCm2;    ///< neugen's Rijk: vbn, NC, multiplicity = 2
  double   fRvbnNCm3;    ///< neugen's Rijk: vbn, NC, multiplicity = 3
};

}         // genie namespace

#endif    // _HADRONIZATION_MODEL_BASE_H_

//____________________________________________________________________________
/*!

\class    genie::KNOPythiaHadronization

\brief    A 'composite' hadronization model using a KNO-based hadronization
          model at low W and PYTHIA/JETSET at higher W.
          Contains no new hadronization code but merely a configurable KNO to
          PYTHIA transition scheme.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 08, 2006

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _KNO_PYTHIA_HADRONIZATION_H_
#define _KNO_PYTHIA_HADRONIZATION_H_

#include "Physics/Hadronization/HadronizationModelI.h"

namespace genie {

class KNOPythiaHadronization : public HadronizationModelI {

public:

  KNOPythiaHadronization();
  KNOPythiaHadronization(string config);
  virtual ~KNOPythiaHadronization();

  //-- implement the HadronizationModelI interface
  void           Initialize       (void)                                 const;
  TClonesArray * Hadronize        (const Interaction* )                  const;
  double         Weight           (void)                                 const;
  PDGCodeList *  SelectParticles  (const Interaction*)                   const;
  TH1D *         MultiplicityProb (const Interaction*, Option_t* opt="") const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

 //-- private methods & mutable parameters

  void LoadConfig (void);
  const HadronizationModelI * SelectHadronizer(const Interaction *) const;

  mutable double fWeight; ///< weight for generated event

  //-- configuration

  const HadronizationModelI * fKNOHadronizer;    ///< KNO Hadronizer
  const HadronizationModelI * fPythiaHadronizer; ///< PYTHIA Hadronizer

  int    fMethod;       ///< KNO -> PYTHIA transition method
  double fWminTrWindow; ///< min W in transition region (pure KNO    < Wmin)
  double fWmaxTrWindow; ///< max W in transition region (pure PYTHIA > Wmax)
};

}         // genie namespace

#endif    // _KNO_PYTHIA_HADRONIZATION_H_

//____________________________________________________________________________
/*!

\class    genie::CollinsSpillerFragm

\brief    The Collins-Spiller fragmentation function. \n
          Is a concrete implementation of the FragmentationFunctionI interface.

\ref      P.D.B.Collins and T.P.Spiller, J.Phys.G11, 1289 (1984)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 15, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _COLLINS_SPILLER_FRAGM_H_
#define _COLLINS_SPILLER_FRAGM_H_

#include <TF1.h>

#include "Physics/Hadronization/FragmentationFunctionI.h"

namespace genie {

class CollinsSpillerFragm : public FragmentationFunctionI {

public:
  CollinsSpillerFragm();
  CollinsSpillerFragm(string config);
  ~CollinsSpillerFragm();

  //! implements the FragmentationFunctionI interface
  double Value     (double z) const;
  double GenerateZ (void)     const;

  //! methods overloading the Algorithm() interface implementation
  //! to build the fragmentation function from configuration data
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void BuildFunction (void);
  TF1 * fFunc;
};

}      // genie namespace

#endif // _COLLINS_SPILLER_FRAGM_H_
//____________________________________________________________________________
/*!

\class    genie::FragmentationFunctionI

\brief    Pure abstract base class.
          Defines the FragmentationFunctionI interface to be implemented by
          any algorithmic class implementing a fragmentation function.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 15, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _FRAGMENTATION_FUNCTION_I_H_
#define _FRAGMENTATION_FUNCTION_I_H_

#include "Framework/Algorithm/Algorithm.h"

namespace genie {

class FragmentationFunctionI : public Algorithm {

public:

  virtual ~FragmentationFunctionI();

  //-- define FragmentationFunctionI interface

  virtual double Value     (double z) const = 0;
  virtual double GenerateZ (void)     const = 0;

protected:

  FragmentationFunctionI();
  FragmentationFunctionI(string name);
  FragmentationFunctionI(string name, string config);
};

}      // genie namespace

#endif // _FRAGMENTATION_FUNCTION_I_H_
//____________________________________________________________________________
/*!

\class    genie::CharmHadronization

\brief    Provides access to the PYTHIA hadronization models. \n
          Is a concrete implementation of the HadronizationModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

          Hugh Gallagher <gallag@minos.phy.tufts.edu>
          Tufts University

\created  August 17, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _CHARM_HADRONIZATION_H_
#define _CHARM_HADRONIZATION_H_

#include <TGenPhaseSpace.h>

#include "Physics/Hadronization/HadronizationModelI.h"

class TPythia6;
class TF1;

namespace genie {

class Spline;
class FragmentationFunctionI;

class CharmHadronization : public HadronizationModelI {

public:
  CharmHadronization();
  CharmHadronization(string config);
  virtual ~CharmHadronization();

  // Implement the HadronizationModelI interface
  //
  void           Initialize       (void)                                    const;
  TClonesArray * Hadronize        (const Interaction* )                     const;
  double         Weight           (void)                                    const;
  PDGCodeList *  SelectParticles  (const Interaction*)                      const;
  TH1D *         MultiplicityProb (const Interaction*, Option_t* opt = "")  const;

  // Overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  //
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig          (void);
  int  GenerateCharmHadron (int nupdg, double EvLab) const;

  mutable TGenPhaseSpace fPhaseSpaceGenerator; ///< a phase space generator

  // Configuration parameters
  //
  bool                           fCharmOnly;   ///< don't hadronize non-charm blob
  TF1 *                          fCharmPT2pdf; ///< charm hadron pT^2 pdf
  const FragmentationFunctionI * fFragmFunc;   ///< charm hadron fragmentation func
  Spline *                       fD0FracSpl;   ///< nu charm fraction vs Ev: D0
  Spline *                       fDpFracSpl;   ///< nu charm fraction vs Ev: D+
  Spline *                       fDsFracSpl;   ///< nu charm fraction vs Ev: Ds+
  double                         fD0BarFrac;   ///< nubar \bar{D0} charm fraction
  double                         fDmFrac;      ///< nubar D- charm fraction
  mutable TPythia6 *             fPythia;      ///< remnant (non-charm) hadronizer
};

}         // genie namespace

#endif    // _CHARM_HADRONIZATION__H_

//____________________________________________________________________________
/*!

\namespace genie::utils::frgmfunc

\brief     Fragmentation functions

\author    Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
           University of Liverpool & STFC Rutherford Appleton Lab

\created   June 15, 2004

\cpright   Copyright (c) 2003-2019, The GENIE Collaboration
           For the full text of the license visit http://copyright.genie-mc.org
           or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _FRAGMENTATION_FUNCTIONS_H_
#define _FRAGMENTATION_FUNCTIONS_H_

namespace genie    {
namespace utils    {
namespace frgmfunc {

/*!
 \fn    double collins_spiller_func(double * x, double * par)
 \brief The Collins-Spiller fragmentation function
*/
  double collins_spiller_func(double * x, double * par);

/*!
  \fn    double peterson_func(double * x, double * par)
  \brief The Peterson fragmentation function
*/
  double peterson_func(double * x, double * par);

} // frgmfunc namespace
} // utils    namespace
} // genie    namespace

#endif // _FRAGMENTATION_FUNCTIONS_H_
//____________________________________________________________________________
/*!

\namespace  genie::utils::fragmrec

\brief      Simple utilities for the Fragmentation Event Record.

            The Fragmentation event record is a TClonesArray of TMCParticles -
            equivalent to PYTHIA's PYJETS.

\author     Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
            University of Liverpool & STFC Rutherford Appleton Lab

\created    November 26, 2004

\cpright    Copyright (c) 2003-2019, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org
            or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _FRAGM_REC_UTILS_H_
#define _FRAGM_REC_UTILS_H_

#include <TClonesArray.h>

namespace genie {
namespace utils {

namespace fragmrec
{
  int NParticles(int pdg_code, const TClonesArray * const particle_list);
  int NParticles(int pdg_code, int status, const TClonesArray * const particle_list);
  int NPositives(const TClonesArray * const particle_list);
  int NNegatives(const TClonesArray * const particle_list);

  void Print(const TClonesArray * const part_list);

} // fragmrec namespace
} // utils    namespace
} // genie    namespace

#endif // _FRAGM_REC_UTILS_H_
//____________________________________________________________________________
/*!

\class    genie::KNOHadronization

\brief    A KNO-based hadronization model.

          Is a concrete implementation of the HadronizationModelI interface.

\author   The main authors of this model are:

          - Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
            University of Liverpool & STFC Rutherford Appleton Lab

          - Hugh Gallagher <gallag@minos.phy.tufts.edu>
            Tufts University

          - Tinjun Yang <tjyang@stanford.edu>
            Stanford University

          This is an improved version of the legacy neugen3 KNO-based model. 
          Giles Barr, Geoff Pearce, and Hugh Gallagher were listed as authors
          of the original neugen3 model.
          
          Strange baryon production was implemented by Keith Hofmann and
          Hugh Gallagher (Tufts)

          Production of etas was added by Ji Liu (W&M)

          Changes required to implement the GENIE Boosted Dark Matter module
          were installed by Josh Berger (Univ. of Wisconsin)

\created  August 17, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _KNO_HADRONIZATION_H_
#define _KNO_HADRONIZATION_H_

#include <TGenPhaseSpace.h>

#include "Physics/Hadronization/HadronizationModelBase.h"

class TF1;

namespace genie {

class DecayModelI;
//class Spline;

class KNOHadronization : public HadronizationModelBase {

public:
  KNOHadronization();
  KNOHadronization(string config);
  virtual ~KNOHadronization();

  // implement the HadronizationModelI interface
  void           Initialize       (void)                                    const;
  TClonesArray * Hadronize        (const Interaction* )                     const;
  double         Weight           (void)                                    const;
  PDGCodeList *  SelectParticles  (const Interaction*)                      const;
  TH1D *         MultiplicityProb (const Interaction*, Option_t* opt = "")  const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  // private methods & mutable parameters

  void          LoadConfig            (void);
  bool          AssertValidity        (const Interaction * i)        const;
  PDGCodeList * GenerateHadronCodes   (int mult, int maxQ, double W) const;
  int           GenerateBaryonPdgCode (int mult, int maxQ, double W) const;
  int           HadronShowerCharge    (const Interaction * )         const;
  double        KNO                   (int nu, int nuc, double z)    const;
  double        AverageChMult         (int nu, int nuc, double W)    const;
  void          HandleDecays          (TClonesArray * particle_list) const;
  double        ReWeightPt2           (const PDGCodeList & pdgcv)    const;

  TClonesArray* DecayMethod1    (double W, const PDGCodeList & pdgv, bool reweight_decays) const;
  TClonesArray* DecayMethod2    (double W, const PDGCodeList & pdgv, bool reweight_decays) const;
  TClonesArray* DecayBackToBack (double W, const PDGCodeList & pdgv) const;

  bool PhaseSpaceDecay(
         TClonesArray & pl, TLorentzVector & pd, 
	   const PDGCodeList & pdgv, int offset=0, bool reweight=false) const;

  mutable TGenPhaseSpace fPhaseSpaceGenerator; ///< a phase space generator
  mutable double         fWeight;              ///< weight for generated event

  // Configuration parameters
  // Note: additional configuration parameters common to all hadronizers
  // (Wcut,Rijk,...) are declared one layer down in the inheritance tree

  const DecayModelI * fDecayer;  ///< decay algorithm
  bool     fForceNeuGenLimit;    ///< force upper hadronic multiplicity to NeuGEN limit
//bool     fUseLegacyKNOSpline;  ///< use legacy spline instead of Levy
  bool     fUseIsotropic2BDecays;///< force isotropic, non-reweighted 2-body decays for consistency with neugen/daikon
  bool     fUseBaryonXfPt2Param; ///< Generate baryon xF,pT2 from experimental parameterization?
  bool     fReWeightDecays;      ///< Reweight phase space decays?
  bool     fForceDecays;         ///< force decays of unstable hadrons produced?
  bool     fForceMinMult;        ///< force minimum multiplicity if (at low W) generated less?
  bool     fGenerateWeighted;    ///< generate weighted events?
  double   fPhSpRwA;             ///< parameter for phase space decay reweighting
  double   fPpi0;                ///< {pi0 pi0  } production probability
  double   fPpic;                ///< {pi+ pi-  } production probability
  double   fPKc;                 ///< {K+  K-   } production probability
  double   fPK0;                 ///< {K0  K0bar} production probability
  double   fPpi0eta;             ///< {Pi0 eta} production probability
  double   fPeta;                ///< {eta eta} production probability
  double   fAvp;                 ///< offset in average charged hadron multiplicity = f(W) relation for vp
  double   fAvn;                 ///< offset in average charged hadron multiplicity = f(W) relation for vn
  double   fAvbp;                ///< offset in average charged hadron multiplicity = f(W) relation for vbp
  double   fAvbn;                ///< offset in average charged hadron multiplicity = f(W) relation for vbn
  double   fBvp;                 ///< slope  in average charged hadron multiplicity = f(W) relation for vp
  double   fBvn;                 ///< slope  in average charged hadron multiplicity = f(W) relation for vn
  double   fBvbp;                ///< slope  in average charged hadron multiplicity = f(W) relation for vbp
  double   fBvbn;                ///< slope  in average charged hadron multiplicity = f(W) relation for vbn
  double   fAhyperon;            ///< parameter controlling strange baryon production probability via associated production (P=a+b*lnW^2)
  double   fBhyperon;            ///< see above
  double   fCvp;                 ///< Levy function parameter for vp
  double   fCvn;                 ///< Levy function parameter for vn
  double   fCvbp;                ///< Levy function parameter for vbp
  double   fCvbn;                ///< Levy function parameter for vbn
  TF1 *    fBaryonXFpdf;         ///< baryon xF PDF
  TF1 *    fBaryonPT2pdf;        ///< baryon pT^2 PDF
//Spline * fKNO;                 ///< legacy KNO distribution (superseded by the Levy func)
};

}         // genie namespace

#endif    // _KNO_HADRONIZATION_H_

//____________________________________________________________________________
/*!

\class    genie::HadronizationModelI

\brief    Pure abstract base class.
          Defines the HadronizationModelI interface to be implemented by any
          algorithmic class performing hadronization.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  August 17, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HADRONIZATION_MODEL_I_H_
#define _HADRONIZATION_MODEL_I_H_

#include "Framework/Algorithm/Algorithm.h"

class TClonesArray;
class TH1D;

namespace genie {

class Interaction;
class PDGCodeList;

class HadronizationModelI : public Algorithm {

public:

  virtual ~HadronizationModelI();

  //! define the HadronizationModelI interface

  virtual void           Initialize       (void)                                 const = 0;
  virtual TClonesArray * Hadronize        (const Interaction * )                 const = 0;
  virtual double         Weight           (void)                                 const = 0;
  virtual PDGCodeList *  SelectParticles  (const Interaction*)                   const = 0;
  virtual TH1D *         MultiplicityProb (const Interaction*, Option_t* opt="") const = 0;

protected:

  HadronizationModelI();
  HadronizationModelI(string name);
  HadronizationModelI(string name, string config);
};

}         // genie namespace

#endif    // _HADRONIZATION_MODEL_I_H_


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::CharmHadronization", payloadCode, "@",
"genie::CollinsSpillerFragm", payloadCode, "@",
"genie::FragmentationFunctionI", payloadCode, "@",
"genie::HadronizationModelBase", payloadCode, "@",
"genie::HadronizationModelI", payloadCode, "@",
"genie::KNOHadronization", payloadCode, "@",
"genie::KNOPythiaHadronization", payloadCode, "@",
"genie::PetersonFragm", payloadCode, "@",
"genie::PythiaHadronization", payloadCode, "@",
"genie::utils::frgmfunc::collins_spiller_func", payloadCode, "@",
"genie::utils::frgmfunc::peterson_func", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhHadnz",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhHadnz_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhHadnz_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhHadnz() {
  TriggerDictionaryInitialization_libGPhHadnz_Impl();
}
