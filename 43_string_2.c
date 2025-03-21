//concept of string 
/*
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
    gets(name);
    fflush(stdin);
    
    printf("\n enter surname");
    gets(surname);

    fflush(stdin);

    printf("\n enter address");
    gets(address);

    fflush(stdin);

    //how we can display string
    //printf("surname %s name %s \n address %s",surname,name,address);
    puts(surname);
    puts(name);
    puts(address);
}