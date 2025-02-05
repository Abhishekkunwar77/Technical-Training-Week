#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}
/*

Output:

A
B B
C C C
D D D D
E E E E E


*/