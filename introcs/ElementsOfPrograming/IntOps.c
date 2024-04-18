#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *endptr;

    int a = strtol(argv[1], &endptr, 10);
    int b = strtol(argv[2], &endptr, 10);

    int sum = a + b;
    int prod = a * b;
    int quot = a / b;
    int rem = a % b;

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d * %d = %d\n", a, b, prod);
    printf("%d / %d = %d\n", a, b, quot);
    printf("%d %% %d = %d\n", a, b, rem);
    printf("%d = %d * %d + %d\n", a, quot, b, rem);

    return 0;
}