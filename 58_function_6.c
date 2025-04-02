//concept of pass by reference 
#include<stdio.h>
//value at the address
void swap(int *x, int *y) //formal arguments
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("inside function swap \n x = %d y = %d",*x,*y);
}
void main()
{
    int x,y;
    printf("Enter value for x ");
    scanf("%d",&x);

    printf("Enter value for y ");
    scanf("%d",&y);

    swap(&x,&y); //pass variable's address not variable's value
    printf("\nafter function swap execute \n x = %d y = %d",x,y);
}