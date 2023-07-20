// 6. Write a program to print greater between two numbers. Print one number if both are
// the same.
#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the value of x and y: \n");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("Number 1 is greater");
    }
    else if(x==y){
        printf("Both numbers are equal that is %d",y);
    }
    else{
        printf("Number 2 is greater");
    }

    
    return 0;
}