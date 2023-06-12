#include <stdlib.h>

char *mx_strnew(const int size) {
    char *ptr = (char *) malloc(sizeof(char) * (size + 1));
    
    if (size <= 0)
        return 0;
    if (ptr == NULL)
        return (char *)NULL;
   for (int i = 0; i < size; i++)
        ptr[i] = '\0';
    ptr[size] = '\0';
    return ptr;
}

