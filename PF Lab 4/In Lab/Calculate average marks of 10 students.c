#include <stdio.h>

int main() {
    float marks=0, count=0, average, sum;
    printf("Enter marks of all students one by one.\n");
    while(count<10){
    printf("Enter mark of student no. %.0f: ", count+1);
    scanf("%f", &marks);
    sum+=marks;
    count++;
    }
    average = (sum)/10;
    printf("The average score of the class is %.1f", average);
    return 0;
}
