#include "../inc/libmx.h"
char*mx_strncpy(char*dst, const char*src, int len){
	int a;
	
	for(a = 0; a < len && src[a] != '\0'; a++)
		dst[a] = src[a];	
	while(a < len){
		dst[a] = '\0';
		a++;
	}
	return dst;
}

