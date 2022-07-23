/*
  C Program to print star pattern with space
  *****
   ****
    ***
     **
      *
*/


#include<stdio.h>
int main(){
  int n;
  printf("Please enter the number of lines");
  scanf("%d",&n);
  int i;
  for(int i=0;i<n;i++){
    for(int k=0;k<i;k++){
      printf(" ");
    }
    for(int j=n-i;j>0;j--){
      printf("*");
    }
    printf("\n");
  }
}
