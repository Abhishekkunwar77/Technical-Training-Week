// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < 1; j++)
        {
            if (i == j || i == n - 1 || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*

Output:

*
* *
*   *
*     *
*       *
*         *
*           *
*             *
* * * * * * * * *

*/