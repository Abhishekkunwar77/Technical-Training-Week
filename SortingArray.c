// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int arr[]={55,66,44,33,22,7,88,34,56,23};
 int temp;
 int sizeOfArray=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<sizeOfArray-1;i++){
     for(int j=i+1;j<sizeOfArray;j++){
         if(arr[i]>arr[j]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
 }
 for(int i=0;i<sizeOfArray;i++){
     printf("%d ",arr[i]);
 }
  printf("\n");
    return 0;
   
}
/*
Output: 7 22 23 33 34 44 55 56 66 88

*/