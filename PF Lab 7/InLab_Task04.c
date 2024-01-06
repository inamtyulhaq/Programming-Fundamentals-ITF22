#include<stdio.h>
#include "header.h"

/*("") marks are used to define user-defined preprocessors.*/ 

main(){
    float no;
    //used another variable to clear some confusion.
    printf("Enter the float  number");
    scanf("%f",&no);
    printf("The integer part is %d\n",truncate(no));
    printf("The round off of this number is %d\n",ceil(no));
    printf("The ceil of this number is %d\n",floor(no));
    printf("The floor of this number is %d\n",round(no));
}