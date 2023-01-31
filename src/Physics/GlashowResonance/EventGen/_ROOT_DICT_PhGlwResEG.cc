// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhGlwResEG

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
#include "GLRESInteractionListGenerator.h"
#include "GLRESGenerator.h"

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
   static TClass *geniecLcLGLRESInteractionListGenerator_Dictionary();
   static void geniecLcLGLRESInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLGLRESInteractionListGenerator(void *p = 0);
   static void *newArray_geniecLcLGLRESInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLGLRESInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLGLRESInteractionListGenerator(void *p);
   static void destruct_geniecLcLGLRESInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GLRESInteractionListGenerator*)
   {
      ::genie::GLRESInteractionListGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GLRESInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GLRESInteractionListGenerator", "", 32,
                  typeid(::genie::GLRESInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGLRESInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GLRESInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLGLRESInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLGLRESInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLGLRESInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLGLRESInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLGLRESInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GLRESInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::GLRESInteractionListGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::GLRESInteractionListGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGLRESInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::GLRESInteractionListGenerator*)0x0)->GetClass();
      geniecLcLGLRESInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGLRESInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLGLRESGenerator_Dictionary();
   static void geniecLcLGLRESGenerator_TClassManip(TClass*);
   static void *new_geniecLcLGLRESGenerator(void *p = 0);
   static void *newArray_geniecLcLGLRESGenerator(Long_t size, void *p);
   static void delete_geniecLcLGLRESGenerator(void *p);
   static void deleteArray_geniecLcLGLRESGenerator(void *p);
   static void destruct_geniecLcLGLRESGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::GLRESGenerator*)
   {
      ::genie::GLRESGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::GLRESGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::GLRESGenerator", "", 74,
                  typeid(::genie::GLRESGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLGLRESGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::GLRESGenerator) );
      instance.SetNew(&new_geniecLcLGLRESGenerator);
      instance.SetNewArray(&newArray_geniecLcLGLRESGenerator);
      instance.SetDelete(&delete_geniecLcLGLRESGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLGLRESGenerator);
      instance.SetDestructor(&destruct_geniecLcLGLRESGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::GLRESGenerator*)
   {
      return GenerateInitInstanceLocal((::genie::GLRESGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::GLRESGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLGLRESGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::GLRESGenerator*)0x0)->GetClass();
      geniecLcLGLRESGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLGLRESGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGLRESInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::GLRESInteractionListGenerator : new ::genie::GLRESInteractionListGenerator;
   }
   static void *newArray_geniecLcLGLRESInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::GLRESInteractionListGenerator[nElements] : new ::genie::GLRESInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGLRESInteractionListGenerator(void *p) {
      delete ((::genie::GLRESInteractionListGenerator*)p);
   }
   static void deleteArray_geniecLcLGLRESInteractionListGenerator(void *p) {
      delete [] ((::genie::GLRESInteractionListGenerator*)p);
   }
   static void destruct_geniecLcLGLRESInteractionListGenerator(void *p) {
      typedef ::genie::GLRESInteractionListGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::GLRESInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLGLRESGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::GLRESGenerator : new ::genie::GLRESGenerator;
   }
   static void *newArray_geniecLcLGLRESGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::GLRESGenerator[nElements] : new ::genie::GLRESGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLGLRESGenerator(void *p) {
      delete ((::genie::GLRESGenerator*)p);
   }
   static void deleteArray_geniecLcLGLRESGenerator(void *p) {
      delete [] ((::genie::GLRESGenerator*)p);
   }
   static void destruct_geniecLcLGLRESGenerator(void *p) {
      typedef ::genie::GLRESGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::GLRESGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhGlwResEG_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/GlashowResonance/EventGen",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/GlashowResonance/EventGen",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/GlashowResonance/EventGen",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/GlashowResonance/EventGen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhGlwResEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class GLRESInteractionListGenerator;}
namespace genie{class GLRESGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhGlwResEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::GLRESInteractionListGenerator

\brief    Generates a list of all the interactions that cab be generated by 
          the GLRES EventGenerator

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 14, 2009

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GLASHOW_RESONANCE_INTERACTION_GENERATOR_H_
#define _GLASHOW_RESONANCE_INTERACTION_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class GLRESInteractionListGenerator : public InteractionListGeneratorI {

public :
  GLRESInteractionListGenerator();
  GLRESInteractionListGenerator(string config);
 ~GLRESInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;
};

}      // genie namespace

#endif // _GLASHOW_RESONANCE_INTERACTION_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::GLRESGenerator

\brief    Glashow resonance event generator

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 15, 2008

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _GLASHOW_RESONANCE_GENERATOR_H_
#define _GLASHOW_RESONANCE_GENERATOR_H_

#include <TPythia6.h>

#include "Framework/EventGen/EventRecordVisitorI.h"

namespace genie {

class GLRESGenerator : public EventRecordVisitorI {

public :
  GLRESGenerator();
  GLRESGenerator(string config);
 ~GLRESGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord (GHepRecord * event) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfig(void);

  mutable TPythia6 * fPythia;   ///< PYTHIA6 wrapper class
};

}      // genie namespace
#endif // _GLASHOW_RESONANCE_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::GLRESGenerator", payloadCode, "@",
"genie::GLRESInteractionListGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhGlwResEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhGlwResEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhGlwResEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhGlwResEG() {
  TriggerDictionaryInitialization_libGPhGlwResEG_Impl();
}
