// 1. Write a program to check whether a given number is positive or non positive.
#include<stdio.h>

int main(){
    int x ;
    printf("Enter the number :\n");
    scanf("%d",&x);
    if(x<0){
        printf("Number is Negative");
    }
    else{
        printf("Number is positive");
    }
    return 0;
}