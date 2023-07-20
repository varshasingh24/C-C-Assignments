// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>

int main(){
    char x;
    printf("Enter the character:\n");
    scanf("%c",&x);
    if((x>='A') &&(x<='Z')){
        printf("Given chararcter is upper case \n");
    }
    else{
        printf("Given character is lower case \n");
    }
    return 0;
}