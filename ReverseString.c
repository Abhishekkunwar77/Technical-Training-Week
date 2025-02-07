#include <stdio.h>
#include <string.h>
int main()
{
    char string[] = "Abhishek";
    int n = strlen(string);
    int low = 0;
    int high = n - 1;
    // for (int i = 0; i < n/2 ; i++) {
    //     char temp = string[i];
    //     string[i] = string[n - 1 - i];
    //     string[n - 1 - i] = temp;
    // }
    // printf("  Reversed string: %s\n", string);
    while (low < high)
    {
        char temp = string[low];
        string[low] = string[high];
        string[high] = temp;
        low++;
        high--;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %c", string[i]);
    }
    return 0;
}
/*

Output:  Reversed string: olleh

*/