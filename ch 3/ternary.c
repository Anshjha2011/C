#include <stdio.h>

int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);
    age>=18?printf("you are elder"):printf("you are not an elder");
    return 0;
}