// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhXSIg

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
#include "XSecIntegratorI.h"
#include "GSLXSecFunc.h"

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
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geniecLcLutils_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie::utils", 0 /*version*/, "", 91,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &geniecLcLutils_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geniecLcLutils_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

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
            instance("genie::utils::gsl", 0 /*version*/, "", 92,
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
   static TClass *geniecLcLXSecIntegratorI_Dictionary();
   static void geniecLcLXSecIntegratorI_TClassManip(TClass*);
   static void delete_geniecLcLXSecIntegratorI(void *p);
   static void deleteArray_geniecLcLXSecIntegratorI(void *p);
   static void destruct_geniecLcLXSecIntegratorI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::XSecIntegratorI*)
   {
      ::genie::XSecIntegratorI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::XSecIntegratorI));
      static ::ROOT::TGenericClassInfo 
         instance("genie::XSecIntegratorI", "", 35,
                  typeid(::genie::XSecIntegratorI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLXSecIntegratorI_Dictionary, isa_proxy, 0,
                  sizeof(::genie::XSecIntegratorI) );
      instance.SetDelete(&delete_geniecLcLXSecIntegratorI);
      instance.SetDeleteArray(&deleteArray_geniecLcLXSecIntegratorI);
      instance.SetDestructor(&destruct_geniecLcLXSecIntegratorI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::XSecIntegratorI*)
   {
      return GenerateInitInstanceLocal((::genie::XSecIntegratorI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::XSecIntegratorI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLXSecIntegratorI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::XSecIntegratorI*)0x0)->GetClass();
      geniecLcLXSecIntegratorI_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLXSecIntegratorI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::dXSec_dQ2_E*)
   {
      ::genie::utils::gsl::dXSec_dQ2_E *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::dXSec_dQ2_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::dXSec_dQ2_E", "", 99,
                  typeid(::genie::utils::gsl::dXSec_dQ2_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::dXSec_dQ2_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::dXSec_dQ2_E*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::dXSec_dQ2_E*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::dXSec_dQ2_E*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::dXSec_dQ2_E*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLdXSec_dQ2_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dy_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLdXSec_dy_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::dXSec_dy_E*)
   {
      ::genie::utils::gsl::dXSec_dy_E *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::dXSec_dy_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::dXSec_dy_E", "", 120,
                  typeid(::genie::utils::gsl::dXSec_dy_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLdXSec_dy_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::dXSec_dy_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLdXSec_dy_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dy_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLdXSec_dy_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::dXSec_dy_E*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::dXSec_dy_E*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::dXSec_dy_E*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dy_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::dXSec_dy_E*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLdXSec_dy_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLdXSec_dy_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dxdy_E*)
   {
      ::genie::utils::gsl::d2XSec_dxdy_E *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dxdy_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dxdy_E", "", 141,
                  typeid(::genie::utils::gsl::d2XSec_dxdy_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dxdy_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dxdy_E*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d2XSec_dxdy_E*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dxdy_E*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dxdy_E*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dWdQ2_E*)
   {
      ::genie::utils::gsl::d2XSec_dWdQ2_E *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dWdQ2_E));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dWdQ2_E", "", 225,
                  typeid(::genie::utils::gsl::d2XSec_dWdQ2_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dWdQ2_E) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dWdQ2_E*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d2XSec_dWdQ2_E*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dWdQ2_E*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dWdQ2_E*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dxdy_Ex*)
   {
      ::genie::utils::gsl::d2XSec_dxdy_Ex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dxdy_Ex));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dxdy_Ex", "", 246,
                  typeid(::genie::utils::gsl::d2XSec_dxdy_Ex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dxdy_Ex) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dxdy_Ex*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d2XSec_dxdy_Ex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dxdy_Ex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dxdy_Ex*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dxdy_Ey*)
   {
      ::genie::utils::gsl::d2XSec_dxdy_Ey *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dxdy_Ey));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dxdy_Ey", "", 268,
                  typeid(::genie::utils::gsl::d2XSec_dxdy_Ey), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dxdy_Ey) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dxdy_Ey*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d2XSec_dxdy_Ey*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dxdy_Ey*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dxdy_Ey*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dWdQ2_EW*)
   {
      ::genie::utils::gsl::d2XSec_dWdQ2_EW *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dWdQ2_EW));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dWdQ2_EW", "", 290,
                  typeid(::genie::utils::gsl::d2XSec_dWdQ2_EW), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dWdQ2_EW) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dWdQ2_EW*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d2XSec_dWdQ2_EW*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dWdQ2_EW*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dWdQ2_EW*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)
   {
      ::genie::utils::gsl::d2XSec_dWdQ2_EQ2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d2XSec_dWdQ2_EQ2));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d2XSec_dWdQ2_EQ2", "", 312,
                  typeid(::genie::utils::gsl::d2XSec_dWdQ2_EQ2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d2XSec_dWdQ2_EQ2) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd5XSecAR_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd5XSecAR_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d5XSecAR*)
   {
      ::genie::utils::gsl::d5XSecAR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d5XSecAR));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d5XSecAR", "", 335,
                  typeid(::genie::utils::gsl::d5XSecAR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd5XSecAR_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d5XSecAR) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd5XSecAR);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd5XSecAR);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd5XSecAR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d5XSecAR*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d5XSecAR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d5XSecAR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd5XSecAR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d5XSecAR*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd5XSecAR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd5XSecAR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)
   {
      ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi", "", 358,
                  typeid(::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)
   {
      ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d4Xsec_dEldThetaldOmegapi", "", 380,
                  typeid(::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_Dictionary();
   static void geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)
   {
      ::genie::utils::gsl::d3Xsec_dOmegaldThetapi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::d3Xsec_dOmegaldThetapi));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::d3Xsec_dOmegaldThetapi", "", 405,
                  typeid(::genie::utils::gsl::d3Xsec_dOmegaldThetapi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::d3Xsec_dOmegaldThetapi) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_Dictionary();
   static void geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_TClassManip(TClass*);
   static void *new_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p = 0);
   static void *newArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(Long_t size, void *p);
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::dXSec_dElep_AR*)
   {
      ::genie::utils::gsl::dXSec_dElep_AR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::dXSec_dElep_AR));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::dXSec_dElep_AR", "", 432,
                  typeid(::genie::utils::gsl::dXSec_dElep_AR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::dXSec_dElep_AR) );
      instance.SetNew(&new_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      instance.SetNewArray(&newArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::dXSec_dElep_AR*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::dXSec_dElep_AR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::dXSec_dElep_AR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::dXSec_dElep_AR*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLdXSec_dElep_AR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_Dictionary();
   static void geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_TClassManip(TClass*);
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p);
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p);
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::utils::gsl::dXSec_Log_Wrapper*)
   {
      ::genie::utils::gsl::dXSec_Log_Wrapper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::utils::gsl::dXSec_Log_Wrapper));
      static ::ROOT::TGenericClassInfo 
         instance("genie::utils::gsl::dXSec_Log_Wrapper", "", 466,
                  typeid(::genie::utils::gsl::dXSec_Log_Wrapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_Dictionary, isa_proxy, 0,
                  sizeof(::genie::utils::gsl::dXSec_Log_Wrapper) );
      instance.SetDelete(&delete_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper);
      instance.SetDeleteArray(&deleteArray_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper);
      instance.SetDestructor(&destruct_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::utils::gsl::dXSec_Log_Wrapper*)
   {
      return GenerateInitInstanceLocal((::genie::utils::gsl::dXSec_Log_Wrapper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::utils::gsl::dXSec_Log_Wrapper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::utils::gsl::dXSec_Log_Wrapper*)0x0)->GetClass();
      geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLXSecIntegratorI(void *p) {
      delete ((::genie::XSecIntegratorI*)p);
   }
   static void deleteArray_geniecLcLXSecIntegratorI(void *p) {
      delete [] ((::genie::XSecIntegratorI*)p);
   }
   static void destruct_geniecLcLXSecIntegratorI(void *p) {
      typedef ::genie::XSecIntegratorI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::XSecIntegratorI

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p) {
      delete ((::genie::utils::gsl::dXSec_dQ2_E*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p) {
      delete [] ((::genie::utils::gsl::dXSec_dQ2_E*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dQ2_E(void *p) {
      typedef ::genie::utils::gsl::dXSec_dQ2_E current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::dXSec_dQ2_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p) {
      delete ((::genie::utils::gsl::dXSec_dy_E*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p) {
      delete [] ((::genie::utils::gsl::dXSec_dy_E*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dy_E(void *p) {
      typedef ::genie::utils::gsl::dXSec_dy_E current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::dXSec_dy_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p) {
      delete ((::genie::utils::gsl::d2XSec_dxdy_E*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p) {
      delete [] ((::genie::utils::gsl::d2XSec_dxdy_E*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_E(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dxdy_E current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dxdy_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p) {
      delete ((::genie::utils::gsl::d2XSec_dWdQ2_E*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p) {
      delete [] ((::genie::utils::gsl::d2XSec_dWdQ2_E*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_E(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dWdQ2_E current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dWdQ2_E

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p) {
      delete ((::genie::utils::gsl::d2XSec_dxdy_Ex*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p) {
      delete [] ((::genie::utils::gsl::d2XSec_dxdy_Ex*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ex(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dxdy_Ex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dxdy_Ex

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p) {
      delete ((::genie::utils::gsl::d2XSec_dxdy_Ey*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p) {
      delete [] ((::genie::utils::gsl::d2XSec_dxdy_Ey*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dxdy_Ey(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dxdy_Ey current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dxdy_Ey

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p) {
      delete ((::genie::utils::gsl::d2XSec_dWdQ2_EW*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p) {
      delete [] ((::genie::utils::gsl::d2XSec_dWdQ2_EW*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EW(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dWdQ2_EW current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dWdQ2_EW

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p) {
      delete ((::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p) {
      delete [] ((::genie::utils::gsl::d2XSec_dWdQ2_EQ2*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd2XSec_dWdQ2_EQ2(void *p) {
      typedef ::genie::utils::gsl::d2XSec_dWdQ2_EQ2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d2XSec_dWdQ2_EQ2

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p) {
      delete ((::genie::utils::gsl::d5XSecAR*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p) {
      delete [] ((::genie::utils::gsl::d5XSecAR*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd5XSecAR(void *p) {
      typedef ::genie::utils::gsl::d5XSecAR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d5XSecAR

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p) {
      delete ((::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p) {
      delete [] ((::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd5Xsec_dEldOmegaldOmegapi(void *p) {
      typedef ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p) {
      delete ((::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p) {
      delete [] ((::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd4Xsec_dEldThetaldOmegapi(void *p) {
      typedef ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d4Xsec_dEldThetaldOmegapi

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p) {
      delete ((::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p) {
      delete [] ((::genie::utils::gsl::d3Xsec_dOmegaldThetapi*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLd3Xsec_dOmegaldThetapi(void *p) {
      typedef ::genie::utils::gsl::d3Xsec_dOmegaldThetapi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::d3Xsec_dOmegaldThetapi

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::utils::gsl::dXSec_dElep_AR : new ::genie::utils::gsl::dXSec_dElep_AR;
   }
   static void *newArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::utils::gsl::dXSec_dElep_AR[nElements] : new ::genie::utils::gsl::dXSec_dElep_AR[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p) {
      delete ((::genie::utils::gsl::dXSec_dElep_AR*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p) {
      delete [] ((::genie::utils::gsl::dXSec_dElep_AR*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_dElep_AR(void *p) {
      typedef ::genie::utils::gsl::dXSec_dElep_AR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::dXSec_dElep_AR

namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p) {
      delete ((::genie::utils::gsl::dXSec_Log_Wrapper*)p);
   }
   static void deleteArray_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p) {
      delete [] ((::genie::utils::gsl::dXSec_Log_Wrapper*)p);
   }
   static void destruct_geniecLcLutilscLcLgslcLcLdXSec_Log_Wrapper(void *p) {
      typedef ::genie::utils::gsl::dXSec_Log_Wrapper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::utils::gsl::dXSec_Log_Wrapper

namespace {
  void TriggerDictionaryInitialization_libGPhXSIg_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Physics/XSectionIntegration",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Physics/XSectionIntegration",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/XSectionIntegration",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Physics/XSectionIntegration/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhXSIg dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class XSecIntegratorI;}
namespace genie{namespace utils{namespace gsl{class dXSec_dQ2_E;}}}
namespace genie{namespace utils{namespace gsl{class dXSec_dy_E;}}}
namespace genie{namespace utils{namespace gsl{class d2XSec_dxdy_E;}}}
namespace genie{namespace utils{namespace gsl{class d2XSec_dWdQ2_E;}}}
namespace genie{namespace utils{namespace gsl{class d2XSec_dxdy_Ex;}}}
namespace genie{namespace utils{namespace gsl{class d2XSec_dxdy_Ey;}}}
namespace genie{namespace utils{namespace gsl{class d2XSec_dWdQ2_EW;}}}
namespace genie{namespace utils{namespace gsl{class d2XSec_dWdQ2_EQ2;}}}
namespace genie{namespace utils{namespace gsl{class d5XSecAR;}}}
namespace genie{namespace utils{namespace gsl{class d5Xsec_dEldOmegaldOmegapi;}}}
namespace genie{namespace utils{namespace gsl{class d4Xsec_dEldThetaldOmegapi;}}}
namespace genie{namespace utils{namespace gsl{class d3Xsec_dOmegaldThetapi;}}}
namespace genie{namespace utils{namespace gsl{class dXSec_dElep_AR;}}}
namespace genie{namespace utils{namespace gsl{class dXSec_Log_Wrapper;}}}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhXSIg dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::XSecIntegratorI

\brief    Cross Section Integrator Interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  May 03, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _XSEC_INTEGRATOR_I_H_
#define _XSEC_INTEGRATOR_I_H_

#include "Framework/Algorithm/Algorithm.h"
#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Framework/Interaction/Interaction.h"

namespace genie {

class IntegratorI;

 class XSecIntegratorI : public Algorithm {

public:
  virtual ~XSecIntegratorI();

  virtual double Integrate(const XSecAlgorithmI * model, 
                           const Interaction * interaction 
                       /*, const KPhaseSpaceCut * cut=0*/) const= 0;
protected:
  XSecIntegratorI();
  XSecIntegratorI(string name);
  XSecIntegratorI(string name, string config);

  const IntegratorI * fIntegrator; ///< GENIE numerical integrator 

  string fGSLIntgType;                     ///< name of GSL numerical integrator
  double fGSLRelTol;                       ///< required relative tolerance (error)
  int    fGSLMaxEval;                      ///< GSL max evaluations
  int    fGSLMinEval;                      ///< GSL min evaluations. Ignored by some integrators.
  unsigned int fGSLMaxSizeOfSubintervals;  ///< GSL maximum number of sub-intervals for 1D integrator
  unsigned int fGSLRule;                   ///< GSL Gauss-Kronrod integration rule (only for GSL 1D adaptive type)

};

}       // genie namespace
#endif  // _XSEC_INTEGRATOR_I_H_
//_____________________________________________________________________________________
/*!

\namespace  genie::utils::gsl

\brief      GENIE differential cross section function wrappers for GSL integrators.

\author     Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
            University of Liverpool & STFC Rutherford Appleton Lab

\created    Sep 01, 2009

\cpright    Copyright (c) 2003-2019, The GENIE Collaboration
            For the full text of the license visit http://copyright.genie-mc.org
            or see $GENIE/LICENSE
*/
//_____________________________________________________________________________________

#ifndef _GENIE_XSEC_FUNCTION_GSL_WRAPPERS_H_
#define _GENIE_XSEC_FUNCTION_GSL_WRAPPERS_H_

#include <Math/IFunction.h>
#include <Math/IntegratorMultiDim.h>

namespace genie {

class XSecAlgorithmI;
class Interaction;

namespace utils {
namespace gsl   {

//.....................................................................................
//
// genie::utils::gsl::dXSec_dQ2_E
// A 1-D cross section function: dxsec/dQ2 = f(Q2)|(fixed E)
//
class dXSec_dQ2_E: public ROOT::Math::IBaseFunctionOneDim
{
public:
  dXSec_dQ2_E(const XSecAlgorithmI * m, const Interaction * i);
 ~dXSec_dQ2_E();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::dXSec_dy_E
// A 1-D cross section function: dxsec/dy = f(y)|(fixed E)
//
class dXSec_dy_E: public ROOT::Math::IBaseFunctionOneDim
{
public:
  dXSec_dy_E(const XSecAlgorithmI * m, const Interaction * i);
 ~dXSec_dy_E();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dxdy_E
// A 2-D cross section function: d2xsec/dxdy = f(x,y)|(fixed E)
//
class d2XSec_dxdy_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dxdy_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSec_dxdy_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dQ2dy_E
// A 2-D cross section function: d2xsec/dQ2dy = f(Q^2,y)|(fixed E)
//
class d2XSec_dQ2dy_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dQ2dy_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSec_dQ2dy_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dQ2dydt_E
// A 3-D cross section function: d3xsec/dQ2dydt = f(Q^2,y,t)|(fixed E)
//
class d2XSec_dQ2dydt_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dQ2dydt_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSec_dQ2dydt_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d3XSec_dxdydt_E
// A 3-D cross section function: d3xsec/dxdydt = f(x,y,t)|(fixed E)
//
class d3XSec_dxdydt_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d3XSec_dxdydt_E(const XSecAlgorithmI * m, const Interaction * i);
  ~d3XSec_dxdydt_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dWdQ2_E
// A 2-D cross section function: d2xsec/dWdQ2 = f(W,Q2)|(fixed E)
//
class d2XSec_dWdQ2_E: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d2XSec_dWdQ2_E(const XSecAlgorithmI * m, const Interaction * i);
 ~d2XSec_dWdQ2_E();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dxdy_Ex
// A 1-D cross section function: d2xsec/dxdy = f(y)|(fixed:E,x)
//
class d2XSec_dxdy_Ex: public ROOT::Math::IBaseFunctionOneDim
{
public:
  d2XSec_dxdy_Ex(const XSecAlgorithmI * m, const Interaction * i, double x);
 ~d2XSec_dxdy_Ex();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double fx;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dxdy_Ey 
// A 1-D cross section function: d2xsec/dxdy = f(x)|(fixed:E,y) 
//
class d2XSec_dxdy_Ey: public ROOT::Math::IBaseFunctionOneDim
{
public:
  d2XSec_dxdy_Ey(const XSecAlgorithmI * m, const Interaction * i, double x);
 ~d2XSec_dxdy_Ey();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fy;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dWdQ2_EW
// A 1-D cross section function: d2xsec/dWdQ2= f(Q2)|(fixed:E,W)
//
class d2XSec_dWdQ2_EW: public ROOT::Math::IBaseFunctionOneDim
{
public:
  d2XSec_dWdQ2_EW( const XSecAlgorithmI * m, const Interaction * i, double W);
 ~d2XSec_dWdQ2_EW();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fW;
};

//.....................................................................................
//
// genie::utils::gsl::d2XSec_dWdQ2_EQ2
// A 1-D cross section function: d2xsec/dWdQ2= f(W)|(fixed:E,Q2)
//
class d2XSec_dWdQ2_EQ2: public ROOT::Math::IBaseFunctionOneDim
{
public:
  d2XSec_dWdQ2_EQ2(const XSecAlgorithmI * m, const Interaction * i, double Q2);
 ~d2XSec_dWdQ2_EQ2();

  // ROOT::Math::IBaseFunctionOneDim interface
  unsigned int                      NDim   (void)             const;
  double                            DoEval (double xin) const;
  ROOT::Math::IBaseFunctionOneDim * Clone  (void)             const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double                 fQ2;
};

//.....................................................................................

//.....................................................................................
//
// 
//
class d5XSecAR : public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d5XSecAR(const XSecAlgorithmI * m, const Interaction * i);
  ~d5XSecAR();
  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
  void SetFlip(bool b) { flip = b; }

private:
  const XSecAlgorithmI * fModel;
  const Interaction * fInteraction;
  bool flip;
};


//.....................................................................................
//
// genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi
// A 5-D cross section function (fixed E_nu)
//
class d5Xsec_dEldOmegaldOmegapi: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d5Xsec_dEldOmegaldOmegapi(const XSecAlgorithmI * m, const Interaction * i);
 ~d5Xsec_dEldOmegaldOmegapi();
        
  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
};

///.....................................................................................
///
/// genie::utils::gsl::d4Xsec_dEldThetaldOmegapi
/// A 4-D cross section function (fixed E_nu)
/// DANIEL - for the Alvarez-Russo cross-section
///
class d4Xsec_dEldThetaldOmegapi: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d4Xsec_dEldThetaldOmegapi(const XSecAlgorithmI * m, const Interaction * i);
 ~d4Xsec_dEldThetaldOmegapi();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
  
  double                              GetFactor()                 const;
  void                                SetFactor(double factor);

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  double fFactor;
};
///.....................................................................................
///
/// genie::utils::gsl::d3Xsec_dOmegaldThetapi
/// A 3-D cross section function (fixed E_nu)
/// Steve Dennis - for the Alvarez-Russo cross-section
///
class d3Xsec_dOmegaldThetapi: public ROOT::Math::IBaseFunctionMultiDim
{
public:
  d3Xsec_dOmegaldThetapi(const XSecAlgorithmI * m, const Interaction * i);
 ~d3Xsec_dOmegaldThetapi();

  // ROOT::Math::IBaseFunctionMultiDim interface
  unsigned int                        NDim   (void)               const;
  double                              DoEval (const double * xin) const;
  d3Xsec_dOmegaldThetapi            * Clone  (void)               const;
  
  // Specific to this class
  void SetE_lep (double E_lepton) const;
  // Yes, it's a const setter
  // Needed because DoEval must be const, but dXSec_dElep_AR::DoEval() must call this

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  mutable double fElep;
};
///.....................................................................................
///
/// genie::utils::gsl::dXSec_dElep_AR
/// A 1-D cross section function: dxsec/dElep
/// Used for Alvarez-Ruso coherent.
///
class dXSec_dElep_AR: public ROOT::Math::IBaseFunctionOneDim
{
public:
  dXSec_dElep_AR(const XSecAlgorithmI * m, const Interaction * i,
                 string gsl_nd_integrator_type, double gsl_relative_tolerance,
                 unsigned int max_n_calls);
  dXSec_dElep_AR() {};
 ~dXSec_dElep_AR();

  // ROOT::Math::IBaseFunctionOneDim interface
  dXSec_dElep_AR *                  Clone  (void)             const;
  double                            DoEval (double xin) const;

private:
  const XSecAlgorithmI * fModel;
  const Interaction *    fInteraction;
  
  const genie::utils::gsl::d3Xsec_dOmegaldThetapi * func;
  
  mutable ROOT::Math::IntegratorMultiDim integrator;
  
  double kine_min[3];
  double kine_max[3];
  
  string fGSLIntegratorType;
  double fGSLRelTol;
  unsigned int fGSLMaxCalls;
};
                  
///.....................................................................................
/// 
/// dXSec_Log_Wrapper
/// Redistributes variables over a range to a e^-x distribution.
/// Allows the integrator to use a logarithmic series of points while calling uniformly.
class dXSec_Log_Wrapper: public ROOT::Math::IBaseFunctionMultiDim
{
  public:
    dXSec_Log_Wrapper(const ROOT::Math::IBaseFunctionMultiDim * fn,
                      bool * ifLog, double * min, double * maxes);
   ~dXSec_Log_Wrapper();
  
    // ROOT::Math::IBaseFunctionMultiDim interface
    unsigned int                        NDim   (void)               const;
    double                              DoEval (const double * xin) const;
    ROOT::Math::IBaseFunctionMultiDim * Clone  (void)               const;
  
  private:
    const ROOT::Math::IBaseFunctionMultiDim * fFn;
    bool * fIfLog;
    double * fMins;
    double * fMaxes;
};
  
} // gsl   namespace
} // utils namespace
} // genie namespace

#endif   


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::XSecIntegratorI", payloadCode, "@",
"genie::utils::gsl::d2XSec_dWdQ2_E", payloadCode, "@",
"genie::utils::gsl::d2XSec_dWdQ2_EQ2", payloadCode, "@",
"genie::utils::gsl::d2XSec_dWdQ2_EW", payloadCode, "@",
"genie::utils::gsl::d2XSec_dxdy_E", payloadCode, "@",
"genie::utils::gsl::d2XSec_dxdy_Ex", payloadCode, "@",
"genie::utils::gsl::d2XSec_dxdy_Ey", payloadCode, "@",
"genie::utils::gsl::d3Xsec_dOmegaldThetapi", payloadCode, "@",
"genie::utils::gsl::d4Xsec_dEldThetaldOmegapi", payloadCode, "@",
"genie::utils::gsl::d5XSecAR", payloadCode, "@",
"genie::utils::gsl::d5Xsec_dEldOmegaldOmegapi", payloadCode, "@",
"genie::utils::gsl::dXSec_Log_Wrapper", payloadCode, "@",
"genie::utils::gsl::dXSec_dElep_AR", payloadCode, "@",
"genie::utils::gsl::dXSec_dQ2_E", payloadCode, "@",
"genie::utils::gsl::dXSec_dy_E", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhXSIg",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhXSIg_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhXSIg_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhXSIg() {
  TriggerDictionaryInitialization_libGPhXSIg_Impl();
}
