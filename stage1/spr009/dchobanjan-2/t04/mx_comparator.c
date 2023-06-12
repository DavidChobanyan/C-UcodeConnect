#include <stdbool.h>

int mx_comparator(int *arr, int size, int x, bool(*compare)(int, int)) {
    for (int a = 0; arr && a < size; ++a)
        if (compare(arr[a], x))
            return a;
    return -1;
}
