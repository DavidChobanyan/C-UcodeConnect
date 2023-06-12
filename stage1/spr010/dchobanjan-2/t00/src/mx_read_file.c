#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		mx_printerr("usage: ./read_file [file_path]\n");
		return 0;
	}

	int file = open(argv[1], O_RDONLY);

	if (file < 0) {
		mx_printerr("error\n");
		close(file);
		return 0;
	}

	char c;
	int n = read(file, &c, 1);

	while (n > 0) {
		write(1, &c, 1);
		n = read(file, &c, 1);
	}
	close(file);
	return 0;
}

