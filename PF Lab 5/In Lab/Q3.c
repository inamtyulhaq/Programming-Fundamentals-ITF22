#include<stdio.h>
int main(){
    int i, fact=1, num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num>=0){
    for(i=1; i<=num; i++){
        fact = fact*i;
    }
    printf("The factorial of this num is %d.", fact);
    }
    else{
        printf("Input invalid!");
    }
    return 0;
}
