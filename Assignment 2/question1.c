//  1. program to print unit digit of a given number
 #include<stdio.h>
 
 int main(){
    int x;
    printf("Enter the no. \n");
    scanf("%d",&x);
    printf("Unit digit of %d is" , x%10);
    return 0;
 }