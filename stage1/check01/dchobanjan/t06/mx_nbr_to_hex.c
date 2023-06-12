#include <stdio.h>
#include <stdlib.h>

char*mx_strnew(const int size){
	char *str = malloc(sizeof(char)*size + 1);

	if(size < 0 || str == NULL){
		return NULL;
	}else{
                for(int a = 0; a < size+1; a++) str[a] = '\0';
                return str;
	}
}

char *mx_nbr_to_hex(unsigned long nbr) {
    char* digits = "0123456789abcdef";
    int len = 1;

    for (unsigned long i = nbr; i >= 16; i /= 16) len++;
    char *str = mx_strnew(len);

    for (int i = len; i > 0; i--) {
        str[i - 1] = digits[nbr % 16];
        nbr /= 16;
    }
    return str;
}

