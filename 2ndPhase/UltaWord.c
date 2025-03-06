#include <stdio.h>
#include <string.h>
void reverseWords(char *str)
{
    int start = 0;
    int len = strlen(str);
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int k = i - 1;
            for (int j = start; j < k; j++, k--)
            {
                char temp = str[k];
                str[k] = str[j];
                str[j] = temp;
            }
            start = i + 1;
        }
    }
}
int main()
{
    char str[] = "Hello World";
    reverseWords(str);
    printf("%s\n", str);
    return 0;
}

// output
// olleH dlroW