// 8. Write a program to print squares of the first 10 natural numbers.
#include<stdio.h>

int main(){
    int i;
    printf("Square of first ten natural number  are: \n");
    for ( i = 1; i <= 10; i++)
    {
        printf("%d ", i*i);
    }

    return 0;
}