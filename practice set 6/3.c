#include <stdio.h>
void times(int*);
void times(int *a){
    *a = *a * 10;
}
int main(){
    int a;
    printf("enter the no.");
    scanf("%d",&a);
    times(&a);
    printf("%d",a);
    return 0;
}