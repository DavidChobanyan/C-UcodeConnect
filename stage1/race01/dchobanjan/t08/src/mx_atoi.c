#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_second(int i, int start, int end, const char * str) {
    int res = 0;
    if (end == -1) {
        i = start;
        while (str[i] != '\0') {
            res = 10 * res + (int)str[i] - 48;
            i++;
        }
    }
    else {
        i = start;
        while (i < end) {
            res = 10 * res + (int)str[i] - 48;
            i++;
        }
    }
    return res;
}


int mx_atoi(const char *str) {
    int start = -1;
    int end = -1;
    int minus = 0;
    int res = 0;
    int i;
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == '-' || str[i] == '+') 
            if(mx_isdigit(str[i + 1])) {
                minus = 1;
                i++;
                continue;
            }
        if (!mx_isspace(str[i])) 
            if (start == -1)
                start = i;
        if (start > -1)
            if(!mx_isdigit(str[i]))
                if(end == -1) 
                    end = i;
        i++;
    }
    res = mx_second(i, start, end, str);
    return minus == 0 ? res : -1 * res;
}
