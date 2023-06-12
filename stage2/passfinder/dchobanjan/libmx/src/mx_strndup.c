#include "../inc/libmx.h"

char * mx_strndup( const char * s1, size_t n){
    if (s1 != NULL && s1[0] != '\0'){
        char *temp = NULL;
        size_t len = mx_strlen(s1);
        
        if (n < len) 
            len = n;
        temp = mx_strnew(len);
        mx_strncpy(temp, s1, len);
        return temp;
    }
    return mx_strnew(0);
}

