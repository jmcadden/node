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


//          Copyright Boston University SESA Group 2013 - 2014.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include "platform.h"

#include <malloc.h>

#include <cinttypes>
#include <cstdarg>
#include <cstdio>
#include <mutex>
#include <unordered_map>
#include <utility>

double v8::base::modulo(double x, double y) {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

double v8::base::fast_sqrt(double input) {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

void v8::base::OS::PostSetUp() {}

int v8::base::OS::GetUserTime(uint32_t* secs, uint32_t* usecs) {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

double v8::base::OS::TimeCurrentMillis() {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

const char* v8::base::OS::LocalTimezone(double time) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

double v8::base::OS::LocalTimeOffset() {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

double v8::base::OS::DaylightSavingsOffset(double time) {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

int v8::base::OS::GetLastError() {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

FILE* v8::base::OS::FOpen(const char* path, const char* mode) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

bool v8::base::OS::Remove(const char* path) {
  EBBRT_UNIMPLEMENTED();
  return false;
}

FILE* v8::base::OS::OpenTemporaryFile() {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

const char* const v8::base::OS::LogFileOpenMode = "w";

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

void v8::base::OS::VPrintError(const char* format, va_list args) {
  EBBRT_UNIMPLEMENTED();
}

void* v8::base::OS::Allocate(const size_t requested, size_t* allocated,
                                 bool is_executable) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

void v8::base::OS::Free(void* address, const size_t size) {
  EBBRT_UNIMPLEMENTED();
}

intptr_t v8::base::OS::CommitPageSize() { 
  EBBRT_UNIMPLEMENTED();
	return 0; 
}

void v8::base::OS::ProtectCode(void* address, const size_t size) {
  EBBRT_UNIMPLEMENTED();
}

void v8::base::OS::Guard(void* address, const size_t size) {
  EBBRT_UNIMPLEMENTED();
}

void* v8::base::OS::GetRandomMmapAddr() {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

size_t v8::base::OS::AllocateAlignment() {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

void v8::base::OS::Sleep(const int milliseconds) { EBBRT_UNIMPLEMENTED(); }

void v8::base::OS::Abort() { EBBRT_UNIMPLEMENTED(); }

void v8::base::OS::DebugBreak() { EBBRT_UNIMPLEMENTED(); }

v8::base::OS::MemoryMappedFile* v8::base::OS::MemoryMappedFile::open(
    const char* name) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

v8::base::OS::MemoryMappedFile* v8::base::OS::MemoryMappedFile::create(
    const char* name, int size, void* initial) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

int v8::base::OS::SNPrintF(Vector<char> str, const char* format, ...) {
  va_list args;
  va_start(args, format);
  auto result = VSNPrintF(str, format, args);
  va_end(args);
  return result;
}

int v8::base::OS::VSNPrintF(Vector<char> str, const char* format,
                                va_list args) {
  int n = vsnprintf(str.start(), str.length(), format, args);
  if (n < 0 || n >= str.length()) {
    if (str.length() > 0) str[str.length() - 1] = '\0';
    return -1;
  } else {
    return n;
  }
}

char* v8::base::OS::StrChr(char* str, int c) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

void v8::base::OS::StrNCpy(Vector<char> dest, const char* src, size_t n) {
  EBBRT_UNIMPLEMENTED();
}

void v8::base::OS::SignalCodeMovingGC() { EBBRT_UNIMPLEMENTED(); }

uint64_t v8::base::OS::CpuFeaturesImpliedByPlatform() { return 0; }

intptr_t v8::base::OS::MaxVirtualMemory() { 
	EBBRT_UNIMPLEMENTED(); 
	return 0xFFFFFFFF; 
}

double v8::base::OS::nan_value() { return NAN; }

bool v8::base::OS::ArmUsingHardFloat() {
  EBBRT_UNIMPLEMENTED();
  return false;
}

int v8::base::OS::ActivationFrameAlignment() { return 16; }

int v8::base::OS::GetCurrentProcessId() {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

namespace {
class V8PFHandler : public ebbrt::VMemAllocator::PageFaultHandler {
  void HandleFault(ebbrt::idt::ExceptionFrame* ef,
                   uintptr_t faulted_address) override {
    auto page = ebbrt::Pfn::Down(faulted_address);
    auto it = mappings_.find(page);
    if (it == mappings_.end()) {
      auto backing_page = ebbrt::page_allocator->Alloc();
      ebbrt::kbugon(backing_page == ebbrt::Pfn::None(),
                    "Failed to allocate page for stack\n");
      ebbrt::vmem::MapMemory(page, backing_page);
      mappings_[page] = backing_page;
    } else {
      ebbrt::vmem::MapMemory(page, it->second);
    }
  }

 private:
  std::unordered_map<ebbrt::Pfn, ebbrt::Pfn> mappings_;
};
}

v8::base::VirtualMemory::VirtualMemory() : address_{nullptr}, size_(0) {}

v8::base::VirtualMemory::VirtualMemory(size_t size) {
  auto sz = ebbrt::Pfn::Up(size).val();
  auto pfn = ebbrt::vmem_allocator->Alloc(
      sz, std::unique_ptr<V8PFHandler>(new V8PFHandler()));
  ebbrt::kbugon(pfn == ebbrt::Pfn::None(), "Page allocation failed\n");
  size_ = size;
  address_ = reinterpret_cast<void*>(pfn.ToAddr());
  ebbrt::kprintf("Allocated virtual region %#018" PRIx64 " - %#018" PRIx64 "\n",
                 pfn.ToAddr(), pfn.ToAddr() + size_ - 1);
}

v8::base::VirtualMemory::VirtualMemory(size_t size, size_t alignment) {
  auto sz = ebbrt::Pfn::Up(size).val();
  auto align = ebbrt::Pfn::Up(alignment).val();

  auto pfn = ebbrt::vmem_allocator->Alloc(
      sz, align, std::unique_ptr<V8PFHandler>(new V8PFHandler()));
  ebbrt::kbugon(pfn == ebbrt::Pfn::None(), "Page allocation failed\n");


  size_ = size;
  address_ = reinterpret_cast<void*>(pfn.ToAddr());
  ebbrt::kbugon(pfn.ToAddr() % alignment != 0, "Alignment failure\n");
  ebbrt::kprintf("Allocated virtual region %#018" PRIx64 " - %#018" PRIx64 "\n",
                 pfn.ToAddr(), pfn.ToAddr() + size_ - 1);
}

v8::base::VirtualMemory::~VirtualMemory() {
  if (address_ != nullptr) {
    ebbrt::kprintf("TODO(dschatz): Free Virtual Region\n");
  }
}

bool v8::base::VirtualMemory::IsReserved() { return address_ != nullptr; }

void v8::base::VirtualMemory::Reset() { address_ = nullptr; }

bool v8::base::VirtualMemory::Commit(void* address, size_t size,
                                         bool is_executable) {
  return CommitRegion(address, size, is_executable);
}

bool v8::base::VirtualMemory::Uncommit(void* address, size_t size) {
  EBBRT_UNIMPLEMENTED();
  return false;
}

bool v8::base::VirtualMemory::Guard(void* address) {
  // TODO(dschatz): Actually implement this
  return true;
}

void* v8::base::VirtualMemory::ReserveRegion(size_t size) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

bool v8::base::VirtualMemory::CommitRegion(void* base, size_t size,
                                               bool is_executable) {
  EBBRT_UNIMPLEMENTED();
  return false;
}

bool v8::base::VirtualMemory::UncommitRegion(void* base, size_t size) {
  EBBRT_UNIMPLEMENTED();
  return false;
}

bool v8::base::VirtualMemory::ReleaseRegion(void* base, size_t size) {
  EBBRT_UNIMPLEMENTED();
  return false;
}

v8::base::Thread::Thread(const Options& options) {
  EBBRT_UNIMPLEMENTED();
}

v8::base::Thread::~Thread() { EBBRT_UNIMPLEMENTED(); }

void v8::base::Thread::Start() { ebbrt::kprintf("Unstarted Thread!!!\n"); }

void v8::base::Thread::set_name(const char* name) {
  strncpy(name_, name, sizeof(name_));
  name_[sizeof(name_) - 1] = '\0';
}

void v8::base::Thread::Join() { EBBRT_UNIMPLEMENTED(); }

namespace {
std::mutex key_map_mut;
std::unordered_map<int, __gthread_key_t> key_map
    __attribute__((init_priority(101)));
}

v8::base::Thread::LocalStorageKey
v8::base::Thread::CreateThreadLocalKey() {
 EBBRT_UNIMPLEMENTED(); 
  LocalStorageKey lskey;
  return lskey;
}

void v8::base::Thread::DeleteThreadLocalKey(LocalStorageKey key) {
  EBBRT_UNIMPLEMENTED();
}

void* v8::base::Thread::GetThreadLocal(LocalStorageKey key) {
  EBBRT_UNIMPLEMENTED();
	return nullptr;
}

void v8::base::Thread::SetThreadLocal(LocalStorageKey key, void* value) {
  EBBRT_UNIMPLEMENTED();
}

void v8::base::Thread::YieldCPU() { EBBRT_UNIMPLEMENTED(); }


