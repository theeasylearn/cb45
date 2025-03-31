//concept of U.D.F 
#include<stdio.h>
//define 
//without return value without argument function 
void PrintLine()
{
    printf("\n*****************************************************************************************\n");
}
// without return value with argument function 
void PrintLetter(char letter, int count)
{
    printf("\n");
    for(int i=1;i<=count;i++)
    {
        printf("%c",letter);
    }
    printf("\n");
}
// with return value without argument function
float GetPi()
{
    //variables declared inside any function, is local variable
    float pi = 3.141592;
    return pi;
}

void main()
{
    char letter = '#';
    int count = 80;
    float pi;
    //call function 
    PrintLine();
    PrintLetter(letter,count);
    printf("Hello world....");
    PrintLine();
    printf("Good bye...");
    PrintLetter('-',100);
    pi = GetPi();
    printf("\n pi = %f ",pi);
    printf("\n directly calling function value of pi = %f",GetPi());
}