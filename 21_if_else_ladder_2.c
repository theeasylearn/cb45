/* 
    write a program to decide level of fever from given body temperature 
    chart level is given in below url 
    https://au.pinterest.com/pin/560698222373425604/
    accept body temperature from user 

    decide level of fever 

    display it 
*/
#include<stdio.h>
void main()
{
    float temp;
    printf("Enter your body temperature (fahrenheit) ");
    scanf("%f",&temp);

    if(temp>=102.9) // == != < > <= >=
    {
        printf("you have high fever. consult doctor urgently");
    }
    else if(temp>=101.2)
    {
        printf("you have fever. you should visit some clinic");
    }
    else if(temp>=99.9)
    {
        printf("you have low grade fever. you should take some medicine");
    }    
    else if(temp>=95.0) 
    {
        printf("you are healthy. enjoy....");
    }
    else 
    {
        printf("you have hypothermia. have some winter wear");
    }
}
