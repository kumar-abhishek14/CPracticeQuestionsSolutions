/*
    C program to check if a number is odd or even
    Learning Pioneer Notes
*/

#include<stdio.h>
int main(){
  int n;
  printf("Please enter the number\n");
  scanf("%d",&n);
  if(n%2==0){
    printf("Number is even");
  }
  else{
    printf("Number is odd");
  }
  
  return 0;
}
