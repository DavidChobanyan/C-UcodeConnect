#include "../inc/libmx.h"
char *mx_strstr(const char *haystack, const char*needle){
    for(int a = 0; a < mx_strlen(haystack); a++){
        if(haystack[a] == needle[0]){
            char *temp = malloc(mx_strlen(haystack) - a);
            for(int b = a; b <= mx_strlen(haystack); b++){
                
                if(haystack[b] != needle[b-a] && b-a < mx_strlen(needle)){
                    free(temp);
                    break;
                }else{
                    temp[b-a] = haystack[b];
                }
                if(haystack[b] == '\0' && b-a > mx_strlen(needle)){
                    return temp;
                }
            }
        }
    }
    return NULL;
}

