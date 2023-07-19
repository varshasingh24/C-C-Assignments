// 12. Write a program to take a three digit number from the user and rotate its digits by
// one position towards the right.
#include<stdio.h>

int main(){
    int x,y,z,a;
    printf("Enter the number \n");
    scanf("%d",&x);
    y= x%10;
    z=x/10;
    a=(y*100)+z;
    printf("Value after roatating to right is %d",a);
    return 0;
}