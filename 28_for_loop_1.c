/* write a program to display multiplication table of given number
    input : 5
    -----------------------
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15
    5 x 4 = 20
    5 x 10 = 50

    steps
    1) create variable num and store input
    2) create variable multiplier and store 1
    3) display multiplication result in given format
    4) increase multiplier by 1
    5)  repeat step 3 to 4 till multiplier<=10
*/
#include <stdio.h>
void main()
{
    int num, multiplier;
    printf("Enter number");
    scanf("%d", &num);
    for(multiplier = 1;multiplier<=10;multiplier++)
    {
        printf("\n%d x %d = %d", num, multiplier, (num * multiplier));
    }

}