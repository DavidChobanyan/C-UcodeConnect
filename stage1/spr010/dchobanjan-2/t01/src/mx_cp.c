#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
	if (argc != 3) {
		mx_printerr("usage: ./cp_file [source_file] [destination_file]\n");
		return 0;
	}

	int src = open(argv[1], O_RDONLY);

	if (src < 0) {
		mx_printerr("mx_cp: ");
		mx_printerr(argv[1]);
		mx_printerr(": ");
		mx_printerr(strerror(errno));
		mx_printerr("\n");
		close(src);
		return 0;
	}

	int dst = open(argv[2], O_RDWR | O_CREAT, 0666);
	char c;
	int n = read(src, &c, 1);

	while (n > 0) {
		write(dst, &c, 1);
		n = read(src, &c, 1);
	}
	close(src);
	close(dst);
	return 0;
}

