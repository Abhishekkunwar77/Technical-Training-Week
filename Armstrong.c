#include <stdio.h>
int main()
{
    int n = 153, r, sum = 0, dummy;
    dummy = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (dummy == sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf(" Not Armstrong number");
    }
    return 0;
}