#include "../inc/libmx.h"

int mx_read_line(char**lineptr, size_t buf_size, char delim, const int fd){
    if (fd > 0) {
        (*lineptr) = (char *) mx_realloc(*lineptr, buf_size);
	    mx_memset((*lineptr), '\0', malloc_usable_size((*lineptr)));
	    size_t size = 0;
	    char buffer;

	    if (read(fd, &buffer, 1)) {
		    if (buffer == delim) return size;
		    (*lineptr) = (char *) mx_realloc(*lineptr, size + 1);
		    (*lineptr)[size] = buffer; size++;
	    } else return -1;
	    while (read(fd, &buffer, 1)) {
		    if (buffer == delim) break;
		    if (size >= buf_size) (*lineptr) = (char *) mx_realloc(*lineptr, size + 1);
		    (*lineptr)[size] = buffer; size++;
	    }
	    (*lineptr) = (char *) mx_realloc(*lineptr, size + 1);
	    size_t free = malloc_usable_size((*lineptr)) - size;
	    mx_memset(&(*lineptr)[size], '\0', free);
	    return size + 1; 
    }  else return -2;
}

