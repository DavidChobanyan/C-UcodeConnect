#include <stdio.h>

int mx_string_count(const char *str) {
	int string_count = 0;
	for (; *str; str++)
		if (*str == '\n')
			string_count++;
	return string_count;
}

