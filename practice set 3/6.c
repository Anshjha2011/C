#include <stdio.h>

int main(){
    int number1,number2,number3,number4;
    printf("enter n.1 : ");
    scanf("%d",&number1);
    printf("enter n.2 : ");
    scanf("%d",&number2);
    printf("enter n.3 : ");
    scanf("%d",&number3);
    printf("enter n.4 : ");
    scanf("%d",&number4);
    if(number1>number2&&number1>number3&&number1>number4){
        printf("%d is greatest",number1);
    }
     else if(number2>number1&&number2>number3&&number2>number4){
        printf("%d is greatest",number2);
    }
     else if(number3>number2&&number3>number1&&number3>number4){
        printf("%d is greatest",number3);
    }
     else if(number4>number2&&number4>number3&&number4>number1){
        printf("%d is greatest",number4);
    }
    return 0;
}