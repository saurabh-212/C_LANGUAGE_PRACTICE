#include<stdio.h>

int main(){
    int radius ;
    float pie= 3.14;
    printf("What is the radius of your circle:\n");
    scanf("%d",&radius);

    printf("The area of the circle is:%f ", pie*radius);

    return 0;
}