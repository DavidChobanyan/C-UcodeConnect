int mx_factorial_iter(int n){
	if(n >= 0){
		int num = 1;

		for(int a = 1; a <= n; a++){
			num *= a;
		}
		return num;
	}else return 0;
}

