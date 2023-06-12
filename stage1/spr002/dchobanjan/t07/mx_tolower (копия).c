#include <stdbool.h>

int mx_tolower(int c);

int mx_tolower(int c){
	if(c>= 65 && c<= 122)
		return c+32;
	else
		return c;
}

