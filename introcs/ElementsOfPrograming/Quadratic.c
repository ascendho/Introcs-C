#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
    char *endptr;

    double b = strtod(argv[1], &endptr);
    double c = strtod(argv[2], &endptr);

    double discriminant = b * b - 4.0 * c;
    double sqroot = sqrt(discriminant);

    double root1 = (-b + sqroot) / 2.0;
    double root2 = (-b - sqroot) / 2.0;

    printf("%lf\n", root1);
    printf("%lf\n", root2);

    return 0;
}