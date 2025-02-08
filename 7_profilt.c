// write a program to accept product cost of item. owner want to take 10% profit on item. therefore calculate sale price
#include<stdio.h>
void main()
{
    float cost_price,sale_price,profit;
    printf("enter cost price");
    scanf("%f",&cost_price);

    profit = (cost_price * 10) / 100;
    sale_price = cost_price + profit;
    printf("profit = %f sale price = %f",profit,sale_price);
    
}