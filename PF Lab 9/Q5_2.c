#include <stdio.h>

int main()
{
    int i, j;
    float marks[3][5], sum;

    for (i = 0; i < 3; i++)
    {
        printf("Enter marks for student %d: \n", i + 1);
        for (j = 0; j < 5; j++)
        {
            do
            {
                printf("Enter marks of Test : %d : ", j + 1);
                scanf("%f", &marks[i][j]);
                if (marks[i][j] < 0)
                {
                    printf("Please enter a positive number.\n");
                }
            } while (marks[i][j] < 0);
        }
    }

    for (j = 0; j < 5; j++)
    {
        sum = 0;
        for (i = 0; i < 3; i++)
        {
            sum += marks[i][j];
        }
        printf("Average marks for test %d: %.1f\n", j + 1, sum / 3);
    }

    return 0;
}
