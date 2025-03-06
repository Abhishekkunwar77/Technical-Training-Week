#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = size - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == target)
        {
            printf("Pairs found !");
            return 0;
        }
        else if (arr[low] + arr[high] < target)
        {
            low++;
        }
        else if (arr[low] + arr[high] > target)
        {
            high--;
        }
    }
    printf("pairs not found");
}