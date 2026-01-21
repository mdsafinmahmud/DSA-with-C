#include <stdio.h>
int main()
{
    int i, marks[20];
    printf("Enter marks of 20 students:\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("Roll %d: Marks %d\n", i + 1, marks[i]);
        if (marks[i] == 0)
        {
            printf("Absent\n");
        }
        else if (marks[i] < 33)
        {
            printf("Failed!\n");
        }
        else if (marks[i] < 40)
        {
            printf("Grade D\n");
        }

        else if (marks[i] < 50)
        {
            printf("Grade C\n");
        }
        else if (marks[i] < 60)
        {
            printf("Grade B\n");
        }
        else if (marks[i] < 80)

        {
            printf("Grade A\n");
        }
        else if (marks[i] <= 100)
        {
            printf("Grade A+\n");
        }

        else if (marks[i] > 100)
        {
            printf("Please enter correct marks!\n");
        }
    }
    return 0;
}