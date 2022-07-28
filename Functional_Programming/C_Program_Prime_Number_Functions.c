/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

C Program to check if number is prime or not

*******************************************************************************/

#include <stdio.h>
int isPrime(int n){
    int isPrime=0;
    if(n==1 || n== 0){
        isPrime=1;
    }
    
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=1;
            break;
        }
    }
    
    return isPrime;
    
}

int main()
{
    int n;
    printf("Please enter the number\n");
    scanf("%d",&n);
    if(isPrime(n)==0){
        printf("%d is Prime",n);
    }
    else
    {
        printf("%d is not prime",n);
    }
    

    return 0;
}
