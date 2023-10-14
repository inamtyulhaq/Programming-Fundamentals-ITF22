#include <stdio.h>

int main() {
    float GPA, GPA1, GPA2;
    int subnum, subnum2, semnum, semnum2, semgpa, semgpa2;
    char yn;
    printf("Hey there! Enter the number of your subjects: ");
    scanf("%d", &subnum);
    subnum2=subnum;
    for(subnum2=1; subnum2<=subnum; subnum2++){
        printf("Enter GPA of subject %d: ", subnum2);
        scanf("%f", &GPA);
        GPA1+=GPA;
    }
    if(GPA>4){
        printf("Looks like, you made some mistake here!");
    }
    else{
        GPA2=(GPA1)/subnum;
        printf("So your semester GPA is %.2f\n", GPA2);
    }
    getchar();
    printf("Wanna find you total CGPA? ");
    scanf("%c", &yn);
    if(yn=='Y' || yn=='y'){
        printf("\nHow many semesters have you completed: \n");
        scanf("%d", &semnum);
        semnum2=semnum;
        for(semnum=0;semnum2<semnum;semnum2++){
            printf("Enter GPA of semester %d: \n", semnum2);
            semgpa+=semnum2;
        }
        semgpa2=(semgpa)/semnum2;
        printf("Your CGPA is %d\n", semgpa2);
    }
    else{
        printf("\nHave a nice day. Thanks for using my program!");
    }
    return 0;
}


