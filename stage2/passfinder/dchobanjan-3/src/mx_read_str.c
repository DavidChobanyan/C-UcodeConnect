#include "../inc/pathfinder.h"

char *mx_read_str(char *file, int n, bool *end) {
    char c;
    int fo = open(file, O_RDONLY), len = 0;
    for (int i = 0; i < n-1; i++) {
        read(fo, &c, 1);
        while (c != '\n') read(fo, &c, 1);
    }

    int info = read(fo, &c, 1);
    while (info > 0) {
        if (c == '\n') break;
        info = read(fo, &c, 1), len++;
    }
    if (read(fo, &c, 1) <= 0) *end = 1;
    close(fo);
    char *r = mx_strnew(len);
    fo = open(file, O_RDONLY), len = 0;
    for (int i = 0; i < n-1; i++) {
        read(fo, &c, 1);
        while (c != '\n') read(fo, &c, 1);
    }
    read(fo, &c, 1);
    while (c != '\n') {
        r[len] = c, len++;
        info = read(fo, &c, 1);
        if (info <= 0) break;
    }
    close(fo);
    return r;
}
