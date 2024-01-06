#include <stdio.h>
#include <stdbool.h>

bool isUpper(char ch)
{
    return (ch >= 65 && ch <= 90);
}

bool isLower(char ch)
{
    return (ch >= 97 && ch <= 122);
}

bool isAlpha(char ch)
{
    return (isUpper(ch) || isLower(ch));
}

bool isSpace(char ch)
{
    return (ch == 32 || ch == 9 || ch == 10);
}

bool isDigit(char ch)
{
    return (ch >= 48 && ch <= 57);
}

char toUpper(char ch)
{
    if (isLower(ch))
    {
        return ch - 32;
    }
    return ch;
}

char toLower(char ch)
{
    if (isUpper(ch))
    {
        return ch + 32;
    }
    return ch;
}

int main()
{
    char ch = 'a';
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("isUpper('%c') = %d\n", ch, isUpper(ch));
    printf("isLower('%c') = %d\n", ch, isLower(ch));
    printf("isAlpha('%c') = %d\n", ch, isAlpha(ch));
    printf("isSpace('%c') = %d\n", ch, isSpace(ch));
    printf("isDigit('%c') = %d\n", ch, isDigit(ch));
    printf("toUpper('%c') = %c\n", ch, toUpper(ch));
    printf("toLower('%c') = %c\n", ch, toLower(ch));
    return 0;
}
