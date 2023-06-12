#include "../inc/libmx.h"

char *mx_file_to_str(const char *filename) {
    char tmp;
    char *res;
    int counter = 0;
    int fd = open (filename, O_RDONLY);
    if (fd == -1) 
        return NULL;
    while (read(fd, &tmp, 1) > 0) 
        counter++;
    res = mx_strnew(counter);
    fd = open (filename, O_RDONLY);
    if (fd == -1) 
        return NULL;
    for (int i = 0; read (fd, &tmp, 1) > 0; i++) 
        res[i] = tmp;
    if (close (fd) != 0) 
        return NULL;
    close (fd);
    return res;
}

