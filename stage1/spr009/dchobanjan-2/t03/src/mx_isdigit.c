#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isdigit(int c){
	if((c >= 32 && c <= 47) || (c >= 58 && c <= 127))
		return false;
	else
		return true;
}

