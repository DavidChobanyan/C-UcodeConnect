#include <unistd.h>
void mx_only_printable(void){
	for(int a = 126; a > 31; a--){
		char s = a;

		write(1, &s, 1);		
	}	
}

