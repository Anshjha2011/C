#include <stdio.h>

int main(){
    int age;
    printf("enter your age");
    scanf ("%d",&age)   ;
    if (age >= 18){
        printf("you are elder");
    }
    else if (age >= 14){
        printf("you are a teenager");
    }
    else{
        printf("you are a kido");
    }
    
    return 0;
}