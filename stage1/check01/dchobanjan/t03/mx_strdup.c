#include <stdio.h>
#include <stdlib.h>

char*mx_strcpy(char*dst, const char*src){
	for(int a = 0; src[a] != '\0'; a++)
		dst[a] = src[a];
	return dst;
}

int mx_strlen(const char*s){
	int check = 0;

	do{
		if(s[check] == '\0')
			break;
		check++;
	}while(s[check] != '\0');
	return check;
}

char*mx_strnew(const int size){
	if(size > 0){
		char *str = malloc(sizeof(char)*size + 1);
		str[size] = '\0';
		return str;
	}else{
		return NULL;
	}
}

char*mx_strdup(const char*str){
	if(str == NULL) return NULL;
	char *nstr = mx_strnew(mx_strlen(str));

	if(nstr == NULL) return NULL;
	else return mx_strcpy(nstr, str);

}

