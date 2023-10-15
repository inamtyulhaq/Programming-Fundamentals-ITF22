#include <stdio.h>

int main() {
  int num1, num2,num3, sum = 0;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
  for (num3=num1; num3<num2; num3++) {
    if (num3 % 4 == 0 && num3 % 16 == 0) {
      sum += num3;
    }
  }
  if(sum==0){
      printf("No such number exists between the two");
  }
  else {
      printf("%d is %d",num3,sum);
  }
  /*else {
      printf("The sum of numbers between the given two numbers divisble by 4 and 16 is %d",sum);
  }*/
  return 0;
}
