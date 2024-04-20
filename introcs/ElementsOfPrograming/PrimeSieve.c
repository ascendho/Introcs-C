#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    char *endptr;

    int n = strtol(argv[1], &endptr, 10);

    // initially assue all integers are prime
    bool isPrime[n + 1];
    for (int i = 2; i <= n; i++) {
        isPrime[i] = true;
    }

    // mark non-primes <= n using Sieve of Eratosthenes
    for (int factor = 2; factor * factor <= n; factor++) {

        // if factor is prime, then mark multiples of factor as non-prime
        // suffices to consider multiples factor, factor+1, ..., n/factor
        if (isPrime[factor]) {
            for (int j = factor; factor * j <= n; j++) {
                isPrime[factor * j] = false;
            }
        }
    }

    // count primes
    int primes = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes++;
    }

    printf("The number of primes <= %d is %d\n", n, primes);

    return 0;
}