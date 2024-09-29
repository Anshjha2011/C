#include <stdio.h>

int main(){
    float income;
    printf("ENTER YOUR INCOME : ");
    scanf("%f",&income);
    if (income>=1000000){
        printf("tax paid by you is : %.2f",(income)*0.3);
    }
    else if (income>=500000){
        printf("tax paid by you is : %.2f",(income)*0.2);
    }
    else if (income>=250000){
        printf("tax paid by you is : %.2f",(income)*0.05);
    }
    else
    {
        printf("you don't pay tax");
    }
    
    return 0;
}