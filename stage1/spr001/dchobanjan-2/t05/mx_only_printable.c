void mx_printchar(char s);

void mx_only_printable(void) { 
	for(int a = 126; a > 31; a--){
		char s = a;

		mx_printchar(s);
	}
}

