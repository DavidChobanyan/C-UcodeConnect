void mx_foreach(const int *arr, int size, void (*f)(int)) {
    for (int a = 0; a < size; a++) f(arr[a]);
}

