#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *endptr;

    // read in the command-line argument
    int n = strtol(argv[1], &endptr, 10);

    // set power to the largest power of 2 that is <=n
    int power = 1;
    while (power <= n / 2) {
        power *= 2;
    }

    // check for presence of powers of 2 in n, from largest to smallest
    while (power > 0) {

        // power if not present in n
        if (n < power) {
            printf("0");
        }

        // power is present in n, so subtract power from n
        else {
            printf("1");
            n -= power;
        }

        // next smallest power of 2
        power /= 2;
    }

    printf("\n");

    return 0;
}