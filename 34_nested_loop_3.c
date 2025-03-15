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
    int space = 1, row = 5,astrik=1,count=1;
    do
    {
        do
        {
            printf(" ");
            space++;
        } while (space <= row);
        astrik=1;
        
        do 
        {
            printf("*");
            astrik++;
        }while(astrik<=count);
        
        count++;
        printf("\n");
        space = 1;
        row--;
    } while (row >= 1);
}