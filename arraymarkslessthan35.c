#include <stdio.h>
void main()
{
    int marks[10];
    printf("enter the marks\n");
    for (int i = 0; i < 3; i++)
    {

        scanf("%d\n", &marks[i]);
        printf("%d\n", marks[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (marks[i] < 35)
        {
            printf("Student marks less than 35 are: %d\n", marks[i]);
        }
    }
}