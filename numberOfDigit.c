 //program to find the number of digits
#include<stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
     if(num==0){
         printf("0");
     }else{
         while(num!=0){
             num/=10;
             count++;
         }
     }
      printf("%d",count);
    return 0;
}