#include <stdio.h>

int main()
{
     int p,r,t;
     printf("Enter principle amount : ");
     scanf("%d",&p);
     printf("Enter rate amount : ");
     scanf("%d",&r);
     printf("Enter time in years amount : ");
     scanf("%d",&t);
     printf("the simple interest is %d",(p*r*t)/100);
     return 0;

}