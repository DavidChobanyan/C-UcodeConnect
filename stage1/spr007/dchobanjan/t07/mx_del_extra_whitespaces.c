#include <stdbool.h>

bool mx_isspace(char c);
void mx_strdel(char **str);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_del_extra_whitespaces(const char *str) {
	char *arr = mx_strtrim(str);
	char *new_str;
	char *r_ptr;
    	char *w_ptr;

    	if (arr == NULL) return 0;

    	r_ptr = w_ptr = arr;

    	while (*r_ptr != '\0')
    	{
        	if (!mx_isspace(*r_ptr)) {
            		if (r_ptr != arr && mx_isspace(*(r_ptr - 1))) {
                		*w_ptr = ' ';
                		w_ptr++;
            		}
            	*w_ptr = *r_ptr;
            	w_ptr++;
        	}
        	r_ptr++;
    	}
    	new_str = mx_strnew(w_ptr - arr);
    	mx_strncpy(new_str, arr, w_ptr - trimmed);
    	mx_strdel(&trimmed);
    	return new_str;
}
