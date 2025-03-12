//write a program to calculate area of circle
#include<stdio.h>
void main()
{
    float radius,area;
    printf("Enter circle's radius");
    scanf("%f",&radius);

    //formula area = pi * radius * radius
    area = 3.141592 * radius * radius;
    printf("Area of circle = %f",area);

}

BODOMAS