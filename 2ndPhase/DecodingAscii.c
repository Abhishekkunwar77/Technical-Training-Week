#include <stdio.h>
#include <string.h>
void CC(char *str, int key, int encode)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (((str[i] - 'a') + (encode ? key : 26 - key)) % 26) + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (((str[i] - 'A') + (encode ? key : 26 - key)) % 26) + 'A';
        }
    }
}
int main()
{
    char message[] = "abc";
    int key = 3;
    printf("Original message: %s\n", message);
    CC(message, key, 1);
    printf("Encoded message: %s\n", message);
    CC(message, key, 0);
    printf("Decoded message: %s\n", message);
    return 0;
}
// output : 
// Original message: abc
// Encoded message : def
// Decoded message : abc
