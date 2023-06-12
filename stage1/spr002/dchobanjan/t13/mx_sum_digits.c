int mx_sum_digits(int num);

int mx_sum_digits(int num){
        int sum = 0;

	if(num < 0)
		num *= -1;
	
	for(int a = num; a>0; a/=10){
		sum += a % 10;
	}

	return sum;
}

