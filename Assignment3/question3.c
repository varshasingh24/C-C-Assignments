// 3. Write a program to check whether a given number is an even number or an odd
// number.
#include<stdio.h>

int main(){
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);
    if(x%2==0){
        printf("Number is even");
    
    }
    else{
        printf("Number is odd");
    }
    return 0;
}