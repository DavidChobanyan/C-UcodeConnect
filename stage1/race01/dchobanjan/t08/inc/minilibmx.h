#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "calculator.h"
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char* src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
void mx_printerr(const char *s);


#endif
