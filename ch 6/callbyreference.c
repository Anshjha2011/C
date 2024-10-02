#include <stdio.h>
int sum(int *,int *);
int sum(int* a, int* b){
    * a = 6;
    return*a+*b;
}
int main(){
      int x = 8,y =9;
      printf("%d\n",sum(&x,&y))     ;   
      printf("%d",x)    ; 
    return 0;
}