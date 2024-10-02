#include <stdio.h>
float fog(int);
float fog(int m){
    return m*9.8;
}
int main(){
    int a;
    char b;
    do
    {
    printf("enter the mass in kg \n");
    scanf("%d",&a);
    printf("the force of attraction on a body of mass %dkg exerted by earth is %.2fn\n",a,fog(a));
    printf("do you want to quit y or n\n");
    scanf(" %c",&b);
    
    } while (b!='y');
    
    return 0;
}