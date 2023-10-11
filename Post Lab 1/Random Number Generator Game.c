#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int randnum, usernum;
    srand(time(0));
    randnum = rand() % 100 + 1;
    while(1){
    printf("Guess the number(between 0 and 100): ");
    scanf("%d", &usernum);
    if(usernum<=0 || usernum>=100){
        printf("Number is out of range\n");
    }
    else if(usernum<randnum){
        printf("Too Low, try again!\n");
    }
    else if(usernum>randnum){
        printf("Too high, try again\n!");
    }
    else{
        printf("You guessed the correct number");
        break;
    }
    }
    return 0;
}
