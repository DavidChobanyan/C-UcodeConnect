#ifndef MINILIBMX_H
#define MINILIBMX_H
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void mx_printchar(char);
void mx_printerr(const char*);
void mx_printint(int);
void mx_printstr(const char*);
char *mx_strcpy(char*, const char*);
int mx_strlen(const char*);
int mx_strcmp(const char*, const char*);
bool mx_isdigit(int);
bool mx_isspace(char);
int mx_atoi(const char*);

#endif

