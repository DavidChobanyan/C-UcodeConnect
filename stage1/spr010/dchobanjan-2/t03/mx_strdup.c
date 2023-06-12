int mx_strlen(const char*);
char* mx_strcpy(char*, const char*);
char* mx_strnew(const int);

char* mx_strdup(const char *str) {
	char *s = mx_strnew(mx_strlen(str));
	mx_strcpy(s, str);
	return s;
}

