/* write a program to print following pattern
    100 90 80 70 ... 10
*/
#include <stdio.h>
void main()
{
    int number = 100;

    while(number>=10) //> >=
    {
        printf("%d\t", number);
        number = number - 10;
    }
}