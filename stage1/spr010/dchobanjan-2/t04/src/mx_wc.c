#include "minilibmx.h"

void mx_print_cw(char *filename, int *str_cnt, int *w_cnt, int *c_cnt) {
	int file = open(filename, O_RDONLY);
	if (file < 0) {
		mx_printerr("mx_wc: ");
		mx_printerr(filename);
		mx_printerr(": open: ");
		mx_printerr(strerror(errno));
		mx_printerr("\n");
		exit(0);
	}
	char *file_content = mx_file_to_str(filename);
	if (file_content == NULL || mx_strlen(filename) <= 1) {
		mx_printerr("mx_wc: ");
		mx_printerr(filename);
		mx_printerr(": read: ");
		mx_printerr(strerror(errno));
		mx_printerr("\n");
		exit(0);
	}
	mx_printchar('\t');
	int count = mx_string_count(file_content);
	mx_printint(count);
	*str_cnt += count;
	mx_printchar('\t');
	count = mx_count_words(file_content, ' ');
	mx_printint(count);
	*w_cnt += count;
	mx_printchar('\t');
	count = mx_strlen(file_content);
	mx_printint(count);
	*c_cnt += count;
	mx_printchar(' ');
	mx_printstr(filename);
	mx_printchar('\n');
	free(file_content);
}

int main(int argc, char *argv[]) {
	int str_count = 0;
	int w_count = 0;
	int c_count = 0;

	for (int i = 1; i < argc; i++) {
		mx_print_cw(argv[i], &str_count, &w_count, &c_count);
		if (argc == 2)
			return 0;
	}
	mx_printchar('\t');
	mx_printint(str_count);
	mx_printchar('\t');
	mx_printint(w_count);
	mx_printchar('\t');
	mx_printint(c_count);
	mx_printstr(" total\n");
	return 0;
}

