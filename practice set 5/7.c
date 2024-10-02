#include <stdio.h>

int main(){
    int j,i,n=3;
    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j <= 2*i+1 ; j++)
        {
           printf("*");
        }
        printf("\n");
    }
    
    return 0;
}