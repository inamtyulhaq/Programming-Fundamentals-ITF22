#include <stdio.h>
int main(){
    int date, month, year;
    printf("Write the date: ");
    scanf("%d", &date);
    printf("Write the month: ");
    scanf("%d", &month);
    printf("Write the year: ");
    scanf("%d", &year);
    printf("The date is %d/%d/%d", date, month, year);
    return 0;
}
