/*
    write a program to findout binary of given decimal number
    steps
    -----------------------------
    1 - create variable number,reminder
    2 - accept decimal number from user in number
    3 - get reminder by dividing number with 2
    4 - display reminder
    5 - divide number by 2
    6 - repeat step 3 to 5 till number is above 0
*/
#include <stdio.h>
void binary(int number)
{
    int reminder;
    if (number > 0)
    {
        reminder = number % 2;
        number = number / 2;
        binary(number);
        printf("%d", reminder);
    }
}
void main()
{
    int number;
    printf("enter number");
    scanf("%d", &number);
    binary(number);
}