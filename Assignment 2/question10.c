// 10.Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)
#include<stdio.h>

int main(){
    int x, y=5;
    printf("Enter the value of x \n");
    scanf("%d",&x);
    x=x*10;
    x=x+y;
    printf("Value after appending y is %d", x);
    return 0;
}