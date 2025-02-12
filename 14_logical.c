//example of relational operators
#include<stdio.h>
void main()
{
    int a,b,c,result;

    printf("Enter value for a");
    scanf("%d",&a); // 10

    printf("Enter value for b");
    scanf("%d",&b); // 20

    printf("Enter value for c");
    scanf("%d",&c); // 20

    //logical operator 
    result = a == b && b == c;
    printf("%d = %d == %d && %d == %d",result,a,b,b,c);

    result = a == b || b == c;
    printf("\n %d = %d == %d || %d == %d",result,a,b,b,c);
    
    result = !(a==b);
    printf("\n %d = !%d==%d",result,a,b);


}