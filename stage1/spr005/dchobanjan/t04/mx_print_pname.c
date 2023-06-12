void mx_printchar(char s);

int main(int argc, char **argv){
	int counter = argc-argc;
	
	for(int a = 0; argv[0][a] != '\0'; a++){
		if(argv[0][a] == '/')
			counter = a+1;
	}
	for(int a = counter; argv[0][a] != '\0'; a++)
		mx_printchar(argv[0][a]);
        mx_printchar('\n');
}
