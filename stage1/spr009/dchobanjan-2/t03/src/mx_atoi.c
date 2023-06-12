#include <stdbool.h>

bool mx_isspace(char c);

int mx_atoi(const char*str){
	int result = 0;
	int i = 0;
	int check = 1;
	if(str[i] == '-'){
                        check *= -1;
                        i++;
        }

	while(str[i] != '\0'){
		if(mx_isspace(str[i])){
			i++;
			continue;		
		}
		else if(str[i] >= '0' && str[i] <= '9') break;
		else return 0;	
	}
	while(str[i] != '\0'){
		if(str[i] >= '0' && str[i] <= '9'){
			result *= 10;
			result += str[i] - 48;
			i++;
		}
		else break;
	}
	return result * check;
}

