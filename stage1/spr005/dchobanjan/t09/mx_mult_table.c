int mx_atoi(const char*str);
void mx_printint(int n);
void mx_printchar(char s);

int main(int argc, char **argv){
	if(argc == 3){
		if(mx_atoi(argv[1]) < mx_atoi(argv[2])){
			for(int a = 1; a <= mx_atoi(argv[2]); a++){
				for(int b = 1; b <= mx_atoi(argv[2]); b++){
					mx_printint(a*b);
					mx_printchar('\t');
				}
				mx_printchar('\n');
			}
		}else if(mx_atoi(argv[1]) > mx_atoi(argv[2])){
                        for(int a = mx_atoi(argv[2]); a <= mx_atoi(argv[1]); a++){
                                for(int b = mx_atoi(argv[2]); b <= mx_atoi(argv[1]); b++){
                                        mx_printint(a*b);
                                        mx_printchar('\t');
                                }
                                mx_printchar('\n');
			}
                }else{
			mx_printint(mx_atoi(argv[1])*mx_atoi(argv[1]));
			mx_printchar('\n');}}
}
