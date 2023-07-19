 // Y = (++x)+(x++)+(--x)+(x--)
 #include<stdio.h>
 
 int main(){
    int x = 10,y;
    y = (++x)+(x++)+(--x)+(x--);
    printf("%d",y);
    return 0;
 }