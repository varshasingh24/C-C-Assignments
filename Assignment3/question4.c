// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.
#include<stdio.h>

int main(){
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    if((x & 1)==1){
        printf("Number is odd");

    }
    else{
        printf("Number is even");
    }
    return 0;
}
