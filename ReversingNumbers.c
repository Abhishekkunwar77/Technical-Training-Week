#include <stdio.h>
int reverseNumber(int num, int res)
{
    if (num == 0)
    {
        return res;
    }
    res = (res * 10) + (num % 10);
    return reverseNumber(num / 10, res);
}
int main()
{
    int number, res = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    res = reverseNumber(number, res);
    printf("Reversed Number: %d\n", res);

    return 0;
}