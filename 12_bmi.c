// write a program that calculate bmi of user
#include<stdio.h>
void main()
{
    float weight,height,bmi;

    printf("enter your weight(kg) : ");
    scanf("%f",&weight);

    printf("enter your height(cm) : ");
    scanf("%f",&height);

    // 1m = 100cm
    // small to big = division
    // big to small = multiply
    height = height*height;
    height = height/100 ;
    bmi = weight / height ;
    
    printf("BMI : %.2f",bmi);

}