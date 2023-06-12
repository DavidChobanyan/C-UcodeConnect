#pragma once

#include "../libmx/inc/libmx.h"

typedef struct s_island {
    char *name;
    int length;
}t_island;

typedef struct information {
    int start, finish, sum, count;
}information;

void validator(int argc, char *argv[]);
void map(char *file, t_island *islands, int *map, int count_of_islands);
void dialg(int first, int *map, int count, t_island *islands);
char *pathfinder(char *route, char *dist, t_island *islands, int *map, information data);
void results(t_island *islands, int *map, int count);
char *mx_read_str(char *file, int n, bool *end);
bool mx_check(char *string);
void mx_interr(int n);
int mx_satoi(const char *string, int length);

