//#include <stdio.h>

int mx_strncmp(const char *s1, const char *s2, int n) {
	for (int i = 0; i < n
	&& *s1++ == *s2++; i++);
	return *--s1 - *--s2;
}

/*int main(void) {
	char s1[] = "revo";
	char s2[] = "resolution";
	printf("%d\n", mx_strncmp(s1, s2, 4));
}*/

