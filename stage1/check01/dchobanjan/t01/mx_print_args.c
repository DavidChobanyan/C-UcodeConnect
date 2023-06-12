#include <unistd.h>

void mx_printchar(char s){
	write(1, &s, 1);
	
}

int mx_strlen(const char*s)
{
	int check = 0;

	do{
		if(s[check] == '\0')
			break;
		check++;
	}while(s[check] != '\0');
	return check;
}

void mx_printstr(const char *s){
    write(1, s, mx_strlen(s));
}

int main(int argc, char **argv){
	if(argc > 1){
		for(int a = 1; a < argc; a++){
			mx_printstr(argv[a]);
			mx_printchar('\n');
		}
	}
}
