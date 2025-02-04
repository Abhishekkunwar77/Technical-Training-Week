#include <stdio.h>
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}
int isAdamNumber(int num)
{
    int square = num * num;
    int revNum = reverse(num);
    int squareRev = revNum * revNum;
    return (revers(square) == squareRev);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isAdamNumber(num))
    {
        printf("%d is an Adam Number.\n", num);
    }
    else
    {
        printf("%d is NOT an Adam Number.\n", num);
    }
    return 0;
}
