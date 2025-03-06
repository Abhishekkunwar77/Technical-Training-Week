#include <stdio.h>

void printHollowRhombus(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the size of the rhombus: ");
    scanf("%d", &n);

    printHollowRhombus(n);

    return 0;
}

/*

Output:

Enter the size of the rhombus: 5
    *****
   *   *
  *   *
 *   *
*****

*/