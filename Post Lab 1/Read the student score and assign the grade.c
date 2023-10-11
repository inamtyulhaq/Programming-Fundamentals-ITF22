#include <stdio.h>
int main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
        if(score>=90 && score<=100){
            printf("Your grade is A");
        }
        else if(score>=80 && score<=89){
            printf("Your grade is B");
        }
        else if(score>=70 && score<=79){
            printf("Your grade is C");
        }
        else if(score>=60 && score<=69){
            printf("Your grade is D");
        }
        /*wrote here ">0" becauseA if I wrote 
        ">=0" and I would have inputted "a" in the score
        then it was giving me "Your grade is F" which was
        wrong. So, I preferred to write this. Although it
        stands false for 0. I couldn't solve it here.*/
        else if(score<=60 && score>0){
        printf("Your grade is F");
        }
        else if(score!=1  || score!=2  || score!=3  || 
        score!=4  || score!=5  || score!=6  || 
        score!=7  || score!= 8 || score!= 9 || 
        score!=0){
            printf("Your score is invalid");
        }
    return 0;
}
