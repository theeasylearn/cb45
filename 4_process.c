//concept of expression in c language
#include<stdio.h>
void main()
{
    //variable declaration 
    int num1,num2,add,sub,mul;
    float div;
    printf("Enter value for num1 and num2");
    scanf("%d %d",&num1,&num2);
    //process (arithmetic expression )
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / num2;
    printf(" addition = %d subtraction = %d multiplication = %d division = %f",add,sub,mul,div);
}