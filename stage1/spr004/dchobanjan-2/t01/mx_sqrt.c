int mx_sqrt(int x)
{
	int number = 1;

	for(int a = 2; number <= x; a++){
		number = a;
		for(int b = 1; number <= x; b++){
			number *= a;
			if(number == x)
				return a;
		}
	}
	return 0;
}

