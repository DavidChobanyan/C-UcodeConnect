int mx_bubble_sort(char**arr, int size){
	int counter = 0;
	int checker = 0;
	
	for(int a = 0; a < size; a++){
		for(int b = a; b < size; b++){
			while(arr[a][checker] == arr[b][checker] && checker < size)
				checker++;
			
                        if(arr[a][checker] > arr[b][checker]){
				char *temp = arr[a];

                                arr[a] = arr[b];
                                arr[b] = temp;
				counter++;
                        }
                        checker = 0;
		}
	}
	return counter;
}

