//WAP to check whetherthe last two bits of the number is set or  not.
#include<stdio.h>

int main(){
    int x;
    printf("Enter a number \n");
    scanf("%d",&x);
    (x&3)==3 ? printf("Yes") : printf("No");
    return 0;
}