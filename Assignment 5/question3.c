// 3. Write a program to print the first N natural numbers in reverse order.
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the value of n:");
    scanf("%d ",&n);
    for ( i = n; i >= 1; i--){
        printf("%d",i );
        printf("\n");
    }
  
    return 0;
}