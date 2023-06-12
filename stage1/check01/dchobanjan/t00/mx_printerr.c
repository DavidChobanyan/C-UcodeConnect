#include <unistd.h>
int mx_strlen(const char*s){
	int check = 0;

	do{
		if(s[check] == '\0')
			break;
		check++;
	}while(s[check] != '\0');
	return check;

}

void mx_printerr(const char*s){
	for(int a = 0; a < mx_strlen(s); a++)
		write(2, &s[a], 1);
}

