#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *endptr;
    int n = strtol(argv[1], &endptr, 10);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % j == 0 || j % i == 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("%d\n", i);
    }

    return 0;
}