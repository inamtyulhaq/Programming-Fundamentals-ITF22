#include <stdio.h>

int main() {
    int sum=0, num;
    for(int num=2;num<=100; num+=2)
    {
        sum+=num;
    }
    printf("The sum of even numbers less than 100 is %d", sum);
    return 0;
}
