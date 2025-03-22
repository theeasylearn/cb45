// write a program to create 2d array and store 5 students 3 subject marks
#include <stdio.h>
#define STUDENT 5
#define SUBJECT 3
void main()
{
    // create 2D ARRAY (matrix)
    int marks[STUDENT][SUBJECT];
    for (int row = 0; row < STUDENT; row++)
    {
        printf("Enter marks for %d student", row + 1);
        for (int column = 0; column < SUBJECT; column++)
        {
            printf("\nEnter %d subject mark", column + 1);
            scanf("%d", &marks[row][column]);
        }
    }

    for (int row = 0; row < STUDENT; row++)
    {
        for (int column = 0; column < SUBJECT; column++)
            printf("%10d", marks[row][column]);
        printf("\n___________________________________________________________________________________\n");
    }
}