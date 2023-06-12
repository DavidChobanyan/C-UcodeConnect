#include <unistd.h>

void mx_write_knock_knock(void);

void mx_write_knock_knock(void){
	write(1, "Follow the white rabbit.\n", sizeof("Follow the white rabbit.\n"));
	write(1, "Knock, knock, Neo.\n", sizeof("Knock, knock, Neo.\n"));
}

