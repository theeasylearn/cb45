//concept of pass by value 
#include<stdio.h>
void swap(int x, int y) //formal arguments
{
    int temp = x;
    x = y;
    y = temp;
    printf("inside function swap \n x = %d y = %d",x,y);
}
void main()
{
    int x,y;
    printf("Enter value for x ");
    scanf("%d",&x);

    printf("Enter value for y ");
    scanf("%d",&y);

    swap(x,y); //actual arguments
    printf("\nafter function swap execute \n x = %d y = %d",x,y);
}