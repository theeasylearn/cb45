/*
   write a program to search given name in 2d array of char(1d of string)
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char student[6][32] = {
        "Rajesh Kumar",
        "Priya Sharma",
        "Amit Verma",
        "Neha Patel",
        "Suresh Reddy",
        "Anjali Singh"};
    char name[32];
    int i;
    printf("Enter name to search in student list");
    gets(name);
    for (i = 0; i < 6; i++)
    {
        if (strcmp(name, student[i]) == 0)
        {
            printf("name found in student at %d position",i+1);
            break;
        }
    }
    if( i == 6)
        printf("\n name not found");
}