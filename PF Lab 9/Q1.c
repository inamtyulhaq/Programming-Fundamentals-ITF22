#include <stdio.h>
#include <stdbool.h>

bool isUnique(int arr[], int size, int element)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    return count == 1;
}

int main()
{
    int arr[5];
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    bool isUnique1 = false;
    printf("Unique Elements: ");
    for (int i = 0; i < 5; i++)
    {
        if (isUnique(arr, 5, arr[i]))
        {
            printf("%d ", arr[i]);
            isUnique1 = true;
        }
    }
    if (!isUnique1)
    {
        printf("No element is unique");
    }

    return 0;
}
