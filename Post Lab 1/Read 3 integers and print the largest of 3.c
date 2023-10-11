#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    printf("Enter third integer: ");
    scanf("%d", &num3);
    if(num1>num2&& num1>num3){
        printf("The largest of the three integers is %d", num1);
    }
    else if(num3>num2&& num3>num1){
        printf("The largest of the three integers is %d", num3);
    }
    else if(num2>num1&& num2>num3){
        printf("The largest of the three integers is %d", num2);
    }
    else if(num1==num2&& num1==num3){
        printf("All three integers are equal", num2);
    }
    else{
        printf("The largest integer is being repeated");
    }
    return 0;
}
