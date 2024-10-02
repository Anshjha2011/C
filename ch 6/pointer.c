#include <stdio.h>

int main(){
    int i = 72;
    int* a = &i;
    
    printf("%p\n",&i);
    printf("%p\n",a);
    printf("%d\n ",*a);//pointers also have address
    printf("%p",&a);
    return 0;
}