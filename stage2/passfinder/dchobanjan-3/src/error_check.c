#include "../inc/pathfinder.h"

void validator(int argc, char *argv[]) {
    if (argc != 2){
        write(2, "usage: ./pathfinder [filename]\n", mx_strlen("usage: ./pathfinder [filename]\n"));
		exit(0);
	}

    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        close(fd);
        write(2, "error: file ", mx_strlen("error: file "));
        write(2, argv[1], mx_strlen(argv[1]));
        write(2, " does not exist\n", mx_strlen(" does not exist\n"));
		exit(1);
    }

    char* All = mx_file_to_str(argv[1]);
    if (mx_strlen(All) == 0) {
        write(2, "error: file ", mx_strlen("error: file "));
        write(2, argv[1], mx_strlen(argv[1]));
        write(2, " is empty\n", mx_strlen(" is empty\n"));
		exit(2);
    }

    int counter = 0;
    for (int i = 0; All[i] != '\n'; i++) {
        counter++;
        if (mx_isdigit(All[i])==0) {
            write(2, "error: line 1 is not valid\n", mx_strlen("error: line 1 is not valid\n"));
            exit(3);
        }
    }

    char tmp[counter];
    read(fd, tmp, counter);
    if (mx_satoi(tmp, counter) <= 0) {
        write(2, "error: line 1 is not valid\n", mx_strlen("error: line 1 is not valid\n"));
        exit(3);
    }    
}

