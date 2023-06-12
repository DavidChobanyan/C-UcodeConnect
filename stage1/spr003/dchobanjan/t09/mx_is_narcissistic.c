#include <stdbool.h>
bool mx_is_narcissistic(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num)
{
	int count = 0;
	int sum = 0;

	for (int i = num; i != 0; i /= 10) 
	{
        	count++;
	}

	for (int i = num; i != 0; i /= 10) 
	{
        	if (i % 10 < 0) 
		{
           		 sum += mx_pow((i % 10)*-1, count);
        	}
		else
		{
			sum += mx_pow(i % 10, count);
		}
	}
	if(sum == num)
		return true;
	else
		return false;
}

