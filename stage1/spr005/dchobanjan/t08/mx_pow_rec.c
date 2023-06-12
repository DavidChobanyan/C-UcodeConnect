double mx_pow_rec(double n, unsigned int pow){
	double num = n;

	if(pow > 1)
	      n = mx_pow_rec(n, pow-1);
	else if(pow == 1)
		return n;
	return num*n;	
}

