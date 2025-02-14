/*
    1) simple if decision making statements
    here we check some condition (relational expression). if condition is true then only code block given inside {} pair will execute.
    syntax
    -------------------------------------------------
        if (relational expression)
        {

        }

    example
    write a program to accept batter run and ball he faced in match. display strike rate. and also congratulate better if he has scored more then 99 runs

    steps 
    declare variable for balls and runs 
    take input from user (runs and balls)
    calculate strike rate by dividing runs with balls 
    show strikerate
    congratulate batter if runs is >=100
*/
#include <stdio.h>
void main()
{
    int runs,balls;
    float StrikeRate;
    printf("Enter runs");
    scanf("%d",&runs);

    printf("Enter balls");
    scanf("%d",&balls);

    StrikeRate = (float)runs / balls;
    printf("\n Strike Rate = %.2f",StrikeRate);

    if(runs>=100) //== != < > <= >=
    {
        printf("\n Congratulations for Centaury ");
    }
    printf("\n Good Bye...");
}
