//10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
// profit= s.p-c.p , loss = c.p-s.p
#include<stdio.h>

int main(){
    float selling_price,cost_price;
    printf("enter the value of cost price and selling price\n");
scanf("%f %f",&selling_price,&cost_price);
if ((selling_price - cost_price)>0){
    printf("profit is %.2f",((selling_price-cost_price)*100)/cost_price);
}else{
    printf("Loss is %.2f",((cost_price-selling_price)*100)/cost_price);
}
    return 0;
}