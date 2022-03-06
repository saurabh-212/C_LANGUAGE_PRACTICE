#include<stdio.h>

int main(){
    int celsius;
    printf("What is the celsius:\n");
    scanf("%f", &celsius);

    printf("The conversion of celsius into farenheit is :%f",celsius*1.8+32);  //9 divided by 5 is 1.8

    return 0;
}