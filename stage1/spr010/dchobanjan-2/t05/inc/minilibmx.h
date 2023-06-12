#ifndef MINILIBMX_H
#define MINILIBMX_H
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct s_agent{
	char*name;
	int power;
	int strength;
}		t_agent;

void mx_printchar(char);
void mx_printerr(const char*);
void mx_printint(int);
void mx_printstr(const char*);
char *mx_strcpy(char*, const char*);
int mx_strlen(const char*);
int mx_strcmp(const char*, const char*);
int mx_strncmp(const char*, const char*, int);
bool mx_isdigit(int);
bool mx_isspace(char);
int mx_atoi(const char*);
int mx_count_words(const char*, char);
char *mx_strnew(int);
char *mx_file_to_str(const char*);

#endif

