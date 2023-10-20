#include <stdio.h>

int main() {
    int a,b,c,d,product=0;
    printf("Enter the first positive integer (a): ");
    scanf("%d", &a);
    printf("Enter the second positive integer (b): ");
    scanf("%d", &b);
    c=a;
    d=b;
    if(a>=0 && b>=0){
        for(int i=1; i<=d; i++){
            product=product+c;
        }
    printf("The product of %d and %d is %d.", a,b,product);
    }
    else{
        printf("\"a\" and \"b\" must be positive.");
    }
    return 0;
}
