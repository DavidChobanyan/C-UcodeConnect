#include "../inc/libmx.h"
char *mx_del_extra_spaces(const char*str){
    if (!str)return NULL;
    else if (str[0] == '\0')return mx_strnew(0);	
	char * temp = mx_strtrim(str);
	int len = mx_strlen(temp);
	int a = 0;
	int b = 0;
	char * result = malloc(len*sizeof(char));
	while (a < len){
		if (!mx_isspace(temp[a])) result[b++] = temp[a++];
		else{
			result[b++] = ' ';
			for (; mx_isspace(temp[a]); a++);
		}
	}
	mx_strdel(&temp);
	return result;
}

