// 3. Write a program to print the first 10 natural numbers in reverse order.
#include<stdio.h>

int main(){
    int i = 10;
    printf("First ten natural number in reverse order \n");
    for ( i = 10; i >= 1; i--)
    {
        printf("%d ",i);
    }
    
    return 0;
}