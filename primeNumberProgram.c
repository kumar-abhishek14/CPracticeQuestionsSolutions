// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    int flag=0;
    printf("Please enter the number to check\n");
    scanf("%d",&num);
    if(num==0 || num==1){
        flag=1;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=1;
        }
    }
    
    if(flag==0){
        
        printf("%d is a prime number",num);
    }
    else 
    {
     printf("%d is not a prime number",num);
    }
    
    
    return 0;
}