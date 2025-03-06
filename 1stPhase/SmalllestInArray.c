#include <stdio.h>
int findSmallest(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i > size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {21, 99, 100, 101, 102};
    int size = sizeof(arr) / sizeof(arr[0]);
    int Smallest = findSmallest(arr, size);
    printf("The Smallest element in the array is: %d\n", Smallest);
    return 0;
}

/*
Output: The Smallest element in the array is: 21
*/