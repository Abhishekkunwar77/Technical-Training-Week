#include <stdio.h>
int main()
{
    int arr[] = {21, 99, 100, 101, 102};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largestNum = arr[0];
    for (int index = 1; index < size; index++)
    {
        if (arr[index] > largestNum)
        {
            largestNum = arr[index];
        }
    }
    printf("The largest number is: %d\n", largestNum);
    return 0;
}