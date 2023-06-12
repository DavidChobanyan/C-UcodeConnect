#include <stdio.h>
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char*mx_strcat(char*s1, const char*s2);
char*mx_strjoin(char const*s1, char const*s2){
	if(s1 != NULL && s2 != NULL){
		char *str = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
		mx_strcat(str, s1);	
		return mx_strcat(str, s2);
	}	
	else{
		if(s1 == NULL)
			return (char*)s2;
		else
			return (char*)s1;
	}
}

