#include<stdio.h>
void main()
{
    int age = 30;
    int *p_age = &age;

    // access value of age variable using pointer
    printf(" age = %d", *p_age);

    // change age via pointer
    *p_age = 31;
    printf("\n age = %d", *p_age);

    // use p_age for scan f
    printf("\nEnter value for age");
    scanf("%d", p_age);

    printf("now age has %d", *p_age);
    printf("\n P_age has %u",p_age);
}