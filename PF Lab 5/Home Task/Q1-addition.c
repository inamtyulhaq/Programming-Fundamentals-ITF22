#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    c=a;
    d=b;
    if(a>=0 && b>=0){
        for(int i=0; i<d; i++){
            c=c+1;
        }
    printf("The addition of %d and %d is %d.", a,b,c);
    }
    else if(a<=0 && b<=0){
        for(int i=0; i>d; i--){
            c=c-1;
        }
    printf("The addition of %d and %d is %d.", a,b,c);
    }
    else if(a>=0 && b<=0){
        for(int i=0; i<c; i++){
            d=d+1;
        }
    printf("The addition of %d and %d is %d.", a,b,d);
    }
    else if(a<=0 && b>=0){
        for(int i=0; i<d; i++){
            c=c+1;
        }
    printf("The addition of %d and %d is %d.", a,b,c);
    }
    return 0;
}
