#include <stdio.h>

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for ( int i = 1; i < 11; i++)
    {
        printf("%d times %d is %d\n",n,i,n*i);
    }
    
    return 0;
}