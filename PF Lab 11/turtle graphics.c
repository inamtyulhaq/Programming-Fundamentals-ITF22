#include <stdio.h>
#include <stdbool.h>

#define SIZE 50

int convertStringToNumber(char str[]);
void printRoom(bool room[SIZE][SIZE]);
int getDisplacement(char command[]);
bool areStringsEqual(const char str1[], const char str2[]);

int main() 
{
    bool room[SIZE][SIZE] = {0};
    char commands[][5] = {"2", "5,12", "3", "5,12", "3", "5,12", "3", "5,12", "1", "6", "9"};

    // State
    bool pen = 0;
    int currentRow = 0;
    int currentColumn = 0;
    int direction = 1;
    int m; // displacement

    // Loop for reading every command
    for (int i = 0; !areStringsEqual(commands[i], "9"); i++) 
    {
        printf("%s\n", commands[i]);

        if (areStringsEqual(commands[i], "1")) 
        {
            printf("Command #%d: In pen up command\n", i);
            pen = 0;
        } 
        else if (areStringsEqual(commands[i], "2")) 
        {
            printf("Command #%d: In pen down command\n", i);
            pen = 1;
        } 
        else if (areStringsEqual(commands[i], "3")) 
        {
            printf("Command #%d: In right command\n", i);
            if (direction == 1) 
            {
                direction = 2;
            } 
            else if (direction == 2) 
            {
                direction = 3;
            } 
            else if (direction == 3) 
            {
                direction = 4;
            } 
            else if (direction == 4) 
            {
                direction = 1;
            }
        } 
        else if (areStringsEqual(commands[i], "4")) 
        {
            printf("Command #%d: In left command\n", i);
            if (direction == 1) 
            {
                direction = 4;
            } 
            else if (direction == 2) 
            {
                direction = 1;
            } 
            else if (direction == 3) 
            {
                direction = 2;
            } 
            else if (direction == 4) 
            {
                direction = 3;
            }
        } 
        else if (areStringsEqual(commands[i], "6")) 
        {
            printf("Command #%d: In print\n", i);
            printRoom(room);
        } 
        else if (areStringsEqual(commands[i], "9")) 
        {
            printf("Command #%d: In sentinel command\n", i);
        } 
        else 
        {
            m = getDisplacement(commands[i]);
            if (direction == 1) 
            {
                printf("In Displacement %d with direction: %d\n", m, direction);
                if (pen) 
                {
                    for (int j = currentColumn; j <= m; j++) 
                    {
                        room[currentRow][j] = 1;
                    }
                }
                currentColumn += m;
            } 
            else if (direction == 2) 
            {
                printf("In Displacement with direction: %d\n", direction);
                if (pen) 
                {
                    for (int i = currentRow; i <= m; i++) 
                    {
                        room[i][currentColumn] = 1;
                    }
                }
                currentRow += m;
            } 
            else if (direction == 3) 
            {
                printf("In Displacement with direction: %d\n", direction);
                if (pen) 
                {
                    for (int j = currentColumn; j >= 0; j--) 
                    {
                        room[currentRow][j] = 1;
                    }
                }
                currentColumn -= m;
            } 
            else if (direction == 4) 
            {
                printf("In Displacement with direction: %d\n", direction);
                if (pen) 
                {
                    for (int i = currentRow; i >= 0; i--) 
                    {
                        room[i][currentColumn] = 1;
                    }
                }
                currentRow -= m;
            }
        }

        printf("Current Row: %d, Current Column: %d\n", currentRow, currentColumn);
    }

    return 0;
}

int convertStringToNumber(char str[]) 
{
    int number = 0;
    int digit;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        number = number * 10;
        digit = str[i] - '0';
        number += digit;
    }
    return number;
}

void printRoom(bool room[SIZE][SIZE]) 
{
    puts("Room:");
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            if (room[i][j] == 0) 
            {
                printf("0");
            } 
            else 
            {
                printf("@");
            }
        }
        puts("");
    }
}

int getDisplacement(char command[]) 
{
    char displacement_str[3];
    bool isCommaFound = false;
    int count = 0;

    for (int i = 0; command[i] != '\0'; i++) 
    {
        if (isCommaFound) 
        {
            displacement_str[count] = command[i];
            count++;
        } 
        else if (command[i] == ',') 
        {
            isCommaFound = true;
        }
    }
    printf("Displacement String Is:%s\n", displacement_str);
    return convertStringToNumber(displacement_str);
}

bool areStringsEqual(const char str1[], const char str2[]) 
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] != str2[i]) 
        {
            return false;
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}
