// write a program to accept day of week from user. then display week day name.
// for example if user gives 1 display monday
// for example if user gives 2 display Tuesday
// for example if user gives 3 display Wednesday
// step 1
//  accept day of week from user
//  then display week day name
#include <stdio.h>
void main()
{
    int day;
    printf("Enter day of week (1 to 7)");
    scanf("%d", &day);
    // check whether days in valid range or not
    if (day < 1 || day > 7)
    {
        printf("it is not valid input");
    }
    else
    {
        switch (day)
        {
        case 1: // if(day==1)
            printf("it is monday");
            break;

        case 2: // if(day==2)
            printf("it is tuesday");
            break;

        case 3: // if(day==3)
            printf("it is wednesday");
            break;

        case 4: // if(day==1)
            printf("it is thursday");
            break;

        case 5: // if(day==2)
            printf("it is friday");
            break;

        case 6: // if(day==3)
            printf("it is saturday");
            break;

        case 7:
            printf("it is sunday (funday)");
            break;
        }
    }
}