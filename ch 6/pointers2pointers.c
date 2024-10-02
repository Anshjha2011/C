#include <stdio.h>

int main(){
    int i = 90;
    int* j = &i;
    int** k = &j;
    printf("%u\n",i);
    printf("%u\n",j);
    printf("%u",k);
    return 0;
}