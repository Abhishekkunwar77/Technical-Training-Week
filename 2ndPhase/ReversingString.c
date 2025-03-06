#include <stdio.h>
#include <string.h>

int main()
{
    char str[55];
    fgets(str, 55, stdin);

    int i = 0;
    int j = strlen(str) - 1;

    if (j >= 0 && str[j] == '\n')
    {
        str[j] = '\0';
        j--;
    }

    while (i < j)
    {
        char swap = str[i];
        str[i] = str[j];
        str[j] = swap;
        i++;
        j--;
    }

    printf("%s", str);
    return 0;
}