#include <stdio.h>

int main() {
  int num1, num2, sum = 0;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
  // Find the sum of all numbers which are dividends of 4 and 16, between these two integers
  for (num1; num1<= num2; num1++) {
    if (num1 % 4 == 0 && num1 % 16 == 0) {
      sum += num1;
    }
  }
    printf("The sum of numbers between the given two numbers divisble by 4 and 16 is %d.",sum);
  return 0;
}
