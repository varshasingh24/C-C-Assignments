// semi vowel - w,j;
#include<stdio.h>

int main(){
    char  x;
    printf("Enter the character \n");
    scanf("%c",&x);
    if((x=='a')|| (x=='e')||(x=='i')||(x=='o')||(x=='u')){
        printf("Character is Vowel \n");
    }
    else if((x=='w')||(x=='j')){
        printf("Character is semi vowel\n");
    }
    else{
        printf("character is consonant \n");
    }
    return 0;
}