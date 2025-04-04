// concept of dynamic memory allocation
#include<stdio.h>
#include<malloc.h>
struct student
{
    int rollno; //2 
    float weight; //4
    char name[30]; //30
};
void main()
{
   
    //declare pointer to structure 
    struct student *p_s1;

    printf("let us allocate memory");
    //dynamic memory allocation
    p_s1 = (struct student *) (malloc(sizeof(struct student)));
    //accept input 
    printf("Enter rollno");
    // scanf("%d",&s1.rollno);    
    scanf("%d",&p_s1->rollno);    

    printf("Enter weight");
    // scanf("%f",&s1.weight);    
    scanf("%f",&p_s1->weight);    

    printf("Enter name");
    // gets(s1.name);
    fflush(stdin);
    gets(p_s1->name);

    printf("\n---------------------------------------------\n");
    printf("Name = %s",p_s1->name);
    printf("\nrollno = %d",p_s1->rollno);
    printf("\nweight = %f",p_s1->weight);
}