#include <stdio.h>
int main() {
    int num, num1=0, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num!=0){
        remainder = num%10;
        num1= num1+remainder;
        num/=10;
    }
    printf("The sum of its digits is %d", num1);
    return 0;
}
