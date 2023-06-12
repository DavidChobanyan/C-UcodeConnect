#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
	if (arr != NULL && delim != NULL){
        int counter;
        for (counter = 0; arr[counter + 1]; counter++){
            mx_printstr(arr[counter]);
            mx_printstr(delim);
        }
        mx_printstr(arr[counter]);
        mx_printstr("\n");
    }
}

