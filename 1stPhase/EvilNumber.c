#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }

        n = n / 2;
    }

    if (count % 2 == 0)
    {
        printf("Evil");
    }
    else
    {
        printf("Not Evil");
    }

    return 0;
}