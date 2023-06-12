#include "../inc/libmx.h"
int mx_get_char_index(const char*str, char c){
    if(str == NULL)
        return -2;
    for(int a = 0; str[a] != '\0'; a++){
        if(str[a] == c)
            return a;
    }
    return -1;
}

