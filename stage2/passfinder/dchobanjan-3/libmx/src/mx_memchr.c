#include "../inc/libmx.h"

void* mx_memchr(const void*s, int c, size_t n){
    char *pointer = (char *)s;
    for(size_t a = 0; a < n; a++){
        if(pointer[a] == c)
            return &pointer[a];
    }
    return NULL;
}

