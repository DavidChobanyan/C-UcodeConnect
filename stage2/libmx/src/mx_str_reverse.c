#include "../inc/libmx.h"

void mx_str_reverse(char*s){
	int len = mx_strlen(s);

	for(int a = 0; a < len/2; a++){
		mx_swap_char(&s[a], &s[len-a-1]);
	}
}

