#include <stdio.h>

int main()
{
    int row = 5, i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row - i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
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



*/