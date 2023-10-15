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
        case 4:
            float num7, num8, div;
            printf("Enter First Number: ");
            scanf("%f", &num7);
            printf("Enter Second Number: ");
            scanf("%f", &num8);
            div=num3/num4;
            printf("Division of two numbers is: %.2f\n", div);
            break;
        case 5:
            float num9, square;
            printf("Enter a Number: ");
            scanf("%f", &num9);
            square=num9*num9;
            printf("Square of the number is: %.2f\n", square);
            break;
        case 7:
            printf("You chose: Exit");
            exit(0);
        default:
            printf("Invalid choice.\n");
    }
    printf("********************************************************\n");
    printf("Select an operation to perform the calculation in C Calculator:\n1. Addition               2. Subtraction\n3. Multiplication         4. Division\n5. Square                 6. Square Root\n7. Exit\n");
    
    printf("Please, make a choice: ");
    scanf("%d", &operation);
    return 0;
}
