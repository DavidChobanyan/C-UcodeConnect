#include "../inc/libmx.h"


void swap(void* f, void* s){
    void *tmp = f;
	f = s;
	s = tmp;
}

t_list *mx_sort_list(t_list*lst, bool(*cmp)(void*, void*)){
    t_list *ptr = lst;
    while(ptr != NULL){
        t_list *ptr2 = lst;
        while(ptr2->next != NULL){
            if (cmp(ptr2->data, ptr2->next->data))
				swap(ptr2->data, ptr2->next->data);
            ptr2 = ptr2->next;
        }
        ptr = ptr->next;
    }
	return lst;
}

