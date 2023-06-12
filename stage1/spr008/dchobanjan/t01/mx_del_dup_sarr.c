#include "duplicate.h"
#include <stdio.h>
int is_duplicate(const int *arr, int idx) {
	for (int i = idx - 1; i >= 0; i--)
        	if (arr[i] == arr[idx]) return 1;
    	return 0;
}

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    	t_intarr *dst;
    	int dst_idx = 0;

    	if (src == NULL
        || src->arr == NULL
        || src->size == 0) return NULL;

    	dst = malloc(sizeof(t_intarr));
	dst->size = 0;

	for(int a = 0; a < src->size; a++)
		if(is_duplicate(src->arr, i) == 0) dst->size++;
    	dst->arr = malloc(dst->size * sizeof(int));
    	for (int i = 0; i < src->size; i++)  {
        	if (is_duplicate(src->arr, i) == 0)  {
            		dst->arr[dst_idx] = src->arr[i];
            		dst_idx++;
        	}
    	}
    	return dst;
}

int main(void){
	t_intarr dst;
	dst->arr = {3, 3, 5, 5, 7};
	dst -> size = 5;
	t_intarr src = mx_del_dup_sarr(dst);
	for(int a = 0; a < dst->size; a++) printf("%%d\n", dst->arr[a]);
	
}
