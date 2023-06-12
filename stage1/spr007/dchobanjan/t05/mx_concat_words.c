#include <stdlib.h>
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char*mx_concat_words(char**words){
	char *str;

	if(words != NULL && words[0] != NULL)
		str = mx_strdup(words[0]);
	for(int a = 1; words[a] != NULL; a++){
		char *temp = mx_strjoin(" ", words[a]);
		
		str = mx_strjoin(str, temp);
	}
	return str;
}

