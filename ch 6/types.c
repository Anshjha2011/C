#include <stdio.h>

int main(){
    char i = 'n';
    char* a = &i;
    printf("%p\n",a);

    printf("%c",*a);
    return 0;
}