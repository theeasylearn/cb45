// concept of array of structure
/*
    write a program to accept 5 student name, age weight and gender
*/
#include <stdio.h>
#include <string.h>
// definition of structure
struct student
{
    char name[33]; // array within structure 32
    int age;       // 2
    float weight;  // 4
    char gender;   // 1
    // 40
}; // each structure type variable uses 40 byte in memory

#define SIZE 5
void main()
{
    // create array of structure
    struct student list[SIZE];
    char msg[] = "Name = ";
    int index = 0;
    while (index < SIZE)
    {
        fflush(stdin);
        printf("Enter %d detail ", index + 1);
        printf("Enter name");
        gets(list[index].name);
        fflush(stdin);

        printf("Enter gender (m=male,f=female)");
        scanf("%c", &list[index].gender);
        fflush(stdin);

        printf("Enter age");
        scanf("%d", &list[index].age);
        fflush(stdin);

        printf("Enter weight");
        scanf("%f", &list[index].weight);
        fflush(stdin);

        index++;
    }

    index = 0;
    while (index < SIZE)
    {
        // display array of structure
        printf("\n%d student detail\n",index+1);
        printf("Name = %s",list[index].name);
        printf("\nage = %d", list[index].age);
        printf("\nweight = %.2f\n", list[index].weight);
        if (list[index].gender == 'm')
            printf("Male");
        else
            printf("Female");
        index++;
    }
}