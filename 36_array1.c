#include<stdio.h>
void main()
{
    //create an array
    //datatype array[size];
    int age[5];
    float weight[3];

    //store value 
    age[0] = 32;
    age[1] = 22;
    age[2] = 22;
    age[3] = 20;
    age[4] = 18;

    //show
    printf("age[0] = %d",age[0]);
    printf("\n age[1] = %d",age[1]);
    printf("\n age[2] = %d",age[2]);
    printf("\n age[3] = %d",age[3]);
    printf("\n age[4] = %d",age[4]);

    printf("\n weight[0] = %f",weight[0]);
    printf("\n weight[1] = %f",weight[1]);
    printf("\n weight[2] = %f",weight[2]);
}