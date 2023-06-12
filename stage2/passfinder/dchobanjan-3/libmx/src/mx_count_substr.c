#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub){
	int len = mx_strlen(str);
	int counter = 0;

        for(int a = 0; a < len; a++){
                if(str[a] == sub[0]){
                        for(int b = 0; b < mx_strlen(sub); b++){
                                if(str[a + b] != sub[b])
                                        break;
                                if(sub[b+1] == '\0'){
					counter++;
					break;
				}
                                        
                        }
                }
        }
        return counter;

}

