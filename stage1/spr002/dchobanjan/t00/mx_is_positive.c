#include <unistd.h>

void mx_is_positive(int i);

void mx_is_positive(int i){
	if(i > 0)
		write(1, "positive\n", sizeof("positive\n"));
	else if(i == 0)
		write(1, "zero\n", sizeof("zero\n"));
	else
		write(1, "negative\n", sizeof("negative\n"));
}

