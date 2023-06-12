#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    int counter = 0;

    if (!arr) return -1;  
    else if (left < right) {
        int l = left; 
        int r = right;
        char *pivot = arr[(r + l) / 2];

        while (l <= r) {
            while (mx_strlen(arr[l]) < mx_strlen(pivot)) l++;
            while (mx_strlen(arr[r]) > mx_strlen(pivot)) r--;
            if (l <= r) {
                if (mx_strlen(arr[r]) != mx_strlen(arr[l])) {
                    mx_swap_char(arr[l], arr[r]);
                    counter++;     }
                r--; l++;}}
        counter += mx_quicksort(arr, left, r);
        counter += mx_quicksort(arr, l, right);
    }    
    return counter;
}
