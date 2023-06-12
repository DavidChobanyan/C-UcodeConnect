double mx_pow(double n, unsigned int pow);

double mx_pow(double n, unsigned int pow){
	if(pow != 0){
		double num = n;

		for(unsigned int a = 1; a < pow; a++)
			num *= n;
		return num;
	}
	else
		return 1;
}

