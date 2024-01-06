#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

void getMatrix(int matrix[ROWS][COLS]);
void printMatrix(int matrix[ROWS][COLS]);
int isDiagonal(int matrix[ROWS][COLS]);
int isIdentity(int matrix[ROWS][COLS]);

int main()
{
    int matrix[ROWS][COLS];
    int diagonal, identity;

    printf("Enter the elements of the matrix:\n");
    getMatrix(matrix);

    printf("\nEntered matrix is:\n");
    printMatrix(matrix);

    diagonal = isDiagonal(matrix);
    if (diagonal)
        printf("\nMatrix is a diagonal matrix. ");
    else
        printf("\nMatrix is not a diagonal matrix. ");

    identity = isIdentity(matrix);
    if (identity)
        printf("\nMatrix is an identity matrix. ");
    else
        printf("\nMatrix is not an identity matrix. ");

    return 0;
}

void getMatrix(int matrix[ROWS][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[ROWS][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int isDiagonal(int matrix[ROWS][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i != j && matrix[i][j] != 0)
                return 0;
        }
    }

    return 1;
}

int isIdentity(int matrix[ROWS][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i == j && matrix[i][j] != 1)
                return 0;
            else if (i != j && matrix[i][j] != 0)
                return 0;
        }
    }

    return 1;
}
