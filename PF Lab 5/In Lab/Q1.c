#include <stdio.h>

int main() {
    int n, i, num, smallest, largest;
    printf("Enter the number of values(n): ");
    scanf("%d", &n);
    if(n>=0){
    printf("Enter %d integers:\n", n);
    scanf("%d", &num);
    smallest = num;
    largest = num;
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }
    printf("The smallest value is: %d.\n", smallest);
    printf("The largest value is: %d.\n", largest);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}

