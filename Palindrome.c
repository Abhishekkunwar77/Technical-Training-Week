#include <stdio.h>
int main()
{
    int num, originalNum, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    if (rev == originalNum)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }

    return 0;
}
