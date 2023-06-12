#include "../inc/libmx.h"

char*mx_strdup(const char*str){
	if(str == NULL) return NULL;
	char *new = mx_strnew(mx_strlen(str));

	if(new == NULL) return NULL;
	else return mx_strcpy(new, str);

}

