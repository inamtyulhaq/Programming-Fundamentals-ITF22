#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*Creating the function for random number generation.
Although, it can be done simply, but creating function
makes it easy to be used again and again*/

void randgame(){
    int guess,nofguess=0,num=rand()%100 +1;
    
    /*I chose it at max to be 100, although both
    100 and 1000 were given in the question.*/
    
    printf("Guess My Number Game\n");
    srand(time(0));
    
    /*using do..while here instead of for loop
    because I faced issues with the number of guesses,
    like how to do that. Question looks like of
    sentinal controlled loop, the right guess here is the
    sentinal value here that finally terminates the program
    or function you can say here.*/
    
    do{
        printf("Enter a guess between 1 and 100 : ");
        scanf("%d",&guess);
        nofguess++;
        
        //input validation below
        
        if(guess>=1 && guess<=100){
        if(guess<num)
        {
            printf("Too low!\n");
        }
        else if(guess>num)
        {
            printf("Too high\n");
        }
        }
        else{
            printf("Number out of range!\n");
        }
    }while(guess!=num);
    printf("Correct! you got it in %d guesses!",nofguess);
}

int main (){
    randgame();
}