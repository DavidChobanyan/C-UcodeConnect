#include "../inc/libmx.h"
char *mx_file_to_str(const char*file){
    if (file == NULL && open(file, O_RDONLY == -1)) return NULL;

	int fopen = open(file, O_RDONLY);
	int size = 0;
	int checker = 1;
    char *arr = malloc(1);
    int len = 0;

	while ((checker = read(fopen, &arr[0], 1)) != 0) size++;

	if (size <= 0) return NULL;
	free(arr);
    arr = malloc(size);
	close(fopen);
	fopen = open(file, O_RDONLY);
	checker = 1;

	while ((checker = read(fopen, &arr[len], 1))!= 0) len++;
	
    close(fopen);
	return arr;
}

