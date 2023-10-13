#include <stdio.h>

int main() {
    float marks, count=1, average;
    printf("Enter marks of all students one by one\n");
    while(count<=10){
    printf("Enter mark of student no. %.0f: ", count);
    scanf("%f", &marks);
    count++;
    }
    average = (marks+marks+marks+marks+marks+marks+marks+marks+marks         +marks)/10;
    printf("%.1f", average);
    return 0;
}
