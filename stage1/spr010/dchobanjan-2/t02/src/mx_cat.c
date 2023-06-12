#include "../inc/minilibmx.h"

void mx_read_buffer(void) {
	char c;
	int temp = read(0, &c, 1);
	while (temp > 0) {
		mx_printchar(c);
		temp = read(0, &c, 1);
	}
	exit(0);
}

void mx_read_file(const char *file_name) {
	char c;
	int file = open(file_name, O_RDONLY);
	if (file < 0) {
		mx_printerr("mx_cat: ");
		mx_printerr(file_name);
		mx_printerr(": ");
		mx_printerr(strerror(errno));
		mx_printerr("\n");
		close(file);
		exit(0);
	}
	int temp = read(file, &c, 1);
	while (temp > 0) {
		mx_printchar(c);
		temp = read(file, &c, 1);
	}
	close(file);
	exit(0);
}

int main(int argc, char *argv[]) {
	if (argc == 1)
		mx_read_buffer();

	mx_read_file(argv[1]);
	return 0;
}

