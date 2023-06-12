#include <stdbool.h>
#include <stdio.h>
bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char *str) {
	int len;
	char *nstr;

    	if (str == NULL) return NULL;
    	while (mx_isspace(*str)) str++;
    	len = mx_strlen(str);
    	while (len > 0 && mx_isspace(str[len - 1])) len--;
    	nstr = mx_strnew(len);
    	return mx_strncpy(nstr, str, len);
}

