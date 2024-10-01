#include <stdio.h>

int main(){
    int n,i,not_prime=0;
    printf("enter your no.");
    scanf("%d",&n);
    i = n-1;
    do
    {
        if (n%i==0)
       {
        not_prime=1;
       }
       --i;
    } while (i>1);
    if (not_prime)
    {
        printf("it is not prime");
    }
    else
    {
        printf("it is prime");
    }
    
    
    return 0;
}