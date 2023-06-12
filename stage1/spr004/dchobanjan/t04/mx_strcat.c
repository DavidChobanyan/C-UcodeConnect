int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2) {
	int a;
    	for (a = 0; s2[a] != '\0'; i++) s1[mx_strlen(s1) + a] = s2[a];

    	s1[mx_strlen(s1) + a] = '\0';
    	return s1;
}

