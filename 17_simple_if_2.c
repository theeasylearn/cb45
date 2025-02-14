/*
    write a program to calculate & display profit/loss from purchase price & sale price given by user/

    take purchase price and sale price from user 
    calculate difference between sale price and purchase price 
    if difference is positive it is profit 
    if difference is negative it is loss

*/
#include<stdio.h>
void main()
{
    int PurchasePrice,SalePrice,difference;
    printf("Enter Purchase Price of goods");
    scanf("%d",&PurchasePrice);

    printf("Enter Sale Price of goods");
    scanf("%d",&SalePrice);

    difference = SalePrice - PurchasePrice;
    if(difference>0) //== != < > <= >=
    {
        printf(" Profit = %d",difference);
    }
    if(difference<0) // == != < > <= >=
    {
        printf(" Loss = %d",difference);
    }
    printf("\n Good bye.");
}