#include "unistd.h"

int mx_strlen(const char *s);

void mx_printstr(const char*s);

void mx_printstr(const char*s){
	int check = 0;

	while(check < mx_strlen(s)){
		write(1, &s[check], 1);
		check++;
	}
	write(1, "\n", sizeof("\n"));
}

