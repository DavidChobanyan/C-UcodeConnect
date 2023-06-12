void mx_printchar(char s);
void mx_printstr(const char *s);

int main(int argc, char **argv){
	mx_printstr(argv[0]);
	mx_printchar('\n');
	mx_printchar(argc+48);
	mx_printchar('\n');
}
