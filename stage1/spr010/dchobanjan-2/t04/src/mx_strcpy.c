//#include <stdio.h>

char *mx_strcpy(char *dst, const char *src)
{
    char *ptr = dst;

    while (*src != '\0')
    {
        *dst++ = *src++;
    }

    *dst = '\0';
    return ptr;
}

/*int main(void) {
	char source[] = "Follow the white rabbit.";
	char destination[32];
	
	printf("%s\n", mx_strcpy(destination, source));
}*/

