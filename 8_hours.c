//write a program to convert user given minutes into hours and minutes
// input minutes = 200 minutes
// output hour = 3 and minutes = 20
#include<stdio.h>
void main()
{
    int minutes,hours;
    printf("enter total minutes");
    scanf("%d",&minutes);
    hours = minutes / 60; 
    minutes = minutes - (hours * 60);
    printf(" hours = %d minutes = %d",hours,minutes);

}