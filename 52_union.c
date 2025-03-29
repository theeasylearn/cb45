/* example of union */
#include <stdio.h>
#include <ctype.h>
// definition of union
union marriage
{
    char isMarried;
    int children;
};
void main()
{
    union marriage m1, m2;
    char status;
    printf("Are you married? (m=married,u=unmarried)");
    scanf("%c", &status);

    if (tolower(status) == 'm')
    {
        m1.isMarried = 'm';
        printf("Do you have children (-1 for no)");
        scanf("%d", &m1.children);
    }
    else
        m1.isMarried = 'u';
    fflush(stdin);
    printf("(2nd person) Are you married? (m=married,u=unmarried)");
    scanf("%c", &status);

    if (tolower(status) == 'm')
    {
        m2.isMarried = 'm';
        printf("Do you have children (-1 for no)");
        scanf("%d", &m2.children);
    }
    else
        m2.isMarried = 'u';
    printf("1st person detail \n");
    printf("is Married %c children = %d",m1.isMarried,m1.children);

    printf("\n2nd person detail \n");
    printf("is Married %c children = %d",m2.isMarried,m2.children);
}