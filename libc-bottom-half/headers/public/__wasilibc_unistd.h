#ifndef __wasilibc___wasilibc_unistd_h
#define __wasilibc___wasilibc_unistd_h

struct stat;

#include <wasi.h>

#define SEEK_CUR WASI_WHENCE_CUR
#define SEEK_END WASI_WHENCE_END
#define SEEK_SET WASI_WHENCE_SET

#define F_OK 0
#define R_OK 1
#define W_OK 2
#define X_OK 4

#ifdef __cplusplus
extern "C" {
#endif

int close(int fd);
int faccessat(int, const char *, int, int);
int dup(int);
int fstatat(int, const char *, struct stat *, int);
int renameat(int, const char *, int, const char *);
int openat(int, const char *, int, ...);
void *sbrk(intptr_t increment);

#ifdef __cplusplus
}
#endif

#endif
