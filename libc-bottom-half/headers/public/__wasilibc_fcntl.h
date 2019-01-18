#ifndef __wasilibc___wasilibc_fcntl_h
#define __wasilibc___wasilibc_fcntl_h

#include <cloudabi_types_common.h>

#define O_APPEND CLOUDABI_FDFLAG_APPEND
#define O_DSYNC CLOUDABI_FDFLAG_DSYNC
#define O_NONBLOCK CLOUDABI_FDFLAG_NONBLOCK
#define O_RSYNC CLOUDABI_FDFLAG_RSYNC
#define O_SYNC CLOUDABI_FDFLAG_SYNC
#define O_CREAT (CLOUDABI_O_CREAT << 12)
#define O_DIRECTORY (CLOUDABI_O_DIRECTORY << 12)
#define O_EXCL (CLOUDABI_O_EXCL << 12)
#define O_TRUNC (CLOUDABI_O_TRUNC << 12)

#define O_NOFOLLOW 0x1000000
#define O_EXEC 0x2000000
#define O_RDONLY 0x4000000
#define O_SEARCH 0x8000000
#define O_WRONLY 0x10000000

#define O_CLOEXEC 0
#define O_NOCTTY 0

#define O_RDWR (O_RDONLY | O_WRONLY)
#define O_ACCMODE (O_EXEC | O_RDWR | O_SEARCH)

#define POSIX_FADV_DONTNEED CLOUDABI_ADVICE_DONTNEED
#define POSIX_FADV_NOREUSE CLOUDABI_ADVICE_NOREUSE
#define POSIX_FADV_NORMAL CLOUDABI_ADVICE_NORMAL
#define POSIX_FADV_RANDOM CLOUDABI_ADVICE_RANDOM
#define POSIX_FADV_SEQUENTIAL CLOUDABI_ADVICE_SEQUENTIAL
#define POSIX_FADV_WILLNEED CLOUDABI_ADVICE_WILLNEED

#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4

#define FD_CLOEXEC 1

#define AT_EACCESS 0x0
#define AT_SYMLINK_NOFOLLOW 0x1
#define AT_SYMLINK_FOLLOW 0x2
#define AT_REMOVEDIR 0x4

#endif