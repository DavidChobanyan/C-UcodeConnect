int mx_atoi(const char*str);
void mx_printint(int n);
void mx_printchar(char s);

int main(int argc, char **argv){
	if(argc > 1){
		int num = 0;

		for(int a = 1; a < argc; a++)
			num += mx_atoi(argv[a]);
		if(num > 0)	
			mx_printint(num);
		else if(num == 0)
		       	mx_printchar(48);
		else{
			mx_printchar('-');
			mx_printint(num*-1);
		}
		mx_printchar('\n');
	}
}
