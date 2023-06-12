#include "../inc/libmx.h"
int mx_get_substr_index(const char*str, const char*sub){
    if(str == NULL || sub == NULL)
        return -2;
    for(int a = 0; a < mx_strlen(str); a++){
        if(str[a] == sub[0]){
            for(int b = a; b-a <= mx_strlen(sub); b++){
                if(str[b] != sub[b - a] && b-a != mx_strlen(sub)){
                    break;
                }
                if(b-a == mx_strlen(sub))
                    return a;
            }
        }
    }
    return -1;
}

