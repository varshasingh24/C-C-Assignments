// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
#include<stdio.h>

int main(){
    int a= 10,b=6,c=11;
    if((a>b)&&(a>c)){
        
    printf("%d is greater number \n",a);
    }
    else if((b>a)&&(b>c)){
        printf("%d is greater number \n",b);
    }
    else if((a==b)||(b==c)||(a==c)){
        printf("Greatest number is repeated");
    }
    else{
        printf("%d is greatest \n",c);
    }

    return 0;
}