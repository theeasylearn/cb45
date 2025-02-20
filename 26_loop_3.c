/*  write a program to findout whether given number is prime number or not

    step
    1) accept one number from user
    2) create variable divisor store 2
    2.2) check if number is even or not if it is even it can not be prime number other wise follow next step
    3) divide number by divisor store reminder into variable
    4) if reminder is zero display message number is not prime and stop process
        otherwise increase divisor by 1
    5) repeat step 3 to 5 till divisor is less then number

*/
#include <stdio.h>
void main()
{
    int number, divisor, reminder,count=0,half;
    printf("Enter number"); // 15
    scanf("%d", &number);
    divisor = 2;
    if (number!=2 && number % 2 == 0)
    {
        printf("it is not prime number");
    }
    else
    {
        half = number / 2;
        while (divisor < half) // 3<15
        {
            count=count+1;
            reminder = number % divisor; // 0
            if (reminder == 0)
            {
                printf("it is not prime number");
                break;
            }
            divisor = divisor + 1; // 3
        }
        if (divisor == half)
        {
            printf("\n it is prime number");
        }
    }
    printf("\n count = %d",count);
}