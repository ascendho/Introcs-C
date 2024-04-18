#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *endptr;

    // command-line argument
    long n = strtol(argv[1], &endptr, 10);

    printf("The prime factorization of %ld is: ", n);

    // for each potential factor
    for (long factor = 2; factor * factor <= n; factor++) {

        // if factor is a factor of n, repeatedly divide it out
        while (n % factor == 0) {
            printf("%ld ", factor);
            n = n / factor;
        }
    }

    // if biggest factor occurs only once, n > 1
    if (n > 1)printf("%ld\n", n);
    else printf("\n");

    return 0;
}