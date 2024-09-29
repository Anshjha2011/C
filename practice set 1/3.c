#include<stdio.h>

int main()
{
    int c;
    printf("enter celcius");
    scanf("%d",&c);
    printf("%d celcius in fahrenheit is %f",c,((9.0/5.0)*c)+32);
    return 0;
}