#include <stdio.h>

int main()
{
    int r;
    int h;
    printf("enter thr radius ");
    scanf("%d",&r);
    printf("enter thr height ");
    scanf("%d",&h);

    printf("area of the circle with radius %d is %f",r,r*r*3.14*h);
    return 0;
}