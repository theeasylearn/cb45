//example of relational operators
#include<stdio.h>
void main()
{
    int a,b,result;

    printf("Enter value for a");
    scanf("%d",&a); // 10

    printf("Enter value for b");
    scanf("%d",&b); // 20

    result = a == b;
    printf("%d == %d = %d",a,b,result);

    result = a != b;
    printf("\n%d != %d = %d",a,b,result);

    result = a < b;
    printf("\n%d < %d = %d",a,b,result);

    result = a > b;
    printf("\n%d > %d = %d",a,b,result);

    result = a <= b;
    printf("\n%d <= %d = %d",a,b,result);

    result = a >= b;
    printf("\n%d >= %d = %d",a,b,result);

}