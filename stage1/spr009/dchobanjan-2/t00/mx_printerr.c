#include "printerr.h"

void mx_printerr(const char*s){
	for(int a = 0; a < mx_strlen(s); a++)
		write(2, &s[a], 1);
}

