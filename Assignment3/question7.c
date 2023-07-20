// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
// ax^2+bx=c=0
#include<stdio.h>

int main(){
    double a,b,c,discriminant,root1,root2,realpart,imagpart;
    printf("Enter the cofficient of a,b,c :\n");
    scanf("%lf %lf%lf",&a,&b,&c);
     discriminant = b*b-4*a*c;
     if(discriminant>0){
        printf("Real and distinct \n");
     }
     else if(discriminant==0){
        printf("Real and equal \n");
     }
     else{
        printf("Imaginary roots");
     }
    return 0;
}