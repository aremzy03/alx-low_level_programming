#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    int random_number1 = rand();
    int random_number2 = rand();

    printf("Random Number 1: %d\n", random_number1);
    printf("Random Number 2: %d\n", random_number2);

    return 0;
}