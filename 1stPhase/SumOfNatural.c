// sum of natural numbers using recursion
#include <stdio.h>
int Natural(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return Natural(num - 1) + num;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The sum upto %d is %d ", num, Natural(num));
    return 0;
}

// Output: Enter the number:5
//         The sum upto 5 is 15