// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 15;
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            printf("Target found at index: %d\n", mid);
            return 0;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
    }
    printf("Target not found\n");
}