#include "stdlib.h"

char *mx_strnew(const int size) {
    char *word = (char *) malloc(size + 1);

    if (word == 0)
        return 0;

    for (int i = 0; i < size + 1; i++)
        word[i] = '\0';

    return word;
}
