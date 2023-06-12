#include "../inc/libmx.h"

char *mx_replace_substr(const char*str, const char*sub, const char*replace){
    int i = mx_count_substr(str, sub);
    char *arr = malloc(mx_strlen(str)-(mx_strlen(sub)*i) + (mx_strlen(replace)*i));
    i = 0;
    int equal = 0;
    for(int a = 0; str[a] != '\0'; a++){
        if(equal > 0){
            arr[i] = replace[mx_strlen(replace) - equal];
            i++;
            equal--;
            if(equal > 0) continue;}
        if(str[a] != sub[0]){
            arr[i] = str[a];
            i++;}else{
            for(int b = a; b-a<mx_strlen(sub); b++){
                if(str[b] != sub[b-a]){
                    arr[i] = str[a];
                    i++;
                    break;}
                if((b-a) + 1 == mx_strlen(sub)) equal = mx_strlen(replace);}}}
    return arr;
}

