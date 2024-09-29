#include <stdio.h>

int main(){
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    if (age>=18){
        switch (age)
        {
        case 18:
            printf("you are 18 exacly and adult ");
            break;
        
        default:
           if (age>18){
            printf("you are %d and adult",age);
           }
            break;
        }
    }
    return 0;
}