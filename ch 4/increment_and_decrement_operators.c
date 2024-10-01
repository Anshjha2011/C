#include <stdio.h>

int main(){
    int i = 5;
    printf("the value of i is %d\n",++i);
    printf("the value of i is %d\n",i++);
    printf("the value of i is %d\n",i);
    i += 2;// same as i = i+2;
    printf("the value of i is %d\n",i);
    return 0;
    // i++ prints i first and then increments i (Post increment Operator)
    // ++i increments i first and then prints i (Post increment Operator)
}