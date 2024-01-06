#include <stdio.h>

int getNumber();
int checkStrong(int);

int main()
{
    int num = getNumber();
    if (checkStrong(num))
    {
        printf("%d is a strong number\n", num);
    }
    else
    {
        printf("%d is not a strong number\n", num);
    }
    return 0;
}

int getNumber()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num < 0)
    {
        printf("Invalid, Enter again: ");
        scanf("%d", &num);
    }
    return num;
}

int checkStrong(int num)
{
    int i, originalNum, lastDigit, sum = 0;
    originalNum = num;

    while (num > 0)
    {
        lastDigit = num % 10;

        int fact = 1;
        for (i = 1; i <= lastDigit; ++i)
        {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    return (sum == originalNum);
}
