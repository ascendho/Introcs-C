#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
    char *endptr;

    // read in the command-line argument
    double c = strtod(argv[1], &endptr);
    double epsilon = 1.0e-15;   // relative error tolerance
    double t = c;               // estimate of the square of root

    // repeatedly apply Newton update step until desired precision is achieved
    while (fabs(t - c / t) > epsilon * t) {
        t = (c / t + t) / 2.0;
    }

    // print out the estimate of the square root of c
    printf("%lf\n", t);

    return 0;
}