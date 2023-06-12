#include<stdio.h>
int mx_sqrt(int x) {
    if (x < 0)
        return 0;
    double sqrt = x / 2;
    double temp = 0;
    
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( x / temp + temp) / 2;
    }
    return sqrt - (int)sqrt == 0 ? sqrt : 0;
}

