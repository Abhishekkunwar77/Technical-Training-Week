#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "listen";
    char str2[] = "silent";
    if (strlen(str1) != strlen(str2))
    {
        printf("Not an Anagram");
        return 0;
    }
    int freq[256] = {0};
    for (int i = 0; i < strlen(str1); i++)
    {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not an Anagram");
            return 0;
        }
    }
    printf("It is an anagram");

    return 0;
}