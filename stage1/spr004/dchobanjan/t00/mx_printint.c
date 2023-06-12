void mx_printchar(char c);

void mx_printint(int n){
	int t = 0;

	while (n != 0){
		t = (t * 10) + n%10;
		n /= 10;
	}
 
	while (t != 0){
		mx_printchar((t%10) + 48);
		t /= 10;
	}
	mx_printchar('\n'); 
}

