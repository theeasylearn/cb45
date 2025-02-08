// write a program that find triangle area

#include<stdio.h>
void main()
{
    float base,height,area; 

    printf("enter base : ");
    scanf("%f",&base);

    printf("enter height : ");
    scanf("%f",&height);

    area = (base * height)/2 ; 

    printf("triangle area : %.2f",area);
}
