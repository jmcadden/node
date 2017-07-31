//          Copyright Boston University SESA Group 2013 - 2014.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)


#include <malloc.h>

#include <cinttypes>
#include <cstdarg>
#include <cstdio>
#include <mutex>
#include <unordered_map>
#include <utility>

#include "src/base/macros.h"
#include "src/base/platform/platform.h"
#include "platform.h"

#define EBBRT_UNIMPLEMENTED() while(true);

void v8::base::OS::Print(const char* format, ...) { EBBRT_UNIMPLEMENTED(); }

void v8::base::OS::VPrint(const char* format, va_list args) {
  EBBRT_UNIMPLEMENTED();
}

void v8::base::OS::FPrint(FILE* out, const char* format, ...) {
  EBBRT_UNIMPLEMENTED();
}

void v8::base::OS::VFPrint(FILE* out, const char* format, va_list args) {
  EBBRT_UNIMPLEMENTED();
}

void v8::base::OS::PrintError(const char* format, ...) {
  EBBRT_UNIMPLEMENTED();
}

void v8::base::OS::Abort() { EBBRT_UNIMPLEMENTED(); }

void v8::base::OS::DebugBreak() { EBBRT_UNIMPLEMENTED(); }

void v8::base::OS::VPrintError(const char* format, va_list args) {
  EBBRT_UNIMPLEMENTED();
}

