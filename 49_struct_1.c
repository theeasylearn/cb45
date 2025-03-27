//concept of structure 
#include <stdio.h>
#include <string.h>
//definition of structure 
struct student 
{
    char name[32];
    int age;
    float weight;
    char gender;
};
void main()
{
    //      how to declare structure type variable
    //      struct structure-name variable-name;
    struct student s1;
    char msg[] = "Name = ";
    printf("Enter name");
    gets(s1.name);
    fflush(stdin);

    printf("Enter gender (m=male,f=female)");
    scanf("%c",&s1.gender);

    printf("Enter age");
    scanf("%d",&s1.age);

    printf("Enter weight");
    scanf("%f",&s1.weight);

    printf("----------------------------------------------------------------\n");
    puts(strcat(msg,s1.name));
    printf("age = %d",s1.age);
    printf("\n weight = %f",s1.weight);
    printf("\n gender = %c",s1.gender);
}