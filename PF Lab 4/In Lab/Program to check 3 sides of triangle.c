#include<stdio.h>
int main(){
    float side1, side2, side3;
    printf("Enter length of first side: ");
    scanf("%f", &side1);
    getchar();
    printf("Enter length of second side: ");
    scanf("%f", &side2);
    getchar();
    printf("Enter length of third side: ");
    scanf("%f", &side3);
    getchar();
    if(side1==side2 && side2==side3 && side3==side1){
        printf("This triangle is equilateral");
    }
    else if(side1==side2 || side1==side3 || side2==side1 || 
    side2==side3){
        printf("This triangle is isosceles");
    }
    else if(side1!=side2!=side3){
        printf("This triangle is scalene");
    }
    else{
        printf("Can't say about this one");
    }
    return 0;
}
