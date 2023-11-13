//pf lab 5 code
#include <stdio.h>
int main(){
    int multi(int a, int b){
        int c;
        c = a * b;
        return c;
    }
int x,y;
printf("Enter x: ");
scanf("%d", &x);
printf("Enter y: ");
scanf("%d", &y);
int z =  multi(x,y);
printf("The product of x and y is %d", z);
    return 0;
}

