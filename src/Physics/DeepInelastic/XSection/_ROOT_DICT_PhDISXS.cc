// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhDISXS

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
#include "DISXSec.h"
#include "QPMDISPXSec.h"
#include "QPMDISStrucFunc.h"
#include "DISStructureFunc.h"
#include "QPMDISStrucFuncBase.h"
#include "DISStructureFuncModelI.h"
#include "BYPDF.h"
#include "BYStrucFunc.h"

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
   static TClass *geniecLcLDISXSec_Dictionary();
   static void geniecLcLDISXSec_TClassManip(TClass*);
   static void *new_geniecLcLDISXSec(void *p = 0);
   static void *newArray_geniecLcLDISXSec(Long_t size, void *p);
   static void delete_geniecLcLDISXSec(void *p);
   static void deleteArray_geniecLcLDISXSec(void *p);
   static void destruct_geniecLcLDISXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISXSec*)
   {
      ::genie::DISXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISXSec", "", 32,
                  typeid(::genie::DISXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISXSec) );
      instance.SetNew(&new_geniecLcLDISXSec);
      instance.SetNewArray(&newArray_geniecLcLDISXSec);
      instance.SetDelete(&delete_geniecLcLDISXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISXSec);
      instance.SetDestructor(&destruct_geniecLcLDISXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISXSec*)
   {
      return GenerateInitInstanceLocal((::genie::DISXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DISXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DISXSec*)0x0)->GetClass();
      geniecLcLDISXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDISStructureFuncModelI_Dictionary();
   static void geniecLcLDISStructureFuncModelI_TClassManip(TClass*);
   static void delete_geniecLcLDISStructureFuncModelI(void *p);
   static void deleteArray_geniecLcLDISStructureFuncModelI(void *p);
   static void destruct_geniecLcLDISStructureFuncModelI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISStructureFuncModelI*)
   {
      ::genie::DISStructureFuncModelI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISStructureFuncModelI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISStructureFuncModelI", "DISStructureFuncModelI.h", 29,
                  typeid(::genie::DISStructureFuncModelI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISStructureFuncModelI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISStructureFuncModelI) );
      instance.SetDelete(&delete_geniecLcLDISStructureFuncModelI);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISStructureFuncModelI);
      instance.SetDestructor(&destruct_geniecLcLDISStructureFuncModelI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISStructureFuncModelI*)
   {
      return GenerateInitInstanceLocal((::genie::DISStructureFuncModelI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DISStructureFuncModelI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISStructureFuncModelI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DISStructureFuncModelI*)0x0)->GetClass();
      geniecLcLDISStructureFuncModelI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISStructureFuncModelI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLDISStructureFunc_Dictionary();
   static void geniecLcLDISStructureFunc_TClassManip(TClass*);
   static void *new_geniecLcLDISStructureFunc(void *p = 0);
   static void *newArray_geniecLcLDISStructureFunc(Long_t size, void *p);
   static void delete_geniecLcLDISStructureFunc(void *p);
   static void deleteArray_geniecLcLDISStructureFunc(void *p);
   static void destruct_geniecLcLDISStructureFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::DISStructureFunc*)
   {
      ::genie::DISStructureFunc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::DISStructureFunc));
      static ::ROOT::TGenericClassInfo 
         instance("genie::DISStructureFunc", "DISStructureFunc.h", 40,
                  typeid(::genie::DISStructureFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLDISStructureFunc_Dictionary, isa_proxy, 0,
                  sizeof(::genie::DISStructureFunc) );
      instance.SetNew(&new_geniecLcLDISStructureFunc);
      instance.SetNewArray(&newArray_geniecLcLDISStructureFunc);
      instance.SetDelete(&delete_geniecLcLDISStructureFunc);
      instance.SetDeleteArray(&deleteArray_geniecLcLDISStructureFunc);
      instance.SetDestructor(&destruct_geniecLcLDISStructureFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::DISStructureFunc*)
   {
      return GenerateInitInstanceLocal((::genie::DISStructureFunc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::DISStructureFunc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLDISStructureFunc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::DISStructureFunc*)0x0)->GetClass();
      geniecLcLDISStructureFunc_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLDISStructureFunc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQPMDISPXSec_Dictionary();
   static void geniecLcLQPMDISPXSec_TClassManip(TClass*);
   static void *new_geniecLcLQPMDISPXSec(void *p = 0);
   static void *newArray_geniecLcLQPMDISPXSec(Long_t size, void *p);
   static void delete_geniecLcLQPMDISPXSec(void *p);
   static void deleteArray_geniecLcLQPMDISPXSec(void *p);
   static void destruct_geniecLcLQPMDISPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QPMDISPXSec*)
   {
      ::genie::QPMDISPXSec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QPMDISPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QPMDISPXSec", "", 93,
                  typeid(::genie::QPMDISPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQPMDISPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QPMDISPXSec) );
      instance.SetNew(&new_geniecLcLQPMDISPXSec);
      instance.SetNewArray(&newArray_geniecLcLQPMDISPXSec);
      instance.SetDelete(&delete_geniecLcLQPMDISPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLQPMDISPXSec);
      instance.SetDestructor(&destruct_geniecLcLQPMDISPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QPMDISPXSec*)
   {
      return GenerateInitInstanceLocal((::genie::QPMDISPXSec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QPMDISPXSec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQPMDISPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QPMDISPXSec*)0x0)->GetClass();
      geniecLcLQPMDISPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQPMDISPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQPMDISStrucFuncBase_Dictionary();
   static void geniecLcLQPMDISStrucFuncBase_TClassManip(TClass*);
   static void delete_geniecLcLQPMDISStrucFuncBase(void *p);
   static void deleteArray_geniecLcLQPMDISStrucFuncBase(void *p);
   static void destruct_geniecLcLQPMDISStrucFuncBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QPMDISStrucFuncBase*)
   {
      ::genie::QPMDISStrucFuncBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QPMDISStrucFuncBase));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QPMDISStrucFuncBase", "QPMDISStrucFuncBase.h", 37,
                  typeid(::genie::QPMDISStrucFuncBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQPMDISStrucFuncBase_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QPMDISStrucFuncBase) );
      instance.SetDelete(&delete_geniecLcLQPMDISStrucFuncBase);
      instance.SetDeleteArray(&deleteArray_geniecLcLQPMDISStrucFuncBase);
      instance.SetDestructor(&destruct_geniecLcLQPMDISStrucFuncBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QPMDISStrucFuncBase*)
   {
      return GenerateInitInstanceLocal((::genie::QPMDISStrucFuncBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QPMDISStrucFuncBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQPMDISStrucFuncBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QPMDISStrucFuncBase*)0x0)->GetClass();
      geniecLcLQPMDISStrucFuncBase_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQPMDISStrucFuncBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLQPMDISStrucFunc_Dictionary();
   static void geniecLcLQPMDISStrucFunc_TClassManip(TClass*);
   static void *new_geniecLcLQPMDISStrucFunc(void *p = 0);
   static void *newArray_geniecLcLQPMDISStrucFunc(Long_t size, void *p);
   static void delete_geniecLcLQPMDISStrucFunc(void *p);
   static void deleteArray_geniecLcLQPMDISStrucFunc(void *p);
   static void destruct_geniecLcLQPMDISStrucFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::QPMDISStrucFunc*)
   {
      ::genie::QPMDISStrucFunc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::QPMDISStrucFunc));
      static ::ROOT::TGenericClassInfo 
         instance("genie::QPMDISStrucFunc", "", 159,
                  typeid(::genie::QPMDISStrucFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLQPMDISStrucFunc_Dictionary, isa_proxy, 0,
                  sizeof(::genie::QPMDISStrucFunc) );
      instance.SetNew(&new_geniecLcLQPMDISStrucFunc);
      instance.SetNewArray(&newArray_geniecLcLQPMDISStrucFunc);
      instance.SetDelete(&delete_geniecLcLQPMDISStrucFunc);
      instance.SetDeleteArray(&deleteArray_geniecLcLQPMDISStrucFunc);
      instance.SetDestructor(&destruct_geniecLcLQPMDISStrucFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::QPMDISStrucFunc*)
   {
      return GenerateInitInstanceLocal((::genie::QPMDISStrucFunc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::QPMDISStrucFunc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLQPMDISStrucFunc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::QPMDISStrucFunc*)0x0)->GetClass();
      geniecLcLQPMDISStrucFunc_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLQPMDISStrucFunc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBYPDF_Dictionary();
   static void geniecLcLBYPDF_TClassManip(TClass*);
   static void *new_geniecLcLBYPDF(void *p = 0);
   static void *newArray_geniecLcLBYPDF(Long_t size, void *p);
   static void delete_geniecLcLBYPDF(void *p);
   static void deleteArray_geniecLcLBYPDF(void *p);
   static void destruct_geniecLcLBYPDF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BYPDF*)
   {
      ::genie::BYPDF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BYPDF));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BYPDF", "", 474,
                  typeid(::genie::BYPDF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBYPDF_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BYPDF) );
      instance.SetNew(&new_geniecLcLBYPDF);
      instance.SetNewArray(&newArray_geniecLcLBYPDF);
      instance.SetDelete(&delete_geniecLcLBYPDF);
      instance.SetDeleteArray(&deleteArray_geniecLcLBYPDF);
      instance.SetDestructor(&destruct_geniecLcLBYPDF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BYPDF*)
   {
      return GenerateInitInstanceLocal((::genie::BYPDF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BYPDF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBYPDF_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BYPDF*)0x0)->GetClass();
      geniecLcLBYPDF_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBYPDF_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLBYStrucFunc_Dictionary();
   static void geniecLcLBYStrucFunc_TClassManip(TClass*);
   static void *new_geniecLcLBYStrucFunc(void *p = 0);
   static void *newArray_geniecLcLBYStrucFunc(Long_t size, void *p);
   static void delete_geniecLcLBYStrucFunc(void *p);
   static void deleteArray_geniecLcLBYStrucFunc(void *p);
   static void destruct_geniecLcLBYStrucFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::BYStrucFunc*)
   {
      ::genie::BYStrucFunc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::BYStrucFunc));
      static ::ROOT::TGenericClassInfo 
         instance("genie::BYStrucFunc", "", 544,
                  typeid(::genie::BYStrucFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLBYStrucFunc_Dictionary, isa_proxy, 0,
                  sizeof(::genie::BYStrucFunc) );
      instance.SetNew(&new_geniecLcLBYStrucFunc);
      instance.SetNewArray(&newArray_geniecLcLBYStrucFunc);
      instance.SetDelete(&delete_geniecLcLBYStrucFunc);
      instance.SetDeleteArray(&deleteArray_geniecLcLBYStrucFunc);
      instance.SetDestructor(&destruct_geniecLcLBYStrucFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::BYStrucFunc*)
   {
      return GenerateInitInstanceLocal((::genie::BYStrucFunc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::BYStrucFunc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLBYStrucFunc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::BYStrucFunc*)0x0)->GetClass();
      geniecLcLBYStrucFunc_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLBYStrucFunc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISXSec : new ::genie::DISXSec;
   }
   static void *newArray_geniecLcLDISXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISXSec[nElements] : new ::genie::DISXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISXSec(void *p) {
      delete ((::genie::DISXSec*)p);
   }
   static void deleteArray_geniecLcLDISXSec(void *p) {
      delete [] ((::genie::DISXSec*)p);
   }
   static void destruct_geniecLcLDISXSec(void *p) {
      typedef ::genie::DISXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISXSec

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLDISStructureFuncModelI(void *p) {
      delete ((::genie::DISStructureFuncModelI*)p);
   }
   static void deleteArray_geniecLcLDISStructureFuncModelI(void *p) {
      delete [] ((::genie::DISStructureFuncModelI*)p);
   }
   static void destruct_geniecLcLDISStructureFuncModelI(void *p) {
      typedef ::genie::DISStructureFuncModelI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISStructureFuncModelI

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLDISStructureFunc(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISStructureFunc : new ::genie::DISStructureFunc;
   }
   static void *newArray_geniecLcLDISStructureFunc(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::DISStructureFunc[nElements] : new ::genie::DISStructureFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLDISStructureFunc(void *p) {
      delete ((::genie::DISStructureFunc*)p);
   }
   static void deleteArray_geniecLcLDISStructureFunc(void *p) {
      delete [] ((::genie::DISStructureFunc*)p);
   }
   static void destruct_geniecLcLDISStructureFunc(void *p) {
      typedef ::genie::DISStructureFunc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::DISStructureFunc

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQPMDISPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QPMDISPXSec : new ::genie::QPMDISPXSec;
   }
   static void *newArray_geniecLcLQPMDISPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QPMDISPXSec[nElements] : new ::genie::QPMDISPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQPMDISPXSec(void *p) {
      delete ((::genie::QPMDISPXSec*)p);
   }
   static void deleteArray_geniecLcLQPMDISPXSec(void *p) {
      delete [] ((::genie::QPMDISPXSec*)p);
   }
   static void destruct_geniecLcLQPMDISPXSec(void *p) {
      typedef ::genie::QPMDISPXSec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QPMDISPXSec

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLQPMDISStrucFuncBase(void *p) {
      delete ((::genie::QPMDISStrucFuncBase*)p);
   }
   static void deleteArray_geniecLcLQPMDISStrucFuncBase(void *p) {
      delete [] ((::genie::QPMDISStrucFuncBase*)p);
   }
   static void destruct_geniecLcLQPMDISStrucFuncBase(void *p) {
      typedef ::genie::QPMDISStrucFuncBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QPMDISStrucFuncBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLQPMDISStrucFunc(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QPMDISStrucFunc : new ::genie::QPMDISStrucFunc;
   }
   static void *newArray_geniecLcLQPMDISStrucFunc(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::QPMDISStrucFunc[nElements] : new ::genie::QPMDISStrucFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLQPMDISStrucFunc(void *p) {
      delete ((::genie::QPMDISStrucFunc*)p);
   }
   static void deleteArray_geniecLcLQPMDISStrucFunc(void *p) {
      delete [] ((::genie::QPMDISStrucFunc*)p);
   }
   static void destruct_geniecLcLQPMDISStrucFunc(void *p) {
      typedef ::genie::QPMDISStrucFunc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::QPMDISStrucFunc

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBYPDF(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BYPDF : new ::genie::BYPDF;
   }
   static void *newArray_geniecLcLBYPDF(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BYPDF[nElements] : new ::genie::BYPDF[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBYPDF(void *p) {
      delete ((::genie::BYPDF*)p);
   }
   static void deleteArray_geniecLcLBYPDF(void *p) {
      delete [] ((::genie::BYPDF*)p);
   }
   static void destruct_geniecLcLBYPDF(void *p) {
      typedef ::genie::BYPDF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BYPDF

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLBYStrucFunc(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BYStrucFunc : new ::genie::BYStrucFunc;
   }
   static void *newArray_geniecLcLBYStrucFunc(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::BYStrucFunc[nElements] : new ::genie::BYStrucFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLBYStrucFunc(void *p) {
      delete ((::genie::BYStrucFunc*)p);
   }
   static void deleteArray_geniecLcLBYStrucFunc(void *p) {
      delete [] ((::genie::BYStrucFunc*)p);
   }
   static void destruct_geniecLcLBYStrucFunc(void *p) {
      typedef ::genie::BYStrucFunc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::BYStrucFunc

namespace {
  void TriggerDictionaryInitialization_libGPhDISXS_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/DeepInelastic/XSection",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/DeepInelastic/XSection",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/DeepInelastic/XSection",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/DeepInelastic/XSection/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhDISXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class DISXSec;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/DeepInelastic/XSection/DISStructureFuncModelI.h")))  __attribute__((annotate("$clingAutoload$Physics/DeepInelastic/XSection/DISStructureFunc.h")))  DISStructureFuncModelI;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/DeepInelastic/XSection/DISStructureFunc.h")))  DISStructureFunc;}
namespace genie{class QPMDISPXSec;}
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/DeepInelastic/XSection/QPMDISStrucFuncBase.h")))  QPMDISStrucFuncBase;}
namespace genie{class QPMDISStrucFunc;}
namespace genie{class BYPDF;}
namespace genie{class BYStrucFunc;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhDISXS dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::DISXSec

\brief    Computes the DIS Cross Section. \n
          Is a concrete implementation of the XSecIntegratorI interface. \n

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 04, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIS_XSEC_H_
#define _DIS_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

namespace genie {

class DISXSec : public XSecIntegratorI {

public:
  DISXSec();
  DISXSec(string config);
  virtual ~DISXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig (void);

  void   CacheFreeNucleonXSec(const XSecAlgorithmI * model, const Interaction * in) const;
  string CacheBranchName     (const XSecAlgorithmI * model, const Interaction * in) const;

  double fVldEmin;
  double fVldEmax;
};

}       // genie namespace
#endif  // _DIS_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::QPMDISPXSec

\brief    Computes DIS differential cross sections.
          Is a concrete implementation of the XSecAlgorithmI interface.

\ref      E.A.Paschos and J.Y.Yu, Phys.Rev.D 65.03300

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 05, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIS_PARTON_MODEL_PARTIAL_XSEC_H_
#define _DIS_PARTON_MODEL_PARTIAL_XSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/DeepInelastic/XSection/DISStructureFunc.h"

namespace genie {

class DISStructureFuncModelI;
class HadronizationModelI;
class XSecIntegratorI;

class QPMDISPXSec : public XSecAlgorithmI {

public:
  QPMDISPXSec();
  QPMDISPXSec(string config);
  virtual ~QPMDISPXSec();

  // XSecAlgorithmI interface implementation
  double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
  double Integral        (const Interaction * i) const;
  bool   ValidProcess    (const Interaction * i) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig                  (void);
  double DISRESJoinSuppressionFactor (const Interaction * in) const;

  mutable DISStructureFunc fDISSF;
  bool                     fInInitPhase;

  const DISStructureFuncModelI * fDISSFModel;         ///< SF model
  const HadronizationModelI *    fHadronizationModel; ///< hadronic multip. model
  const XSecIntegratorI *        fXSecIntegrator;     ///< diff. xsec integrator

  const XSecAlgorithmI * fCharmProdModel;

  bool   fUsingDisResJoin;  ///< use a DIS/RES joining scheme?
  bool   fUseCache;         ///< cache reduction factors used in joining scheme
  double fWcut;             ///< apply DIS/RES joining scheme < Wcut
  double fScale;            ///< cross section scaling factor
  double fSin48w;           ///< sin^4(Weingberg angle)
};

}       // genie namespace
#endif  // _DIS_PARTON_MODEL_PARTIAL_XSEC_H_
//____________________________________________________________________________
/*!

\class    genie::QPMDISStrucFunc

\brief    Standard Quark Parton Model (QPM) Deep Inelastic Scatering (DIS)
          Structure Functions (SF)

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QPM_DIS_STRUC_FUNC_H_
#define _QPM_DIS_STRUC_FUNC_H_

#include "Physics/DeepInelastic/XSection/QPMDISStrucFuncBase.h"

namespace genie {

class QPMDISStrucFunc : public QPMDISStrucFuncBase {

public:
  QPMDISStrucFunc();
  QPMDISStrucFunc(string config);
  virtual ~QPMDISStrucFunc();
};

}         // genie namespace
#endif    // _QPM_DIS_STRUC_FUNC_H_

//____________________________________________________________________________
/*!

\class    genie::DISStructureFunc

\brief    A class holding Deep Inelastic Scattering (DIS) Form Factors
          (invariant structure funstions)

          This class is using the \b Strategy Pattern. \n
          It can accept requests to calculate itself, for a given interaction,
          that it then delegates to the algorithmic object, implementing the
          DISStructureFuncModelI interface, that it finds attached to itself.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 05, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIS_STRUCTURE_FUNCTIONS_H_
#define _DIS_STRUCTURE_FUNCTIONS_H_

#include <iostream>

#include "Physics/DeepInelastic/XSection/DISStructureFuncModelI.h"
#include "Framework/Interaction/Interaction.h"

using std::ostream;

namespace genie {

class DISStructureFunc;
ostream & operator << (ostream & stream, const DISStructureFunc & sf);

class DISStructureFunc {

public:
  DISStructureFunc();
  DISStructureFunc(const DISStructureFunc & form_factors);
  virtual ~DISStructureFunc() { }

  //! Attach an algorithm
  void SetModel  (const DISStructureFuncModelI * model);

  //! Calculate the S/F's for the input interaction using the attached algorithm
  void Calculate (const Interaction * interaction);

  //! Get the computed structure function F1
  double F1 (void) const { return fF1; }

  //! Get the computed structure function F2
  double F2 (void) const { return fF2; }

  //! Get the computed structure function F3
  double F3 (void) const { return fF3; }

  //! Get the computed structure function F4
  double F4 (void) const { return fF4; }

  //! Get the computed structure function F5
  double F5 (void) const { return fF5; }

  //! Get the computed structure function F6
  double F6 (void) const { return fF6; }

  //! Get the attached model
  const DISStructureFuncModelI * Model (void) const {return fModel;}

  void   Reset    (Option_t * opt="");
  void   Copy     (const DISStructureFunc & sf);
  bool   Compare  (const DISStructureFunc & sf) const;
  void   Print    (ostream & stream) const;

  bool               operator == (const DISStructureFunc & sf) const;
  DISStructureFunc & operator =  (const DISStructureFunc & sf);
  friend ostream &   operator << (ostream & stream, const DISStructureFunc & sf);

private:

  double fF1;
  double fF2;
  double fF3;
  double fF4;
  double fF5;
  double fF6;

  const DISStructureFuncModelI * fModel;
};

}       // genie namespace

#endif  // _DIS_STRUCTURE_FUNCTIONS_H_
//____________________________________________________________________________
/*!

\class    genie::QPMDISStrucFuncBase

\brief    Abstract base class. 
          Provides common implementation for concrete objects implementing the
          DISStructureFuncModelI interface.

\ref      For a discussion of DIS SF see for example E.A.Paschos and J.Y.Yu, 
          Phys.Rev.D 65.033002 and R.Devenish and A.Cooper-Sarkar, OUP 2004.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

          Adapted from neugen 3.
          Primary authors: 
          D.Naples (Pittsburgh U.), H.Gallagher (Tufts U), CA (RAL)

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _QPM_DIS_STRUCTURE_FUNCTIONS_BASE_H_
#define _QPM_DIS_STRUCTURE_FUNCTIONS_BASE_H_

#include "Physics/DeepInelastic/XSection/DISStructureFuncModelI.h"
#include "Framework/Interaction/Interaction.h"
#include "Physics/PartonDistributions/PDF.h"

namespace genie {

class QPMDISStrucFuncBase : public DISStructureFuncModelI {

public:
  virtual ~QPMDISStrucFuncBase();

  // common code for all DISFormFactorsModelI interface implementations
  virtual double F1 (void) const { return fF1; }
  virtual double F2 (void) const { return fF2; }
  virtual double F3 (void) const { return fF3; }
  virtual double F4 (void) const { return fF4; }
  virtual double F5 (void) const { return fF5; }
  virtual double F6 (void) const { return fF6; }

  virtual void Calculate (const Interaction * interaction) const;

  // overload Algorithm's Configure() to set the PDF data member
  // from the configuration registry
  void   Configure  (const Registry & config);
  void   Configure  (string param_set);

protected:
  QPMDISStrucFuncBase();
  QPMDISStrucFuncBase(string name);
  QPMDISStrucFuncBase(string name, string config);

  // commom code for SF calculation for all DISFormFactorsModelI
  // interface implementations inheriting from QPMDISStrucFuncBase
  virtual void   LoadConfig (void);
  virtual void   InitPDF    (void);
  virtual double Q2         (const Interaction * i) const;
  virtual double ScalingVar (const Interaction * i) const;
  virtual void   CalcPDFs   (const Interaction * i) const;
  virtual double NuclMod    (const Interaction * i) const;
  virtual double R          (const Interaction * i) const;
  virtual void   KFactors   (const Interaction * i, double & kuv, 
                                     double & kdv, double & kus, double & kds) const;
  // configuration
  //
  double fQ2min;             ///< min Q^2 allowed for PDFs: PDF(Q2<Q2min):=PDF(Q2min)
  bool   fCharmOff;          ///< turn charm production off?
  bool   fIncludeR;          ///< include R (~FL) in DIS SF calculation?
  bool   fIncludeNuclMod;    ///< include nuclear factor (shadowing, anti-shadowing,...)?
  double fMc;                ///< charm mass used
  double fVcd;               ///< CKM element Vcd used
  double fVcs;               ///< CKM element Vcs used
  double fVud;               ///< CKM element Vud used
  double fVus;               ///< CKM element Vcs used
  double fVcd2;              ///<
  double fVcs2;              ///<
  double fVud2;              ///<
  double fVus2;              ///<
  double fSin2thw;           ///<
  bool   fUse2016Corrections;///< Use 2016 SF relation corrections
  double fLowQ2CutoffF1F2;   ///< Set min for relation between 2xF1 and F2

  mutable double fF1;
  mutable double fF2;
  mutable double fF3;
  mutable double fF4;
  mutable double fF5;
  mutable double fF6;
  PDF *  fPDF;           ///< computed PDFs @ (x,Q2)
  PDF *  fPDFc;          ///< computed PDFs @ (slow-rescaling-var,Q2)
  mutable double fuv;
  mutable double fus; 
  mutable double fdv; 
  mutable double fds; 
  mutable double fs;
  mutable double fc;
  mutable double fuv_c; 
  mutable double fus_c; 
  mutable double fdv_c;
  mutable double fds_c;
  mutable double fs_c; 
  mutable double fc_c; 

};

}         // genie namespace
#endif    // _QPM_DIS_STRUCTURE_FUNCTIONS_BASE_H_

//____________________________________________________________________________
/*!

\class    genie::DISStructureFuncModelI

\brief    Pure Abstract Base Class. Defines the DISStructureFuncModelI
          interface to be implemented by any algorithmic class computing DIS
          structure functions.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIS_STRUCTURE_FUNCTIONS_MODEL_I_H_
#define _DIS_STRUCTURE_FUNCTIONS_MODEL_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {

class DISStructureFuncModelI : public Algorithm {

public:
  virtual ~DISStructureFuncModelI();

  //! Calculate the structure functions F1-F6 for the input interaction
  virtual void Calculate (const Interaction * interaction) const = 0;

  //! Get the computed structure function F1
  virtual double F1 (void) const = 0;

  //! Get the computed structure function F2
  virtual double F2 (void) const = 0;

  //! Get the computed structure function F3
  virtual double F3 (void) const = 0;

  //! Get the computed structure function F4
  virtual double F4 (void) const = 0;

  //! Get the computed structure function F5
  virtual double F5 (void) const = 0;

  //! Get the computed structure function F6
  virtual double F6 (void) const = 0;

protected:
  DISStructureFuncModelI();
  DISStructureFuncModelI(string name);
  DISStructureFuncModelI(string name, string config);
};

}         // genie namespace
#endif    // _DIS_STRUCTURE_FUNCTIONS_MODEL_I_H_
//____________________________________________________________________________
/*!

\class    genie::BYPDF

\brief    Computes corrected PDFs according to the Bodek-Yang model.

          Concrete implementation of the PDFModelI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  September 29, 2004

*/
//____________________________________________________________________________

#ifndef _BODEK_YANG_PDF_H_
#define _BODEK_YANG_PDF_H_

#include "Physics/PartonDistributions/PDFModelI.h"

namespace genie {

class BYPDF : public PDFModelI {

public:

  BYPDF();
  BYPDF(string config);
  virtual ~BYPDF();

  //! PDFModelI interface implementation
  double UpValence   (double x, double q2) const;
  double DownValence (double x, double q2) const;
  double UpSea       (double x, double q2) const;
  double DownSea     (double x, double q2) const;
  double Strange     (double x, double q2) const;
  double Charm       (double x, double q2) const;
  double Bottom      (double x, double q2) const;
  double Top         (double x, double q2) const;
  double Gluon       (double x, double q2) const;
  PDF_t  AllPDFs     (double x, double q2) const;

  //! overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void   LoadConfig (void);
  double DeltaDU    (double x) const;

  //! configuration parameters

  const PDFModelI * fBasePDFModel; ///< base (uncorrected) PDF model

  double fX0;    ///< correction param X0
  double fX1;    ///< correction param X1
  double fX2;    ///< correction param X2
  double fQ2min; ///< min. Q2 for PDF evaluation
};

}         // genie namespace

#endif    // _BODEK_YANG_PDF_H_
//____________________________________________________________________________
/*!

\class    genie::BYStrucFunc

\brief    Bodek Yang structure function model

\ref      hep-ph/0411202

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  September 28, 2004

*/
//____________________________________________________________________________

#ifndef _BODEK_YANG_STRUCTURE_FUNCTION_MODEL_H_
#define _BODEK_YANG_STRUCTURE_FUNCTION_MODEL_H_

#include "Physics/DeepInelastic/XSection/QPMDISStrucFuncBase.h"
#include "Framework/Interaction/Interaction.h"
#include "Physics/PartonDistributions/PDFModelI.h"

namespace genie {

class BYStrucFunc : public QPMDISStrucFuncBase {

public:
  BYStrucFunc();
  BYStrucFunc(string config);
  virtual ~BYStrucFunc();

  // overload Algorithm::Configure() to read the config. registry
  // at the algorithm initialization and set private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

protected:

  void Init         (void);
  void ReadBYParams (void);

  // override part of the DISStructureFuncModel implementation
  // to compute all the corrections applied by the Bodek-Yang model.
  double ScalingVar (const Interaction * i) const;
  void   KFactors   (const Interaction * i, double & kuv, 
                         double & kdv, double & kus, double & kds) const;

  // Bodek-Yang model-specific parameters

  double fA;     ///< better scaling var parameter A
  double fB;     ///< better scaling var parameter B
  double fCsU;   ///< U-sea K factor parameter 
  double fCsD;   ///< D-sea K factor parameter 
  double fCv1U;  ///< U-val K factor parameter 
  double fCv2U;  ///< U-val K factor parameter 
  double fCv1D;  ///< D-val K factor parameter 
  double fCv2D;  ///< D-val K factor parameter 
};

}         // genie namespace

#endif    // _BODEK_YANG_STRUCTURE_FUNCTION_MODEL_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::BYPDF", payloadCode, "@",
"genie::BYStrucFunc", payloadCode, "@",
"genie::DISStructureFunc", payloadCode, "@",
"genie::DISStructureFuncModelI", payloadCode, "@",
"genie::DISXSec", payloadCode, "@",
"genie::QPMDISPXSec", payloadCode, "@",
"genie::QPMDISStrucFunc", payloadCode, "@",
"genie::QPMDISStrucFuncBase", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhDISXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhDISXS_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhDISXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhDISXS() {
  TriggerDictionaryInitialization_libGPhDISXS_Impl();
}
