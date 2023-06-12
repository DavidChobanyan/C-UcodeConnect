#include <stdio.h>
#include <unistd.h>;
int main(int argc, char argv){
	if(argc != 2)
		write(2, "usage: ./read_file [file_path]", sizeof("usage: ./read_file [file_path]"));
	if(fopen(argv[1], "r") == NULL)
		write(2, "error", sizeof("error"));
	int counter = 0;	
	while(fopen(argv[1], r) != EOF){
		counter++;
	}



}
