void mx_printchar(char s);

void mx_hexadecimal(void) {
	for (int i = 48; i < 58; i++) {
		mx_printchar(i);
		if(i+1 == 58){
			for (int j = 65; j < 71; j++) {
			mx_printchar(j);
			}
		}
	}
	mx_printchar('\n');
}

