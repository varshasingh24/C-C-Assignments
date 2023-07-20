//5. Write a program to check whether a given number is a three digit number or not.
#include<stdio.h>

int main(){
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);
    if((x>99)&&(x<1000)){
        printf("Number is of three digits \n");

    }
    else{
        printf("Number is not of three digits");
    }
    return 0;
}