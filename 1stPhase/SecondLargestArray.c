#include <stdio.h>  
int main() {  
    int arr[] = {21, 99, 100, 101, 102};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int largestNum = arr[0];  
    int secondLargestNum = -1;
    for (int index = 0; index < size; index++) {  
        if (arr[index] > largestNum) {  
            secondLargestNum = largestNum; 
            largestNum = arr[index];
} else if (arr[index] > secondLargestNum && arr[index] != largestNum) {  
            secondLargestNum = arr[index]; 
        }  
    }  
    printf("The largest number is: %d\n", largestNum);  
    printf("The second largest number is: %d\n", secondLargestNum);  
    
    return 0;  
}

/*
Output:
The largest number is : 102
The second largest number is: 101
*/