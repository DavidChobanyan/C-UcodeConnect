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
	mx_printstr(argv[0]);
	mx_printchar('\n');
	mx_printchar(argc+48);
	mx_printchar('\n');
}
