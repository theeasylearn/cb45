// concept of pointer to structure 
#include<stdio.h>
struct student
{
    int rollno;
    float weight;
    char name[30];
};
void main()
{
    struct  student s1;
    //declare pointer to structure 
    struct student *p_s1 = &s1;
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