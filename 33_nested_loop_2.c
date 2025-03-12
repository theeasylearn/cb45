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
    int column = 1,row = 5;
    while(row>=1)
    {
        while (column <= row)
        {
            printf(" * ");
            column++;
        }
        printf("\n");
        column = 1;
        row--;
    }
}