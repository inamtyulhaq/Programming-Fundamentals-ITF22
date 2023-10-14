#include <stdio.h>

int main() {
    int num, count=0;
    float average, sum;
    while(count<10){
        printf("Enter number %d: ", count+1);
        scanf("%d", &num);
        sum+=num;
        count++;
    }
    printf("The sum of the 10 numbers entered is %.1f\n", sum);
    average= (sum)/10;
    printf("The average of the 10 numbers entered is %.2f\n", average);
    return 0;
}

