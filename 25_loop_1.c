/* write a program to print following pattern
    1 3 5 7 9 ..... 100
*/
#include <stdio.h>
void main()
{
    int number = 1;
    while(number<100) //< <=
    {
        printf("%d\t", number);
        number = number + 2;
    }
}