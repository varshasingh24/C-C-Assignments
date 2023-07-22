// 6. Write a program to print the first 10 even natural numbers.
#include<stdio.h>

int main(){
    int i ;
printf("First ten even naural numbers are:\n");
for ( i = 1; i < 11; i++)
{
    printf("%d ", 2*i);
}

    return 0;
}