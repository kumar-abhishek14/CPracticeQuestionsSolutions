// Program to print table of any number
#include <stdio.h>

int main() {
    int num;
    printf("Please enter the number\n");
    scanf("%d",&num);
    printf("Table of %d is \n",num);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }
}