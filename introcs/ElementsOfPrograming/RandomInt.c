#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    char *endptr;

    // a positive integer
    int n = strtol(argv[1], &endptr, 10);

    srand((unsigned int) time(NULL));

    // a pseudo-random real between 0.0 and 1.0
    double r = (double) rand() / RAND_MAX;

    // a pseudo-random integer between 0 and n-1
    int value = (int) (r * n);

    printf("%d\n", value);

    return 0;
}