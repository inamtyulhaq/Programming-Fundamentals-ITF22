int truncate (float num);
int round (float num);
int ceiling (float num);
int floor (float num);

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