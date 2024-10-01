#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int n;
    srand(time(0));  // Seed the random number generator
    int random_number = rand() % 100;  // Random number between 0 and 99
    
    do
    {
        printf("enter your no. \n");
        scanf("%d",&n);
        if (random_number>n){
        printf("guess higher\n");
    }
    else if (random_number<n)
    {
        printf("guess lower\n");
    }
    else
    {
        printf("you guessed right the no. is %d",random_number);
    }
    } while (n!=random_number);
    
    
    
    
    return 0;
}
