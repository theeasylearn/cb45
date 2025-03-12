/*
    write a program to print below pattern
    *
    * *
    * * *
    * * * *
    * * * * *
*/
#include <stdio.h>
void main()
{
    for(int row=1;row<=5;row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}