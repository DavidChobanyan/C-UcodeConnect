#include "../inc/libmx.h"

char*mx_strjoin(char const*s1, char const*s2){
	if(s1 == NULL) return (char*)s2;
	else if(s2 == NULL) return (char*)s1;
	else{
		char *str = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
		mx_strcat(str, s1);	
		return mx_strcat(str, s2);
	}
}

