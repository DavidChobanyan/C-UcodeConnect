int mx_popular_int(const int *arr, int size)
{
	int count = 0;
	int num;

	for(int a = 0; a < size; a++)
	{
		int count2 = 0; 
		
		for(int b = 0; b < size; b++)
		{
			if(arr[b] == arr[a])
			{
				count2++;
			}
		}
		if(count2 > count){
			count = count2;
			num = arr[a];
		}
	}
	return num;
}

