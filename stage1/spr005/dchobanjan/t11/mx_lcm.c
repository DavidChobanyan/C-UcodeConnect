int mx_lcm(int a, int b){
	int num = a;

	while(num % b != 0)
		num += a;
	if(num < 0) return num*-1;
	else return num;
}

