int mx_factorial_rec(int n){
	int t = n;

	if(n > 0){
		t *=mx_factorial_rec(n-1);
	}
	if(n == 0)
		return 1;
	return t;
}

