//  factorialorial using recursion
#include <stdio.h>
int Factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * (Factorial(num - 1));
    }
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The Factorial of %d is %d ", num, Factorial(num));
    return 0;
}

// output : Enter the number : 10
//          The Factorial of 10 is 3628800
