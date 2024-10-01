#include <stdio.h>

int main(){
    int i =4,n =1;
    while (i)
    {
        n *=i;
        i--;
    }
    printf("%d",n);
    
    return 0;
}