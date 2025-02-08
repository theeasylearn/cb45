// write a prgoram to swap digits of given 2 digit amount.
// input amount = 86
// output = 68
#include<stdio.h>
void main()
{
    int amount,reverse_amount,reminder;
    printf("Enter amount");
    scanf("%d",&amount);
    reminder = amount%10;
    reminder = reminder * 10; 
    printf(" reminder = %d",reminder);
    amount = amount / 10;
    printf(" amount = %d",amount);
    reverse_amount = reminder + amount;
    printf("reverse amount = %d",reverse_amount);
}