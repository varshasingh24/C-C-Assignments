// Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the number x and y \n");
    scanf("%d %d", &x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Value after swapping the number is %d and %d ",x,y);
    return 0;
}