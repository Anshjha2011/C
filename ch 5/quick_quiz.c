#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    char c;
    do
    {
    printf("Enter the side of square.\n");
    scanf("%d",&a);
    b = po  w(a,2);
    printf("the area of square with side %d is %d\n",a,b);
    printf("do you want to quit this enter y for yes and n for no.\n");
    scanf(" %c",&c);
    
    } while (c!='y');
    
    
    return 0;
}