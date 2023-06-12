#include <limits.h>
void mx_printchar(char s);
int mx_atoi(const char*str);
void mx_printint(int n);
void printbnum(int num, int checker){
	int bit[32];
	int counter = 31;

	for(int a = 0; a < 32; a++) bit[a] = 48;
	while(num != 0){
		if(num % 2 == 0){
			bit[counter] = 48;
			counter--;
			num /= 2;
		}else{
			bit[counter] = 49;
			counter--;
			num /= 2;
		}}
        for(int c = 0; c < 32; c++) {
		if(checker == 1){
			if(bit[c] == 48) mx_printchar(49);else mx_printchar(48);
		}else{ mx_printchar(bit[c]);
		}}
        mx_printchar('\n');	
}

int main(int argc, char **argv){
	if(argc > 1){
		for(int a = 1; a < argc; a++){
			int num = mx_atoi(argv[a]);

			if(num == INT_MIN){
				mx_printchar(49);
				for(int b = 0; b < 31; b++) mx_printchar(48);
				mx_printchar('\n');
			}
			else if(num == INT_MAX){
                                mx_printchar(48);
                                for(int b = 0; b < 31; b++) mx_printchar(49);
				mx_printchar('\n');
                        }else if(num >= 0){
				printbnum(num, 0);	
			}else if(num < 0) printbnum(num, 1);	
		}
	}
}
