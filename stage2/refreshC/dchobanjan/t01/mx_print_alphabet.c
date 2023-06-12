void mx_printchar(char s);

void mx_print_alphabet(void){
	int a = 65;
	int check = 0;

	do{
		mx_printchar(a);
		if(check == 0){
			a+=33;
			check = 1;
		}
		else{
			a-=31;
			check = 0;
		}
	}while(a != 91);
}

