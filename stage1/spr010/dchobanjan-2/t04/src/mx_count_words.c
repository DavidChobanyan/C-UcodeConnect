//#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char);

int mx_count_words(const char *str, char delimiter) {
	delimiter = delimiter + 0;
	int counter = 0;
	bool last_is_del = false;

	if (!mx_isspace(*str)
	&& *str != '\0')
		counter++;
	else
		last_is_del = true;

	while (*str != '\0') {
		if (last_is_del
		&& !mx_isspace(*str))
			counter++;
		last_is_del = mx_isspace(*str);
		str++;
	}
	return counter;
}

/*int main(void) {
	printf("%d\n", mx_count_words(" follow *  the white rabbit", '*'));
	printf("%d\n", mx_count_words(" follow *  the white rabbit", ' '));
}*/

