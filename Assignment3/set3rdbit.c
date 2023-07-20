// WAP to set 3rd bit from RHS
#include<stdio.h>

int main(){
    int x;
    printf("Enter a number \n");
    scanf("%d",&x);
    x=x|4;
    printf("Final number is %d",x);
    return 0;
}