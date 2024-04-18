#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    char *endptr;

    // a positive integer
    int n = strtol(argv[1], &endptr, 10);

    srand(time(NULL));

    // a pseudo-random integer between 0 and n-1
    int value = rand() % n;

    printf("%d\n", value);

    return 0;
}