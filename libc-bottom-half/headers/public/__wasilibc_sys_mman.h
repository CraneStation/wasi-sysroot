#ifndef __wasilibc___wasilibc_sys_mman_h
#define __wasilibc___wasilibc_sys_mman_h

#include <wasi.h>

#define MAP_FAILED ((void *)-1)

#define MAP_ANON WASI_MAP_ANON
#define MAP_FIXED WASI_MAP_FIXED
#define MAP_PRIVATE WASI_MAP_PRIVATE
#define MAP_SHARED WASI_MAP_SHARED

#define PROT_EXEC WASI_PROT_EXEC
#define PROT_WRITE WASI_PROT_WRITE
#define PROT_READ WASI_PROT_READ

#define POSIX_MADV_DONTNEED WASI_ADVICE_DONTNEED
#define POSIX_MADV_NORMAL WASI_ADVICE_NORMAL
#define POSIX_MADV_RANDOM WASI_ADVICE_RANDOM
#define POSIX_MADV_SEQUENTIAL WASI_ADVICE_SEQUENTIAL
#define POSIX_MADV_WILLNEED WASI_ADVICE_WILLNEED

#define MS_ASYNC WASI_MS_ASYNC
#define MS_INVALIDATE WASI_MS_INVALIDATE
#define MS_SYNC WASI_MS_SYNC

#endif
