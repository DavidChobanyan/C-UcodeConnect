int mx_strlen(const char*);

char *mx_strcat(char *s1, const char *s2) {
	for (int i = 0; i <= mx_strlen(s2); i++)
		s1[i] = s2[i];
	return s1;
}

