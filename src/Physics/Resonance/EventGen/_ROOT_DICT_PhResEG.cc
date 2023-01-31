// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhResEG

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
#include "RESKinematicsGenerator.h"
#include "RESHadronicSystemGenerator.h"
#include "RSPPInteractionListGenerator.h"
#include "RESInteractionListGenerator.h"
#include "RSPPResonanceSelector.h"
#include "RESPrimaryLeptonGenerator.h"
#include "RSPPHadronicSystemGenerator.h"

// Header files passed via #pragma extra_include

namespace genie {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "Framework/Utils/Range1.h", 27,
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
   static TClass *geniecLcLRESKinematicsGenerator_Dictionary();
   static void geniecLcLRESKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRESKinematicsGenerator(void *p = 0);
   static void *newArray_geniecLcLRESKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLRESKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLRESKinematicsGenerator(void *p);
   static void destruct_geniecLcLRESKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESKinematicsGenerator*)
   {
      ::genie::RESKinematicsGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESKinematicsGenerator", "", 35,
                  typeid(::genie::RESKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLRESKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLRESKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLRESKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLRESKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::RESKinematicsGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RESKinematicsGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RESKinematicsGenerator*)0x0)->GetClass();
      geniecLcLRESKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRESHadronicSystemGenerator_Dictionary();
   static void geniecLcLRESHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRESHadronicSystemGenerator(void *p = 0);
   static void *newArray_geniecLcLRESHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLRESHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLRESHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLRESHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESHadronicSystemGenerator*)
   {
      ::genie::RESHadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESHadronicSystemGenerator", "", 96,
                  typeid(::genie::RESHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLRESHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLRESHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLRESHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLRESHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::RESHadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RESHadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RESHadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLRESHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSPPInteractionListGenerator_Dictionary();
   static void geniecLcLRSPPInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRSPPInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLRSPPInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLRSPPInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLRSPPInteractionListGenerator(void *p);
   static void destruct_geniecLcLRSPPInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSPPInteractionListGenerator*)
   {
      ::genie::RSPPInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSPPInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSPPInteractionListGenerator", "", 154,
                  typeid(::genie::RSPPInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSPPInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSPPInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLRSPPInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLRSPPInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLRSPPInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSPPInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLRSPPInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSPPInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::RSPPInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSPPInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSPPInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSPPInteractionListGenerator*)0x0)->GetClass();
      geniecLcLRSPPInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSPPInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRESInteractionListGenerator_Dictionary();
   static void geniecLcLRESInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRESInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLRESInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLRESInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLRESInteractionListGenerator(void *p);
   static void destruct_geniecLcLRESInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESInteractionListGenerator*)
   {
      ::genie::RESInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESInteractionListGenerator", "", 209,
                  typeid(::genie::RESInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLRESInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLRESInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLRESInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLRESInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::RESInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RESInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RESInteractionListGenerator*)0x0)->GetClass();
      geniecLcLRESInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSPPResonanceSelector_Dictionary();
   static void geniecLcLRSPPResonanceSelector_TClassManip(TClass*);
   static void *new_geniecLcLRSPPResonanceSelector(void *p = 0);
   static void *newArray_geniecLcLRSPPResonanceSelector(Long_t size, void *p);
   static void delete_geniecLcLRSPPResonanceSelector(void *p);
   static void deleteArray_geniecLcLRSPPResonanceSelector(void *p);
   static void destruct_geniecLcLRSPPResonanceSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSPPResonanceSelector*)
   {
      ::genie::RSPPResonanceSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSPPResonanceSelector));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSPPResonanceSelector", "", 269,
                  typeid(::genie::RSPPResonanceSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSPPResonanceSelector_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSPPResonanceSelector) );
      instance.SetNew(&new_geniecLcLRSPPResonanceSelector);
      instance.SetNewArray(&newArray_geniecLcLRSPPResonanceSelector);
      instance.SetDelete(&delete_geniecLcLRSPPResonanceSelector);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSPPResonanceSelector);
      instance.SetDestructor(&destruct_geniecLcLRSPPResonanceSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSPPResonanceSelector*)
   {
      return GenerateInitInstanceLocal((::genie::RSPPResonanceSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSPPResonanceSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSPPResonanceSelector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSPPResonanceSelector*)0x0)->GetClass();
      geniecLcLRSPPResonanceSelector_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSPPResonanceSelector_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRESPrimaryLeptonGenerator_Dictionary();
   static void geniecLcLRESPrimaryLeptonGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRESPrimaryLeptonGenerator(void *p = 0);
   static void *newArray_geniecLcLRESPrimaryLeptonGenerator(Long_t size, void *p);
   static void delete_geniecLcLRESPrimaryLeptonGenerator(void *p);
   static void deleteArray_geniecLcLRESPrimaryLeptonGenerator(void *p);
   static void destruct_geniecLcLRESPrimaryLeptonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RESPrimaryLeptonGenerator*)
   {
      ::genie::RESPrimaryLeptonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RESPrimaryLeptonGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RESPrimaryLeptonGenerator", "", 322,
                  typeid(::genie::RESPrimaryLeptonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRESPrimaryLeptonGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RESPrimaryLeptonGenerator) );
      instance.SetNew(&new_geniecLcLRESPrimaryLeptonGenerator);
      instance.SetNewArray(&newArray_geniecLcLRESPrimaryLeptonGenerator);
      instance.SetDelete(&delete_geniecLcLRESPrimaryLeptonGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRESPrimaryLeptonGenerator);
      instance.SetDestructor(&destruct_geniecLcLRESPrimaryLeptonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RESPrimaryLeptonGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::RESPrimaryLeptonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RESPrimaryLeptonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRESPrimaryLeptonGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RESPrimaryLeptonGenerator*)0x0)->GetClass();
      geniecLcLRESPrimaryLeptonGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRESPrimaryLeptonGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLRSPPHadronicSystemGenerator_Dictionary();
   static void geniecLcLRSPPHadronicSystemGenerator_TClassManip(TClass*);
   static void *new_geniecLcLRSPPHadronicSystemGenerator(void *p = 0);
   static void *newArray_geniecLcLRSPPHadronicSystemGenerator(Long_t size, void *p);
   static void delete_geniecLcLRSPPHadronicSystemGenerator(void *p);
   static void deleteArray_geniecLcLRSPPHadronicSystemGenerator(void *p);
   static void destruct_geniecLcLRSPPHadronicSystemGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::RSPPHadronicSystemGenerator*)
   {
      ::genie::RSPPHadronicSystemGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::RSPPHadronicSystemGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::RSPPHadronicSystemGenerator", "", 368,
                  typeid(::genie::RSPPHadronicSystemGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLRSPPHadronicSystemGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::RSPPHadronicSystemGenerator) );
      instance.SetNew(&new_geniecLcLRSPPHadronicSystemGenerator);
      instance.SetNewArray(&newArray_geniecLcLRSPPHadronicSystemGenerator);
      instance.SetDelete(&delete_geniecLcLRSPPHadronicSystemGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLRSPPHadronicSystemGenerator);
      instance.SetDestructor(&destruct_geniecLcLRSPPHadronicSystemGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::RSPPHadronicSystemGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::RSPPHadronicSystemGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::RSPPHadronicSystemGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLRSPPHadronicSystemGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::RSPPHadronicSystemGenerator*)0x0)->GetClass();
      geniecLcLRSPPHadronicSystemGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLRSPPHadronicSystemGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESKinematicsGenerator : new ::genie::RESKinematicsGenerator;
   }
   static void *newArray_geniecLcLRESKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESKinematicsGenerator[nElements] : new ::genie::RESKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESKinematicsGenerator(void *p) {
      delete ((::genie::RESKinematicsGenerator*)p);
   }
   static void deleteArray_geniecLcLRESKinematicsGenerator(void *p) {
      delete [] ((::genie::RESKinematicsGenerator*)p);
   }
   static void destruct_geniecLcLRESKinematicsGenerator(void *p) {
      typedef ::genie::RESKinematicsGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESKinematicsGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESHadronicSystemGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESHadronicSystemGenerator : new ::genie::RESHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLRESHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESHadronicSystemGenerator[nElements] : new ::genie::RESHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESHadronicSystemGenerator(void *p) {
      delete ((::genie::RESHadronicSystemGenerator*)p);
   }
   static void deleteArray_geniecLcLRESHadronicSystemGenerator(void *p) {
      delete [] ((::genie::RESHadronicSystemGenerator*)p);
   }
   static void destruct_geniecLcLRESHadronicSystemGenerator(void *p) {
      typedef ::genie::RESHadronicSystemGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESHadronicSystemGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSPPInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSPPInteractionListGenerator : new ::genie::RSPPInteractionListGenerator;
   }
   static void *newArray_geniecLcLRSPPInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSPPInteractionListGenerator[nElements] : new ::genie::RSPPInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSPPInteractionListGenerator(void *p) {
      delete ((::genie::RSPPInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLRSPPInteractionListGenerator(void *p) {
      delete [] ((::genie::RSPPInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLRSPPInteractionListGenerator(void *p) {
      typedef ::genie::RSPPInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSPPInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESInteractionListGenerator : new ::genie::RESInteractionListGenerator;
   }
   static void *newArray_geniecLcLRESInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESInteractionListGenerator[nElements] : new ::genie::RESInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESInteractionListGenerator(void *p) {
      delete ((::genie::RESInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLRESInteractionListGenerator(void *p) {
      delete [] ((::genie::RESInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLRESInteractionListGenerator(void *p) {
      typedef ::genie::RESInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSPPResonanceSelector(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSPPResonanceSelector : new ::genie::RSPPResonanceSelector;
   }
   static void *newArray_geniecLcLRSPPResonanceSelector(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSPPResonanceSelector[nElements] : new ::genie::RSPPResonanceSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSPPResonanceSelector(void *p) {
      delete ((::genie::RSPPResonanceSelector*)p);
   }
   static void deleteArray_geniecLcLRSPPResonanceSelector(void *p) {
      delete [] ((::genie::RSPPResonanceSelector*)p);
   }
   static void destruct_geniecLcLRSPPResonanceSelector(void *p) {
      typedef ::genie::RSPPResonanceSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSPPResonanceSelector

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRESPrimaryLeptonGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESPrimaryLeptonGenerator : new ::genie::RESPrimaryLeptonGenerator;
   }
   static void *newArray_geniecLcLRESPrimaryLeptonGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RESPrimaryLeptonGenerator[nElements] : new ::genie::RESPrimaryLeptonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRESPrimaryLeptonGenerator(void *p) {
      delete ((::genie::RESPrimaryLeptonGenerator*)p);
   }
   static void deleteArray_geniecLcLRESPrimaryLeptonGenerator(void *p) {
      delete [] ((::genie::RESPrimaryLeptonGenerator*)p);
   }
   static void destruct_geniecLcLRESPrimaryLeptonGenerator(void *p) {
      typedef ::genie::RESPrimaryLeptonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RESPrimaryLeptonGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLRSPPHadronicSystemGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSPPHadronicSystemGenerator : new ::genie::RSPPHadronicSystemGenerator;
   }
   static void *newArray_geniecLcLRSPPHadronicSystemGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::RSPPHadronicSystemGenerator[nElements] : new ::genie::RSPPHadronicSystemGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLRSPPHadronicSystemGenerator(void *p) {
      delete ((::genie::RSPPHadronicSystemGenerator*)p);
   }
   static void deleteArray_geniecLcLRSPPHadronicSystemGenerator(void *p) {
      delete [] ((::genie::RSPPHadronicSystemGenerator*)p);
   }
   static void destruct_geniecLcLRSPPHadronicSystemGenerator(void *p) {
      typedef ::genie::RSPPHadronicSystemGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::RSPPHadronicSystemGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhResEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/Resonance/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/Resonance/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/Resonance/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/Resonance/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhResEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class RESKinematicsGenerator;}
namespace genie{class RESHadronicSystemGenerator;}
namespace genie{class RSPPInteractionListGenerator;}
namespace genie{class RESInteractionListGenerator;}
namespace genie{class RSPPResonanceSelector;}
namespace genie{class RESPrimaryLeptonGenerator;}
namespace genie{class RSPPHadronicSystemGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhResEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::RESKinematicsGenerator

\brief    Generates resonance event (v+N->l+Resonance) kinematics.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 18, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RES_KINEMATICS_GENERATOR_H_
#define _RES_KINEMATICS_GENERATOR_H_

#include "Framework/Utils/Range1.h"
#include "Physics/Common/KineGeneratorWithCache.h"

class TF2;

namespace genie {

class RESKinematicsGenerator : public KineGeneratorWithCache {

public :
  RESKinematicsGenerator();
  RESKinematicsGenerator(string config);
 ~RESKinematicsGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig      (void);
  double ComputeMaxXSec  (const Interaction * interaction) const;

  mutable TF2 * fEnvelope; ///< 2-D envelope used for importance sampling
  double fWcut;            ///< Wcut parameter in DIS/RES join scheme
};

}      // genie namespace
#endif // _RES_KINEMATICS_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RESHadronicSystemGenerator

\brief    Generates the 'final state' hadronic system in v RES interactions.
          It adds the remnant nucleus (if any), the pre-selected resonance
          and the resonance decay products at the GHEP record.
          Unlike the SPP thread, in the RES thread the resonance is specified
          at the time an interaction is selected but its decay products not
          (semi-inclusive resonance reactions). The off the mass-shell baryon
          resonance is decayed using a phase space generator. All kinematically
          available decay channels are being used (not just 1 pi channels).
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 23, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RES_HADRONIC_SYSTEM_GENERATOR_H_
#define _RES_HADRONIC_SYSTEM_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class Decayer;

class RESHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  RESHadronicSystemGenerator();
  RESHadronicSystemGenerator(string config);
 ~RESHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig                (void);
  int  GetResonancePdgCode       (GHepRecord * evrec) const;
  void AddResonance              (GHepRecord * evrec, int pdgc) const;
  // void AddResonanceDecayProducts (GHepRecord * evrec, int pdgc) const;

  const EventRecordVisitorI * fResonanceDecayer;
};

}      // genie namespace

#endif // _RES_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RSPPInteractionListGenerator

\brief    Creates a list of all the interactions that can be generated by the
          SPP thread (generates exclusive inelastic 1 pion reactions proceeding
          through resonance neutrinoproduction).
          Concrete implementations of the InteractionListGeneratorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 13, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RSPP_INTERACTION_LIST_GENERATOR_H_
#define _RSPP_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"
#include "Framework/Interaction/SppChannel.h"

namespace genie {

class RSPPInteractionListGenerator : public InteractionListGeneratorI {

public :
  RSPPInteractionListGenerator();
  RSPPInteractionListGenerator(string config);
 ~RSPPInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void AddFinalStateInfo (Interaction * i, SppChannel_t chan) const;
  void LoadConfigData(void);

  bool          fIsCC;
  bool          fIsNC;
};

}      // genie namespace
#endif // _RSPP_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RESInteractionListGenerator

\brief    Creates a list of all the interactions that can be generated by the
          RES thread (generates semi-inclusive resonance reactions).
          Concrete implementations of the InteractionListGeneratorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 13, 2005

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RES_INTERACTION_LIST_GENERATOR_H_
#define _RES_INTERACTION_LIST_GENERATOR_H_

#include "Framework/ParticleData/BaryonResList.h"
#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class RESInteractionListGenerator : public InteractionListGeneratorI {

public :
  RESInteractionListGenerator();
  RESInteractionListGenerator(string config);
 ~RESInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool          fIsCC;
  bool          fIsNC;
  bool          fIsEM;
  BaryonResList fResList;
};

}      // genie namespace
#endif // _RES_INTERACTION_LIST_GENERATOR_H_

//____________________________________________________________________________
/*!

\class    genie::RSPPResonanceSelector

\brief    Generates an intermediate baryon resonance for exclusive interactions
          proceeding through resonance productions and adds it to the event
          record. The resonance is selected based on its contribution to the
          selected exclusive reaction cross section.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 18, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RSPP_RESONANCE_SELECTOR_H_
#define _RSPP_RESONANCE_SELECTOR_H_

#include "Framework/ParticleData/BaryonResonance.h"
#include "Framework/ParticleData/BaryonResList.h"
#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class RSPPResonanceSelector : public HadronicSystemGenerator {

public :
  RSPPResonanceSelector();
  RSPPResonanceSelector(string config);
 ~RSPPResonanceSelector();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // override the Algorithm::Configure methods to load configuration
  // data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:
  void LoadConfig (void);

  Resonance_t SelectResonance   (GHepRecord * event_rec) const;
  void        AddResonance      (GHepRecord * event_rec) const;

  BaryonResList fResList; ///< baryon resonances taken into account
};

}      // genie namespace
#endif // _RSPP_RESONANCE_SELECTOR_H_
//____________________________________________________________________________
/*!

\class    genie::RESPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in v RES interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  October 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RES_PRIMARY_LEPTON_GENERATOR_H_
#define _RES_PRIMARY_LEPTON_GENERATOR_H_

#include "Physics/Common/PrimaryLeptonGenerator.h"

namespace genie {

class RESPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  RESPrimaryLeptonGenerator();
  RESPrimaryLeptonGenerator(string config);
 ~RESPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _RES_PRIMARY_LEPTON_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::RSPPHadronicSystemGenerator

\brief    Generates the 'final state' hadronic system in v SPP interactions.
          It adds the remnant nucleus (if any) and the baryon resonance decay 
          products at the GHEP record. The resonance decay products are pre-
          determined since in this thread we generate exclusive SPP reactions.
          The module uses a simple phase space decay.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  November 23, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _RSPP_HADRONIC_SYSTEM_GENERATOR_H_
#define _RSPP_HADRONIC_SYSTEM_GENERATOR_H_

#include <TGenPhaseSpace.h>

#include "Physics/Common/HadronicSystemGenerator.h"

namespace genie {

class RSPPHadronicSystemGenerator : public HadronicSystemGenerator {

public :
  RSPPHadronicSystemGenerator();
  RSPPHadronicSystemGenerator(string config);
 ~RSPPHadronicSystemGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

private:
  void AddResonanceDecayProducts (GHepRecord * event_rec) const;

  mutable TGenPhaseSpace fPhaseSpaceGenerator;
};

}      // genie namespace
#endif // _RSPP_HADRONIC_SYSTEM_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::RESHadronicSystemGenerator", payloadCode, "@",
"genie::RESInteractionListGenerator", payloadCode, "@",
"genie::RESKinematicsGenerator", payloadCode, "@",
"genie::RESPrimaryLeptonGenerator", payloadCode, "@",
"genie::RSPPHadronicSystemGenerator", payloadCode, "@",
"genie::RSPPInteractionListGenerator", payloadCode, "@",
"genie::RSPPResonanceSelector", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhResEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhResEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhResEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhResEG() {
  TriggerDictionaryInitialization_libGPhResEG_Impl();
}
