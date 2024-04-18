#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    // Math.random() returns a value between 0.0 and 1.0
    // so it is heads or tails 50% of the time
    if (((double) rand() / RAND_MAX) < 0.5)
        printf("Heads\n");
    else
        printf("Tails\n");

    return 0;
}