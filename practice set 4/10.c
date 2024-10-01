#include <stdio.h>

int main(){
    int n,i,prime=0;
    printf("enter the number : ");
    scanf("%d",&n);
    
    
    for ( i=n-1 ; i ; i--)
    {
        if(i == 1){
            break;
        }
        if (n%i==0 && n!=2)
        {
           prime = 1;
           break;
        }
        
        
    }
    if (prime)
    {
       printf("it is not prime no.");
    }
    else
    {
        printf("it is a prime no.");
    }
    
    
    
    return 0;
}