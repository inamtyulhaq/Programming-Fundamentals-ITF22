#include <stdio.h>
int main(){
    //taking float because the temperature is mostly in decimal points
    float fah, cel;
    
    printf("Write your temperature in Fahrenheit: ");
    scanf("%f", &fah);
    
    cel = (fah - 32)/ 1.8;
    /*I checked on google to see whether the conversion result
    is right or not. I realized it's not right. Then I used these
    brackets to correct my result otherwise the BODMAS rule was being
    applied here. I learnt that C programming uses BODMAS rule by default.*/
    
    printf("Your temperature in Celsius would be %f", cel);
    return 0;
}
