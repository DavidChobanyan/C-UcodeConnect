#include "../inc/libmx.h"
char *mx_strtrim(const char*str){
    if(str == NULL)
        return NULL;
    int counter = 0;
    for(int a = 0; str[a] != '\0'; a++){
        if((str[a] >= ' ' && str[a] <= '[') || (str[a] >= ']' && str[a] <= '~'))
            counter++;
    }
    char *new = malloc(counter);
    counter = 0;
    for(int a = 0; str[a] != '\0'; a++){
        if((str[a] >= ' ' && str[a] <= '[') || (str[a] >= ']' && str[a] <= '~')){
            new[counter] = str[a];
            counter++;
        }
    }
    new[counter] = '\0';
    return new;
}

