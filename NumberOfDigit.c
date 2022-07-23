/*
  C program to count number of digits of a number
  Learning Pioneer Notes
*/
#include <stdio.h>
int main(){
  int n;
  printf("Please enter the number\n");
  scanf("%d",&n);
  int count=0;
  while(n!=0){
    count++;
    n=n/10;
  }
  printf("Number of digits in number is %d",count);
  
  return 0;

}
