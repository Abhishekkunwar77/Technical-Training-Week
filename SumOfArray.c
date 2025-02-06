// Online C compiler to run C program online
#include <stdio.h>
int main() {

  int resultSum=0;
 int arr[]={1,2,3,4,5,6,7,8,9,10};
  int size=sizeof(arr)/sizeof(arr[0]);
 for(int index=0;index<size;index++){
     resultSum+=arr[index];
 }
 printf("The sum of the array is: %d  ", resultSum);
 return 0;
}

/*
Output:

The sum of the array is: 55

*/