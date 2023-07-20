//WAP to divide a given no. by 32 without using division operator.
#include<stdio.h>

int main(){
    int x = 5,y=128;
    x=x<<4;
    printf("%d \n", x);
    y=y>>5;
    printf("%d \n",y);
    // xor
    printf("%d",x^y);
    return 0;
}