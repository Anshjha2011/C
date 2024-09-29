#include <stdio.h>

int main(){
      int a,b ;
     printf("enter the value of a and b respectively");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("the value of a and b is %d\n",a&&b);
    printf("the value of a and b is %d\n",a||b);
    printf("the value of not(a) is %d\n",!a);
    printf("the value of not(a and b) is %d",!(a&&b));
    return 0;
}