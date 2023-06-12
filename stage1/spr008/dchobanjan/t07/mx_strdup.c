#include <stdio.h>
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char*mx_strdup(const char*str){
	if(str == NULL) return NULL;
	char *nstr = mx_strnew(mx_strlen(str));

	if(nstr == NULL) return NULL;
	else return mx_strcpy(nstr, str);

}

