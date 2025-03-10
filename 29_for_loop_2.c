/* write a program to display factorial of given number
    input : 5
    process : 5 x 4 x 3 x 2 x 1
    output : 120
    -----------------------
    1 create variable num and store input
    2 create another variable factorial and store 1
    3 multiply factorial with num
    4 factorial = factorial * num // 5
    5 decrease number by 1
    6 repeat step 4 and 5 until number become 0

*/
#include <stdio.h>
void main()
{
    int num, factorial;
    printf("Enter number");
    scanf("%d", &num);
    for(factorial = 1;num>0;num--)
        factorial = factorial * num;
    printf("factorial = %d",factorial);
}