/*
 C program to take a number a print its reverse.
*/

#include<stdio.h>
int main(){
  int n;
  printf("Please Enter the number\n");
  scanf("%d",&n);
  int rem=0;
  int rev=0;
  while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    num=num/10;
  }
  printf("Reverse of the number is %d\n",rev);
  return 0;
}
