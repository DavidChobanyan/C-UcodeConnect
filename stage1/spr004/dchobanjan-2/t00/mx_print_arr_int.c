void mx_printint(int n);
void mx_printchar(char s);

void mx_print_arr_int(const int *arr, int size)
{
	for(int a = 0; a < size; a++)
		mx_printint(arr[a]);
}

