#include <stdio.h>

void removeDuplicates(int arr[], int size)
{
    int aakash[size];
    int aakashCount = 0;
    for (int i = 0; i < size; i++)
    {
        int dupp = 0;

        for (int j = 0; j < aakashCount; j++)
        {
            if (arr[i] == aakash[j])
            {
                dupp = 1;
                break;
            }
        }
        if (!dupp)
        {
            aakash[aakashCount] = arr[i];
            aakashCount++;
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < aakashCount; i++)
    {
        printf("%d ", aakash[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, size);

    return 0;
}