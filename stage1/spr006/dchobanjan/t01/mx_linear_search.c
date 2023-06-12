#include <stdio.h>
int mx_strcmp(const char* s1, const char* s2);

int mx_linear_search(char**arr, const char*s){
	for(int a = 0; arr[a] != NULL; a++){
		if(mx_strcmp(arr[a], s) == 0)
			return a;
	}
	return -1;
}

