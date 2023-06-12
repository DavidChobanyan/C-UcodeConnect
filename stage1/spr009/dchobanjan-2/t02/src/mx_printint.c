void mx_printint(int n);
void mx_printchar(char s);

int main(void){
        mx_printint(25);
}

void mx_printint(int n){
        int check = 10;
        int num = 1;
        while(check < n){
                check *= 10;
                num++;
        }
        char number[num] = (char) n;
        for(int a = 0; a < num; a++){
                mx_printchar(number[a]);
        }

}

