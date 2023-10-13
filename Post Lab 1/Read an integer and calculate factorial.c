#include<stdio.h>
int main(){
    int i, fact=1, num;
    /*here initialized the value of fact
    because if it's not set to 1 then our
    answer will always come 0, because anything
    multiplied by 0 results in 0*/
    printf("Enter the number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        fact = fact*i;
    }
    printf("The factorial of this num is %d", fact);
    return 0;
}
