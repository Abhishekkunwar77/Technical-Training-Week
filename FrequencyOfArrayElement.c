// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n = 6;
    int search = 6;
    int count = 0;

    int arr[] = {1, 2, 3, 2, 3, 4, 5, 4, 4, 5, 6, 6, 6, 6, 7, 8, 6, 6, 6, 6, 6, 9, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            count++;
        }
    }
    printf(" the frequency of %d is %d", search, count);
    return 0;
}