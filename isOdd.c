#include <stdio.h>  
 #include <stdbool.h> 
int main() {  
    int arr[] = {2,4,6,8,10};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    bool isodd = false;  
    for (int i = 0; i < size; i++) {  
        if (arr[i] % 2 != 0) {  
            isodd = true;  
            break;  
        }  } 
    printf("%s", isodd ? "true" : "false");  
    return 0;  
}