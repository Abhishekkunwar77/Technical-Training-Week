#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int num;
    printf("Enter a number to find the factorial : ");
    scanf("%d", &num);
    int result = fact(num);
    printf("The factorial of %d is %d: ", num, result);
    return 0;
}