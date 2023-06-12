#include <stdio.h>
#include <stdlib.h>
char*mx_strnew(const int size){
	if(size > 0){
		char *str = malloc(sizeof(char)*size + 1);
		str[size] = '\0';
		return str;
	}else{
		return NULL;
	}
}

