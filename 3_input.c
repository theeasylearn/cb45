//program to learn how to accept input from user
#include<stdio.h>
void main()
{
    int age;
    float weight;
    char letter;
    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter your weight");
    scanf("%f",&weight);
    fflush(stdin);
    printf("Enter your name's first letter");
    scanf("%c",&letter);
    
}