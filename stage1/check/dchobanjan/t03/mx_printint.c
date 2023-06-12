#include <unistd.h>

void mx_printchar(char c){
        write(1, &c, 1);
}

void mx_printint(int n){
	if(n < 0){
		mx_printchar('-');
		n *= -1;
	}
	if(n >= 1) mx_printint(n/10);
	char num = n+48;
	
	write(1, &num, 1);
}

