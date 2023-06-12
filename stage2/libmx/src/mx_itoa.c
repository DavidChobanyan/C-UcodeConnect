#include "../inc/libmx.h"
void check1(int rem, int counter, char *a){
    if(rem == 0){
        a[counter] = '4';
        a[counter+1] = '8';
    }else if(rem == 1){
        a[counter] = '4';
        a[counter+1] = '9';
    }else if(rem == 2){
        a[counter] = '5';
        a[counter+1] = '0';
    }else if(rem == 3){
        a[counter] = '5';
        a[counter+1] = '1';
    }else if(rem == 4){
        a[counter] = '5';
        a[counter+1] = '2';
    }
}
void check2(int rem, int counter, char *a){
    if(rem == 5){
        a[counter] = '5';
        a[counter+1] = '3';
    }else if(rem == 6){
        a[counter] = '5';
        a[counter+1] = '4';
    }else if(rem == 7){
        a[counter] = '5';
        a[counter+1] = '5';
    }else if(rem == 8){
        a[counter] = '5';
        a[counter+1] = '6';
    }else if(rem == 9){
        a[counter] = '5';
        a[counter+1] = '7';
    } 
}
#include "../inc/libmx.h"
char *mx_itoa(int number)
{
    char *a = malloc(30);
    int counter = 0;
    while (number != 0) {
        int rem = (number % 10);

        check1(rem, counter, a);
        check2(rem, counter, a);
        number = number/10;
        counter+=2;
    }
    for(int i = 0; i<counter/2; i+=2){
        char temp = a[counter-i-1];
        char temp2 = a[counter-i-2];
        a[counter-i-2]=a[i];
        a[counter-i-1]=a[i+1];
        a[i]=temp2;
        a[i+1]=temp;
    }
    return a;
}

