// All tasks in one file as per requirement.
// Inam Ul Haq - BITF22M017.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// function prototypes
// task 1
int getIntegerN();
int getIntegerM();
void nearestMultiple(int n, int m);

// task 2
int getnum();
int conversionFromBaseSevenToTen(int digit);

// task 3
int getDecimalNumber();
int conversionFromBaseTenToNine(int baseTen);

// task 4
int getSize();
void diagonalNumberTriangle();

// task 5
int numberFromUser();
void countDigitFrequency();

// task 6
bool isValid(int num, int start, int end);
int getLength();
int getWidth();
void calculateArea(int length, int width);
void displayArea(int area);

int main()
{
    nearestMultiple(getIntegerN(), getIntegerM());                                         // task 1
    printf("It's base 10 value is %d\n", conversionFromBaseSevenToTen(getnum()));          // task 2
    printf("It's base 9 value is %d.\n", conversionFromBaseTenToNine(getDecimalNumber())); // task 3
    diagonalNumberTriangle();                                                              // task 4
    countDigitFrequency();                                                                 // task 5
    calculateArea(getLength(), getWidth());                                                // task 6
}

// task 1
int getIntegerN()
{
    int a;
    do
    {
        printf("Enter the number (n): ");
        scanf("%d", &a);
        if (a < 1)
        {
            printf("Only positive numbers allowed, Enter again: \n");
        }
    } while (a < 1);
    return a;
}

int getIntegerM()
{
    int a;
    do
    {
        printf("Enter the number (m): ");
        scanf("%d", &a);
        if (a < 1)
        {
            printf("Only positive numbers allowed, Enter again: \n");
        }
    } while (a < 1);
    return a;
}

void nearestMultiple(int n, int m)
{

    if (n % m == 0)
    {
        printf("The closest multiple of %d to %d are: %d and %d\n", m, n, n - m, m + n);
    }
    else
    {
        int remaind1 = n % m;
        int result1 = n - remaind1;
        int remaind2 = m - remaind1;
        int result2 = remaind2 + n;
        int nearestMultiple;

        if (remaind1 <= m / 2)
        {
            nearestMultiple = result1;
        }
        else
        {
            nearestMultiple = result2;
        }

        printf("The closest multiple of %d to %d is: %d\n", m, n, nearestMultiple);
    }
}

// task 2
int getnum()
{
    int digit;
    printf("Enter the number (in base 7): ");
    scanf("%d", &digit);
    return digit;
}

int conversionFromBaseSevenToTen(int digit)
{
    int result = 0, i = 0;
    while (digit != -1)
    {
        result = result + (digit * pow(7, i));
        i = i + 1;
        printf("Enter the number (in base 7): ");
        scanf("%d", &digit);
    }
    return result;
}

// task 3
int getDecimalNumber()
{
    int baseTen;
    printf("Enter the number (in base 10): ");
    scanf("%d", &baseTen);
    return baseTen;
}

int conversionFromBaseTenToNine(int baseTen)
{
    int result = 0, i = 0, remaind = 0;
    while (baseTen != 0)
    {
        remaind = baseTen % 9;
        result = result + remaind * pow(10, i);
        baseTen = baseTen / 9;
        i++;
    }
    return result;
}

// task 4
int getSize()
{
    int a;
    printf("Enter the triangle's pattern size: ");
    scanf("%d", &a);
    while (a <= 1)
    {
        printf("It has to be greater than 1. Enter again: ");
        scanf("%d", &a);
    }
    return a;
}
void diagonalNumberTriangle()
{
    int size = getSize();
    int spaces = -1, count = 1;
    int outerLine = 0;
    // forward pattern
    while (outerLine < size)
    {

        spaces++;
        printf("*");
        for (int i = 0; i <= spaces; i++)
        {
            printf(" ");
        }

        printf("%d\n", count);
        count++;
        outerLine++;
    }
    // backward pattern
    while (outerLine)
    {
        printf("*");
        for (int i = 0; i <= spaces; i++)
        {
            printf(" ");
        }
        printf("%d\n", count);
        count++;
        spaces--;
        outerLine--;
    }
}

// task 5
int numberFromUser()
{
    long long int num1, INT_MAX = 2147483647;
    printf("Welcome\nEnter an integer: ");
    scanf("%lld", &num1);
    while (num1 > INT_MAX || num1 < 0)
    {
        printf("Enter an integer, in range and positive: ");
        scanf("%lld", &num1);
    }
    return abs(num1);
}

void countFrequency(int num1)
{
    for (int number = 0; number < 10; ++number)
    {
        int count = 0;
        int num2 = num1;

        while (num2)
        {
            if (num2 % 10 == number)
            {
                count++;
            }
            num2 /= 10;
        }

        if (count > 0 || (number == 0 && count == 0))
        {
            printf("%d: %d times\n", number, count);
        }
    }
}

void countDigitFrequency()
{
    int userInput;
    do
    {
        countFrequency(numberFromUser());
        printf("Press 1 otherwise 0: ");
        scanf("%d", &userInput);

    } while (userInput == 1);

    printf("Bye Bye!!\n");
}

// task 6
bool isValid(int num, int start, int end)
{
    if (num >= start && num <= end)
    {
        return true;
    }
    return false;
}
int getLength()
{
    int length;
    do
    {
        printf("Enter the length: (5-500): ");
        scanf("%d", &length);
        if (!isValid(length, 5, 500)) // using bool function here
        {
            printf("ERROR! Enter according to the given range.\n");
        }
    } while (!isValid(length, 5, 500));
    return length;
}

int getWidth()
{
    int width;
    do
    {
        printf("Enter the width: (8-200): ");
        scanf("%d", &width);
        if (!isValid(width, 8, 200)) // using bool function here
        {
            printf("ERROR! Enter according to the given range.\n");
        }
    } while (!isValid(width, 8, 200));
    return width;
}

void calculateArea(int length, int width)
{
    int area = length * width;
    displayArea(area);
}

void displayArea(int area)
{
    printf("The area of the rectangle is %d.", area);
}
