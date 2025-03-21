//concept of string 
/*
    what is string?
    string means sequence of characters that ends with '\0' null. for example your name, address, city
    there is no special data type in c to store string
    we have to create one dimensional array of letter to store string
*/

#include<stdio.h>
#include<conio.h>
#define SIZE 32
#define BIGSIZE 128
void main()
{
    //create array of character (String)
    char name[SIZE],surname[SIZE],address[BIGSIZE];

    //how to take input
    printf("\n enter name");
    scanf("%s",name); //without space input must be given, if space is used it terminate input
    fflush(stdin);
    
    printf("\n enter surname");
    scanf("%s",surname);
    fflush(stdin);

    printf("\n enter address");
    scanf("%s",address);
    fflush(stdin);

    //how we can display string
    printf("surname %s name %s \n address %s",surname,name,address);

    
}