#include "../inc/libmx.h"

int mx_list_size(t_list*list){
    if(list == NULL) return 0;
    int counter = 0;
    while(list != NULL){
        counter++;
        list= list -> next;
    }
    return counter;
}

