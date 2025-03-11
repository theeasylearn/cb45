/*
  Calculate the power of a number (base ^ exponent) using do-while loop. and x and y will be given by user
  base 2 exponent 5
  process 2 x 2 x 2 x 2 x 2 = 32
  steps
  --------------
  1) create variable base and exponent, and power, count store 1 in it
  2) take input from user in both variable
  3) store base into power
  4) multiply power with base
  5) increase count by 1
  6) repeat step 4 and 5 till count<=exponent
  7) display power
*/
#include <stdio.h>
void main()
{
    int base, exponent, power, count = 1;
    printf("Enter base and exponent");
    scanf("%d %d", &base, &exponent);
    power = base; 
    do
    {
        power = power * base;
        count = count + 1;
    }while(count<exponent);
    printf(" power = %d ",power);
}