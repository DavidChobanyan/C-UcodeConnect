void mx_printstr(const char *s);
void mx_printchar(char s);

int main(int argc, char **argv){
	if(argc > 1){
		for(int a = 1; a < argc; a++){
			mx_printstr(argv[a]);
			mx_printchar('\n');
		}
	}
}

