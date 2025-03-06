#include <stdio.h>

int main()
{
    char str1[25], str2[25];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    while (str1[i] != '\0')
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    while (str2[j] != '\0')
    {
        if (str2[j] == '\n')
        {
            str2[j] = '\0';
            break;
        }
        j++;
    }
    j = 0;
    while (str2[j] != '\0' && i < 24)
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';

    printf("\nConcatenated String is %s\n", str1);

    return 0;
}
