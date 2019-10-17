#include <unistd.h>
#include <wasi/core.h>
#include <wasi/libc.h>
#include <wasi/libc-internal.h>

char **__environ = NULL;
extern __typeof(__environ) _environ __attribute__((weak, alias("__environ")));
extern __typeof(__environ) environ __attribute__((weak, alias("__environ")));

// This function is referenced by a weak symbol in crt1.c, and we define
// it here in the same source file as __environ, so that this function is
// linked in iff environment variable support is used.
__wasi_errno_t __wasilibc_populate_environ(void) {
    __wasi_errno_t err;

    // Get the sizes of the arrays we'll have to create to copy in the environment.
    size_t environ_count;
    size_t environ_buf_size;
    err = __wasi_environ_sizes_get(&environ_count, &environ_buf_size);
    if (err != __WASI_ESUCCESS) {
        return err;
    }

    // Allocate memory for storing the environment chars.
    char *environ_buf = malloc(environ_buf_size);
    if (environ_buf == NULL) {
        return __WASI_ENOMEM;
    }

    // Allocate memory for the array of pointers. Note the `+ 1` to include
    // space for a NULL pointer at the end. This uses `calloc` both to handle
    // overflow and to initialize the NULL pointer at the end.
    __environ = calloc(environ_count + 1, sizeof(char *));
    if (__environ == NULL) {
        free(environ_buf);
        return __WASI_ENOMEM;
    }

    // Fill the environment chars, and the __environ array with pointers into those chars.
    return __wasi_environ_get(__environ, environ_buf);
}
