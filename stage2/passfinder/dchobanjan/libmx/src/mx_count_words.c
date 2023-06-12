#include "../inc/libmx.h"
int mx_count_words(const char*str, char c){
    if(str == NULL){
        return -1;
    }
	int counter = 0;
	int delimiter = 1;
	for(int a = 0; str[a] != '\0'; a++){
		if(str[a] != c && delimiter == 1){
            counter++;
            delimiter = 0;
        }
        if(str[a] == c)
            delimiter = 1;
	}
    return counter;
}

