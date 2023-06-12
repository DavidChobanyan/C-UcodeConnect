#include "mx_to_nbr.h"

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

