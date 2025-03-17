#include <stdio.h>
// create constant
#define SIZE 5
void main()
{
    int age[SIZE];
    printf("size = %d\n", SIZE);
    //    SIZE = 10; constant value can not be changed

    for (int index = 0; index < SIZE; index++)
    {
        printf("Enter %d student age", index + 1);
        scanf("%d", &age[index]);
    }

    // display
    for(int index=0;index<SIZE;index++)
        printf("\nage[%d] = %d ",index+1,age[index]);
}