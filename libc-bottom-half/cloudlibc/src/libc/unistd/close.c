// Copyright (c) 2015-2016 Nuxi, https://nuxi.nl/
//
// SPDX-License-Identifier: BSD-2-Clause

#include <wasi.h>
#include <errno.h>
#include <unistd.h>

int close(int fildes) {
  wasi_errno_t error = wasi_fd_close(fildes);
  if (error != 0) {
    errno = error;
    return -1;
  }
  return 0;
}
