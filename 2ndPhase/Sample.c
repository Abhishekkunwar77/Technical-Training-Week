// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    char str[10];
    //   scanf("%[^\n]", str);  // read a single word
    // gets(str) // unsafe reads a line
    //   printf("%s",str);
    fgets(str, 100, stdin);
    printf("%s", str);

    return 0;
}