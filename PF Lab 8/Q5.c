#include <stdio.h>
#include <math.h>

int MultiplierTable();

int main()
{
    MultiplierTable();
}

int getNum()
{
    int num;
    printf("Enter the number you want to multiply: ");
    scanf("%d", &num);
    while (num < 0)
    {
        printf("Invalid, Enter a positive number: ");
        scanf("%d", &num);
    }
    return num;
}

int MultiplierTable()
{
    int num1 = getNum();
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num1, i, num1 * i);
    }
}