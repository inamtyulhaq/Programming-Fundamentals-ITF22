#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    getchar();
    /*getchar function here reads and consumes the
    newline character. If it's not added here, then when you input
    the value of operation, it gives error.*/
    
    printf("Enter the operation: ");
    scanf("%c", &operation);
    if(operation=='+'){
        result = num1+num2;
        printf("Your answer is %.2f", result);
    }
    else if(operation=='-'){
        result = num1-num2;
        printf("Your answer is %.2f", result);
    }
    else if(operation=='*'){
        result = num1*num2;
        printf("Your answer is %.2f", result);
    }
    else if(operation=='/'){
        result = num1/num2;
        printf("Your answer is %.2f", result);
    }
    else{
        printf("Your operation is invalid!");
    }
    
    
    return 0;
}
