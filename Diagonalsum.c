#include <stdio.h>
int main()
{
    int sumOfDiagonal[3][3] = {0};
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int first = 0;
    int second = 0;
    for (int i = 0; i < 3; i++)
    {
        first += a[i][i];
        second += a[i][2 - i];
    }
    printf("Sum of  diagonal: %d\n", first + second);
    return 0;
}
