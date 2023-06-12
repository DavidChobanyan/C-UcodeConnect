#include "../inc/libmx.h"

void*mx_memcpy(void* restrict dst, const void* restrict src, size_t n){
    char *pointer = (char *)dst;
    char *pointer2 = (char *)src;
    for(size_t a = 0; a < n; a++)
        pointer[a] = pointer2[a];
    return pointer;
}

