#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 integers: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 2; i++)
    {
        int temp = arr[i];
        int temp2 = arr[4-i];
        arr[i] = temp2;
        arr[4 - i] = temp;
    }

    printf("array after reversing: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}