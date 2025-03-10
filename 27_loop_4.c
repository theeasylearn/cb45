/*
    write a program to generate reverse of given number using maths and loop
input : 1234 reverse : 4321
    steps
    1) create variable amount and store user given input in it

    2) get reminder of amount by dividing it with 10 and store in variable
       number % 10 = 1
    3) multiply reverse_amount by 10 and then add reminder in it also store it into reverse amount.
        reverse_amount = (reverse_amount * 10)  + reminder
    4) divide amount by 10 and store integer part into amount variable
       amount / 10 = 432
    5) repeat step 2 to 4 until amount become 0

    6) display reverse_amount
*/
#include <stdio.h>
void main()
{
    int amount, reverse_amount, reminder;
    printf("Enter amount"); // 4321
    scanf("%d", &amount);
    reverse_amount = 0;
    while(amount>0) 
    {
        reminder = amount % 10;  //2                          // 1
        reverse_amount = (reverse_amount * 10) + reminder; // 12
        amount = amount / 10;  // 43.2
    }
    printf("\n %d", reverse_amount);
}