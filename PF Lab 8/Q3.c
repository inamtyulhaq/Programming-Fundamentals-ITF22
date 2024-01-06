#include <stdio.h>

int getNum1();
int getNum2();
int HCF();

int main()
{
    HCF();
}

int getNum1()
{
    printf("HCF of two numbers:\n");
    int num1;
    printf("Input first number for HCF: ");
    scanf("%d", &num1);
    while (num1 < 0)
    {
        printf("Invalid, Enter a positive number: ");
        scanf("%d", &num1);
    }
    return num1;
}

int getNum2()
{
    int num2;
    printf("Input second number for HCF: ");
    scanf("%d", &num2);
    while (num2 < 0)
    {
        printf("Invalid, Enter a positive number: ");
        scanf("%d", &num2);
    }
    return num2;
}

int HCF()
{
    int hcf, i;
    int num3 = getNum1();
    int num4 = getNum2();
    for (i = 1; i <= num3 && i <= num4; ++i)
    {

        if (num3 % i == 0 && num4 % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d is %d.\n", num3, num4, hcf);

    return 0;
}
