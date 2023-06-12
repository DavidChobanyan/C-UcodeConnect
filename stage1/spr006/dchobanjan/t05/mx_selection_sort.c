int mx_strlen(char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_selection_sort(char**arr, int size){
	int count = 0;

   	for (int a = 0; a < size - 1; a++) {
        	int min = a;
        	for (int b = a + 1; b < size; b++) {
            	if (mx_strlen(arr[b]) < mx_strlen(arr[min])) min = b;
		else if (mx_strlen(arr[b]) == mx_strlen(arr[min]))
                	if (mx_strcmp(arr[b], arr[min]) < 0) min = b;
        	}
        	
		if (min != a) {
            		char *temp = arr[a];

            		arr[a] = arr[min];
            		arr[min] = temp;
            		count++;
        	}
    	}
    	return count;
}

