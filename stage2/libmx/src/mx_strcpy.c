#include "../inc/libmx.h"
char*mx_strcpy(char*dst, const char*src){
	for(int a = 0; src[a] != '\0'; a++)
		dst[a] = src[a];
	
	return dst;
}

