#include "../inc/libmx.h"

void mx_printstr(const char*s){
	int check = 0;

	while(check < mx_strlen(s)){
		write(1, &s[check], 1);
		check++;
	}
}

