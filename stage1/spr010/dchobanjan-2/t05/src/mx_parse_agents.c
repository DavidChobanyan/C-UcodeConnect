#include "minilibmx.h"

char *mx_parse_word(char *str) {
	int length = 0;
	char *ptr = str;
	for (; !mx_isspace(*str); str++, length++);
	char *word = mx_strnew(length);
	for (int i = 0; i < length; i++) {
		word[i] = ptr[i];
	}
	return word;
}

int mx_parse_num(char *str) {
	int length = 0;
	char *ptr = str;
	for (; !mx_isspace(*str); str++, length++);
	int num = *ptr - '0';
	for (int i = 1; i < length; i++) {
		num *= 10;
		num += ptr[i] - '0';
	}
	return num;
}

t_agent *mx_parse(const char *filename, int *count) {
	char *file_content = mx_file_to_str(filename);
	char *ptr = file_content;
	if (mx_strlen(file_content) < 1) {
		mx_printerr("error\n");
		free(file_content);
		exit(0);
	}
	for (; *file_content; file_content++) {
		if (mx_strncmp(file_content, "name: ", 6) == 0) {
			*count += 1;
			file_content += 6;
		}
	}
	t_agent *agents = (t_agent*) malloc(sizeof(t_agent) * (*count));
	file_content = ptr;
	for (int i = 0; i < *count; file_content++) {
		if (mx_strncmp(file_content, "name: ", 6) == 0) {
			file_content += 6;
			agents[i].name = mx_parse_word(file_content);
		}
		if (mx_strncmp(file_content, "power: ", 7) == 0) {
			file_content += 7;
			agents[i].power = mx_parse_num(file_content);
		}
		if (mx_strncmp(file_content, "strength: ", 10) == 0) {
			file_content += 10;
			agents[i].strength = mx_parse_num(file_content);
			i++;
		}
	}
	return agents;
}

int main(int argc, char *argv[]) {
	if (argc != 3 || argv[1][0] != '-'
	|| argv[1][1] != 'p' || argv[1][1] != 's'
	|| argv[1][1] != 'n')
		mx_printerr("usage: ./parse_agents [-p | -s | -n] [filename]\n");
	int count = 0;
	t_agent *agents = mx_parse(argv[2], &count);

	switch (argv[1][1]) {
	case 'p':
		for (int i = count - 1; i > 0; i--) {
			for (int j = count - 1; j > 0; j--) {
				if (agents[j].power < agents[j - 1].power) {
					t_agent *temp;
					temp = &agents[j - 1];
					agents[j - 1] = agents[j];
					agents[j] = *temp;
				}
			}
		}
		break;
	case 's':
		for (int i = count - 1;i > 0; i--) {
			for (int j = count - 1; j > 0; j--) {
				if (agents[j].strength < agents[j - 1].strength) {
					t_agent *temp;
					temp = &agents[j - 1];
					agents[j - 1] = agents[j];
					agents[j] = *temp;
				}
			}
		}
		break;
	case 'n':
		for (int i = count - 1;i > 0; i--) {
			for (int j = count - 1; j > 0; j--) {
				if (mx_strcmp(agents[j].name, agents[j - 1].name) < 0) {
					t_agent *temp;
					temp = &agents[j - 1];
					agents[j - 1] = agents[j];
					agents[j] = *temp;
				}
			}
		}
		break;
	}
	for (int i = 0; i < count; i++) {
		printf("agent: %s, strength: %d, power: %d\n", agents[i].name, agents[i].strength, agents[i].power);
	}
	return 0;
}

