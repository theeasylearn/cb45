// write a program to findout given value in sorted array
#include <stdio.h>
// create constant
#define SIZE 5
void main()
{
    // static initialization of array
    float locations[] = {10.20, 20.11, 30.88, 40.99, 50.25, 60.78};
    float value;
    int position=0;
    printf("Enter value to search ");
    scanf("%f", &value);
    for(position=0;position<6;position++)
    {
        //loop body
        if (locations[position] == value)
        {
            printf("value found at %d position",position+1);
            break;
        }
        else if (locations[position] > value)
        {
            printf("value not found");
            break; //break command is used to stop loop
        }
    }
}