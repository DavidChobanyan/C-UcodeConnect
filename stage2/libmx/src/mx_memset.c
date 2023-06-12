#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *pointer = b;
    for(size_t a = 0; a < len; a++) {
        *pointer = c;
        pointer++;
    }
    return b;
}

