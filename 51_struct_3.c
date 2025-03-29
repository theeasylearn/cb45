// write a program to create structure that has student name and 3 subject marks.
// display result (name, marks, total, average, Pass or fail) findout who has secured 1st rank
/*
    write a program to accept 5 student name, age weight and gender
*/
#include <stdio.h>
#include <string.h>
// definition of structure
struct resultsheet
{
    char name[33]; // array within structure 36
    int marks[3];  // 9
    int total;     // 2
    float average; // 4
    char PassFail; // 1
}; // each structure type variable uses 50 byte in memory

#define SIZE 3
void main()
{
    // create array of structure
    struct resultsheet list[SIZE];
    int index = 0;
    int row = 0;
    while (row < SIZE) // outer while loop
    {
        printf("Enter %d student detail", row + 1);
        fflush(stdin);
        printf("\nEnter Name");
        gets(list[row].name);
        printf("Enter marks in exam\n");
        list[row].total = 0;
        index = 0;
        while (index < 3) // inner while loop
        {
            printf("Enter %d subject marks", index + 1);
            scanf("%d", &list[row].marks[index]);
            list[row].total += list[row].marks[index];
            list[row].average = list[row].total / 3;
            index++;
        }
        if (list[row].marks[0] >= 35 && list[row].marks[1] >= 35 && list[row].marks[2] >= 35)
            list[row].PassFail = 'P';
        else
            list[row].PassFail = 'F';
        row++;
    }
    printf("\nName      Maths       Science     English     total       Percentage      Result \n");
    row = 0;
    while (row < SIZE)
    {
        printf("\n%s            %d       %d     %d     %d       %.2f      %c \n", list[row].name, list[row].marks[0], list[row].marks[1], list[row].marks[2], list[row].total, list[row].average, list[row].PassFail);
        row++;
    }
}