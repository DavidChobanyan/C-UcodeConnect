#include "../inc/libmx.h"
void mx_pop_front(t_list **list) {
    if (*list == NULL) return;
    t_list *tmp = *list;
    tmp = tmp->next;
	free(*list);
	*list = tmp;
}

