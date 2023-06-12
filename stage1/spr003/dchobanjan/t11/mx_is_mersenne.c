#include <stdbool.h>
bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);
bool mx_is_mersenne(int n);

bool mx_is_mersenne(int n)
{
	if(!mx_is_prime(n))
	{
		return false;
	}	
	for(int a = 0; a <= n; a++)
	{
		if(n == mx_pow(2, a) - 1)
			return true;
	}

	return false;
}

