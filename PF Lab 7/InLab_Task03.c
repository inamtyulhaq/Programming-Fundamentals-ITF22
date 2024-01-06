#include <stdio.h>
#include<stdlib.h>

/*declaring all of them here, because it makes
it easier to understand all the functions used in the program.*/

int truncate (float num);
int round (float num);
int ceiling (float num);
int floor (float num);


int main()
{
    float num;
    printf("Enter the Float Number: ");
    scanf("%f", &num);
    int intnum = truncate(num);
    printf("The integer part is %d\n", intnum);
    int roundnum = round(num);
    printf("The round off of this number is %d\n", roundnum);
    int ceilnum = ceiling(num);
    printf("The ceil of this number is %d\n", ceilnum);
    int floornum = floor(num);
    printf("The floor of this number is %d\n", floornum);
}

/*when a function is called, whatever parameters and
other things we have wrote in the function occur. Here
defining all the functions.*/

int truncate(float num)
{
    int num1;
    num1=num/1; //will simply return the integer part..simple
    return num1;
}

int round(float num)
{
    int num1;
    num1=num/1;
    float floatnum= num - num1;
    if (floatnum >=0.5)
    {
        return num1+1;
    }
    else if ( floatnum < 0.5 && floatnum > 0)
    {
        return num1;
    }   
    else if (floatnum < 0 && floatnum > -1) {
        if(floatnum < -0.5){
            return num1+(-1);
        }
        else if(floatnum >= -0.5){
            return num1;
        }
    }
    else {
        return num;
    }
}
int floor(float num)
{
    if (num < 0) {
        int num1;
        num1 = num / 1;
        return num1-1;
    }
    else if (num >= 0 ) {
        return num / 1 ;
    }
}

int ceiling(float num)
{
    if (num < 0)
    {
        return  num / 1;
    }
    else if (num >= 0 )
    {
        int num1;
        num = num / 1;
        return num + 1; 
    }
}