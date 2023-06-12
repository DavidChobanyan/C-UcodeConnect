#include <unistd.h>

void mx_printstr(const char *s){
	int len = 0;

	while(s[len] != '\0')
        {
                if(s[len] == '\0')
                        break;
                len++;
        }

	for(int a = 0; a < len; a++){
		write(1, &s[a], 1);
	}
	write(1, "\n", sizeof("\n"));
	
}

