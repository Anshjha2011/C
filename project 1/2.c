#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));  // Seed the random number generator
    int random_number = rand() % 100;  // Random number between 0 and 99
    printf("Random number between 0 and 99: %d\n", random_number);
    return 0;
}
