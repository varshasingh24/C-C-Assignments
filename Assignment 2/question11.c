// 11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
// and convert it into USD.
#include<stdio.h>

int main(){
    float x,y;
    printf("Enter  the amount in Indian Rupees \n");
    scanf("%f",&x);
    y= (1/76.23) * x;
    printf("Value of Indian rupees in USD is %.2f ",y);
    return 0;
}