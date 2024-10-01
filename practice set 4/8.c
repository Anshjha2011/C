#include <stdio.h>

int main(){
    int i ,f=1;
    printf("enter your no. ");

    scanf("%d",&i);
    for ( i ; i ; i--)
    {
       f *=i;
    }
    printf("%d",f);
    
    return 0;
}