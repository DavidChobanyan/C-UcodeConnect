#include "../inc/libmx.h"

char *next(const char *s, char c) {
    while (*s == c) s++;
    if (*s == '\0') return 0;
    return (char*)s;
}

char **mx_strsplit(char const *s, char c) {
        char **arr;
        
        if (s == NULL) return NULL;
        arr = malloc((mx_count_words(s, c) + 1) * sizeof(char*));
        arr[mx_count_words(s, c)] = NULL;
        char *copy;
        copy = next(s, c);
        for (int a = 0; copy != 0; a++) {
                int len = 0;

                while(copy[len] != c && copy[len] != '\0') len++;
                arr[a] = mx_strnew(len);
                mx_strncpy(arr[a], copy, len);
                copy = next(copy + len, c);
        }
        return arr;
}

