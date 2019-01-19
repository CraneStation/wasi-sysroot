#ifdef _REENTRANT
#error "multiple threads not supported in musl yet"
#endif

#define a_barrier() (__sync_synchronize())
#define a_cas(p, t, s) (__sync_val_compare_and_swap((p), (t), (s)))
#define a_crash() (__builtin_trap())
