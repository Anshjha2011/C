#include <stdio.h>
int n(int);
int n(int a){
    if (a==1)
    {
        return 1;
    }
    
    return n(a-1)+a;
}
int main(){
    int a;
    char b;
    do
    {
    printf("enter the no. \n");
    scanf("%d",&a);
    printf(" the sum of first %d natural numbers is %d\n",a,n(a));
    printf("do you want to quit y or n\n");
    scanf(" %c",&b);
    
    } while (b!='y');
    return 0;
}