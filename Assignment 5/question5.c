//5. Write a program to print a table of N.
#include<stdio.h>

int main(){
    int i,n ;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d",n*i);
        printf("\n");
    }
    
    return 0;
}