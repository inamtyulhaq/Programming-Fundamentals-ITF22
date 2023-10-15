#include <stdio.h>
#include <math.h>

int main()
{
    int operation;
    printf("Select an operation to perform the calculation in C Calculator:\n1. Addition               2. Subtraction\n3. Multiplication         4. Division\n5. Square                 6. Square Root\n7. Exit\n");
    
    printf("Please, make a choice: ");
    scanf("%d", &operation);
        
    switch (operation)
    {
        case 1:
            float num1, num2,add;
            printf("Enter First Number: ");
            scanf("%f", &num1);
            getchar();
            printf("Enter Second Number: ");
            scanf("%f", &num2);
            add=num1+num2;
            printf("Addition of two numbers is: %.2f\n", add);
            break;
        case 2:
            float num3, num4, sub;
            printf("Enter First Number: ");
            scanf("%f", &num3);
            printf("Enter Second Number: ");
            scanf("%f", &num4);
            sub=num3-num4;
            printf("Subtraction of two numbers is: %.2f\n", sub);
            break;
        case 3:
            float num5, num6, multi;
            printf("Enter First Number: ");
            scanf("%f", &num5);
            printf("Enter Second Number: ");
            scanf("%f", &num6);
            multi=num3*num4;
            printf("Multiplication of two numbers is: %.2f\n", multi);
            break;
