#include <stdio.h>

int main() {
    int num, num1, revnum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    num1=num;
    for(; num!=0; num=num/10 ){
        remainder = num%10;
        revnum = revnum * 10 + remainder;
    }
    if(num1 == revnum){
        printf("It's a palindrome");
    }
    else{
        printf("It's not a palindrome");
    }
    return 0;
}
