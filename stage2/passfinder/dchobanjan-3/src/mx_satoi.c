#include "../inc/pathfinder.h"

int mx_satoi(const char *string, int length) {
    if (string == 0) return -1;
    int result = 0;
    for (int a = 0; a < length ; a++) {
        if ((string[a] >= 48)) {
            if((string[a] <= 57)){
                result *= 10;
                if (result % 10 != 0) return -1;
                result += (int)string[a] - 48;
            }else return -1;
        }
        else return -1;
    }
    return result;
}
