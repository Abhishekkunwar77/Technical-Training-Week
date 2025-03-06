#include <stdio.h>

int main() {
  int n=9;
  for(int i=1;i<=n;i++){
     for(int s=1;s<=i;s++){
          printf(" ");
      }
      for(int j=1;j<=n;j++){
          printf("*");
         
      }
      printf("\n");
  }
    return 0;
}

/*
Output:
 *********
  *********
   *********
    *********
     *********
      *********
       *********
        *********
         *********

*/