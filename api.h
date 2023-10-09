#ifdef EXPORT
    #define EXTERN __declspec(dllexport)
#else
    #define EXTERN
#endif

unsigned int times_two(unsigned int a);