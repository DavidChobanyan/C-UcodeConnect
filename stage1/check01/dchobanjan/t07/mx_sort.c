#include <stdbool.h>

void mx_sort(int *arr, int size, bool(*f)(int, int)) {
    for (int a = 0; a < size; a++) {
        for (int b = 0; b < size - 1; b++) {
            if (f(arr[b], arr[b + 1])) {
                int temp = arr[b + 1];

                arr[b + 1] = arr[b];
                arr[b] = temp;
            }
        }
    }
}
