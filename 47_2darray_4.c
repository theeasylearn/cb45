/*
    concept of array of string(2d array of char)
*/
#include <stdio.h>
#define COUNT 6
#define SIZE 32
void main()
{
    char STUDENTS[COUNT][SIZE];
    int index = 0;
    while (index < COUNT)
    {
        printf("Enter %d student name", index + 1);
        gets(STUDENTS[index++]);
    }

    // display
    index = 0;
    while (index < COUNT)
        printf("\n %d student = %s",index,STUDENTS[index++]);
}