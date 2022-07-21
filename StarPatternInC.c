/* Online C compiler to run C program online

Program to Print below star pattern

* 
* * 
* * * 
* * * * 
* * * * * 


*/
//C Program

#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    printf("* ");
  }
    printf("\n");
}

}
