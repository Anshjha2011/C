#include <stdio.h>

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for ( int i = 10; i ; i--)
    {
        printf("%d times %d is %d\n",n,i,n*i);
    }
    
    return 0;
}