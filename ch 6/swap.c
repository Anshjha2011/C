#include <stdio.h>
void swap(int*,int*);
void swap(int* a,int* b){
    int t;
    t = *a;
    *a = *b;
    *b = t;

}
int main(){
    int x=6, y = 3;
    swap(&x,&y);
    printf("%d %d",x,y);

    return 0;
}