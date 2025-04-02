//write a program to pass array as argument in function
//when we pass array into function, it is by default pass by reference means any changed we make into array inside function will be reflected into original array
#include<stdio.h>
void input(int list[],int size)
{
    for (int index = 0; index < size; index++)
    {
        printf("Enter value for %d position", index + 1);
        scanf("%d",&list[index]);
    }
}
void output(int list[],int size)
{
    for(int index=0;index<size;index++)
        printf("\nlist[%d] = %d ",index+1,list[index]);
}
void main()
{
    //create array 
    int arr[5];
    input(arr,5);
    output(arr,5);
}