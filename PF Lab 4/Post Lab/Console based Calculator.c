#include <stdio.h>
#include <math.h>

int main()
{
    int operation;
    while(1){
    printf("Select an operation to perform the calculation in C Calculator:\n1. Addition               2. Subtraction\n3. Multiplication         4. Division\n5. Square                 6. Square Root\n7. Exit\n");
    
    printf("Please, make a choice: ");
    scanf("%d", &operation);
        
    switch (operation)
    {
        case 1:
            float num1, num2, add;
            printf("You chose: Addition\n");
            printf("Enter First Number: ");
            scanf("%f", &num1);
            getchar();
            printf("Enter Second Number: ");
            scanf("%f", &num2);
            add=num1+num2;
            printf("Addition of these numbers is: %.2f\n", add);
            break;
        case 2:
            float num3, num4, sub;
            printf("You chose: Subtraction\n");
            printf("Enter First Number: ");
            scanf("%f", &num3);
            printf("Enter Second Number: ");
            scanf("%f", &num4);
            sub=num3-num4;
            printf("Subtraction of these two numbers is: %.2f\n", sub);
            break;
        case 3:
            float num5, num6, multi;
            printf("You chose: Multiplication\n");
            printf("Enter First Number: ");
            scanf("%f", &num5);
            printf("Enter Second Number: ");
            scanf("%f", &num6);
            multi=num5*num6;
            printf("Multiplication of two numbers is: %.2f\n", multi);
            break;
        case 4:
            float num7, num8, div;
            printf("You chose: Division\n");
            printf("Enter First Number: ");
            scanf("%f", &num7);
            printf("Enter Second Number: ");
            scanf("%f", &num8);
            div=num7/num8;
            printf("Division of two numbers is: %.2f\n", div);
            break;
        case 5:
            float num9, square;
            printf("You chose: Square\n");
            printf("Enter a Number: ");
            scanf("%f", &num9);
            square=num9*num9;
            printf("Square of this number is: %.2f\n", square);
            break;
        case 6:
            float num10, sqroot;
            printf("You chose: Sqaure root\n");
            printf("Enter a Number: ");
            scanf("%f", &num10);
            sqroot=sqrt(num10);
            printf("Square root of this number is: %.2f\n", sqroot);
            break;
        case 7:
            printf("You chose: Exit");
            exit(0);
        default:
            printf("Invalid choice.\n");
    }
    }
    return 0;
}
