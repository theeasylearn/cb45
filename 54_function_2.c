/* write a program to convert given fahrenheit into celsius using user defined function  */
#include<stdio.h>
//define function 
//with return value with argument function 
float toCelsius(float fahrenheit)
{
    //(100°F − 32) × 5/9 = 37.778°C
    float celsius = (fahrenheit - 32) * (5.0/9.0);
    return celsius;
}
void main()
{
    float fahrenheit,celsius;
    printf("Enter fahrenheit to convert it into celsius");
    scanf("%f",&fahrenheit);
    
    celsius = toCelsius(fahrenheit);
    printf("celsius = %f",celsius);
}