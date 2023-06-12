void mx_sort_arr_int(int*arr, int size)
{
	for(int a = 0; a < size; a++)
	{
		for(int b = a; b < size; b++)
		{
			if(arr[b] < arr[a])
			{
				int temp = arr[a];
				
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}
}

