#include "../inc/libmx.h"

void* mx_realloc(void *ptr, size_t size){
    if (ptr == NULL) return malloc(size);   
    size_t size2 = malloc_usable_size(ptr);
    if (size <= size2) return ptr;
    void *ptr2 = malloc(size);
    for (size_t i = 0; i < size; i++) ((unsigned char *)ptr2)[i] = ((unsigned char *)ptr)[i];
    free(ptr);
    return ptr2;
}

