// Online C compiler to run C program online
#include <stdio.h>
int main()
{

    char arr[] = {'H', 'E', 'L', 'L', 'O'};
    char str[] = "HELLO";

    int sizeOfstr = sizeof(str) / sizeof(str[0]);
    int sizeOfArr = sizeof(arr) / sizeof(str[0]);

    printf(" The size of the String is %d .\n ", sizeOfstr);
    printf(" The size of the Char is %d .", sizeOfArr);
    return 0;
}