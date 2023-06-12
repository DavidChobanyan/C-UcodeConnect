#include "minilibmx.h"

int recursive(char *s1, char op, char s2){
	
}

int main(int argc, char* argv[]) {
    enum e_operation p = -1;
    enum e_error mistake = -1;
    t_operation top;

    if (argc != 4) {
        mx_printerr("usage: ./calc [operand1] [operation] [operand2]\n");
        return -1;
    }
    int a = mx_atoi(argv[1]);
    char* b = argv[2];
    int c = mx_atoi(argv[3]);
    switch (b[0]) {
        case '-':
            p = SUB;
            top.f = mx_sub;
            break;
        case '+':
            p = ADD;
            top.f = mx_add;
            break;
        case '*':
            p = MUL;
            top.f = mx_mul;
            break;
        case '/':
            p = DIV;
            top.f = mx_div;
            break;
        case '%':
            p = MOD;
            top.f = mx_mod;
            break;
        default:
            mistake = INCORRECT_OPERATION;
            break;
    }
    top.op = p;

    if (a == (0))
        mistake = INCORRECT_OPERAND;
    else if (c == (0)) {
        if (p == DIV)
            mistake = DIV_BY_ZERO;
        else
            mistake = INCORRECT_OPERAND;
    }
    switch (mistake) {
        case INCORRECT_OPERATION:
            mx_printerr("error: invalid operation\n");
            return -3;
            break;
        case DIV_BY_ZERO:
             mx_printerr("error: division by zero\n");
             return -3;
             break;
        case INCORRECT_OPERAND:
             mx_printerr("error: invalid number\n");
             return -2;
             break;
    }
    int res = top.f(a, c);

    mx_printint(res);
    mx_printchar('\n');
}
char *mx_itoa(long i, char *string)
{
    int power = 0, j = 0;

    j = i;
    for (power = 1; j>10; j /= 10)
        power *= 10;

    for (; power>0; power /= 10)
    {
        *string++ = '0' + i / power;
        i %= power;
    }
    *string = '\0';
    return string;
}

void result(int a, int b, char result, char op){
	
} 

void print(char* argv[]){
	
    for(int c = 0; c < mx_pow(10, mx_strlen(argv[1])); c++){ // mx_pow
		char *c2 = NULL;
        mx_itoa(c, c2);
        int diff = mx_strlen(argv[1] - mx_strlen(c2));
        for(int counter = 0; counter < mx_strlen(argv[1]) - diff; counter++){
                if(argv[1][counter] != '?'){
                    if(argv[1][counter + diff] != c2[counter]){
                        c++;
                        counter = -1;
                    }

                }
        }
        
        
        for(int d = 0; d < mx_pow(10, mx_strlen(argv[3])); d++){
		char *d2 = NULL;
        mx_itoa(d, d2);
			for(int counter = 0; counter < strlen(argv[3]); counter++){
				if(argv[3][counter] != '?'){
					if(argv[3][counter] == d2[counter]){
						
					}else{
						break;
					}
					
					if(counter+1 == mx_strlen(argv[3])){
						result(d, c, argv[4], argv[2]);
					}
				}
			}
		}
	}
	
        // for(int c = 0; c < mx_pow(10, a); c++){
        // char c2 = mx_itoa[c];
        //     for(int counter = 0; counter < strlen(argv[1])){
        //             if(argv[1][counter] != '?'){
        //                 if(argv[1][counter] != c2[counter]){
        //                     c++;
        //                     counter = -1;
        //                 }
        //             }
        //     }
        // }
	
}