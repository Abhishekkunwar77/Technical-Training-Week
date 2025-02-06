#include <stdio.h>
int main()
{
    int n = 9;
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int sum = 0;
    int total = 0;
    // for taking the sum upto last of the array i.e upto 9
    // 1,2,3,4,5,6,7,8,9
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    // for taking the sum of the given array
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    int missingNum = sum - total;
    printf("The missing number in the array is  : %d\n", missingNum);

    return 0;
}

/*
Output:
The missing number in the array is  : 5

*/