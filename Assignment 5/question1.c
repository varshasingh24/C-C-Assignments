// 1. Write a program to print iNeuron N times on the screen.
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("iNeuron");
        printf("\n");
    }
    

    return 0;
}