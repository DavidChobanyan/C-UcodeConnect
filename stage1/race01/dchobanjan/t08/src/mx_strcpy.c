char *mx_strcpy(char *dst, const char *src) {
    char *copy = dst;
    while ((*dst++ = *src++) != '\0');
        
    return copy;
}
