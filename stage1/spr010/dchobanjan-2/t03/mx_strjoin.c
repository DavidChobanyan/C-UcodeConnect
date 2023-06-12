#include <stdio.h>

int mx_strlen(const char*);
char* mx_strcat(char*, const char*);
char* mx_strnew(int);
char* mx_strdup(const char*);

char* mx_strjoin(char const *s1, char const *s2) {
	if (s1 == NULL
	|| s2 == NULL) {
		if (s1 != NULL)
			return mx_strdup(s1);
		if (s2 != NULL)
			return mx_strdup(s2);
		return NULL;
	}

	char *str = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
	char *ptr = str;
	mx_strcat(str, s1);
	for (int i = 0; i < mx_strlen(s1); i++)
		str++;
	mx_strcat(str, s2);
	return ptr;
}

/*int main(void) {
	char str1[] = "this";
	char str2[] = "dodge ";
	char *str3 = NULL;
	char *str4 = mx_strjoin(str2, str1);
	printf("%s|\n", str4);
	str4 = mx_strjoin(str1, str3);
	printf("%s|\n", str4);
	str4 = mx_strjoin(str3, str3);
	printf("%s|\n", str4);
	return 0;
}*/

