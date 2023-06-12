#include "../inc/libmx.h"

void *mx_memmem(const void*big, size_t big_len, const void*little, size_t little_len){
    char *pointer = (char *)big;
    char *pointer2 = (char *)little;
    for(size_t a = 0; a < big_len; a++){
        if(pointer[a] == pointer2[0]){
            for(size_t b = a; b-a < little_len; b++){
                if(pointer[b] != pointer2[b - a])
                    break;
                if((b-a)+1 == little_len)
                    return &pointer[a];
            }
        }
    }
    return NULL;
}

