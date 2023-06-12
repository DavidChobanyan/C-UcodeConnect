int mx_factorial_iter(int n) {
    if (n < 0 || n > 12)
       return 0;
    int factorial = 1;
    
    for (int i = 1; i <= n; i++)
        factorial *= i;
    return factorial;
}

