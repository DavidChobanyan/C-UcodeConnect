#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>

int mx_strlen(const char);
char *mx_strnew(int);

char *mx_file_to_str(const char *filename) {
	int size = 0;
	char c;
	int file = open(filename, O_RDONLY);
	if (file < 0) {
		close(file);
		return NULL;
	}
	int temp = read(file, &c, 1);
	for (; temp > 0; size++) {
		temp = read(file, &c, 1);
	}
	close(file);
	file = open(filename, O_RDONLY);
	char *str = mx_strnew(size);
	temp = read(file, str, size);
	close(file);
	return str;
}

/*int main(void) {
	printf("%s\n", mx_file_to_str("agents"));
}*/

