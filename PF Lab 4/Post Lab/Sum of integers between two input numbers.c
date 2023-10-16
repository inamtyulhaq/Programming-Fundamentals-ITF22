#include <stdio.h>

int main() {
  int num1, num2,sum = 0,i,j;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
  for (i = num1; i <= num2; i++) {
    if (i % 4 == 0 && i % 16 == 0) {
      sum += i;
      printf("%d+",i);//has a problem
    }
  }
  if(sum==0){
      printf("No such number exists between the two");
  }
  else{
      printf(" = %d", sum);
  }

  return 0;
}
