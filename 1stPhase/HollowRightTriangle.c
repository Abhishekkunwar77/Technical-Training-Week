// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n = 9;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (n == (i + j) - 1 || i == n || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}