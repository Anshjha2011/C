#include <stdio.h>
int F(int);
int F(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    
    
    return F(n-1) + F(n-2);

}
int main(){
    int a;
    char b;
    do
    {
    printf("enter the no. \n");
    scanf("%d",&a);
    printf("%dth element of Fibonacci series is %d\n",a,F(a));
    printf("do you want to quit y or n\n");
    scanf(" %c",&b);
    
    } while (b!='y');
    
    
    return 0;
}