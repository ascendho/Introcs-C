#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *endptr;
    // read in one command-line argument
    int n = strtol(argv[1], &endptr, 10);

    int i = 0;                // count from 0 to N
    int powerOfTwo = 1;       // the ith power of two

    // repeat until i equals n
    while (i <= n) {
        printf("%d %d\n", i, powerOfTwo);
        powerOfTwo = 2 * powerOfTwo;
        i = i + 1;
    }

    return 0;
}