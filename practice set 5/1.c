#include <stdio.h>
float avg(int,int,int);
float avg(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main(){
    int a,b,c;
    char d;
    do
    {
        printf("enter first no. \n");
    scanf("%d",&a);
    printf("enter second no.\n ");
    scanf("%d",&b);
    printf("enter third no.\n ");
    scanf("%d",&c);
    printf("%.2f\n",avg(a,b,c));
    printf("do you want to quit y or n\n");
    scanf(" %c",&d);
    } while (d!='y');
    
   
    return 0;
}