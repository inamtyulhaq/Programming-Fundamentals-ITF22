#include<stdio.h>
int main(){
    int num, revnum=0, remaind,num2,temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp=num;
    while(num!=0){
        remaind = num % 10;
        revnum = revnum * 10 + remaind;
        num = num/10;
    }
    if( temp==revnum){
        printf("It is a palindrome number.");
    }
    else{
        printf("It is not a palindrome number.");
    }
    return 0;
}
