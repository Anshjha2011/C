#include <stdio.h>

int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    printf("%p %d",&a,*&a);
    
    return 0;
}