#include <stdlib.h>
#include <stdio.h>
int *mx_copy_int_arr(const int*src, int size){
	if(src != NULL && size != 0){
		int *arr = malloc(sizeof(int) * size);

		if(arr == NULL) 
			return NULL;
		for(int a = 0; a < size; a++) 
			arr[a] = src[a];
		return arr;
	}else{
		return NULL;
	}
}

