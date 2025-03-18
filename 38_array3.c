// findout whether given value in available in unsorted array or not (sequential search)
#include <stdio.h>
// create constant
#define SIZE 5
void main()
{
    // static initialization of array
    int pincodes[] = {10, 5, 89, 45, -15, 20};
    int value,position;
    printf("Enter value to search");
    scanf("%d", &value);
    for (position = 0; position < 6; position++)
    {
        if (pincodes[position] == value)
        {
            printf("value found %d position", position + 1);
            break; // break loop
        }
    }
    if(position == 6)
        printf("\nvalue not found");
}