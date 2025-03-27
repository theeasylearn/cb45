// concept of array of structure
/*
    write a program to accept 5 student name, age weight and gender

*/
#include <stdio.h>
#include <string.h>
// definition of structure
struct student
{
    char name[32];
    int age;
    float weight;
    char gender;
};
#define SIZE 5
void main()
{
    // create array of structure
    struct student list[SIZE];
    char msg[] = "Name = ";
    int index=0;
    while(index<SIZE)
    {
        fflush(stdin);
        printf("Enter %d detail ",index+1);
        printf("Enter name");
        gets(list[index].name);
        fflush(stdin);

        printf("Enter gender (m=male,f=female)");
        scanf("%c", &list[index].gender);

        printf("Enter age");
        scanf("%d", &list[index].age);

        printf("Enter weight");
        scanf("%f", &list[index].weight);
        index++;
    }

    //display array of structure
}