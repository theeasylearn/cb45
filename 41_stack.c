/*
    implement concept of stack using array (menu driven program)
    step
    1   create array stack, normal variable top,option,temp
    2)  provide option to do operation on stack with message
        1 for push, 2 for pop, 3 for pip, 4 count
    3)  accept user choice in option
    4   if choice is 1 do push operation
        4.1 check if top is equal to size -1 of array
            then display message stack overflow
        4.2 otherwise
            4.3 increase top by 1
            4.4 accept value from user & insert at at the top position
    5    if choice is 2 do pop operation
        5.1 check if top is equal to -1
            then display message stack underflow(empty)
        5.2 otherwise
            store stack[top] in temp variable
            display temp
            store 0 at stack[top]
            decrease top by 1
    6    if choice is 3 do pip operation
        6.1 check stack is empty or not (top == -1)
            then display stack empty
        6.2 display stack[top]
    7    if choice is 4 do count
        7.1 check stack is empty or not (top == -1)
            then display stack empty
        7.2 otherwise display top + 1
*/
#include <stdio.h>
#define SIZE 5
void main()
{
    // create array
    int stack[SIZE], top = -1, option = 0, temp;
    do
    {
        printf("\nPress 1 for push ");
        printf("\nPress 2 for pop ");
        printf("\nPress 3 for pip ");
        printf("\nPress 4 for count ");
        printf("\nPress 5 for exit ");
        scanf("%d", &option);
        if(option==1)
        {
            if(top == SIZE - 1)
            {
                printf("stack overflow");
            }
            else
            {
                top++;
                printf("Enter value to push in stack");
                scanf("%d",&stack[top]);
            }
            // for(int i=top;i>=0;i--)
            //     printf("\n%d",stack[i]);
        }
        else if(option==2)
        {
           if(top == -1)
           {
                printf("\n stack underflow");
           }
           else 
           {
                temp = stack[top];
                printf("removed value %d",temp);
                stack[top] = 0;
                top--;
           }
        }
        else if(option==3)
        {
            if(top == -1)
            {
                 printf("\n stack empty");
            }
            printf("%d",stack[top]);
        }
        else if(option==4)
        {
            printf("count = %d",top+1);
        }
    }while(option!=5);
}