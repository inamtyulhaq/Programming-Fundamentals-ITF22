#include <stdio.h>

int main() {
    int a,b,c,d,product=0;
    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    printf("Enter the second integer (b): ");
    scanf("%d", &b);
    c=a;
    d=b;
    if(a>=0 && b>=0){
        for(int i=0; i<d; i++){
            product=product+c;
        }
    printf("The product of %d and %d is %d.", a,b,product);
    }
    else if(a<=0 && b<=0){
        for(int i=0; i>d; i--){
            product=product-c;
        }
    printf("The product of %d and %d is %d.", a,b,product);
    }
    else if(a>=0 && b<=0){
        for(int i=0; i<c; i++){
            product=product+d;
        }
    printf("The product of %d and %d is %d.", a,b,product);
    }
    else if(a<=0 && b>=0){
        for(int i=0; i<d; i++){
            product=product+c;
        }
    printf("The product of %d and %d is %d.", a,b,product);
    }
    return 0;
}
