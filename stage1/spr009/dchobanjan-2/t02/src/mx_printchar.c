#include <unistd.h>

void mx_printchar(char s){
	write(1, &s, 1);
	write(1, "\n", sizeof("\n"));
}

