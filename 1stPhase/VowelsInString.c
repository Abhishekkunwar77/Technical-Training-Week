#include <stdio.h>  
#include <string.h>  

int main() {  
    char string[] = "Abhishek";  
    int n = strlen(string);  
    int count = 0;  

    for(int i = 0; i < n; i++) {  
        if(string[i]=='a'||string[i]=='e' || string[i] == 'i'||string[i] == 'o'|| string[i]=='u'||string[i] == 'A' ||   string[i] == 'E' || string[i] == 'I'|| string[i] == 'O' ||   
           string[i] == 'U') {  
            count++;  
        }  
    }  

    printf("Number of vowels: %d\n", count);  
    return 0;  
}

// output: Number of vowels: 3