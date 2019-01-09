#ifndef __cowslibc___struct_sockaddr_h
#define __cowslibc___struct_sockaddr_h

#define __need_STDDEF_H_misc
#include <stddef.h>

#include <__typedef_sa_family_t.h>

struct sockaddr {
    _Alignas(max_align_t) sa_family_t sa_family;
    char sa_data[0];
};

#endif
