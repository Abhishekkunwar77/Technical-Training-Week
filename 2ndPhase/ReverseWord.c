#include <stdio.h>
#include <string.h>
void reverse(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char str[55];
    fgets(str, 55, stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    reverse(str, str + len - 1);
    char *wstart = str;
    char *wend = str;
    while (*wend)
    {
        if (*wend == ' ')
        {
            reverse(wstart, wend - 1);
            wstart = wend + 1;
        }
        wend++;
    }
    reverse(wstart, wend - 1);
    printf("%s\n", str);
    return 0;
}