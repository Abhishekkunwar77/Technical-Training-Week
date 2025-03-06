#include <stdio.h>  
#include <string.h>  

void search(char* pattern, char* text) {  
    int m = strlen(pattern);  
    int n = strlen(text);  

    for (int i = 0; i <= n - m; i++) {  
        int j;  
        for (j = 0; j < m; j++) {  
            if (text[i + j] != pattern[j]) {  
                break;  
            }  
        }  
        if (j == m) {  
            printf("pattern found at index %d\n", i);  
        }  
    }  
}  

int main() {  
    char text[] = "ABABABBABBABABABBBBBBBBBBBAAAAAABABBA";  
    char pattern[] = "BABB";  
    search(pattern, text);  

    return 0;  
}

// same as naive algorithm
// input : text :ABABABBABBABABABBBBBBBBBBBAAAAAABABBA pattern:BABB
// ouput:pattern found at index 3 pattern found at index 6 pattern found at index 13 pattern found at index 32