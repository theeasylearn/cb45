// write a program to minimum sales and maximum value
/*
    1) create variable min to store minimum value & max to store maximum value
    2) assume that 0th row and 0th column has minimum and maximum value
    3) if value at 0th row and 1st column ls less then  minimum then store that value in minimum variable
    4) if value at 0th row and 1st column ls greater then  maximum then store that value in maximum  variable
    5) repeat step 3 and 4 for each and every row and column
    6) display minimum and maximum value

    findout & display name of item with minimum sales
    findout & display name of item with maximum sales
*/
#include <stdio.h>

void main()
{
    // create 2D ARRAY (matrix)
    int sales[3][7] =
        {
            /* pav bhaji */ {12, 25, 37, 44, 29, 18, 33},
            /* pulav  */ {41, 23, 39, 50, 14, 27, 35},
            /* dosa */ {30, 47, 19, 45, 22, 38, 11}};
    int min, max, min_index, max_index;
    min = sales[0][0];
    max = sales[0][0];

    for (int j = 0; j < 3; j++) // outer loop
    {
        for (int i = 1; i < 7; i++) // inner loop
        {
            if (sales[j][i] < min)
            {
                min = sales[j][i];
                min_index = i;
            }
            if (sales[j][i] > max)
            {
                max = sales[j][i];
                max_index = i;
            }
        }
    }
    printf("minimum sales = %d on the day %d maximum sales = %d on the day %d", min, (min_index + 1),max,(max_index + 1));

}