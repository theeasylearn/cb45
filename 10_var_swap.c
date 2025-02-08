// 86 -> 68
// a=10
// b=20

// a=20
// b=10

#include<stdio.h>
void main()
{
    int a;
    int b;

    printf("enter value of a : ");
    scanf("%d",&a);

    printf("enter value of b : ");
    scanf("%d",&b);

    int temp;

    temp = a; //10
    a=b;
    b=temp;  

    printf("a = %d",a);
    printf("\nb = %d",b);


}