#include<stdio.h>

int main(){
    int principal_amount,rate, intrest;
    printf("What is the principal amount:\n");
    scanf("%d", &principal_amount);

    printf("What is the rate:\n");
    scanf("%d", &rate);

    printf("What is the intrest:\n");
    scanf("%d", &intrest);
    int a =principal_amount*rate*intrest/100;
    printf("The value of simple intrest is:  %d \n",a );
    printf("The Total amount to return is : %d", principal_amount+a);

    return 0;
}