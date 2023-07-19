// 7. Write a program to check whether the given number is even or odd using a bitwise
// operator.
#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the value of x \n");
    scanf("%d", &x);
    if(x%2==0) {
        printf("Given no. is even");
   }
   else{
    printf("Given no. odd");
   }
    return 0;
}