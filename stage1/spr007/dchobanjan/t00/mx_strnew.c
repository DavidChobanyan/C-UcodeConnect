#include <stdio.h>
#include <stdlib.h>
char*mx_strnew(const int size){
	char *str = malloc(sizeof(char)*size + 1);

	if(size < 0 || str == NULL){
		return NULL;
	}else{
                for(int a = 0; a < size+1; a++) str[a] = '\0';
                return str;
	}
}

