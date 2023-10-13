#include <stdio.h>

int main() {
    float marks, count=0, average, sum;
    printf("Enter marks of all students one by one.\n");
    while(marks != -1){
    printf("Enter mark of student no. %.f: ", count+1);
    scanf("%f", &marks);
    sum+=marks;
    count++;
    }
    average = (sum+1)/10;
    printf("The average of all scores is %.2f\n", average);
    printf("Thanks for pressing -1. The program is closing\n");
    return 0;
}
