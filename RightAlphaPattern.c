#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < rows - i; k++)
        {
            printf("%c ",65+i);
        }
        printf("\n");
    }
    return 0;
}

/*

Output:
A A A A A
  B B B B
    C C C
      D D
        E


*/