#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    char *endptr;

    // command-line argument
    int n = strtol(argv[1], &endptr, 10);

    srand((unsigned int) time(NULL));

    // generate and print n numbers between 0 and 1
    for (int i = 0; i < n; i++) {
        printf("%lf\n", (double) rand() / RAND_MAX);
    }

    return 0;
}