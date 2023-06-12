char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    int len = mx_strlen(str);
    char *temp = mx_strnew(len);
    temp = mx_strcpy(temp, str);

    return temp;
}
