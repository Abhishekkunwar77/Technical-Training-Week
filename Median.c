#include <stdio.h>

int main()
{
    int n = 6;
    float median;
    int arr[] = {1, 2, 3, 4, 5, 6};

    if (n % 2 != 0)
    {
        median = arr[n / 2];
    }
    else
    {
        median = (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }

    printf("%.2f\n", median);
    return 0;
}