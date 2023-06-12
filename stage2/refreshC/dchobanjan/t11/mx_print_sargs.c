int mx_strcmp(const char* s1, const char* s2);
int mx_strlen(const char*s);
void mx_printstr(const char *s);
void mx_printchar(char s);

int main(int argc, char **argv){
	int counter = 0;

	if(argc > 1){
		for(int a = 1; a < argc; a++){
			for(int b = a+1; b < argc; b++){
				while(argv[a][counter] == argv[b][counter])
					counter++;

				if(argv[a][counter] > argv[b][counter]){
                                        char *temp = argv[a];

                                        argv[a] = argv[b];
                                        argv[b] = temp;
                                }
				counter = 0;
	
			}}
		for(int a = 1; a < argc; a++){
			mx_printstr(argv[a]);
			mx_printchar('\n');
		}}}


