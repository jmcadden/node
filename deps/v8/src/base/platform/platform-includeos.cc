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
#include <vector>

#include "src/base/macros.h"
#include "src/base/platform/platform.h"
#include "platform.h"
#include "time.h"

//TODO(jmcadden): fix this
#define EBBRT_UNIMPLEMENTED() while(true);

void v8::base::OS::Initialize(int64_t random_seed,
                         bool hard_abort,
                         const char* const gc_fake_mmap){
  EBBRT_UNIMPLEMENTED();
  return;
}


void* v8::base::OS::AllocateGuarded(const size_t requested){
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

void v8::base::OS::Unprotect(void* address, const size_t size){
  EBBRT_UNIMPLEMENTED();
  return;
}


v8::base::TimezoneCache* v8::base::OS::CreateTimezoneCache(){
  EBBRT_UNIMPLEMENTED();
};

void v8::base::OS::ClearTimezoneCache(v8::base::TimezoneCache* cache){
  EBBRT_UNIMPLEMENTED();
}

int v8::base::OS::GetCurrentThreadId(){
  EBBRT_UNIMPLEMENTED();
  return 0;
}

void v8::base::OS::DisposeTimezoneCache(v8::base::TimezoneCache* cache){
  EBBRT_UNIMPLEMENTED();
}

int v8::base::OS::GetUserTime(uint32_t* secs, uint32_t* usecs) {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

double v8::base::OS::LocalTimeOffset(v8::base::TimezoneCache* cache){
  EBBRT_UNIMPLEMENTED();
  return 0;
}

double v8::base::OS::TimeCurrentMillis() {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

const char* v8::base::OS::LocalTimezone(double time, TimezoneCache* cache) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

double v8::base::OS::DaylightSavingsOffset(double time, TimezoneCache* cache ) {
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

void v8::base::OS::Sleep(TimeDelta interval) { EBBRT_UNIMPLEMENTED(); }

void v8::base::OS::Abort() { EBBRT_UNIMPLEMENTED(); }

void v8::base::OS::DebugBreak() { EBBRT_UNIMPLEMENTED(); }

v8::base::OS::MemoryMappedFile* v8::base::OS::MemoryMappedFile::open(
    const char* name) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

v8::base::OS::MemoryMappedFile* v8::base::OS::MemoryMappedFile::create(const char* c, size_t t, void* p){
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

int v8::base::OS::SNPrintF(char* str, int length,
                                          const char* format, ...){
  va_list args;
  va_start(args, format);
  auto result = VSNPrintF(str, length, format, args);
  va_end(args);
  return result;
}

int v8::base::OS::VSNPrintF(char* str, int length,
                                           const char* format, va_list args) {
 EBBRT_UNIMPLEMENTED();
 return 0;
}

char* v8::base::OS::StrChr(char* str, int c) {
  EBBRT_UNIMPLEMENTED();
  return nullptr;
}

void v8::base::OS::StrNCpy(char* dest, int length, const char* src, size_t n) {
  EBBRT_UNIMPLEMENTED();
}

std::vector<v8::base::OS::SharedLibraryAddress> v8::base::OS::GetSharedLibraryAddresses(){
  std::vector<v8::base::OS::SharedLibraryAddress> ret;
  return ret;
}

void v8::base::OS::SignalCodeMovingGC() { EBBRT_UNIMPLEMENTED(); }

char v8::base::OS::DirectorySeparator() {
  EBBRT_UNIMPLEMENTED();
  return '/';
}

bool v8::base::OS::isDirectorySeparator(const char ch) {
  EBBRT_UNIMPLEMENTED();
  return false;
}

bool v8::base::OS::ArmUsingHardFloat() {
  EBBRT_UNIMPLEMENTED();
  return false;
}

int v8::base::OS::ActivationFrameAlignment() { return 16; }

int v8::base::OS::GetCurrentProcessId() {
  EBBRT_UNIMPLEMENTED();
  return 0;
}

v8::base::VirtualMemory::VirtualMemory() : address_{nullptr}, size_(0) {}

v8::base::VirtualMemory::VirtualMemory(size_t size) {
  EBBRT_UNIMPLEMENTED();
}

v8::base::VirtualMemory::VirtualMemory(size_t size, size_t alignment) {
  EBBRT_UNIMPLEMENTED();
}

v8::base::VirtualMemory::~VirtualMemory() {
  if (address_ != nullptr) {
    EBBRT_UNIMPLEMENTED();
  }
}

bool v8::base::VirtualMemory::ReleasePartialRegion(void* base, size_t size, void* free_start,
                                   size_t free_size){
  EBBRT_UNIMPLEMENTED();
  return false;
}

bool v8::base::VirtualMemory::HasLazyCommits(){ 
  EBBRT_UNIMPLEMENTED();
  return false;
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
  EBBRT_UNIMPLEMENTED();
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

void v8::base::Thread::Start() {  EBBRT_UNIMPLEMENTED(); }

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

