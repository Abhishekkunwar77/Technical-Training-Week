#include <stdio.h>  
int lengthofstring(char *str) {  
    char *last=str;
  while (*last != '\0') {  
    last++;  
  }  
  return last-str;  
}  
int main() {  
  char str[] = "sfjjasgdfhulasgefGLU";  
  int len = lengthofstring(str);  
  printf("length of the text is: %d\n", len);  
  return 0;  
}  