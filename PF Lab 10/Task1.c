#include <stdio.h>

#define N 100

void Matrix(int matrix[][N], int n);
void swapDiagonal(int matrix[][N], int n);

int main()
{
    int n, m, valid;

    do
    {
        printf("Enter the number of rows: ");
        valid = scanf("%d", &n);
        while (valid == 0 || n < 1)
        {
            printf("Enter the valid number: ");
            while (getchar() != '\n')
            {
            }
            valid = scanf("%d", &n);
        }
        printf("Enter the number of columns: ");
        valid = scanf("%d", &m);
        while (valid == 0 || m < 1)
        {
            printf("Enter the valid number: ");
            while (getchar() != '\n')
            {
            }
            valid = scanf("%d", &m);
        }
        if (n != m)
        {
            printf("mismatched\n");
        }
    } while (n != m);

    int matrix[N][N];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Initial matrix (BEFORE swapping diagnols):\n");
    Matrix(matrix, n);

    swapDiagonal(matrix, n);

    printf("\nFinal matrix (AFTER swapping diagnols):\n");
    Matrix(matrix, n);

    return 0;
}

void Matrix(int matrix[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void swapDiagonal(int matrix[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][n - i - 1];
        matrix[i][n - i - 1] = temp;
    }
}
