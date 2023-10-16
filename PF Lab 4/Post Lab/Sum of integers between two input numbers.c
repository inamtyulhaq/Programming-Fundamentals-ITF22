#include <stdio.h>

int main() {
  int num1, num2,sum = 0,i,j=1;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
  for (i = num1; i <= num2; i++) {
    if (i % 4 == 0 && i % 16 == 0) {
        if(j){
            printf("%d", i);
            j=0;/*so that the else condition then takes place and + is printed*/
        }
        else{
            printf(" + %d",  i);
        }
      sum += i;
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
