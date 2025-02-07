#include <stdio.h>

int main() {
    char str[] = "i love coding"; 
    int count = 0, i = 0;

    while (str[i] != '\0') {
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ') {
            count++; 
        }
        i++;
    }

    printf(" Total Numbers of Word : %d\n", count);
    return 0;
}