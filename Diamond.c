#include <stdio.h>
int main()
{
    int row = 5, i, j, k;
    for (i = 1; i <= row; i++)
    {
        for (j = i; j < row; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = row - 1; i >= 1; i--)
    {
        for (j = row; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
Output:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/