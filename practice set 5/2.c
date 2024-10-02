#include <stdio.h>
float celcius(int);
float celcius(int a){
    return ((9.0*a)/5)+32;
        }
int main(){
    int a;
    char b;
    do
    {
    printf("enter in cecius \n");
    scanf("%d",&a);
    printf("%d in celcius is %.2f\n",a,celcius(a));
    printf("do you want to quit y or n\n");
    scanf(" %c",&b);
    
    } while (b!='y');
    
    
    return 0;
}