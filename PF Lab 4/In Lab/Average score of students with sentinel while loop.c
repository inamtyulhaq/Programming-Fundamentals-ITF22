#include <stdio.h>

int main() {
    float marks, count=1, average, sum;
    printf("Enter marks of all students one by one\n");
    while(marks != -1){
    printf("Enter mark of student no. %.0f: ", count);
    scanf("%f", &marks);
    sum+=marks;
    count++;
    }
    average = (sum)/10;
    printf("The average of all scores is %.2f\n", average);
    printf("Thanks for pressing -1. The program is closing\n");
    return 0;
}
