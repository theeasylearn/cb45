// write a c program to calculate simple interest of user given amount, rate, year 
#include<stdio.h>
void main()
{
    //create variable
    int amount;
    float rate,year,interest;

    printf("Enter amount");
    scanf("%d",&amount);

    printf("Enter year");
    scanf("%f",&year);

    printf("Enter rate");
    scanf("%f",&rate);

    //formula
    // interest = (amount * rate * year) / 100

    interest = (amount * rate * year) / 100;
    printf("interest = %.2f",interest);
    
}