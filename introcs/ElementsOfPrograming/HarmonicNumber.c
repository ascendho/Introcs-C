#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *endptr;

    // command-line argument
    int n = strtol(argv[1], &endptr, 10);

    // compute 1/1 + 1/2 + 1/3 + ... + 1/n
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    // print the nth harmonic number
    printf("%.15lf\n", sum);

    return 0;
}