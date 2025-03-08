#include <stdio.h>

int main()
{
    int h1 = 05, m1 = 34, s1 = 60, h2 = 04, m2 = 26, s2 = 00, h, m, s;
    s = s1 + s2;
    m = m1 + m2 + s / 60;
    h = h1 + h2 + m / 60;
    s = s % 60;
    m = m % 60;
    printf("The sum of the two times is: %d hours, %d minutes and %d seconds", h, m, s);
    return 0;
}