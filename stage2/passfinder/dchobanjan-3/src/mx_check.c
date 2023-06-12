#include "../inc/pathfinder.h"

bool mx_check(char *string) {
    bool delim1 = false;
    for (int i = 0; i < mx_strlen(string); i++) {
        if (!(((string[i] >= 65) && (string[i] <= 90)) 
            || ((string[i] >= 97) && (string[i] <= 122)))) {
            
            if ((!delim1) && string[i] == '-')delim1 = true;
            else if (string[i] == ',') return false;
            else return true;
        }
    }
    return false;
}

