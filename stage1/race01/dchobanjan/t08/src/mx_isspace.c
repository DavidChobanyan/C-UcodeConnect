#include <stdbool.h>

bool mx_isspace(char c) {
    if (c == ' '
        || c == '\t'
        || c == '\v'
        || c == '\n'
        || c == '\r'
        || c == '\f') {
        return 1;
    }
    else {
        return 0;
    }
}
