// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwNtp

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
#include "NtpMCEventRecord.h"
#include "NtpMCRecordI.h"
#include "NtpMCTreeHeader.h"
#include "NtpMCJobConfig.h"
#include "NtpWriter.h"
#include "NtpMCDTime.h"
#include "NtpMCJobEnv.h"
#include "NtpMCRecHeader.h"

// Header files passed via #pragma extra_include

namespace genie {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "Framework/Conventions/GMode.h", 22,
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
   static void *new_geniecLcLNtpMCRecHeader(void *p = 0);
   static void *newArray_geniecLcLNtpMCRecHeader(Long_t size, void *p);
   static void delete_geniecLcLNtpMCRecHeader(void *p);
   static void deleteArray_geniecLcLNtpMCRecHeader(void *p);
   static void destruct_geniecLcLNtpMCRecHeader(void *p);
   static void streamer_geniecLcLNtpMCRecHeader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NtpMCRecHeader*)
   {
      ::genie::NtpMCRecHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::NtpMCRecHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::NtpMCRecHeader", ::genie::NtpMCRecHeader::Class_Version(), "NtpMCRecHeader.h", 33,
                  typeid(::genie::NtpMCRecHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::NtpMCRecHeader::Dictionary, isa_proxy, 16,
                  sizeof(::genie::NtpMCRecHeader) );
      instance.SetNew(&new_geniecLcLNtpMCRecHeader);
      instance.SetNewArray(&newArray_geniecLcLNtpMCRecHeader);
      instance.SetDelete(&delete_geniecLcLNtpMCRecHeader);
      instance.SetDeleteArray(&deleteArray_geniecLcLNtpMCRecHeader);
      instance.SetDestructor(&destruct_geniecLcLNtpMCRecHeader);
      instance.SetStreamerFunc(&streamer_geniecLcLNtpMCRecHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NtpMCRecHeader*)
   {
      return GenerateInitInstanceLocal((::genie::NtpMCRecHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NtpMCRecHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_geniecLcLNtpMCRecordI(void *p);
   static void deleteArray_geniecLcLNtpMCRecordI(void *p);
   static void destruct_geniecLcLNtpMCRecordI(void *p);
   static void streamer_geniecLcLNtpMCRecordI(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NtpMCRecordI*)
   {
      ::genie::NtpMCRecordI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::NtpMCRecordI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::NtpMCRecordI", ::genie::NtpMCRecordI::Class_Version(), "NtpMCRecordI.h", 30,
                  typeid(::genie::NtpMCRecordI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::NtpMCRecordI::Dictionary, isa_proxy, 16,
                  sizeof(::genie::NtpMCRecordI) );
      instance.SetDelete(&delete_geniecLcLNtpMCRecordI);
      instance.SetDeleteArray(&deleteArray_geniecLcLNtpMCRecordI);
      instance.SetDestructor(&destruct_geniecLcLNtpMCRecordI);
      instance.SetStreamerFunc(&streamer_geniecLcLNtpMCRecordI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NtpMCRecordI*)
   {
      return GenerateInitInstanceLocal((::genie::NtpMCRecordI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NtpMCRecordI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLNtpMCEventRecord(void *p = 0);
   static void *newArray_geniecLcLNtpMCEventRecord(Long_t size, void *p);
   static void delete_geniecLcLNtpMCEventRecord(void *p);
   static void deleteArray_geniecLcLNtpMCEventRecord(void *p);
   static void destruct_geniecLcLNtpMCEventRecord(void *p);
   static void streamer_geniecLcLNtpMCEventRecord(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NtpMCEventRecord*)
   {
      ::genie::NtpMCEventRecord *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::NtpMCEventRecord >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::NtpMCEventRecord", ::genie::NtpMCEventRecord::Class_Version(), "", 43,
                  typeid(::genie::NtpMCEventRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::NtpMCEventRecord::Dictionary, isa_proxy, 16,
                  sizeof(::genie::NtpMCEventRecord) );
      instance.SetNew(&new_geniecLcLNtpMCEventRecord);
      instance.SetNewArray(&newArray_geniecLcLNtpMCEventRecord);
      instance.SetDelete(&delete_geniecLcLNtpMCEventRecord);
      instance.SetDeleteArray(&deleteArray_geniecLcLNtpMCEventRecord);
      instance.SetDestructor(&destruct_geniecLcLNtpMCEventRecord);
      instance.SetStreamerFunc(&streamer_geniecLcLNtpMCEventRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NtpMCEventRecord*)
   {
      return GenerateInitInstanceLocal((::genie::NtpMCEventRecord*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NtpMCEventRecord*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLNtpMCDTime(void *p = 0);
   static void *newArray_geniecLcLNtpMCDTime(Long_t size, void *p);
   static void delete_geniecLcLNtpMCDTime(void *p);
   static void deleteArray_geniecLcLNtpMCDTime(void *p);
   static void destruct_geniecLcLNtpMCDTime(void *p);
   static void streamer_geniecLcLNtpMCDTime(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NtpMCDTime*)
   {
      ::genie::NtpMCDTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::NtpMCDTime >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::NtpMCDTime", ::genie::NtpMCDTime::Class_Version(), "NtpMCDTime.h", 34,
                  typeid(::genie::NtpMCDTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::NtpMCDTime::Dictionary, isa_proxy, 16,
                  sizeof(::genie::NtpMCDTime) );
      instance.SetNew(&new_geniecLcLNtpMCDTime);
      instance.SetNewArray(&newArray_geniecLcLNtpMCDTime);
      instance.SetDelete(&delete_geniecLcLNtpMCDTime);
      instance.SetDeleteArray(&deleteArray_geniecLcLNtpMCDTime);
      instance.SetDestructor(&destruct_geniecLcLNtpMCDTime);
      instance.SetStreamerFunc(&streamer_geniecLcLNtpMCDTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NtpMCDTime*)
   {
      return GenerateInitInstanceLocal((::genie::NtpMCDTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NtpMCDTime*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geniecLcLNtpMCTreeHeader(void *p = 0);
   static void *newArray_geniecLcLNtpMCTreeHeader(Long_t size, void *p);
   static void delete_geniecLcLNtpMCTreeHeader(void *p);
   static void deleteArray_geniecLcLNtpMCTreeHeader(void *p);
   static void destruct_geniecLcLNtpMCTreeHeader(void *p);
   static void streamer_geniecLcLNtpMCTreeHeader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NtpMCTreeHeader*)
   {
      ::genie::NtpMCTreeHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genie::NtpMCTreeHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genie::NtpMCTreeHeader", ::genie::NtpMCTreeHeader::Class_Version(), "", 160,
                  typeid(::genie::NtpMCTreeHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genie::NtpMCTreeHeader::Dictionary, isa_proxy, 16,
                  sizeof(::genie::NtpMCTreeHeader) );
      instance.SetNew(&new_geniecLcLNtpMCTreeHeader);
      instance.SetNewArray(&newArray_geniecLcLNtpMCTreeHeader);
      instance.SetDelete(&delete_geniecLcLNtpMCTreeHeader);
      instance.SetDeleteArray(&deleteArray_geniecLcLNtpMCTreeHeader);
      instance.SetDestructor(&destruct_geniecLcLNtpMCTreeHeader);
      instance.SetStreamerFunc(&streamer_geniecLcLNtpMCTreeHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NtpMCTreeHeader*)
   {
      return GenerateInitInstanceLocal((::genie::NtpMCTreeHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NtpMCTreeHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNtpMCJobConfig_Dictionary();
   static void geniecLcLNtpMCJobConfig_TClassManip(TClass*);
   static void *new_geniecLcLNtpMCJobConfig(void *p = 0);
   static void *newArray_geniecLcLNtpMCJobConfig(Long_t size, void *p);
   static void delete_geniecLcLNtpMCJobConfig(void *p);
   static void deleteArray_geniecLcLNtpMCJobConfig(void *p);
   static void destruct_geniecLcLNtpMCJobConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NtpMCJobConfig*)
   {
      ::genie::NtpMCJobConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NtpMCJobConfig));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NtpMCJobConfig", "", 217,
                  typeid(::genie::NtpMCJobConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNtpMCJobConfig_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NtpMCJobConfig) );
      instance.SetNew(&new_geniecLcLNtpMCJobConfig);
      instance.SetNewArray(&newArray_geniecLcLNtpMCJobConfig);
      instance.SetDelete(&delete_geniecLcLNtpMCJobConfig);
      instance.SetDeleteArray(&deleteArray_geniecLcLNtpMCJobConfig);
      instance.SetDestructor(&destruct_geniecLcLNtpMCJobConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NtpMCJobConfig*)
   {
      return GenerateInitInstanceLocal((::genie::NtpMCJobConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NtpMCJobConfig*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNtpMCJobConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCJobConfig*)0x0)->GetClass();
      geniecLcLNtpMCJobConfig_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNtpMCJobConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNtpWriter_Dictionary();
   static void geniecLcLNtpWriter_TClassManip(TClass*);
   static void *new_geniecLcLNtpWriter(void *p = 0);
   static void *newArray_geniecLcLNtpWriter(Long_t size, void *p);
   static void delete_geniecLcLNtpWriter(void *p);
   static void deleteArray_geniecLcLNtpWriter(void *p);
   static void destruct_geniecLcLNtpWriter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NtpWriter*)
   {
      ::genie::NtpWriter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NtpWriter));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NtpWriter", "", 275,
                  typeid(::genie::NtpWriter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNtpWriter_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NtpWriter) );
      instance.SetNew(&new_geniecLcLNtpWriter);
      instance.SetNewArray(&newArray_geniecLcLNtpWriter);
      instance.SetDelete(&delete_geniecLcLNtpWriter);
      instance.SetDeleteArray(&deleteArray_geniecLcLNtpWriter);
      instance.SetDestructor(&destruct_geniecLcLNtpWriter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NtpWriter*)
   {
      return GenerateInitInstanceLocal((::genie::NtpWriter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NtpWriter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNtpWriter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NtpWriter*)0x0)->GetClass();
      geniecLcLNtpWriter_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNtpWriter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLNtpMCJobEnv_Dictionary();
   static void geniecLcLNtpMCJobEnv_TClassManip(TClass*);
   static void *new_geniecLcLNtpMCJobEnv(void *p = 0);
   static void *newArray_geniecLcLNtpMCJobEnv(Long_t size, void *p);
   static void delete_geniecLcLNtpMCJobEnv(void *p);
   static void deleteArray_geniecLcLNtpMCJobEnv(void *p);
   static void destruct_geniecLcLNtpMCJobEnv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::NtpMCJobEnv*)
   {
      ::genie::NtpMCJobEnv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::NtpMCJobEnv));
      static ::ROOT::TGenericClassInfo 
         instance("genie::NtpMCJobEnv", "", 413,
                  typeid(::genie::NtpMCJobEnv), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLNtpMCJobEnv_Dictionary, isa_proxy, 0,
                  sizeof(::genie::NtpMCJobEnv) );
      instance.SetNew(&new_geniecLcLNtpMCJobEnv);
      instance.SetNewArray(&newArray_geniecLcLNtpMCJobEnv);
      instance.SetDelete(&delete_geniecLcLNtpMCJobEnv);
      instance.SetDeleteArray(&deleteArray_geniecLcLNtpMCJobEnv);
      instance.SetDestructor(&destruct_geniecLcLNtpMCJobEnv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::NtpMCJobEnv*)
   {
      return GenerateInitInstanceLocal((::genie::NtpMCJobEnv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::NtpMCJobEnv*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLNtpMCJobEnv_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCJobEnv*)0x0)->GetClass();
      geniecLcLNtpMCJobEnv_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLNtpMCJobEnv_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr NtpMCRecHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NtpMCRecHeader::Class_Name()
{
   return "genie::NtpMCRecHeader";
}

//______________________________________________________________________________
const char *NtpMCRecHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCRecHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NtpMCRecHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCRecHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NtpMCRecHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCRecHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NtpMCRecHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCRecHeader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr NtpMCRecordI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NtpMCRecordI::Class_Name()
{
   return "genie::NtpMCRecordI";
}

//______________________________________________________________________________
const char *NtpMCRecordI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCRecordI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NtpMCRecordI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCRecordI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NtpMCRecordI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCRecordI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NtpMCRecordI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCRecordI*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr NtpMCEventRecord::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NtpMCEventRecord::Class_Name()
{
   return "genie::NtpMCEventRecord";
}

//______________________________________________________________________________
const char *NtpMCEventRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCEventRecord*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NtpMCEventRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCEventRecord*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NtpMCEventRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCEventRecord*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NtpMCEventRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCEventRecord*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr NtpMCDTime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NtpMCDTime::Class_Name()
{
   return "genie::NtpMCDTime";
}

//______________________________________________________________________________
const char *NtpMCDTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCDTime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NtpMCDTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCDTime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NtpMCDTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCDTime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NtpMCDTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCDTime*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
atomic_TClass_ptr NtpMCTreeHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NtpMCTreeHeader::Class_Name()
{
   return "genie::NtpMCTreeHeader";
}

//______________________________________________________________________________
const char *NtpMCTreeHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCTreeHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NtpMCTreeHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCTreeHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NtpMCTreeHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCTreeHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NtpMCTreeHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genie::NtpMCTreeHeader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genie
namespace genie {
//______________________________________________________________________________
void NtpMCRecHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::NtpMCRecHeader.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::NtpMCRecHeader thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> ievent;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << ievent;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNtpMCRecHeader(void *p) {
      return  p ? new(p) ::genie::NtpMCRecHeader : new ::genie::NtpMCRecHeader;
   }
   static void *newArray_geniecLcLNtpMCRecHeader(Long_t nElements, void *p) {
      return p ? new(p) ::genie::NtpMCRecHeader[nElements] : new ::genie::NtpMCRecHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNtpMCRecHeader(void *p) {
      delete ((::genie::NtpMCRecHeader*)p);
   }
   static void deleteArray_geniecLcLNtpMCRecHeader(void *p) {
      delete [] ((::genie::NtpMCRecHeader*)p);
   }
   static void destruct_geniecLcLNtpMCRecHeader(void *p) {
      typedef ::genie::NtpMCRecHeader current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLNtpMCRecHeader(TBuffer &buf, void *obj) {
      ((::genie::NtpMCRecHeader*)obj)->::genie::NtpMCRecHeader::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::NtpMCRecHeader

namespace genie {
//______________________________________________________________________________
void NtpMCRecordI::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::NtpMCRecordI.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::NtpMCRecordI thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      hdr.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TObject::Streamer(R__b);
      hdr.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrapper around operator delete
   static void delete_geniecLcLNtpMCRecordI(void *p) {
      delete ((::genie::NtpMCRecordI*)p);
   }
   static void deleteArray_geniecLcLNtpMCRecordI(void *p) {
      delete [] ((::genie::NtpMCRecordI*)p);
   }
   static void destruct_geniecLcLNtpMCRecordI(void *p) {
      typedef ::genie::NtpMCRecordI current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLNtpMCRecordI(TBuffer &buf, void *obj) {
      ((::genie::NtpMCRecordI*)obj)->::genie::NtpMCRecordI::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::NtpMCRecordI

namespace genie {
//______________________________________________________________________________
void NtpMCEventRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::NtpMCEventRecord.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::NtpMCEventRecord thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::NtpMCRecordI baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> event;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef genie::NtpMCRecordI baseClass0;
      baseClass0::Streamer(R__b);
      R__b << event;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNtpMCEventRecord(void *p) {
      return  p ? new(p) ::genie::NtpMCEventRecord : new ::genie::NtpMCEventRecord;
   }
   static void *newArray_geniecLcLNtpMCEventRecord(Long_t nElements, void *p) {
      return p ? new(p) ::genie::NtpMCEventRecord[nElements] : new ::genie::NtpMCEventRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNtpMCEventRecord(void *p) {
      delete ((::genie::NtpMCEventRecord*)p);
   }
   static void deleteArray_geniecLcLNtpMCEventRecord(void *p) {
      delete [] ((::genie::NtpMCEventRecord*)p);
   }
   static void destruct_geniecLcLNtpMCEventRecord(void *p) {
      typedef ::genie::NtpMCEventRecord current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLNtpMCEventRecord(TBuffer &buf, void *obj) {
      ((::genie::NtpMCEventRecord*)obj)->::genie::NtpMCEventRecord::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::NtpMCEventRecord

namespace genie {
//______________________________________________________________________________
void NtpMCDTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::NtpMCDTime.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::NtpMCDTime thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> year;
      R__b >> month;
      R__b >> day;
      R__b >> hour;
      R__b >> min;
      R__b >> sec;
      R__b >> val;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << year;
      R__b << month;
      R__b << day;
      R__b << hour;
      R__b << min;
      R__b << sec;
      R__b << val;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNtpMCDTime(void *p) {
      return  p ? new(p) ::genie::NtpMCDTime : new ::genie::NtpMCDTime;
   }
   static void *newArray_geniecLcLNtpMCDTime(Long_t nElements, void *p) {
      return p ? new(p) ::genie::NtpMCDTime[nElements] : new ::genie::NtpMCDTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNtpMCDTime(void *p) {
      delete ((::genie::NtpMCDTime*)p);
   }
   static void deleteArray_geniecLcLNtpMCDTime(void *p) {
      delete [] ((::genie::NtpMCDTime*)p);
   }
   static void destruct_geniecLcLNtpMCDTime(void *p) {
      typedef ::genie::NtpMCDTime current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLNtpMCDTime(TBuffer &buf, void *obj) {
      ((::genie::NtpMCDTime*)obj)->::genie::NtpMCDTime::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::NtpMCDTime

namespace genie {
//______________________________________________________________________________
void NtpMCTreeHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class genie::NtpMCTreeHeader.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genie::NtpMCTreeHeader thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      void *ptr_format = (void*)&format;
      R__b >> *reinterpret_cast<Int_t*>(ptr_format);
      cvstag.Streamer(R__b);
      datime.Streamer(R__b);
      R__b >> runnu;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << (Int_t)format;
      cvstag.Streamer(R__b);
      datime.Streamer(R__b);
      R__b << runnu;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genie
namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNtpMCTreeHeader(void *p) {
      return  p ? new(p) ::genie::NtpMCTreeHeader : new ::genie::NtpMCTreeHeader;
   }
   static void *newArray_geniecLcLNtpMCTreeHeader(Long_t nElements, void *p) {
      return p ? new(p) ::genie::NtpMCTreeHeader[nElements] : new ::genie::NtpMCTreeHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNtpMCTreeHeader(void *p) {
      delete ((::genie::NtpMCTreeHeader*)p);
   }
   static void deleteArray_geniecLcLNtpMCTreeHeader(void *p) {
      delete [] ((::genie::NtpMCTreeHeader*)p);
   }
   static void destruct_geniecLcLNtpMCTreeHeader(void *p) {
      typedef ::genie::NtpMCTreeHeader current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_geniecLcLNtpMCTreeHeader(TBuffer &buf, void *obj) {
      ((::genie::NtpMCTreeHeader*)obj)->::genie::NtpMCTreeHeader::Streamer(buf);
   }
} // end of namespace ROOT for class ::genie::NtpMCTreeHeader

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNtpMCJobConfig(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NtpMCJobConfig : new ::genie::NtpMCJobConfig;
   }
   static void *newArray_geniecLcLNtpMCJobConfig(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NtpMCJobConfig[nElements] : new ::genie::NtpMCJobConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNtpMCJobConfig(void *p) {
      delete ((::genie::NtpMCJobConfig*)p);
   }
   static void deleteArray_geniecLcLNtpMCJobConfig(void *p) {
      delete [] ((::genie::NtpMCJobConfig*)p);
   }
   static void destruct_geniecLcLNtpMCJobConfig(void *p) {
      typedef ::genie::NtpMCJobConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NtpMCJobConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNtpWriter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NtpWriter : new ::genie::NtpWriter;
   }
   static void *newArray_geniecLcLNtpWriter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NtpWriter[nElements] : new ::genie::NtpWriter[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNtpWriter(void *p) {
      delete ((::genie::NtpWriter*)p);
   }
   static void deleteArray_geniecLcLNtpWriter(void *p) {
      delete [] ((::genie::NtpWriter*)p);
   }
   static void destruct_geniecLcLNtpWriter(void *p) {
      typedef ::genie::NtpWriter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NtpWriter

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLNtpMCJobEnv(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NtpMCJobEnv : new ::genie::NtpMCJobEnv;
   }
   static void *newArray_geniecLcLNtpMCJobEnv(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::NtpMCJobEnv[nElements] : new ::genie::NtpMCJobEnv[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLNtpMCJobEnv(void *p) {
      delete ((::genie::NtpMCJobEnv*)p);
   }
   static void deleteArray_geniecLcLNtpMCJobEnv(void *p) {
      delete [] ((::genie::NtpMCJobEnv*)p);
   }
   static void destruct_geniecLcLNtpMCJobEnv(void *p) {
      typedef ::genie::NtpMCJobEnv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genie::NtpMCJobEnv

namespace {
  void TriggerDictionaryInitialization_libGFwNtp_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Framework/Ntuple",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Framework/Ntuple",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/Ntuple",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Framework/Ntuple/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwNtp dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class __attribute__((annotate("$clingAutoload$Framework/Ntuple/NtpMCRecHeader.h")))  __attribute__((annotate("$clingAutoload$Framework/Ntuple/NtpMCRecordI.h")))  NtpMCRecHeader;}
namespace genie{class __attribute__((annotate("$clingAutoload$Framework/Ntuple/NtpMCRecordI.h")))  NtpMCRecordI;}
namespace genie{class NtpMCEventRecord;}
namespace genie{class __attribute__((annotate("$clingAutoload$Framework/Ntuple/NtpMCDTime.h")))  NtpMCDTime;}
namespace genie{class NtpMCTreeHeader;}
namespace genie{class NtpMCJobConfig;}
namespace genie{class NtpWriter;}
namespace genie{class NtpMCJobEnv;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwNtp dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class   genie::NtpMCEventRecord

\brief   MINOS-style ntuple record. Each such ntuple record holds a generated
         EventRecord object. Ntuples of this type are intended for feeding
         GENIE events into other applications (for example the GEANT4 based
         MC generation framework of an experiment) if no direct interface
         exists.

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created October 1, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NTP_MC_EVENT_RECORD_H_
#define _NTP_MC_EVENT_RECORD_H_

#include <ostream>

#include "Framework/EventGen/EventRecord.h"
#include "Framework/Ntuple/NtpMCRecordI.h"

using std::ostream;

namespace genie {

class NtpMCEventRecord;
ostream & operator<< (ostream& stream, const NtpMCEventRecord & rec);

class NtpMCEventRecord : public NtpMCRecordI {

public :
  using NtpMCRecordI::Copy; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings

  NtpMCEventRecord();
  NtpMCEventRecord(const NtpMCEventRecord & ntpmcrec);
  virtual ~NtpMCEventRecord();

  void Fill  (unsigned int ievent, const EventRecord * ev_rec);
  void Copy  (const NtpMCEventRecord & ntpmcrec);
  void Clear (Option_t * opt = "");

  void PrintToStream(ostream & stream) const;
  friend ostream & operator<< (ostream& stream, const NtpMCEventRecord & rec);

  // Ntuple is treated like a C-struct with public data members and
  // rule-breaking field data members not prefaced by "f" and mostly lowercase.
  EventRecord * event; ///< event

private:

  void Init (void);

  ClassDef(NtpMCEventRecord, 1)
};

}      // genie namespace

#endif // _NTP_MC_EVENT_RECORD_H_
//____________________________________________________________________________
/*!

\class   genie::NtpMCRecordI

\brief   MINOS-style base class for ntuple records

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created October 1, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NTP_MC_RECORD_I_H_
#define _NTP_MC_RECORD_I_H_

#include <TObject.h>

#include "Framework/Ntuple/NtpMCRecHeader.h"

namespace genie {

class EventRecord;

class NtpMCRecordI : public TObject {

public :
  virtual ~NtpMCRecordI();

  virtual void Fill(unsigned int ievent, const EventRecord * ev_rec) = 0;

  // Ntuple is treated like a C-struct with public data members and
  // rule-breaking field data members not prefaced by "f" and mostly lowercase.
  NtpMCRecHeader hdr;   ///< record header

protected:
  NtpMCRecordI();

ClassDef(NtpMCRecordI, 1)
};

}      // genie namespace
#endif // _NTP_MC_RECORD_I_H_
//____________________________________________________________________________
/*!

\class   genie::NtpMCTreeHeader

\brief   MINOS-style Ntuple Class to hold an output MC Tree Header

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created October 1, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NTP_MC_TREE_HEADER_H_
#define _NTP_MC_TREE_HEADER_H_

#include <ostream>

#include <TNamed.h>
#include <TObjString.h>

#include "Framework/Ntuple/NtpMCFormat.h"
#include "Framework/Ntuple/NtpMCDTime.h"

using std::string;
using std::ostream;

namespace genie {

class NtpMCTreeHeader;
ostream & operator << (ostream & stream, const NtpMCTreeHeader & hdr);

class NtpMCTreeHeader : public TNamed {

public :
  using TNamed::Copy; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings

  NtpMCTreeHeader();
  NtpMCTreeHeader(const NtpMCTreeHeader & hdr);
  virtual ~NtpMCTreeHeader();

  void Init (void);
  void Copy (const NtpMCTreeHeader & hdr);

  void PrintToStream(ostream & stream) const;

  friend ostream & operator << (ostream & stream, const NtpMCTreeHeader & hdr);

  // Ntuple is treated like a C-struct with public data members and
  // rule-breakinsg field data members not prefaced by "f" and mostly lowercase.

  NtpMCFormat_t format;  ///< Event Record format (GENIE support multiple formats)
  TObjString    cvstag;  ///< GENIE CVS Tag (to keep track of GENIE's version)
  NtpMCDTime    datime;  ///< Date and Time that the event ntuple was generated
  Long_t        runnu;   ///< MC Job run number

  ClassDef(NtpMCTreeHeader, 1)
};

}      // genie namespace

#endif // _NTP_MC_TREE_HEADER_H_
//____________________________________________________________________________
/*!

\class   genie::NtpMCJobConfig

\brief   Stores the GENIE configuration in ROOT TFolders along with the
         output event tree

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created October 1, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NTP_MC_JOB_CONFIG_H_
#define _NTP_MC_JOB_CONFIG_H_

class TFolder;

namespace genie {

class NtpMCJobConfig {

public :

  NtpMCJobConfig();
  virtual ~NtpMCJobConfig();

  TFolder * Load      (void);
  TFolder * GetFolder (void) { return fConfig; }

private:

  TFolder * fConfig;
};

}      // genie namespace

#endif // _NTP_MC_JOB_CONFIG_H_
//____________________________________________________________________________
/*!

\class   genie::NtpWriter

\brief   A utility class to facilitate creating the GENIE MC Ntuple from the
         output GENIE GHEP event records.

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created October 1, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NTP_WRITER_H_
#define _NTP_WRITER_H_

#include <string>

#include "Framework/Ntuple/NtpMCFormat.h"

class TFile;
class TTree;
class TBranch;
class TClonesArray;

using std::string;

namespace genie {

class EventRecord;
class NtpMCEventRecord;
class NtpMCTreeHeader;

class NtpWriter {

public :
  NtpWriter(NtpMCFormat_t fmt = kNFGHEP, Long_t runnu = 0);
 ~NtpWriter();

  ///< initialize the ntuple writer
  void Initialize (void);

  ///< add event
  void AddEventRecord (int ievent, const EventRecord * ev_rec);

  ///< save the event tree
  void Save (void);

  ///< get the even tree
  TTree *  EventTree (void) { return fOutTree; }  

  ///< use before Initialize() only if you wish to override the default
  ///< filename, or the default filename prefix
  void CustomizeFilename       (string filename);   
  void CustomizeFilenamePrefix (string prefix);

private:

  void SetDefaultFilename    (string filename_prefix="gntp");
  void OpenFile              (string filename);
  void CreateTree            (void);
  void CreateTreeHeader      (void);
  void CreateEventBranch     (void);
  void CreateGHEPEventBranch (void);

  NtpMCFormat_t      fNtpFormat;          ///< enumeration of event formats
  Long_t             fRunNu;              ///< run nu
  string             fOutFilename;        ///< output filename
  TFile *            fOutFile;            ///< output file
  TTree *            fOutTree;            ///< output tree
  TBranch *          fEventBranch;        ///< the generated event branch 
  NtpMCEventRecord * fNtpMCEventRecord;   ///< 
  NtpMCTreeHeader *  fNtpMCTreeHeader;    ///<
};

}      // genie namespace
#endif // _NTP_WRITER_H_
//____________________________________________________________________________
/*!

\class   genie::NtpMCDTime

\brief   MINOS-style Ntuple Class to hold the date and time that the event
         ntuple was generated.

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created October 18, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NTP_MC_DTIME_H_
#define _NTP_MC_DTIME_H_

#include <ostream>

#include <TObject.h>

using std::ostream;

namespace genie {

class NtpMCDTime;
ostream & operator << (ostream & stream, const NtpMCDTime & dt);

class NtpMCDTime : public TObject {

public :
  using TObject::Copy; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings

  NtpMCDTime();
  NtpMCDTime(const NtpMCDTime & dt);
  virtual ~NtpMCDTime();

  void Now  (void);
  void Init (void);
  void Copy (const NtpMCDTime & dt);

  void PrintToStream(ostream & stream) const;

  friend ostream & operator << (ostream & stream, const NtpMCDTime & dt);

  // Ntuple is treated like a C-struct with public data members and
  // rule-breakinsg field data members not prefaced by "f" and mostly lowercase.
  Int_t         year;
  Int_t         month;
  Int_t         day;
  Int_t         hour;
  Int_t         min;
  Int_t         sec;
  UInt_t        val;  ///< sec since 1st Jan 1995 as in TDatime

  ClassDef(NtpMCDTime, 1)
};

}      // genie namespace

#endif // _NTP_MC_DTIME_H_
//____________________________________________________________________________
/*!

\class   genie::NtpMCJobEnv

\brief   Stores a snapshot of your environment in ROOT TFolder along with the
         output event tree

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created September 10, 2006

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NTP_MC_JOB_ENV_H_
#define _NTP_MC_JOB_ENV_H_

class TFolder;

namespace genie {

class NtpMCJobEnv {

public :

  NtpMCJobEnv();
  virtual ~NtpMCJobEnv();

  TFolder * TakeSnapshot (void);
  TFolder * GetFolder    (void) { return fEnv; }

private:

  TFolder * fEnv;
};

}      // genie namespace

#endif // _NTP_MC_JOB_ENV_H_
//____________________________________________________________________________
/*!

\class   genie::NtpMCRecHeader

\brief   MINOS-style Ntuple Class to hold an MC Event Record Header

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab

\created October 1, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _NTP_MC_RECORD_HEADER_H_
#define _NTP_MC_RECORD_HEADER_H_

#include <ostream>

#include <TObject.h>

using std::ostream;

namespace genie {

class NtpMCRecHeader;
ostream & operator << (ostream & stream, const NtpMCRecHeader & hdr);

class NtpMCRecHeader : public TObject {

public :
  using TObject::Copy; // suppress clang 'hides overloaded virtual function [-Woverloaded-virtual]' warnings

  NtpMCRecHeader();
  NtpMCRecHeader(const NtpMCRecHeader & hdr);
  virtual ~NtpMCRecHeader();

  void Init (void);
  void Copy (const NtpMCRecHeader & hdr);

  void PrintToStream(ostream & stream) const;
  friend ostream & operator << (ostream & stream, const NtpMCRecHeader & hdr);

  // Ntuple is treated like a C-struct with public data members and
  // rule-breaking field data members not prefaced by "f" and mostly lowercase.
  unsigned int  ievent;  ///< Event number

  ClassDef(NtpMCRecHeader, 1)
};

}      // genie namespace

#endif // _NTP_MC_RECORD_HEADER_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::NtpMCDTime", payloadCode, "@",
"genie::NtpMCEventRecord", payloadCode, "@",
"genie::NtpMCJobConfig", payloadCode, "@",
"genie::NtpMCJobEnv", payloadCode, "@",
"genie::NtpMCRecHeader", payloadCode, "@",
"genie::NtpMCRecordI", payloadCode, "@",
"genie::NtpMCTreeHeader", payloadCode, "@",
"genie::NtpWriter", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwNtp",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwNtp_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwNtp_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwNtp() {
  TriggerDictionaryInitialization_libGFwNtp_Impl();
}
