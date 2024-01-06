// Inam Ul Haq
// BITF22M017

#include <stdio.h>
#include <string.h>

//Task 1
#define max_words 5
#define word_length 11

void takeSentence(char sentenc[], int size)
{
    printf("Enter a sentence: ");
    fgets(sentenc, size, stdin);
}

char takeDelimeter()
{
    char delimeter;
    printf("Enter a delimeter: ");
    scanf(" %c", &delimeter);
    return delimeter;
}

void printSentence(char sentence[])
{
    printf("The sentence is: ");
    puts(sentence);
}

void printDelimeter(char delimeter)
{
    printf("The delimeter is: '%c'\n", delimeter);
}

void printTokens(int r, int c, char tokens[][word_length])
{
    printf("The tokens are: \n");
    for (int i = 0; i < r; i++)
    {
        printf("%s at index [%d]\n", tokens[i], i);
    }
}

int tokenizeSentence(char sentence[], char delimiter, int r, char tokens[][word_length])
{
    int i = 0, j = 0;
    while (sentence[i] != '\0')
    {
        if (sentence[i] != delimiter)
        {
            tokens[r][j] = sentence[i];
            j++;
        }
        else
        {
            tokens[r][j] = '\0';
            r++;
            j = 0;
        }
        i++;
    }
    tokens[r][j] = '\0';
    return r + 1;
}

// Task 2

int getNum()
{
    int num;
    printf("Welcome!\n");
    printf("Enter an integer: ");
    while (scanf("%d", &num) != 1 || num <= 0)
    {
        while (getchar() != '\n')
        {
        };
        printf("Invalid input! Please enter a positive integer: ");
    }

    return num;
}

void numFreq()
{
    int choice, rem;

    int num = getNum();
    int count[10] = {0};
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        count[rem] = count[rem] + 1; //++
    }
    for (int i = 0; i <= 9; i++)
    {
        if (count[i] != 0)
        {
            printf("%d: %d times\n", i, count[i]);
        }
    }
}

void numFrequency()
{
    int choice;
    do
    {
        numFreq();
        printf("If you want to continue, press 1. Otherwise, press 0: ");
        scanf("%d", &choice);
        while(choice < 0 || choice >= 2){
            printf("enter again, invalid: ");
            scanf("%d", &choice);
        }
    } while (choice == 1);
}

// Task 3

int getAge()
{
    int age;
    printf("Kindly enter age (in years): ");

    while (age <= 0 || scanf("%d", &age) != 1)
    {

        while (getchar() != '\n')
        {
        };
        printf("Invalid, enter valid age: ");
    }
    return age;
}

void convertAge()
{
    int age = getAge();

    printf("Your age in months, hours, minutes, and years is:\n");
    printf("Months: %d\n", age * 12);
    printf("Hours: %d\n", age * 365 * 24);
    printf("Minutes: %d\n", age * 365 * 24 * 60);
    printf("Seconds: %d\n\n", age * 365 * 24 * 60 * 60);
}

// Task 4

void getTime(int time[2])
{
    int hours, minutes;

    printf("Enter 24-Hour Time (hh:mm): ");

    while (scanf("%d %d", &hours, &minutes) != 2 || hours < 0 || minutes < 0 || hours > 23 || minutes > 59)
    {
        printf("Invalid input. Enter again: ");
        while (getchar() != '\n')
        {
        };
        scanf("%d %d", &hours, &minutes);
    }

    time[0] = hours;
    time[1] = minutes;
}

void timeConverter(int time[2])
{
    // extram

    if (time[0] == 0)
    {
        printf("Converted 12-Hour Time: 12:%02d AM", time[1]);
    }
    else if (time[0] < 12)
    {
        printf("Converted 12-Hour Time: %d:%02d AM", time[0], time[1]);
    }
    else if (time[0] == 12)
    {
        printf("Converted 12-Hour Time: 12:%02d PM", time[1]);
    }
    else
    {
        printf("Converted 12-Hour Time: %d:%02d PM", time[0] - 12, time[1]);
    }
}

int main()
{
    // Task 1
/*
    char sentence[100];
    char delimeter;
    char tokens[max_words][word_length];
    int r = 0;
    takeSentence(sentence, 100);
    delimeter = takeDelimeter();
    printSentence(sentence);
    printDelimeter(delimeter);
    r = tokenizeSentence(sentence, delimeter, r, tokens);
    printTokens(r, word_length, tokens);

    // Task 2

    numFrequency();

    // Task 3

    convertAge();

    // Task 4

    int time[2];

    getTime(time);
    timeConverter(time);*/
    int num = 10;
    int *p = &num;
    int **dp = &p;

    /*printf("Address of num is: %p\n",p);
    printf("Address of p is: %p\n",&p);
    printf("Value is: %d\n",*p);
    printf("Single pointer address is: %p\n",dp);
    printf("Double pointer address is: %p\n",&dp);
    printf("Address of variable num through double pointer: %p\n",*dp);
    printf("Access Value through double pointer: %d\n",**dp);
    printf("Address in p is: %p\n",p);
    printf("After applying plus AM-Operation: %p\n", p);
    printf("After applying minus AM-Operation: %p\n",--p);*/
    char name[]={"Hello am herehow are you are u fine enough."};
    int i=0;
    //fgets(name, 20, stdin);
    
    for(int i=0; name[i] != '.';i++)
    {
        printf("%c",name[i]);
    }

    return 0;
}
