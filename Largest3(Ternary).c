#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the  three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest %d:", largest);
    return 0;
}