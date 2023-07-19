// Write a program to swap values of two int variables.
#include<stdio.h>

int main(){
    int x,y,temp;
    printf("Enter the number which you want to swap \n");
    scanf("%d %d", &x,&y);
    temp= x;
    x = y;
    y = temp;
   
printf("Value after swaping is % d and %d", x,y);
    return 0;
}