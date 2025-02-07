#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "banana";
    int freq[26] = {0};
    printf("Output: ");
    for (int i = 0; i < strlen(str); i++)
    {
        if (freq[str[i] - 'a'] == 0)
        {
            printf("%c", str[i]);
            freq[str[i] - 'a'] = 1;
        }
    }
    printf("\n");
    return 0;
}