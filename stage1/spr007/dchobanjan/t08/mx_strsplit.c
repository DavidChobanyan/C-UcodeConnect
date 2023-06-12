#include <stdlib.h>
#include <stdio.h>
char *mx_strnew(const int size);
int mx_count_words(const char *str, char delimiter);
char *mx_strncpy(char *dst, const char *src, int len);
char *fw(const char *s, char c);

char **mx_strsplit(char const *s, char c) {
        char **arr;
        char *w;

        if (s == NULL) return NULL;
        arr = malloc((mx_count_words(s, c) + 1) * sizeof(char*));
        arr[mx_count_words(s, c)] = NULL;
        w = fw(s, c);
        for (int i = 0; w!= 0; i++) {
                int len = 0;

                while(w[len] != c && w[len] != '\0') len++;
                arr[i] = mx_strnew(len);
                mx_strncpy(arr[i], w, len);
                w = fw(w + len, c);
        }
        return arr;
}

/*int main(void){
        char *s = "**Good bye,**Mr.*Anderson.****";
        char **arr = mx_strsplit(s, '*');
        for(int a = 0; a < 3; a++) printf("%s\n", arr[a]);
}*/

char *fw(const char *s, char c) {
    while (*s == c) s++;
    if (*s == '\0') return 0;
    return (char*)s;
}

