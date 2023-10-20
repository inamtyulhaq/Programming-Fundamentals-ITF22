#include <stdio.h>
#include <math.h>

int main() {
    int num, num1, remaind, result = 0;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    if (num >= 100 && num <= 999) {
        num1 = num;

    while (num1 != 0) {
        remaind = num1 % 10;
        result += (remaind*remaind*remaind);
        num1 /= 10;
    }

        if (result == num)
            printf("%d is an Armstrong number.\n", num);
        else
            printf("%d is not an Armstrong number.\n", num);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}

