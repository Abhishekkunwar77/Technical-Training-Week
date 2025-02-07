#include <stdio.h>
#include <string.h>
int main()
{
    char string[] = "ABBBBBBBBBBBBBBBBBA";
    int size = strlen(string);
    int low = 0;
    int high = size - 1;
    int isPalindrome = 0;
    for (int low = 0, high = size - 1; low < high; low++, high--)
    {
        if (string[low] == string[high])
        {
            isPalindrome = 1;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("Palindrome");
    }
    else
    {
        printf(" Not Palindrome");
    }
    return 0;
}

// output: Palindrome