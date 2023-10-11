#include<stdio.h>
int main(){
    int num, revnum, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num!=0){
        remainder = num % 10;
        revnum = revnum * 10+ remainder;
        num = num/10;}
    printf("The reverse of this num is %d", revnum);
    return 0;
}
