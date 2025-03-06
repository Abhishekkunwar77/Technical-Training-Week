// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n=9;
  for(int i=1;i<=n;i++){
      for(int s=1;s<=n-i;s++){
          printf(" ");
      }
      int k=1;
      for(int j=1;j<=i;j++){
          printf("%d ",k);
          k=k*(i-j)/j;
      }
      printf("\n");
  }
    return 0;
}
/*
Output:

        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1
   1 5 10 10 5 1
  1 6 15 20 15 6 1
 1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1
 

*/