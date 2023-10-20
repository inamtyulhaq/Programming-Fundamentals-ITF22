#include <stdio.h>

int main() {
    int a,b,c,d,addition=0;
    printf("Enter the first positive integer (a): ");
    scanf("%d", &a);
    printf("Enter the second positive integer (b): ");
    scanf("%d", &b);
    c=a;
    d=b;
    if(a>=0 && b>=0){
        for(int i=1; i<=d; i++){
        c+=1;
        }
    addition=c;
    printf("The addition of %d and %d is %d.", a,b,addition);
    }
    else{
        printf("\"a\" and \"b\" must be positive.");
    }
    return 0;
}
