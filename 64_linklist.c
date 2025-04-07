#include <stdio.h>
#include <malloc.h>
struct student
{
    int rollno;    // 2
    char name[30]; // 30
    struct student *next;
};
void main()
{
    struct student *start = NULL, *list = NULL, *temp = NULL,*temp_delete; // list is empty
    int choice,rollno;
    do
    {
        fflush(stdin);
        printf("\n Press 1 to add new Item into LinkList");
        printf("\n Press 2 to all items in LinkList");
        printf("\n Press 3 count item in LinkList");
        printf("\n Press 4 delete item from LinkList");
        printf("\n Press 5 Edit Item LinkList");
        printf("\n Press 0 to exit");
        printf("\n enter your choice");
        scanf("%d", &choice);
        if (choice == 1)
        {
            if (start == NULL)
            {
                start = (struct student *)(malloc(sizeof(struct student)));
                list = start;
                start->next = NULL;
                temp = start;
            }
            else
            {
                list->next = (struct student *)(malloc(sizeof(struct student)));
                temp = list->next;
                list = list->next;
                list->next = NULL;
            }
            printf("Enter rollno");
            // scanf("%d",&s1.rollno);
            scanf("%d", &temp->rollno);

            printf("Enter name");
            // gets(s1.name);
            fflush(stdin);
            gets(temp->name);
        }
        else if(choice == 2)
        {
            temp = start;
            while(temp != NULL)
            {
                printf("\n Roll no = %d Name = %s",temp->rollno,temp->name);
                temp = temp->next;
            }
        }
        else if(choice == 4)
        {
            temp = start;
            if(temp == NULL)
            {
                printf("list is empty");
            }
            else 
            {
                printf("Enter rollno to delete student");
                scanf("%d",&rollno);
                if(temp->rollno == rollno)
                {
                    //first item delete
                    start = temp->next;
                    printf("first student deleted...");
                    free(temp);
                }
                else 
                {
                    while(temp->next != NULL)
                    {
                        if(temp->next->rollno == rollno)
                        {
                            temp_delete = temp->next;
                            temp->next = temp->next->next;
                            free(temp_delete);
                            printf("Student deleted");
                        }
                        else 
                            temp = temp -> next;
                    }
                }
            }
           
            
        }
    } while (choice != 0);
    printf("\n good bye...");
}