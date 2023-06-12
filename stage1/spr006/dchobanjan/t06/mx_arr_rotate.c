void mx_arr_rotate(int *arr, int size, int shift) {
        if(shift > 0){
                int temp[size];
                for(int a = 0; a < size; a++){
                        temp[(a+shift) % size] = arr[a];
                }
                for(int a = 0; a < size; a++) arr[a] = temp[a];
        }
	else if(shift < 0){
		int temp[size];
		shift *= -1;
		for(int a = 0; a < size; a++){
			if(shift-a >= 0)
				temp[shift-a] = arr[size-a-1];
			else
				temp[(a)] = arr[size-a-1];
		}
		for(int a = 0; a < size; a++) arr[a] = temp[a];
	}
}

