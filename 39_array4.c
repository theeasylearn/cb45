// arrange array in ascending order
/*
    unsorted int pincodes[] = {10, 5, 89, 45, -15, 20};
    unsorted int pincodes[] = {-15,5,10,20,45,89};
*/
#include <stdio.h>
// create constant
#define SIZE 5
void main()
{
    // static initialization of array
    int pincodes[] = {65,89,11,8,60,50 };
    // int pincodes[] = {-15,10, 89, 45,5, 20};
    int temp, i,k;
    for(k=0;k<6;k++)
    {
        for (i = 0; i < 6; i++)
        {
            if (pincodes[k] < pincodes[i])
            {
                temp = pincodes[k];        // 10
                pincodes[k] = pincodes[i]; // 5
                pincodes[i] = temp;        // 10
            }
        }
    }

    for (int index = 0; index < 6; index++)
        printf("\npincode[%d] = %d ", index + 1, pincodes[index]);
}