// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>

int main(){
    int i=10;
    printf("First ten odd natural number in reverse order\n");
    for ( i =10; i >= 1; i--)
    {
      printf("%d ",2*i-1);
    }
    
    return 0;
}