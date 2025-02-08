#include <stdio.h>
#include <string.h>

void removeSpaces(char str[])
{
    int i, j = 0;
    int len = strlen(str);
    char dummy[len];
    for (i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            dummy[j] = str[i];
            j++;
        }
    }
    dummy[j] = '\0';

    for (i = 0; i <= j; i++)
    {
        str[i] = dummy[i];
    }
}
int main()
{
    char str[] = "Hello ! How are you ?.";
    printf("Original string: '%s'\n", str);
    removeSpaces(str);
    printf("String without spaces: '%s'\n", str);
    return 0;
}
