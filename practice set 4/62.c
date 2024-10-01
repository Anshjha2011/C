#include <stdio.h>

int main(){
    int n=0,i=0;
    do
    {
        i++;
        n+=i;
    } while (i<10);
    printf("%d",n);
    return 0;
}