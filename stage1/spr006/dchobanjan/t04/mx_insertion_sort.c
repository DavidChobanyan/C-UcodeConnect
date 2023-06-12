int mx_strlen(const char*s);
int mx_insertion_sort(char**arr, int size){
	int count = 0;

    	for (int a = 1; a < size; a++) {
        	for (int b = a; b > 0 && (mx_strlen(arr[b]) < mx_strlen(arr[b - 1])); b--) {
            		char* temp = arr[b - 1];

            		arr[b - 1] = arr[b];
            		arr[b] = temp;
            		count++;
        	}
    	}
    	return count;
}

